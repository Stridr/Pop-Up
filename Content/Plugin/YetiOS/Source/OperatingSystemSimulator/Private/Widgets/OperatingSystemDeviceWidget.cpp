// Copyright 2023 - YetiTech Studios, Pvt Ltd. All Rights Reserved.

#include "Widgets/OperatingSystemDeviceWidget.h"
#include "OperatingSystemTemplates.h"
#include "Devices/OperatingSystemBaseDevice.h"
#include "OperatingSystemTags.h"
#include "Hardware/OperatingSystemMBB.h"
#include "Core/OperatingSystemBIOS.h"
#include "Widgets/OperatingSystemBiosWidget.h"

UOperatingSystemDeviceWidget* UOperatingSystemDeviceWidget::CreateDeviceWidget(UOperatingSystemBaseDevice* InDevice)
{
	const auto ProxyWidget = CreateFromSoftWidget(InDevice, InDevice->GetWidgetClass());
	ProxyWidget->OwningDevice = InDevice;
	return ProxyWidget;
}

void UOperatingSystemDeviceWidget::CheckHardwareFailed(const FGenericError& HardwareError)
{
	const auto Motherboard = OwningDevice->GetHardwareByTag<UOperatingSystemMBB>(MbbTag);
	if (Motherboard && Motherboard->CanOpenBIOS())
	{
		//Motherboard->TryOpenBIOS();
		Motherboard->GetBIOS().GetBiosWidget()->OnHardwareError(HardwareError);
	}

	K2_OnCheckHardwareFailed(HardwareError);
}

void UOperatingSystemDeviceWidget::OperatingSystemError(const FGenericError& Error)
{
	K2_OperatingSystemError(Error);
}
