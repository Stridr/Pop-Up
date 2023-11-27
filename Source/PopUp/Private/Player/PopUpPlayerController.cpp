// Copyright PopUp


#include "Player/PopUpPlayerController.h"
#include "EnhancedInputSubsystems.h"
#include "EnhancedInputComponent.h"
#include "Character/PlayerCharacter.h"
#include "GameFramework/Character.h"
#include "Interaction/InteractionInterface.h"

void APopUpPlayerController::BeginPlay()
{
	Super::BeginPlay();

	check(PlayerContext);


	UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<
		UEnhancedInputLocalPlayerSubsystem>(GetLocalPlayer());

	check(Subsystem);

	Subsystem->AddMappingContext(PlayerContext, 0);
}

void APopUpPlayerController::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);

	// TODO: Throttle the trace. It should only be able to happen once per interaction.
	InteractTrace();
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
		InteractAction, ETriggerEvent::Triggered, this, &APopUpPlayerController::Interact);
	// TODO: crate action for this
	// EnhancedInputComponent->BindAction(InteractAction, ETriggerEvent::Triggered, this,
	//                                    &APopUpPlayerController::ToggleMenu);
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

void APopUpPlayerController::Interact(const FInputActionValue& Value)
{
	if (LookAtActor)
	{
		if (IInteractionInterface* Target = Cast<IInteractionInterface>(LookAtActor))
		{
			UE_LOG(LogTemp, Warning, TEXT("Interact: cast successful"));
			Target->InteractWith();
		}
	}
}

void APopUpPlayerController::ToggleMenu()
{
	if (const APlayerCharacter* PlayerCharacter = Cast<APlayerCharacter>(GetPawn()))
	{
		PlayerCharacter->HUD->ToogleMenu();
	}
}

void APopUpPlayerController::DropItem(UItemBase* ItemToDrop, const int32 QuantityToDrop)
{
	if (APlayerCharacter* PlayerCharacter = Cast<APlayerCharacter>(GetPawn()))
	{
		PlayerCharacter->DropItem(ItemToDrop, QuantityToDrop);
	}
}

void APopUpPlayerController::InteractTrace()
{
	FHitResult HitResult;
	FVector Start = PlayerCameraManager->GetCameraLocation();
	FVector ForwardVector = PlayerCameraManager->GetCameraRotation().Vector() * 2000.f;
	FVector End = Start + ForwardVector;
	FCollisionQueryParams TraceParams;

	// TODO: currently the capsule component is set to ignore camera trace
	// this should be fine since the player mesh still blocks it, but it in
	// case this causes issues we might have to set up a custom trace channel
	if (GetWorld()->LineTraceSingleByChannel(
		HitResult, Start, End, ECC_Camera, TraceParams
	))
	{
		DrawDebugLine(GetWorld(), Start, End, FColor::Red, false, 1, 0, 1);
		LookAtActor = HitResult.GetActor();

		if (LookAtActor->GetClass()->ImplementsInterface(UInteractionInterface::StaticClass()))
		{
			if (IInteractionInterface* Target = Cast<IInteractionInterface>(LookAtActor))
			{
				Target->LookAt();
			}
		}
		else
		{
			LookAtActor = nullptr;
		}
	}
}
