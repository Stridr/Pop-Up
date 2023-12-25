// Copyright PopUp

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "InteractionInterface.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UInteractionInterface : public UInterface
{
	GENERATED_BODY()
};

class POPUP_API IInteractionInterface
{
	GENERATED_BODY()

public:
	virtual void LookAt() = 0;
	virtual FString InteractWith() = 0;
};
