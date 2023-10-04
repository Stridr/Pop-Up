// Copyright PopUp


#include "Player/PopUpPlayerController.h"
#include "EnhancedInputSubsystems.h"
#include "EnhancedInputComponent.h"

void APopUpPlayerController::BeginPlay()
{
	Super::BeginPlay();

	check(PlayerContext);

	UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<
		UEnhancedInputLocalPlayerSubsystem>(GetLocalPlayer());

	check(Subsystem);

	Subsystem->AddMappingContext(PlayerContext, 0);

	// bShowMouseCursor = false;
	//
	// FInputModeGameAndUI InputModeData;
	// InputModeData.SetLockMouseToViewportBehavior(EMouseLockMode::LockInFullscreen);
	// InputModeData.SetHideCursorDuringCapture(true);
	// SetInputMode(InputModeData);
}

void APopUpPlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();

	UEnhancedInputComponent* EnhancedInputComponent = CastChecked<UEnhancedInputComponent>(InputComponent);
	EnhancedInputComponent->BindAction(
		MoveAction,
		ETriggerEvent::Triggered,
		this,
		&APopUpPlayerController::Move
	);
	EnhancedInputComponent->BindAction(
		LookAction,
		ETriggerEvent::Triggered,
		this,
		&APopUpPlayerController::Look
	);
}

void APopUpPlayerController::Move(const FInputActionValue& Value)
{
	const FVector2D MoveVector = Value.Get<FVector2D>();
	const FRotator Rotation = GetControlRotation();
	const FRotator YawRotation(0, Rotation.Yaw, 0);

	const FVector ForwardVector = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
	const FVector RightVector = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);

	if (APawn* ControlledPawn = GetPawn())
	{
		ControlledPawn->AddMovementInput(ForwardVector, MoveVector.Y);
		ControlledPawn->AddMovementInput(RightVector, MoveVector.X);
	}
}

void APopUpPlayerController::Look(const FInputActionValue& Value)
{
	const FVector2D LookAxisVector = Value.Get<FVector2D>();
	if (APawn* ControlledPawn = GetPawn())
	{
		ControlledPawn->AddControllerYawInput(LookAxisVector.X);
		ControlledPawn->AddControllerPitchInput(LookAxisVector.Y);
		ControlledPawn->SetActorRotation(GetControlRotation());
	}
}

void APopUpPlayerController::Jump(const FInputActionValue& Value)
{
}

void APopUpPlayerController::Crouch(const FInputActionValue& Value)
{
}
