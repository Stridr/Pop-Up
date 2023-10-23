// Copyright 2023 - YetiTech Studios, Pvt Ltd. All Rights Reserved.

#include "Core/OperatingSystemBIOS.h"
#include "OperatingSystemTemplates.h"
#include "Hardware/OperatingSystemMBB.h"
#include "Devices/OperatingSystemBaseDevice.h"
#include "Widgets/OperatingSystemBiosWidget.h"
#include "OperatingSystemMacros.h"

UOperatingSystemBIOS::UOperatingSystemBIOS()
	: BiosWidgetClass(nullptr)
	, ParentMotherboard(nullptr)
	, bIsTickable(false)
	, BiosWidget(nullptr)
	, TickElapsedTime(0.f)
{
}

bool UOperatingSystemBIOS::InitBIOS(TWeakObjectPtr<UOperatingSystemMBB> ForMotherboard, FGenericError& OutError)
{
	if (BiosWidgetClass.IsNull())
	{
		OutError = MAKE_ERROR("ERR_BIOS", FString::Printf(TEXT("Bios Widget Class was null for %s"), *GetName()));
		return false;
	}

	if (!IsValid(BiosWidget))
	{
		BiosWidget = CreateFromSoftWidget(this, BiosWidgetClass);
	}

	ParentMotherboard = ForMotherboard;
	BiosWidget->SetParentMotherboard(ParentMotherboard, this);
	return true;
}

void UOperatingSystemBIOS::OpenBIOS() const
{
	// @TODO Setup Bios widget.
	ParentMotherboard->GetParentDevice().OpenBIOS(BiosWidget);
}

void UOperatingSystemBIOS::ToggleClock(const bool bTick)
{
	bIsTickable = bTick;
}

void UOperatingSystemBIOS::Tick(float DeltaTime)
{
	TickElapsedTime += DeltaTime;
	if (TickElapsedTime >= 1.f)
	{
		ParentMotherboard->ClockTick();
		TickElapsedTime -= 1.f;
	}
}

TStatId UOperatingSystemBIOS::GetStatId() const
{
	RETURN_QUICK_DECLARE_CYCLE_STAT(UOperatingSystemBIOS, STATGROUP_Tickables)
}

UOperatingSystemBiosWidget* UOperatingSystemBIOS::GetBiosWidget() const
{
	return BiosWidget;
}
