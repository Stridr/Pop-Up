// Copyright 2023 - YetiTech Studios, Pvt Ltd. All Rights Reserved.

#include "Hardware/OperatingSystemMBB.h"
#include "OperatingSystemMacros.h"
#include "OperatingSystemTags.h"
#include "Core/OperatingSystemBIOS.h"
#include "Devices/OperatingSystemBaseDevice.h"

UOperatingSystemMBB::UOperatingSystemMBB()
	: BiosClass(nullptr)
	, MaxCpuSpeed(5.f)
	, SupportedCpuSockets(FGameplayTagContainer())
	, MaxSupportedRamSize(EOperatingSystemCommonSizes::Size16384)
	, BIOS(nullptr)
{
	HardwareTag = MbbTag;
}

UOperatingSystemMBB* UOperatingSystemMBB::CreateMotherboard(UOperatingSystemBaseDevice* OwningDevice, FGenericError& OutError)
{
	if (OwningDevice->GetMotherboardClass().IsNull())
	{
		OutError = MAKE_ERROR("ERR_MOTHERBOARD", FString::Printf(TEXT("%s has no motherboard class."), *OwningDevice->GetDeviceName().ToString()));
		return nullptr;
	}
	
	auto ProxyMBB = NEW_SOFT_OBJ(UOperatingSystemMBB, OwningDevice, OwningDevice->GetMotherboardClass(), MBB);
	ProxyMBB->ParentDevice = OwningDevice;

	if (!ProxyMBB->Validate(OutError))
	{
		ProxyMBB->MarkAsGarbage();
		ProxyMBB = nullptr;
		return nullptr;
	}
	
	if (!ProxyMBB->Internal_Initialize(OutError))
	{
		ProxyMBB->MarkAsGarbage();
		ProxyMBB = nullptr;
	}

	return ProxyMBB;
}

void UOperatingSystemMBB::ClockTick() const
{
	ParentDevice->ClockTick();
}

bool UOperatingSystemMBB::OnValidate(FGenericError& OutError) const
{
	if (HardwareTag != MbbTag)
	{
		OutError = MAKE_ERROR("ERR_MOTHERBOARD", FString::Printf(TEXT("%s is not using %s tag. It is using %s which is not correct."), *Name.ToString(), *MbbTag.GetTag().ToString(), *HardwareTag.ToString()));
		return false;
	}

	if (MaxSupportedRamSize == EOperatingSystemCommonSizes::None)
	{
		OutError = MAKE_ERROR("ERR_RAM_SIZE_NOT_VALID", FString::Printf(TEXT("Max Supported Ram Size is set to None in %s"), *Name.ToString()));
		return false;
	}
	
	if (BiosClass.IsNull())
	{
		OutError = MAKE_ERROR("ERR_MOTHERBOARD", FString::Printf(TEXT("Bios class was not specified for %s."), *Name.ToString()));
		return false;
	}

	if (!SupportedDevices.IsEmpty() && !SupportedDevices.HasTagExact(ParentDevice->GetDeviceTag()))
	{
		OutError = MAKE_ERROR("ERR_NOT_COMPATIBLE", FString::Printf(TEXT("%s is not supported on %s"), *Name.ToString(), *ParentDevice->GetDeviceName().ToString()));
		return false;
	}

	return true;
}

bool UOperatingSystemMBB::Internal_Initialize(FGenericError& OutError)
{
	BIOS = NEW_SOFT_OBJ(UOperatingSystemBIOS, this, BiosClass, BIOS);
	if (!BIOS->InitBIOS(this, OutError))
	{
		BIOS->MarkAsGarbage();
		BIOS = nullptr;
		return false;
	}
	
	ParentDevice->OnDeviceStateChanged.AddDynamic(this, &UOperatingSystemMBB::Internal_OnDeviceStateChanged);
	return true;
}

void UOperatingSystemMBB::Internal_OnDeviceStateChanged(const EOperatingSystemDeviceState& PreviousState, const EOperatingSystemDeviceState& CurrentState)
{
	BIOS->ToggleClock(CurrentState == EOperatingSystemDeviceState::Running);
}

bool UOperatingSystemMBB::TryOpenBIOS()
{
	if (CanOpenBIOS())
	{
		BIOS->OpenBIOS();
		return true;
	}

	return false;
}

UOperatingSystemBaseDevice& UOperatingSystemMBB::GetParentDevice() const
{
	return *ParentDevice.Get();
}

UOperatingSystemBIOS& UOperatingSystemMBB::GetBIOS() const
{
	return *BIOS;
}

bool UOperatingSystemMBB::IsCpuSocketSupported(const FGameplayTag& CpuSocketTag) const
{
	if (SupportedCpuSockets.IsEmpty())
	{
		return true;
	}

	if (CpuSocketTag == InvalidTag)
	{
		ensureMsgf(false, TEXT("IsCpuSocketSupported function does not support %s tag. Please fix."), *InvalidTag.GetTag().ToString());
		return false;
	}

	return SupportedCpuSockets.HasTagExact(CpuSocketTag);
}

bool UOperatingSystemMBB::CanOpenBIOS() const
{
	return IsValid(BIOS) && (ParentDevice->GetCurrentState() == EOperatingSystemDeviceState::Starting || ParentDevice->GetCurrentState() == EOperatingSystemDeviceState::BIOS);
}
