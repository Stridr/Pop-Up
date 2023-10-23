// Copyright 2023 - YetiTech Studios, Pvt Ltd. All Rights Reserved.

#pragma once

#include "UObject/Interface.h"
#include "ViewportWorldInterface.generated.h"

class UInputMappingContext;

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UViewportWorldInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class VIEWPORTWORLDS_API IViewportWorldInterface
{
	GENERATED_BODY()

public:
	static void SetPlayerInput(APlayerController* PlayerController);
	static bool UpdatePlayerInputImpl(UObject* Caller, const APlayerController* PlayerController, UInputMappingContext* MappingContext, bool bApplyImmediately);

protected:
	
	UFUNCTION(BlueprintImplementableEvent, Category = ViewportWorldInterface)
	void OnPlayerInputUpdated(UInputMappingContext* InputMappingContext);
};
