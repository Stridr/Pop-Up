// Copyright 2023 - YetiTech Studios, Pvt Ltd. All Rights Reserved.


#include "Hardware/OperatingSystemCPU.h"
#include "OperatingSystemMacros.h"
#include "OperatingSystemTags.h"
#include "Devices/OperatingSystemBaseDevice.h"
#include "Hardware/OperatingSystemMBB.h"

UOperatingSystemCPU::UOperatingSystemCPU()
	: Speed(3.2)
	, SocketTag(LGA2066_Tag)
{
	HardwareTag = CpuTag;
}

UOperatingSystemCPU* UOperatingSystemCPU::CreateCPU(UOperatingSystemMBB* OwningMotherboard, FGenericError& OutError)
{
	const auto& ParentDeviceRef = OwningMotherboard->GetParentDevice();
	if (ParentDeviceRef.GetCpuClass().IsNull())
	{
		OutError = MAKE_ERROR("ERR_CPU", FString::Printf(TEXT("%s has no cpu class."), *ParentDeviceRef.GetDeviceName().ToString()));
		return nullptr;
	}

	auto ProxyCPU = NEW_SOFT_OBJ(UOperatingSystemCPU, OwningMotherboard, ParentDeviceRef.GetCpuClass(), CPU);
	ProxyCPU->ParentMotherboard = OwningMotherboard;

	if (!ProxyCPU->Validate(OutError))
	{
		ProxyCPU->MarkAsGarbage();
		ProxyCPU = nullptr;
	}

	return ProxyCPU;
}

bool UOperatingSystemCPU::OnValidate(FGenericError& OutError) const
{
	if (HardwareTag != CpuTag)
	{
		OutError = MAKE_ERROR("ERR_CPU", FString::Printf(TEXT("%s is not using %s tag. It is using %s which is not correct."), *Name.ToString(), *CpuTag.GetTag().ToString(), *HardwareTag.ToString()));
		return false;
	}
	
	if (!ParentMotherboard->IsCpuSocketSupported(SocketTag))
	{
		OutError = MAKE_ERROR("ERR_CPU_MISMATCH", FString::Printf(TEXT("%s is not compatible with %s."), *Name.ToString(), *ParentMotherboard->GetHardwareNameAsString()));
		return false;
	}

	if (Speed < 1.f)
	{
		OutError = MAKE_ERROR("ERR_CPU_SPEED", FString::Printf(TEXT("%s speed is incorrect. Should be atleast 1 but it was %f."), *Name.ToString(), Speed));
		return false;
	}

	if (Speed > ParentMotherboard->GetMaxCpuSpeed())
	{
		OutError = MAKE_ERROR("ERR_CPU_SPEED", FString::Printf(TEXT("%s speed incompatible. CPU Speed: %f | Motherboard Max: %f"), *Name.ToString(), Speed, ParentMotherboard->GetMaxCpuSpeed()));
		return false;
	}

	return true;
}
