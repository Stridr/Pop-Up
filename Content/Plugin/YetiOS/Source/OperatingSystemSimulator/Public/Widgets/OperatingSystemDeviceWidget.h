// Copyright 2023 - YetiTech Studios, Pvt Ltd. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "OperatingSystemTypes.h"
#include "OperatingSystemDeviceWidget.generated.h"

class UOperatingSystemBaseDevice;

UCLASS(Abstract)
class OPERATINGSYSTEMSIMULATOR_API UOperatingSystemDeviceWidget : public UCommonUserWidget
{
	GENERATED_BODY()

protected:
	
	UPROPERTY(BlueprintReadOnly, Category = OperatingSystemDeviceWidget)
	TObjectPtr<UOperatingSystemBaseDevice> OwningDevice;

public:

	static UOperatingSystemDeviceWidget* CreateDeviceWidget(UOperatingSystemBaseDevice* InDevice);

	void CheckHardwareFailed(const FGenericError& HardwareError);
	void OperatingSystemError(const FGenericError& Error);

protected:

	UFUNCTION(BlueprintImplementableEvent, Category = OperatingSystemDeviceWidget, DisplayName = OperatingSystemError)
	void K2_OperatingSystemError(const FGenericError& Error);
	
	UFUNCTION(BlueprintImplementableEvent, Category = OperatingSystemDeviceWidget, DisplayName = OnHardwareCheckFailed)
	void K2_OnCheckHardwareFailed(const FGenericError& Error);
};
