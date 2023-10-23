// Copyright 2023 - YetiTech Studios, Pvt Ltd. All Rights Reserved.

#pragma once

#include "ViewportWorldInterface.h"
#include "GameFramework/Pawn.h"
#include "ViewportWorldPawn.generated.h"

UCLASS()
class VIEWPORTWORLDS_API AViewportWorldPawn : public APawn, public IViewportWorldInterface
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, Category = ViewportWorldPawn)
	TObjectPtr<UInputMappingContext> InputMapping;

	UPROPERTY(EditAnywhere, Category = ViewportWorldPawn)
	bool bApplyInputMappingImmediately;

public:

	AViewportWorldPawn();
	
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UFUNCTION(BlueprintCallable, Category = ViewportWorldPawn)
	bool UpdatePlayerInput(UInputMappingContext* NewInputMapping, const bool bApplyImmediately = true);
};
