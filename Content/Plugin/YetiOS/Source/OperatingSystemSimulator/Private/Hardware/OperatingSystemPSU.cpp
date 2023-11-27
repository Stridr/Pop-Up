// Copyright 2023 - YetiTech Studios, Pvt Ltd. All Rights Reserved.

#include "Hardware/OperatingSystemPSU.h"
#include "OperatingSystemMacros.h"
#include "OperatingSystemTags.h"
#include "Devices/OperatingSystemBaseDevice.h"

UOperatingSystemPSU::UOperatingSystemPSU()
{
	HardwareTag = PsuTag;
}

UOperatingSystemPSU* UOperatingSystemPSU::CreatePSU(UOperatingSystemBaseDevice* OwningDevice, FGenericError& OutError)
{
	if (OwningDevice->GetPsuClass().IsNull())
	{
		OutError = MAKE_ERROR("ERR_PSU", FString::Printf(TEXT("%s has no psu class."), *OwningDevice->GetDeviceName().ToString()));
		return nullptr;
	}

	auto ProxyPsu = NEW_SOFT_OBJ(UOperatingSystemPSU, OwningDevice, OwningDevice->GetPsuClass(), PSU);
	ProxyPsu->ParentDevice = OwningDevice;

	if (!ProxyPsu->Validate(OutError))
	{
		ProxyPsu->MarkAsGarbage();
		ProxyPsu = nullptr;
	}

	return ProxyPsu;
}

bool UOperatingSystemPSU::OnValidate(FGenericError& OutError) const
{
	if (HardwareTag != PsuTag)
	{
		OutError = MAKE_ERROR("ERR_PSU", FString::Printf(TEXT("%s is not using %s tag. It is using %s which is not correct."), *Name.ToString(), *PsuTag.GetTag().ToString(), *HardwareTag.ToString()));
		return false;
	}

	return true;
}
