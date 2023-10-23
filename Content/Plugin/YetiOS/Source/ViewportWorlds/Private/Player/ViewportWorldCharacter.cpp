// Copyright 2023 - YetiTech Studios, Pvt Ltd. All Rights Reserved.

#include "Player/ViewportWorldCharacter.h"

AViewportWorldCharacter::AViewportWorldCharacter()
	: InputMapping(nullptr)
	, bApplyInputMappingImmediately(true)
{
	PrimaryActorTick.bCanEverTick = true;
}

void AViewportWorldCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	APlayerController* PC = Cast<APlayerController>(GetController());
	SetPlayerInput(PC);
	UpdatePlayerInput(InputMapping, bApplyInputMappingImmediately);
}

bool AViewportWorldCharacter::UpdatePlayerInput(UInputMappingContext* NewInputMapping, const bool bApplyImmediately)
{
	APlayerController* PC = Cast<APlayerController>(GetController());
	return UpdatePlayerInputImpl(this, PC, NewInputMapping, bApplyImmediately);
}
