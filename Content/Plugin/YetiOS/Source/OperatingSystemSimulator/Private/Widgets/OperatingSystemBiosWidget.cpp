// Copyright 2023 - YetiTech Studios, Pvt Ltd. All Rights Reserved.

#include "Widgets/OperatingSystemBiosWidget.h"
#include "Hardware/OperatingSystemMBB.h"
#include "Core/OperatingSystemBIOS.h"

UOperatingSystemBiosWidget::UOperatingSystemBiosWidget()
	: ParentMotherboard(nullptr)
	, HardwareError(FGenericError())
{
}

void UOperatingSystemBiosWidget::NativeConstruct()
{
	Super::NativeConstruct();
	if (HardwareError.IsValid())
	{
		K2_OnHardwareError(HardwareError);
	}
}

void UOperatingSystemBiosWidget::OnHardwareError(const FGenericError& Error)
{
	HardwareError = Error;
	if (HardwareError.IsValid())
	{
		K2_OnHardwareError(Error);
	}
}

void UOperatingSystemBiosWidget::SetParentMotherboard(TWeakObjectPtr<UOperatingSystemMBB> InMotherboard, TWeakObjectPtr<UOperatingSystemBIOS> OwningBIOS)
{
	ParentMotherboard = InMotherboard.Get();
	ParentBIOS = OwningBIOS.Get();
}
