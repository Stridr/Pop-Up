// Copyright 2023 - YetiTech Studios, Pvt Ltd. All Rights Reserved.

#pragma once

#include "CommonUserWidget.h"
#include "OperatingSystemWidgetBase.generated.h"

class UOperatingSystem;

UCLASS(Abstract)
class UOperatingSystemWidgetBase : public UCommonUserWidget
{
	GENERATED_BODY()

	uint8 bHasBlueprintOnSetOperatingSystem : 1;

protected:

	UPROPERTY(BlueprintReadOnly, Category = OperatingSystemWidgetBase, meta = (ExposeOnSpawn = true))
	TObjectPtr<UOperatingSystem> ParentOS;

public:

	UOperatingSystemWidgetBase();

	UFUNCTION(BlueprintCallable, Category = OperatingSystemWidgetBase)
	void SetOperatingSystem(UOperatingSystem* NewOS);

	void DestroyOperatingSystemBaseWidget();

protected:

	virtual void NativeConstruct() override;

	OPERATINGSYSTEMSIMULATOR_API virtual void OnDestroyWidget() {}

	UFUNCTION(BlueprintImplementableEvent, Category = OperatingSystemWidgetBase, DisplayName = OnSetOperatingSystem)
	void K2_OnSetOperatingSystem();
};
