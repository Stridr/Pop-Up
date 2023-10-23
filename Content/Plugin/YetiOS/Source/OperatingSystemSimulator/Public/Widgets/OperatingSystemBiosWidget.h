// Copyright 2023 - YetiTech Studios, Pvt Ltd. All Rights Reserved.

#pragma once

#include "OperatingSystemTypes.h"
#include "CommonUserWidget.h"
#include "OperatingSystemBiosWidget.generated.h"

class UOperatingSystemMBB;
class UOperatingSystemBIOS;

UCLASS(Abstract)
class OPERATINGSYSTEMSIMULATOR_API UOperatingSystemBiosWidget : public UCommonUserWidget
{
	GENERATED_BODY()

protected:

	UPROPERTY(BlueprintReadOnly, Category = OperatingSystemBiosWidget)
	TObjectPtr<UOperatingSystemMBB> ParentMotherboard;

	UPROPERTY(BlueprintReadOnly, Category = OperatingSystemBiosWidget)
	TObjectPtr<UOperatingSystemBIOS> ParentBIOS;

	UPROPERTY(BlueprintReadOnly, Transient, Category = OperatingSystemBiosWidget)
	FGenericError HardwareError;

public:

	UOperatingSystemBiosWidget();

protected:

	virtual void NativeConstruct() override;

public:

	void OnHardwareError(const FGenericError& Error);
	void SetParentMotherboard(TWeakObjectPtr<UOperatingSystemMBB> InMotherboard, TWeakObjectPtr<UOperatingSystemBIOS> OwningBIOS);

protected:

	/**
	* protected
	* UOperatingSystemBiosWidget::K2_OnHardwareError
	* Event called when hardware fail occurs.
	* @param Error [const FGenericError&] Error information
	**/
	UFUNCTION(BlueprintImplementableEvent, Category = OperatingSystemBiosWidget, DisplayName = OnHardwareError)	
	void K2_OnHardwareError(const FGenericError& Error);
};
