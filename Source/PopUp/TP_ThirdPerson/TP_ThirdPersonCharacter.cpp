//
// //game
// #include "TP_ThirdPersonCharacter.h"
// #include "Engine/LocalPlayer.h"
// #include "Components/InventoryComponent.h"
//
//
//
//
// //Engine
// #include "GameFramework/CharacterMovementComponent.h"
// #include "GameFramework/SpringArmComponent.h"
// #include "GameFramework/Controller.h"
// #include "EnhancedInputComponent.h"
// #include "EnhancedInputSubsystems.h"
// #include "InputActionValue.h"
// #include "Components/CapsuleComponent.h"
// #include "Camera/CameraComponent.h"
// #include "DrawDebugHelpers.h"
// #include "World/PickUp.h"
//
//
// DEFINE_LOG_CATEGORY(LogTemplateCharacter);
//
// //////////////////////////////////////////////////////////////////////////
// // ATP_ThirdPersonCharacter
//
// ATP_ThirdPersonCharacter::ATP_ThirdPersonCharacter()
// {
// 	// Set size for collision capsule
// 	GetCapsuleComponent()->InitCapsuleSize(42.f, 96.0f);
// 		
// 	// Don't rotate when the controller rotates. Let that just affect the camera.
// 	bUseControllerRotationPitch = false;
// 	bUseControllerRotationYaw = false;
// 	bUseControllerRotationRoll = false;
//
// 	// Configure character movement
// 	GetCharacterMovement()->bOrientRotationToMovement = true; // Character moves in the direction of input...	
// 	GetCharacterMovement()->RotationRate = FRotator(0.0f, 500.0f, 0.0f); // ...at this rotation rate
//
// 	// Note: For faster iteration times these variables, and many more, can be tweaked in the Character Blueprint
// 	// instead of recompiling to adjust them
// 	GetCharacterMovement()->JumpZVelocity = 700.f;
// 	GetCharacterMovement()->AirControl = 0.35f;
// 	GetCharacterMovement()->MaxWalkSpeed = 500.f;
// 	GetCharacterMovement()->MinAnalogWalkSpeed = 20.f;
// 	GetCharacterMovement()->BrakingDecelerationWalking = 2000.f;
// 	GetCharacterMovement()->BrakingDecelerationFalling = 1500.0f;
//
// 	// Create a camera boom (pulls in towards the player if there is a collision)
// 	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
// 	CameraBoom->SetupAttachment(RootComponent);
// 	CameraBoom->TargetArmLength = 400.0f; // The camera follows at this distance behind the character	
// 	CameraBoom->bUsePawnControlRotation = true; // Rotate the arm based on the controller
//
// 	// Create a follow camera
// 	FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
// 	FollowCamera->SetupAttachment(CameraBoom, USpringArmComponent::SocketName); // Attach the camera to the end of the boom and let the boom adjust to match the controller orientation
// 	FollowCamera->bUsePawnControlRotation = false; // Camera does not rotate relative to arm
//
// 	PlayerInventory=CreateDefaultSubobject<UInventoryComponent>(TEXT("PlayerInventory"));
// 	PlayerInventory->SetSlotsCapacity(20);
// 	PlayerInventory->SetWeightCapacity(50.0f);
// 	InteractionCheckFrequency = 0.1;
// 	InteractionCheckDistance = 225.0f;
//
// 	BaseEyeHeight = 74.0f;
// }
//
// void ATP_ThirdPersonCharacter::BeginPlay()
// {
// 	// Call the base class  
// 	Super::BeginPlay();
//
// 	HUD=Cast<AInventoryHUD>(GetWorld()->GetFirstPlayerController()->GetHUD());
//
// 	//Add Input Mapping Context
// 	if (APlayerController* PlayerController = Cast<APlayerController>(Controller))
// 	{
// 		if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PlayerController->GetLocalPlayer()))
// 		{
// 			Subsystem->AddMappingContext(DefaultMappingContext, 0);
// 		}
// 	}
// }
//
// void ATP_ThirdPersonCharacter::Tick(float DeltaSeconds)
// {
// 	Super::Tick(DeltaSeconds);
//
// 	if(GetWorld()->TimeSince(InteractionData.LastInteractionCheckTime)>InteractionCheckFrequency)
// 	{
// 		PerformInteractionCheck();
// 	}
// 	
// }
//
//
// void ATP_ThirdPersonCharacter::  PerformInteractionCheck()
// {
// 	InteractionData.LastInteractionCheckTime = GetWorld()->GetTimeSeconds();
//
// 	FVector TraceStart{GetPawnViewLocation()};
// 	FVector TraceEnd{TraceStart +(GetViewRotation().Vector() * InteractionCheckDistance)};
//
// 	FCollisionQueryParams QueryParams;
// 	QueryParams.AddIgnoredActor(this);
// 	FHitResult TraceHit;
//
// 	float LookDirection = FVector::DotProduct(GetActorForwardVector(),GetViewRotation().Vector());
//
// 	if (LookDirection>0)
// 	{
// 		
// 		//DrawDebugLine(GetWorld(),TraceStart,TraceEnd,FColor::Red,false,1.0f,0,1.0f);
// 	
// 		if(GetWorld()->LineTraceSingleByChannel(TraceHit,TraceStart,TraceEnd,ECC_Visibility,QueryParams))
// 		{
// 			if(TraceHit.GetActor()->GetClass()->ImplementsInterface(UInteractionInterface::StaticClass()))
// 			{
// 				if(TraceHit.GetActor() != InteractionData.CurrentInteractable)
// 				{
// 					FoundInteractable(TraceHit.GetActor());
// 					return;
// 				}
// 				if(TraceHit.GetActor() == InteractionData.CurrentInteractable)
// 				{
// 					return;
// 				}
// 			}
// 		}
// 		NoInteractableFound();
// 	}
// }
//
// void ATP_ThirdPersonCharacter::FoundInteractable(AActor* NewInteractable)
// {
// 	if(IsInteracting())
// 	{
// 		EndInteract();
// 	}
// 	if(InteractionData.CurrentInteractable)
// 	{
// 		TargetInteractable = InteractionData.CurrentInteractable;
// 		TargetInteractable->EndFocus();
// 	}
// 	InteractionData.CurrentInteractable = NewInteractable;
// 	TargetInteractable = NewInteractable;
//
// 	HUD->UpdateInteractionWidget(&TargetInteractable->InteractableData);
//
// 	TargetInteractable->BeginFocus();
// }
//
// void ATP_ThirdPersonCharacter::NoInteractableFound()
// {
// 	if(IsInteracting())
// 	{
// 		GetWorldTimerManager().ClearTimer(TimerHandle_Interaction);
// 	}
// 	if(InteractionData.CurrentInteractable)
// 	{
// 		if(IsValid(TargetInteractable.GetObject()))
// 		{
// 			TargetInteractable->EndFocus();	
// 		}
// 		HUD->HideInteractionWidget();
//
// 		InteractionData.CurrentInteractable =nullptr;
// 		TargetInteractable = nullptr;
// 	}
// }
//
// void ATP_ThirdPersonCharacter::BeginInteract()
// {
// 	//Verify that nothing has changed with the interactable state since the beginning of the interaction
// 	PerformInteractionCheck();
//
// 	if(InteractionData.CurrentInteractable)
// 	{
// 		if(IsValid(TargetInteractable.GetObject()))
// 		{
// 			TargetInteractable->BeginInteract();
//
// 			if(FMath::IsNearlyZero(TargetInteractable->InteractableData.InteractionDuration,0.1f))
// 			{
// 				Interact();
// 				
// 			}
// 			else
// 			{
// 				GetWorldTimerManager().SetTimer(TimerHandle_Interaction,
// 					this,
// 					&ATP_ThirdPersonCharacter::Interact,
// 					TargetInteractable->InteractableData.InteractionDuration,
// 					false);
// 			}
// 		}
// 	}
// }
//
// void ATP_ThirdPersonCharacter::EndInteract()
// {
// 	GetWorldTimerManager().ClearTimer(TimerHandle_Interaction);
//
// 	if(IsValid(TargetInteractable.GetObject()))
// 	{
// 		TargetInteractable->EndInteract();
// 	}
// 	
// }
//
// void ATP_ThirdPersonCharacter::Interact()
// {
// 	GetWorldTimerManager().ClearTimer(TimerHandle_Interaction);
// 	
// 	if(IsValid(TargetInteractable.GetObject()))
// 	{
// 		TargetInteractable->Interact(this);
// 	}
// 	
// }
//
// void ATP_ThirdPersonCharacter::ToogleMenu()
// {
// 	HUD->ToogleMenu();
// }
// void ATP_ThirdPersonCharacter::DropItem(UItemBase* ItemToDrop, const int32 QuantityToDrop)
// {
// 	if(PlayerInventory->FindMatchingItem(ItemToDrop))
// 	{
// 		FActorSpawnParameters SpawnParams;
// 		SpawnParams.Owner = this;
// 		SpawnParams.bNoFail=true;
// 		SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn; //drop smth and if its inside the wall spawn it somewhere outside the wall
//
// 		const FVector SpawnLocation{GetActorLocation() + GetActorForwardVector()* 50.0f};
//
// 		const FTransform SpawnTransform(GetActorRotation(),SpawnLocation);
//
// 		const int32 RemovedQuantity = PlayerInventory->RemoveAmountOfItem(ItemToDrop,QuantityToDrop);
//
// 		APickUp* PickUp = GetWorld()->SpawnActor<APickUp>(APickUp::StaticClass(),SpawnTransform,SpawnParams);
//
// 		PickUp->InitializeDrop(ItemToDrop,RemovedQuantity);
// 	}
// 	else
// 	{
// 		UE_LOG(LogTemp,Warning,TEXT("Item To Drop Was somehow NULL!"));
// 	}
// }
//
// void ATP_ThirdPersonCharacter::UpdateInteractionWidget() const
// {
// 	if(IsValid(TargetInteractable.GetObject()))
// 	{
// 		HUD->UpdateInteractionWidget(&TargetInteractable->InteractableData);
// 	}
// }
//
//
// //////////////////////////////////////////////////////////////////////////
// // Input
// void ATP_ThirdPersonCharacter::Move(const FInputActionValue& Value)
// {
// 	// input is a Vector2D
// 	FVector2D MovementVector = Value.Get<FVector2D>();
//
// 	if (Controller != nullptr)
// 	{
// 		// find out which way is forward
// 		const FRotator Rotation = Controller->GetControlRotation();
// 		const FRotator YawRotation(0, Rotation.Yaw, 0);
//
// 		// get forward vector
// 		const FVector ForwardDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
// 	
// 		// get right vector 
// 		const FVector RightDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);
//
// 		// add movement 
// 		AddMovementInput(ForwardDirection, MovementVector.Y);
// 		AddMovementInput(RightDirection, MovementVector.X);
// 	}
// }
//
// void ATP_ThirdPersonCharacter::Look(const FInputActionValue& Value)
// {
// 	// input is a Vector2D
// 	FVector2D LookAxisVector = Value.Get<FVector2D>();
//
// 	if (Controller != nullptr)
// 	{
// 		// add yaw and pitch input to controller
// 		AddControllerYawInput(LookAxisVector.X);
// 		AddControllerPitchInput(LookAxisVector.Y);
// 	}
// }
//
// void ATP_ThirdPersonCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
// {
// 	// Set up action bindings
// 	if (UEnhancedInputComponent* EnhancedInputComponent = Cast<UEnhancedInputComponent>(PlayerInputComponent)) {
// 		
// 		// Jumping
// 		EnhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Started, this, &ACharacter::Jump);
// 		EnhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Completed, this, &ACharacter::StopJumping);
//
// 		PlayerInputComponent->BindAction("Interact",IE_Pressed,this, &ATP_ThirdPersonCharacter::BeginInteract);
// 		
// 		PlayerInputComponent->BindAction("Interact",IE_Released,this, &ATP_ThirdPersonCharacter::EndInteract);
//
// 		PlayerInputComponent->BindAction("ToogleMenu",IE_Pressed,this, &ATP_ThirdPersonCharacter::ToogleMenu);
// 		
// 		// Moving
// 		EnhancedInputComponent->BindAction(MoveAction, ETriggerEvent::Triggered, this, &ATP_ThirdPersonCharacter::Move);
//
// 		// Looking
// 		EnhancedInputComponent->BindAction(LookAction, ETriggerEvent::Triggered, this, &ATP_ThirdPersonCharacter::Look);
// 	}
// 	else
// 	{
// 		UE_LOG(LogTemplateCharacter, Error, TEXT("'%s' Failed to find an Enhanced Input component! This template is built to use the Enhanced Input system. If you intend to use the legacy system, then you will need to update this C++ file."), *GetNameSafe(this));
// 	}
// }