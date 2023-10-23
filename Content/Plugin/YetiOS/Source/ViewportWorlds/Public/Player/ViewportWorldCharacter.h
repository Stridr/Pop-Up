// Copyright 2023 - YetiTech Studios, Pvt Ltd. All Rights Reserved.

#pragma once

#include "ViewportWorldInterface.h"
#include "GameFramework/Character.h"
#include "ViewportWorldCharacter.generated.h"

UCLASS()
class VIEWPORTWORLDS_API AViewportWorldCharacter : public ACharacter, public IViewportWorldInterface
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, Category = ViewportWorldCharacter)
	TObjectPtr<UInputMappingContext> InputMapping;

	UPROPERTY(EditAnywhere, Category = ViewportWorldCharacter)
	bool bApplyInputMappingImmediately;

public:

	AViewportWorldCharacter();

	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UFUNCTION(BlueprintCallable, Category = ViewportWorldCharacter)
	bool UpdatePlayerInput(UInputMappingContext* NewInputMapping, const bool bApplyImmediately = true);
};
