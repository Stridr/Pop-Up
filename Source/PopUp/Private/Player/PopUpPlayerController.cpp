// Copyright PopUp


#include "Player/PopUpPlayerController.h"
#include "EnhancedInputSubsystems.h"
#include "EnhancedInputComponent.h"
#include "GameFramework/Character.h"
#include "Components/InventoryComponent.h"
#include "Interface/InteractionInterface.h"
#include "Interface/InventoryHUD.h"
#include "World/PickUp.h"


APopUpPlayerController::APopUpPlayerController()
{
	PlayerInventory = CreateDefaultSubobject<UInventoryComponent>(TEXT("PlayerInventory"));
	PlayerInventory->SetSlotsCapacity(20);
	PlayerInventory->SetWeightCapacity(50.f);

	InteractionCheckFrequency = 0.1;
	InteractionCheckDistance = 225.0f;
}

void APopUpPlayerController::BeginPlay()
{
	Super::BeginPlay();

	check(PlayerContext);
	
	HUD=Cast<AInventoryHUD>(GetWorld()->GetFirstPlayerController()->GetHUD());

	UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<
		UEnhancedInputLocalPlayerSubsystem>(GetLocalPlayer());

	check(Subsystem);

	Subsystem->AddMappingContext(PlayerContext, 0);
}

void APopUpPlayerController::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);
	
	if(GetWorld()->TimeSince(InteractionData.LastInteractionCheckTime)>InteractionCheckFrequency)
	{
		PerformInteractionCheck();
	}
}




void APopUpPlayerController::PerformInteractionCheck()
{
	InteractionData.LastInteractionCheckTime = GetWorld()->GetTimeSeconds();
	APawn* const PlayerPawn = GetPawn();
	
	
	FVector TraceStart {PlayerPawn->GetPawnViewLocation()};
	FVector TraceEnd {TraceStart + (PlayerPawn->GetViewRotation().Vector()* InteractionCheckDistance)};

	FCollisionQueryParams QueryParams;
	QueryParams.AddIgnoredActor(this);
	FHitResult TraceHit;

	float LookDirection = FVector::DotProduct(PlayerPawn->GetActorForwardVector(),PlayerPawn->GetViewRotation().Vector());

	if (LookDirection>0)
	{
		
		DrawDebugLine(GetWorld(),TraceStart,TraceEnd,FColor::Red,false,0.1f,0,1.0f);
	
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

void APopUpPlayerController::FoundInteractable(AActor* NewInteractable)
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

void APopUpPlayerController::NoInteractableFound()
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

void APopUpPlayerController::BeginInteract()
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
					&APopUpPlayerController::Interact,
					TargetInteractable->InteractableData.InteractionDuration,
					false);
			}
		}
	}
}

void APopUpPlayerController::EndInteract()
{
	GetWorldTimerManager().ClearTimer(TimerHandle_Interaction);

	if(IsValid(TargetInteractable.GetObject()))
	{
		TargetInteractable->EndInteract();
	}
}

void APopUpPlayerController::Interact()
{
	GetWorldTimerManager().ClearTimer(TimerHandle_Interaction);
	
	if(IsValid(TargetInteractable.GetObject()))
	{
		TargetInteractable->Interact(this);
	}
}


void APopUpPlayerController::UpdateInteractionWidget() const
{
	if(IsValid(TargetInteractable.GetObject()))
	{
		HUD->UpdateInteractionWidget(&TargetInteractable->InteractableData);
	}
}

void APopUpPlayerController::DropItem(UItemBase* ItemToDrop, const int32 QuantityToDrop)
{
	if(PlayerInventory->FindMatchingItem(ItemToDrop))
	{
		FActorSpawnParameters SpawnParams;
		SpawnParams.Owner = this;
		SpawnParams.bNoFail=true;
		SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn; //drop smth and if its inside the wall spawn it somewhere outside the wall
		const APawn* PawnLoc= GetPawn();
		
		const FVector Spawnlocation{GetPawn()->GetActorLocation() + GetPawn()->GetActorForwardVector() * 50.0f};

		const FTransform SpawnTransform(GetPawn()->GetActorRotation(),Spawnlocation);

		const int32 RemovedQuantity = PlayerInventory->RemoveAmountOfItem(ItemToDrop,QuantityToDrop);

		APickUp* PickUp = GetWorld()->SpawnActor<APickUp>(APickUp::StaticClass(),SpawnTransform,SpawnParams);

		PickUp->InitializeDrop(ItemToDrop,RemovedQuantity);
	}
	else
	{
		UE_LOG(LogTemp,Warning,TEXT("Item To Drop Was somehow NULL!"));
	}
}


void APopUpPlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();

	UEnhancedInputComponent* EnhancedInputComponent = CastChecked<UEnhancedInputComponent>(InputComponent);
	EnhancedInputComponent->BindAction(
		MoveAction, ETriggerEvent::Triggered, this, &APopUpPlayerController::Move);
	EnhancedInputComponent->BindAction(
		LookAction, ETriggerEvent::Triggered, this, &APopUpPlayerController::Look);
	EnhancedInputComponent->BindAction(
		JumpAction, ETriggerEvent::Triggered, this, &APopUpPlayerController::Jump);
	EnhancedInputComponent->BindAction(
		JumpAction, ETriggerEvent::Completed, this, &APopUpPlayerController::StopJumping);
	EnhancedInputComponent->BindAction(
		CrouchAction, ETriggerEvent::Completed, this, &APopUpPlayerController::Crouch);
	EnhancedInputComponent->BindAction(
	InteractAction, ETriggerEvent::Completed, this, &APopUpPlayerController::Interact);
	EnhancedInputComponent->BindAction(
	InventoryAction, ETriggerEvent::Completed, this, &APopUpPlayerController::ToogleMenu);
	
}

void APopUpPlayerController::Move(const FInputActionValue& Value)
{
	const FVector2D MoveVector = Value.Get<FVector2D>();
	const FRotator Rotation = GetControlRotation();
	const FRotator YawRotation(0, Rotation.Yaw, 0);

	const FVector ForwardVector = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
	const FVector RightVector = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);

	if (APawn* ControlledPawn = GetPawn<APawn>())
	{
		ControlledPawn->AddMovementInput(ForwardVector, MoveVector.Y);
		ControlledPawn->AddMovementInput(RightVector, MoveVector.X);
	}
}

void APopUpPlayerController::Look(const FInputActionValue& Value)
{
	const FVector2D LookAxisVector = Value.Get<FVector2D>();
	if (APawn* ControlledPawn = GetPawn<APawn>())
	{
		if (LookAxisVector.X > 0.3)
		{
			IsTurningLeft = false;
			IsTurningRight = true;
		}
		else if (LookAxisVector.X < -0.3)
		{
			IsTurningLeft = true;
			IsTurningRight = false;
		}
		else
		{
			IsTurningLeft = false;
			IsTurningRight = false;
		}

		ControlledPawn->AddControllerYawInput(LookAxisVector.X);
		ControlledPawn->AddControllerPitchInput(LookAxisVector.Y);
		ControlledPawn->SetActorRotation(GetControlRotation());
	}
}

void APopUpPlayerController::Jump(const FInputActionValue& Value)
{
	if (ACharacter* ControlledCharacter = GetPawn<ACharacter>())
	{
		if (ControlledCharacter->bIsCrouched)
		{
			ControlledCharacter->UnCrouch();
		}

		ControlledCharacter->Jump();
	}
}

void APopUpPlayerController::StopJumping(const FInputActionValue& Value)
{
	if (ACharacter* ControlledCharacter = GetPawn<ACharacter>())
	{
		ControlledCharacter->StopJumping();
	}
}

void APopUpPlayerController::Crouch(const FInputActionValue& Value)
{
	if (auto* ControlledCharacter = GetPawn<ACharacter>())
	{
		if (ControlledCharacter->bIsCrouched)
		{
			ControlledCharacter->UnCrouch();
		}
		else
		{
			ControlledCharacter->Crouch();
		}
		UE_LOG(LogTemp, Warning, TEXT("bIsCrouched: %d"), ControlledCharacter->bIsCrouched);
	}
}

void APopUpPlayerController::ToogleMenu(const FInputActionValue& Value)
{
		HUD->ToogleMenu();
}

/*
void APopUpPlayerController::Interact(const FInputActionValue& Value)
{
	UE_LOG(LogTemp, Warning, TEXT("Interact"));
}
*/
