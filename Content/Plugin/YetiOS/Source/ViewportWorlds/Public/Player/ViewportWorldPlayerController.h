// Copyright 2023 - YetiTech Studios, Pvt Ltd. All Rights Reserved.

#pragma once

#include "ViewportWorldInterface.h"
#include "GameFramework/PlayerController.h"
#include "ViewportWorldPlayerController.generated.h"

UCLASS()
class VIEWPORTWORLDS_API AViewportWorldPlayerController : public APlayerController, public IViewportWorldInterface
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, Category = ViewportWorldPlayerController)
	TObjectPtr<UInputMappingContext> InputMapping;

	UPROPERTY(EditAnywhere, Category = ViewportWorldPlayerController)
	bool bApplyInputMappingImmediately;

public:

	AViewportWorldPlayerController();

	virtual void SetupInputComponent() override;

	UFUNCTION(BlueprintCallable, Category = ViewportWorldPlayerController)
	bool UpdatePlayerInput(UInputMappingContext* NewInputMapping, const bool bApplyImmediately = true);
};
