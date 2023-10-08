// Copyright 2023 - YetiTech Studios, Pvt Ltd. All Rights Reserved.

#pragma once

#include "OperatingSystemTypes.h"
#include "GameplayTagContainer.h"
#include "UObject/Object.h"
#include "OperatingSystemBaseDevice.generated.h"

class UOperatingSystemBIOS;
class UOperatingSystemBaseHardware;
class UOperatingSystemDeviceWidget;
class AOperatingSystemDeviceActor;
class UOperatingSystemMBB;
class UOperatingSystemPSU;
class UOperatingSystemGPU;
class UOperatingSystemHDD;
class UOperatingSystemRAM;
class UOperatingSystemCPU;
class UOperatingSystem;
class UOperatingSystemBiosWidget;
class UOperatingSystemSaveGame;
class UUserWidget;

DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnDeviceStateChanged, const EOperatingSystemDeviceState&, _PrevState, const EOperatingSystemDeviceState&, _NewState);

UCLASS(Within=OperatingSystemDeviceActor, Abstract, Blueprintable)
class OPERATINGSYSTEMSIMULATOR_API UOperatingSystemBaseDevice : public UObject
{
	GENERATED_BODY()

protected:

	FTimerHandle TimerHandle_SessionEnd;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = OperatingSystemDevice)
	FText DeviceName;

	UPROPERTY(EditDefaultsOnly, Category = OperatingSystemDevice)
	TSoftClassPtr<UOperatingSystemDeviceWidget> DeviceWidgetClass;

	UPROPERTY(EditDefaultsOnly, Category = OperatingSystemDevice)
	TSoftClassPtr<UOperatingSystem> OperatingSystemClass;

	UPROPERTY(EditDefaultsOnly, Category = OperatingSystemDevice)
	bool bOperatingSystemIsPreInstalled;

	UPROPERTY(EditDefaultsOnly, Category = OperatingSystemDevice)
	FOperatingSystemRangeTime PowerOnTime;

	/** Shutdown and restart time. */
	UPROPERTY(EditDefaultsOnly, Category = OperatingSystemDevice)
	FOperatingSystemRangeTime SessionEndTime;

	UPROPERTY(EditDefaultsOnly, Category = OperatingSystemDeviceHardware)
	TSoftClassPtr<UOperatingSystemMBB> MotherboardClass;

	UPROPERTY(EditDefaultsOnly, Category = OperatingSystemDeviceHardware)
	TSoftClassPtr<UOperatingSystemPSU> PsuClass;

	UPROPERTY(EditDefaultsOnly, Category = OperatingSystemDeviceHardware)
	TSoftClassPtr<UOperatingSystemCPU> CpuClass;

	UPROPERTY(EditDefaultsOnly, Category = OperatingSystemDeviceHardware)
	TSoftClassPtr<UOperatingSystemRAM> RamClass;

	UPROPERTY(EditDefaultsOnly, Category = OperatingSystemDeviceHardware)
	TSoftClassPtr<UOperatingSystemHDD> HddClass;

	UPROPERTY(EditDefaultsOnly, Category = OperatingSystemDeviceHardware)
	TSoftClassPtr<UOperatingSystemGPU> GpuClass;

	/** Does this device requires a GPU? If true, you must provide a valid class for Gpu Class. */
	UPROPERTY(EditDefaultsOnly, Category = OperatingSystemDeviceHardware)
	uint8 bRequiresGPU : 1;

	UPROPERTY(VisibleInstanceOnly, Category = Debug)
	uint8 bOperatingSystemInstalled : 1;

	UPROPERTY(VisibleInstanceOnly, Category = Debug)
	FGameplayTag DeviceTag;

	UPROPERTY(VisibleInstanceOnly, Category = Debug)
	EOperatingSystemDeviceState PreviousState;

	UPROPERTY(VisibleInstanceOnly, Category = Debug)
	EOperatingSystemDeviceState CurrentState;

	/** Current operating system that is active. */
	UPROPERTY(VisibleInstanceOnly, BlueprintReadOnly, Category = Debug, meta = (Keywords = "OS, current"))
	TObjectPtr<UOperatingSystem> ActiveOperatingSystem;

	UPROPERTY(VisibleInstanceOnly, Category = Debug)
	TObjectPtr<UOperatingSystemDeviceWidget> DeviceWidget;

	UPROPERTY(VisibleInstanceOnly, Category = Debug)
	TObjectPtr<UUserWidget> OnScreenWidget;

	UPROPERTY(VisibleInstanceOnly, Category = Debug)
	TArray<TObjectPtr<UOperatingSystemBaseHardware>> Hardwares;

	TWeakObjectPtr<AOperatingSystemDeviceActor> DeviceActor;
	TWeakObjectPtr<UOperatingSystemBiosWidget> BiosWidget;

public:

	UPROPERTY(BlueprintAssignable, Category = OperatingSystemDevice)
	FOnDeviceStateChanged OnDeviceStateChanged;

	UOperatingSystemBaseDevice();

	void DeviceCreated(AOperatingSystemDeviceActor* OwningDeviceActor, FGenericError& OutError);
	void DestroyDevice();

	void ClearOnScreenWidget() const;
	void ApplyWidgetToScreen() const;
	void ReApplyWidget() const;

	void ClockTick();
	void OpenBIOS(TWeakObjectPtr<UOperatingSystemBiosWidget> InBiosWidget);
	
	void OnFinishOperatingSystemInstallation();
	void OnFinishSettingUpOperatingSystemPostInstallation();

	bool ShowBSOD();

	virtual void DeviceSessionEnd(const bool bShouldRestart);

protected:

	void ChangeOnScreenWidget(UUserWidget* NewOnScreenWidget = nullptr);
	void CheckHardware(FGenericError& OutError);

	bool UpdateDeviceState(const EOperatingSystemDeviceState& NewState);
	bool UpdateDeviceState(const EOperatingSystemDeviceState& NewState, FGenericError& OutError);

	virtual void OnDeviceCreated(FGenericError& OutError) {}
	virtual void OnDeviceStartRunning();
	void OnDeviceShutdown();
	void OnDeviceRestart();

	void DestroyDeviceAndRestart();

private:

	void Internal_OnDeviceSessionEnd(const bool bRestart);
	void Internal_DestroyDevice();

public:

	UOperatingSystem* GetCurrentOperatingSystem() const;
	TSoftClassPtr<UOperatingSystem> GetOperatingSystemClass() const;

	UFUNCTION(BlueprintPure, Category = OperatingSystemDevice)
	UOperatingSystemBaseHardware* GetHardwareByTag(const FGameplayTag TestTag) const;

	template<class T>
	UE_NODISCARD T* GetHardwareByTag(const FGameplayTag& TestTag) const
	{
		static_assert(TIsDerivedFrom<T, UOperatingSystemBaseHardware>::IsDerived, "GetHardwareByTag() can only be used on classes derived from UOperatingSystemBaseHardware.");
		return Cast<T>(GetHardwareByTag(TestTag));
	}

	UFUNCTION(BlueprintPure, Category = OperatingSystemDevice)
	EOperatingSystemDeviceState GetCurrentState() const { return CurrentState; }

	UFUNCTION(BlueprintPure, Category = OperatingSystemDevice)
	AOperatingSystemDeviceActor* GetParentDeviceActor() const;

	TSoftClassPtr<UOperatingSystemSaveGame> GetSaveGameClass() const;

	FORCEINLINE TSoftClassPtr<UOperatingSystemMBB> GetMotherboardClass() const { return MotherboardClass; }
	FORCEINLINE TSoftClassPtr<UOperatingSystemPSU> GetPsuClass() const { return PsuClass; }
	FORCEINLINE TSoftClassPtr<UOperatingSystemCPU> GetCpuClass() const { return CpuClass; }
	FORCEINLINE TSoftClassPtr<UOperatingSystemRAM> GetRamClass() const { return RamClass; }
	FORCEINLINE TSoftClassPtr<UOperatingSystemHDD> GetHddClass() const { return HddClass; }
	FORCEINLINE TSoftClassPtr<UOperatingSystemGPU> GetGpuClass() const { return GpuClass; }
	FORCEINLINE TSoftClassPtr<UOperatingSystemDeviceWidget> GetWidgetClass() const { return DeviceWidgetClass; }
	FORCEINLINE bool RequiresGPU() const { return bRequiresGPU; }
	FORCEINLINE bool IsOperatingSystemPreInstalled() const { return bOperatingSystemIsPreInstalled; }
	FORCEINLINE bool IsOperatingSystemInstalled() const { return bOperatingSystemInstalled; }
	FORCEINLINE bool IsRunning() const { return CurrentState == EOperatingSystemDeviceState::Running; }
	FORCEINLINE bool IsShuttingDown() const { return CurrentState == EOperatingSystemDeviceState::ShuttingDown; }
	FORCEINLINE bool IsRestarting() const { return CurrentState == EOperatingSystemDeviceState::Restarting; }
	FORCEINLINE const FText& GetDeviceName() const { return DeviceName; }
	FORCEINLINE const FGameplayTag& GetDeviceTag() const { return DeviceTag; }
};
