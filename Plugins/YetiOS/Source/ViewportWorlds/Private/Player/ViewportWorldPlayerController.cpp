// Copyright 2023 - YetiTech Studios, Pvt Ltd. All Rights Reserved.


#include "Player/ViewportWorldPlayerController.h"

AViewportWorldPlayerController::AViewportWorldPlayerController()
	: InputMapping(nullptr)
	, bApplyInputMappingImmediately(true)
{
}

void AViewportWorldPlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();

	SetPlayerInput(this);
	UpdatePlayerInput(InputMapping, bApplyInputMappingImmediately);
}

bool AViewportWorldPlayerController::UpdatePlayerInput(UInputMappingContext* NewInputMapping,
	const bool bApplyImmediately)
{
	return UpdatePlayerInputImpl(this, this, NewInputMapping, bApplyImmediately);
}
