// Copyright PopUp


#include "Character/PlayerCharacter.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/CharacterMovementComponent.h"

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
}
