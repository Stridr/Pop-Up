// Copyright 2023 - YetiTech Studios, Pvt Ltd. All Rights Reserved.

#include "Hardware/OperatingSystemGPU.h"
#include "OperatingSystemMacros.h"
#include "OperatingSystemTags.h"
#include "Devices/OperatingSystemBaseDevice.h"
#include "Hardware/OperatingSystemMBB.h"

UOperatingSystemGPU::UOperatingSystemGPU()
{
	HardwareTag = GpuTag;
}

UOperatingSystemGPU* UOperatingSystemGPU::CreateGPU(UOperatingSystemMBB* OwningMotherboard, FGenericError& OutError)
{
	const auto& ParentDeviceRef = OwningMotherboard->GetParentDevice();
	if (ParentDeviceRef.GetGpuClass().IsNull())
	{
		if (ParentDeviceRef.RequiresGPU())
		{
			OutError = MAKE_ERROR("ERR_GPU", FString::Printf(TEXT("%s requires GPU but None was provided."), *ParentDeviceRef.GetDeviceName().ToString()));
		}
		
		return nullptr;
	}

	auto ProxyGPU = NEW_SOFT_OBJ(UOperatingSystemGPU, OwningMotherboard, ParentDeviceRef.GetGpuClass(), GPU);
	ProxyGPU->ParentMotherboard = OwningMotherboard;
	if (!ProxyGPU->Validate(OutError))
	{
		ProxyGPU->MarkAsGarbage();
		ProxyGPU = nullptr;
	}
	
	return ProxyGPU;
}

bool UOperatingSystemGPU::OnValidate(FGenericError& OutError) const
{
	if (HardwareTag != GpuTag)
	{
		OutError = MAKE_ERROR("ERR_GPU", FString::Printf(TEXT("%s is not using %s tag. It is using %s which is not correct."), *Name.ToString(), *GpuTag.GetTag().ToString(), *HardwareTag.ToString()));
		return false;
	}
	
	return true;
}
