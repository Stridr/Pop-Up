// Copyright PopUp


#include "Character/PlayerCharacter.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "World/PickUp.h"
#include "DrawDebugHelpers.h"
#include "EnhancedInputComponent.h"

APlayerCharacter::APlayerCharacter()
{
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;

	GetCharacterMovement()->GetNavAgentPropertiesRef().bCanCrouch = true;
	// TODO: if crouching is enabled the character capsule height has to be decreased
	// TODO: check behaviour of crouching<=>jumping transition withing a few ticks
	
	GetCharacterMovement()->bOrientRotationToMovement = true;
	// bOrientRotationToMovement is needed to enable true first person perspective
	// in order to disable the character rotating to the forward vector and messing
	// with the animations we need to set the rotation rate to zero
	GetCharacterMovement()->RotationRate = FRotator::ZeroRotator;

	PlayerCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	PlayerCamera->SetupAttachment(GetMesh(), TEXT("head"));
	PlayerCamera->bAutoActivate = true;
	PlayerCamera->bUsePawnControlRotation = true;
	
	PlayerInventory=CreateDefaultSubobject<UInventoryComponent>(TEXT("PlayerInventory"));
	PlayerInventory->SetSlotsCapacity(20);
	PlayerInventory->SetWeightCapacity(50.0f);
	InteractionCheckFrequency = 0.1;
	InteractionCheckDistance = 225.0f;
	BaseEyeHeight = 74.0f;
}

void APlayerCharacter::BeginPlay()
{
	Super::BeginPlay();
	HUD=Cast<AInventoryHUD>(GetWorld()->GetFirstPlayerController()->GetHUD());
}

void APlayerCharacter::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);

	if(GetWorld()->TimeSince(InteractionData.LastInteractionCheckTime)>InteractionCheckFrequency)
	{
		PerformInteractionCheck();
	}
}

void APlayerCharacter::PerformInteractionCheck()
{
	InteractionData.LastInteractionCheckTime = GetWorld()->GetTimeSeconds();

	
	FVector TraceStart {GetPawnViewLocation()};
	FVector TraceEnd {TraceStart + (GetViewRotation().Vector()* InteractionCheckDistance)};

	FCollisionQueryParams QueryParams;
	QueryParams.AddIgnoredActor(this);
	FHitResult TraceHit;

	float LookDirection = FVector::DotProduct(GetActorForwardVector(),GetViewRotation().Vector());

	if (LookDirection>0)
	{
		
		//DrawDebugLine(GetWorld(),TraceStart,TraceEnd,FColor::Red,false,0.1f,0,1.0f);
	
		if(GetWorld()->LineTraceSingleByChannel(TraceHit,TraceStart,TraceEnd,ECC_Visibility,QueryParams))
		{
			if(TraceHit.GetActor()->GetClass()->ImplementsInterface(UInteractionInterface::StaticClass()))
			{
				if(TraceHit.GetActor() != InteractionData.CurrentInteractable)
				{
					FoundInteractable(TraceHit.GetActor());
					return;
				}
				if(TraceHit.GetActor() == InteractionData.CurrentInteractable)
				{
					return;
				}
			}
		}
		NoInteractableFound();
	}
}

void APlayerCharacter::FoundInteractable(AActor* NewInteractable)
{
	if(IsInteracting())
	{
		EndInteract();
	}
	if(InteractionData.CurrentInteractable)
	{
		TargetInteractable = InteractionData.CurrentInteractable;
		TargetInteractable->EndFocus();
	}
	InteractionData.CurrentInteractable = NewInteractable;
	TargetInteractable = NewInteractable;

	HUD->UpdateInteractionWidget(&TargetInteractable->InteractableData);

	TargetInteractable->BeginFocus();
}

void APlayerCharacter::NoInteractableFound()
{
	if(IsInteracting())
	{
		GetWorldTimerManager().ClearTimer(TimerHandle_Interaction);
	}
	if(InteractionData.CurrentInteractable)
	{
		if(IsValid(TargetInteractable.GetObject()))
		{
			TargetInteractable->EndFocus();	
		}
		HUD->HideInteractionWidget();

		InteractionData.CurrentInteractable =nullptr;
		TargetInteractable = nullptr;
	}
}

void APlayerCharacter::BeginInteract()
{
	//Verify that nothing has changed with the interactable state since the beginning of the interaction
	PerformInteractionCheck();

	if(InteractionData.CurrentInteractable)
	{
		if(IsValid(TargetInteractable.GetObject()))
		{
			TargetInteractable->BeginInteract();

			if(FMath::IsNearlyZero(TargetInteractable->InteractableData.InteractionDuration,0.1f))
			{
				Interact();
				
			}
			else
			{
				GetWorldTimerManager().SetTimer(TimerHandle_Interaction,
					this,
					&APlayerCharacter::Interact,
					TargetInteractable->InteractableData.InteractionDuration,
					false);
			}
		}
	}
}

void APlayerCharacter::EndInteract()
{
	GetWorldTimerManager().ClearTimer(TimerHandle_Interaction);

	if(IsValid(TargetInteractable.GetObject()))
	{
		TargetInteractable->EndInteract();
	}
}

void APlayerCharacter::Interact()
{
	GetWorldTimerManager().ClearTimer(TimerHandle_Interaction);
	
	if(IsValid(TargetInteractable.GetObject()))
	{
		TargetInteractable->Interact(this);
	}
}

void APlayerCharacter::ToogleMenu()
{
	HUD->ToogleMenu();
}



void APlayerCharacter::UpdateInteractionWidget() const
{
	if(IsValid(TargetInteractable.GetObject()))
	{
		HUD->UpdateInteractionWidget(&TargetInteractable->InteractableData);
	}
}

void APlayerCharacter::DropItem(UItemBase* ItemToDrop, const int32 QuantityToDrop)
{
	if(PlayerInventory->FindMatchingItem(ItemToDrop))
	{
		FActorSpawnParameters SpawnParams;
		SpawnParams.Owner = this;
		SpawnParams.bNoFail=true;
		SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn; //drop smth and if its inside the wall spawn it somewhere outside the wall

		const FVector SpawnLocation{GetActorLocation() + GetActorForwardVector()* 50.0f};

		const FTransform SpawnTransform(GetActorRotation(),SpawnLocation);

		const int32 RemovedQuantity = PlayerInventory->RemoveAmountOfItem(ItemToDrop,QuantityToDrop);

		APickUp* PickUp = GetWorld()->SpawnActor<APickUp>(APickUp::StaticClass(),SpawnTransform,SpawnParams);

		PickUp->InitializeDrop(ItemToDrop,RemovedQuantity);
	}
	else
	{
		UE_LOG(LogTemp,Warning,TEXT("Item To Drop Was somehow NULL!"));
	}
}


void APlayerCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
 {
 	// Set up action bindings
 	if (UEnhancedInputComponent* EnhancedInputComponent = Cast<UEnhancedInputComponent>(PlayerInputComponent)) {
 		

 		PlayerInputComponent->BindAction("Interact",IE_Pressed,this, &APlayerCharacter::BeginInteract);
 		
 		PlayerInputComponent->BindAction("Interact",IE_Released,this, &APlayerCharacter::EndInteract);

 		PlayerInputComponent->BindAction("ToogleMenu",IE_Pressed,this, &APlayerCharacter::ToogleMenu);
 		
 		
 	}
 	else
 	{
 		UE_LOG(LogTemp, Error, TEXT("'%s' Failed to find an Enhanced Input component! This template is built to use the Enhanced Input system. If you intend to use the legacy system, then you will need to update this C++ file."), *GetNameSafe(this));
 	}
 }
