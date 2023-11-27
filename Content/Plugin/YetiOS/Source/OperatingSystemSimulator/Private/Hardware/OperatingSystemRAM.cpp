// Copyright 2023 - YetiTech Studios, Pvt Ltd. All Rights Reserved.

#include "Hardware/OperatingSystemRAM.h"
#include "OperatingSystemMacros.h"
#include "OperatingSystemTags.h"
#include "Devices/OperatingSystemBaseDevice.h"
#include "Hardware/OperatingSystemMBB.h"

UOperatingSystemRAM::UOperatingSystemRAM()
	: Size(EOperatingSystemCommonSizes::Size4096)
	, ParentMotherboard(nullptr)
{
	HardwareTag = RamTag;
}

UOperatingSystemRAM* UOperatingSystemRAM::CreateRAM(UOperatingSystemMBB* OwningMotherboard, FGenericError& OutError)
{
	const auto& ParentDeviceRef = OwningMotherboard->GetParentDevice();
	if (ParentDeviceRef.GetRamClass().IsNull())
	{
		OutError = MAKE_ERROR("ERR_RAM", FString::Printf(TEXT("%s has no ram class."), *ParentDeviceRef.GetDeviceName().ToString()));
		return nullptr;
	}

	auto ProxyRAM = NEW_SOFT_OBJ(UOperatingSystemRAM, OwningMotherboard, ParentDeviceRef.GetRamClass(), RAM);
	ProxyRAM->ParentMotherboard = OwningMotherboard;

	if (!ProxyRAM->Validate(OutError))
	{
		ProxyRAM->MarkAsGarbage();
		ProxyRAM = nullptr;
	}

	return ProxyRAM;
}

bool UOperatingSystemRAM::OnValidate(FGenericError& OutError) const
{
	if (HardwareTag != RamTag)
	{
		OutError = MAKE_ERROR("ERR_RAM", FString::Printf(TEXT("%s is not using %s tag. It is using %s which is not correct."), *Name.ToString(), *RamTag.GetTag().ToString(), *HardwareTag.ToString()));
		return false;
	}

	if (!ParentMotherboard->IsRamSizeSupported(Size))
	{
		OutError = MAKE_ERROR("ERR_RAM_NOT_SUPPORTED", FString::Printf(TEXT("%s size is not compatible for %s."), *Name.ToString(), *ParentMotherboard->GetHardwareNameAsString()));
		return false;
	}

	return true;
}
