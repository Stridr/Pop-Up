// Copyright 2023 - YetiTech Studios, Pvt Ltd. All Rights Reserved.

#pragma once

#include "GameplayTagContainer.h"
#include "OperatingSystemBaseHardware.h"
#include "OperatingSystemTypes.h"
#include "OperatingSystemMBB.generated.h"

class UOperatingSystemBaseDevice;
class UOperatingSystemBIOS;

UCLASS(Abstract, Blueprintable, BlueprintType, meta=(Keywords = "mother, main, board", DisplayName = "Operating System Motherboard"))
class OPERATINGSYSTEMSIMULATOR_API UOperatingSystemMBB : public UOperatingSystemBaseHardware
{
	GENERATED_BODY()

protected:

	/** Bios that belongs to this Motherboard. */
	UPROPERTY(EditDefaultsOnly, Category = OperatingSystemMotherboard)
	TSoftClassPtr<UOperatingSystemBIOS> BiosClass;

	/** Maximum speed the CPU can have on this motherboard. If the CPU speed is higher than this one, device won't start. */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = OperatingSystemMotherboard, meta = (ForceUnits = Megahertz, UIMin = 2, UIMax = 5, ClampMin = 1, ClampMax = 8.8))
	float MaxCpuSpeed;

	/** Supported cpu sockets. If empty, it is assumed all CPU sockets are supported. */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = OperatingSystemMotherboard, meta = (Categories = "OperatingSystem.Hardware.CPU.Socket"))
	FGameplayTagContainer SupportedCpuSockets;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = OperatingSystemMotherboard)
	EOperatingSystemCommonSizes MaxSupportedRamSize;

	/** List of devices this Motherboard supports. If empty, it is assumed all devices are supported. */
	UPROPERTY(EditDefaultsOnly, Category = OperatingSystemMotherboard, meta = (Categories = "OperatingSystem.Devices"))
	FGameplayTagContainer SupportedDevices;

	UPROPERTY(VisibleInstanceOnly, Transient, Category = Debug)
	TObjectPtr<UOperatingSystemBIOS> BIOS;

	UPROPERTY(VisibleInstanceOnly, BlueprintReadOnly, Transient, Category = Debug)
	TWeakObjectPtr<UOperatingSystemBaseDevice> ParentDevice;

public:

	UOperatingSystemMBB();

	UE_NODISCARD static UOperatingSystemMBB* CreateMotherboard(UOperatingSystemBaseDevice* OwningDevice, FGenericError& OutError);

	void ClockTick() const;

protected:

	virtual bool OnValidate(FGenericError& OutError) const override;

private:

	bool Internal_Initialize(FGenericError& OutError);

	UFUNCTION()
	void Internal_OnDeviceStateChanged(const EOperatingSystemDeviceState& PreviousState, const EOperatingSystemDeviceState& CurrentState);

public:

	/**
	* public
	* UOperatingSystemMBB::TryOpenBIOS
	* Opens BIOS if the following conditions are met.
	* -	BIOS widget is valid.
	* -	Device is in either starting or BIOS state.
	* @return [bool] True if the bios widget was added to viewport.
	**/
	UFUNCTION(BlueprintCallable, Category = OperatingSystemMotherboard)	
	bool TryOpenBIOS();

	UOperatingSystemBaseDevice& GetParentDevice() const;
	UOperatingSystemBIOS& GetBIOS() const;
	
	bool IsCpuSocketSupported(const FGameplayTag& CpuSocketTag) const;
	bool CanOpenBIOS() const;
	
	FORCEINLINE float GetMaxCpuSpeed() const { return MaxCpuSpeed; }
	FORCEINLINE bool IsRamSizeSupported(const EOperatingSystemCommonSizes TestSize) const
	{
		if (TestSize == EOperatingSystemCommonSizes::None)
		{
			return false;
		}

		return TestSize <= MaxSupportedRamSize;
	}
};
