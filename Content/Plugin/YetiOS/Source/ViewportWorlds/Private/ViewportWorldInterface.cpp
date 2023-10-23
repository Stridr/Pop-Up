// Copyright 2023 - YetiTech Studios, Pvt Ltd. All Rights Reserved.

#include "ViewportWorldInterface.h"
#include "EnhancedInputSubsystems.h"
#include "InputMappingContext.h"
#include "Logging/StructuredLog.h"

DEFINE_LOG_CATEGORY_STATIC(LogViewportWorldInterface, All, All)

void IViewportWorldInterface::SetPlayerInput(APlayerController* PlayerController)
{
	const UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PlayerController->GetLocalPlayer());
	PlayerController->PlayerInput = Subsystem->GetPlayerInput();
}

bool IViewportWorldInterface::UpdatePlayerInputImpl(UObject* Caller, const APlayerController* PlayerController, UInputMappingContext* MappingContext, bool bApplyImmediately)
{
	if (!IsValid(Caller))
	{
		UE_LOGFMT(LogViewportWorldInterface, Error, "Caller not valid.");
		return false;
	}

	if (!Caller->GetClass()->ImplementsInterface(UViewportWorldInterface::StaticClass()))
	{
		UE_LOGFMT(LogViewportWorldInterface, Error, "{Caller}: Does not implement IViewportWorldInterface.", Caller->GetName());
		return false;
	}
	
	if (!IsValid(MappingContext))
	{
		UE_LOGFMT(LogViewportWorldInterface, Error, "{Caller}: Mapping Context not valid.", Caller->GetName());
		return false;
	}

	if (!IsValid(PlayerController))
	{
		UE_LOGFMT(LogViewportWorldInterface, Error, "{Caller}: Player Controller not valid.", Caller->GetName());
		return false;
	}

	if (!PlayerController->IsLocalPlayerController())
	{
		UE_LOGFMT(LogViewportWorldInterface, Error, "{Caller}: Player Controller ({Controller}) is not local.", Caller->GetName(), PlayerController->GetName());
		return false;
	}

	UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PlayerController->GetLocalPlayer());
	if (bApplyImmediately)
	{
		Subsystem->AddMappingContext(MappingContext, 0);
	}

	Execute_OnPlayerInputUpdated(Caller, MappingContext);
	return true;
}
