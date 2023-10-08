// Copyright 2023 - YetiTech Studios, Pvt Ltd. All Rights Reserved.

#include "Devices/OperatingSystemBaseDevice.h"
#include "OperatingSystemLogs.h"
#include "OperatingSystemMacros.h"
#include "OperatingSystemTags.h"
#include "Devices/OperatingSystemDeviceActor.h"
#include "Hardware/OperatingSystemCPU.h"
#include "Hardware/OperatingSystemGPU.h"
#include "Hardware/OperatingSystemHDD.h"
#include "Hardware/OperatingSystemMBB.h"
#include "Hardware/OperatingSystemPSU.h"
#include "Hardware/OperatingSystemRAM.h"
#include "Widgets/OperatingSystemDeviceWidget.h"
#include "Core/OperatingSystem.h"
#include "Widgets/OperatingSystemBiosWidget.h"
#include "Widgets/OperatingSystemWidget.h"
#include "Widgets/OperatingSystemBsodWidget.h"
#include "Global/OperatingSystemSaveGame.h"
#include "TimerManager.h"

DEFINE_OS_LOG(BaseDevice);

UOperatingSystemBaseDevice::UOperatingSystemBaseDevice()
	: DeviceName(FText())
	, DeviceWidgetClass(nullptr)
	, OperatingSystemClass(nullptr)
	, bOperatingSystemIsPreInstalled(false)
	, PowerOnTime({0.2, 0.8})
	, SessionEndTime({1.f, 5.f})
	, MotherboardClass(nullptr)
	, PsuClass(nullptr)
	, CpuClass(nullptr)
	, RamClass(nullptr)
	, HddClass(nullptr)
	, GpuClass(nullptr)
	, bRequiresGPU(false)
	, bOperatingSystemInstalled(false)
	, DeviceTag(InvalidTag)
	, PreviousState(EOperatingSystemDeviceState::None)
	, CurrentState(EOperatingSystemDeviceState::None)
	, ActiveOperatingSystem(nullptr)
	, DeviceWidget(nullptr)
	, OnScreenWidget(nullptr)
	, Hardwares({})
	, DeviceActor(nullptr)
{
}

void UOperatingSystemBaseDevice::DeviceCreated(AOperatingSystemDeviceActor* OwningDeviceActor, FGenericError& OutError)
{
	if (DeviceName.IsEmptyOrWhitespace())
	{
		OutError = MAKE_ERROR("ERR_DEVICE_NAME", "Device name not set.");
		return;
	}

	if (DeviceWidgetClass.IsNull())
	{
		OutError = MAKE_ERROR("ERR_DEVICE_WIDGET_NULL", "Device widget class was null.");
		return;
	}
	
	DeviceActor = OwningDeviceActor;
	DeviceTag = DeviceActor->GetDeviceTag();
	DeviceWidget = UOperatingSystemDeviceWidget::CreateDeviceWidget(this);
	
	UpdateDeviceState(EOperatingSystemDeviceState::Starting, OutError);
	ChangeOnScreenWidget(DeviceWidget);

	OS_LOG(BaseDevice, FString::Printf(TEXT("%s successfully created."), *DeviceName.ToString()));
	
	OnDeviceCreated(OutError);

	if (!OutError.IsValid())
	{
		FTimerDelegate TimerDelegate;
		TimerDelegate.BindLambda([&]
		{
			UpdateDeviceState(EOperatingSystemDeviceState::Running);
		});

		FTimerHandle TimerHandle_Dummy;
		GetWorld()->GetTimerManager().SetTimer(TimerHandle_Dummy, TimerDelegate, PowerOnTime.GetTime(), false);
	}
}

void UOperatingSystemBaseDevice::DestroyDevice()
{
	Internal_DestroyDevice();
	DeviceActor->CurrentDeviceDestroyed();
}

void UOperatingSystemBaseDevice::ClearOnScreenWidget() const
{
	if (IsValid(OnScreenWidget) && OnScreenWidget->IsInViewport())
	{
		OnScreenWidget->RemoveFromParent();
	}
}

void UOperatingSystemBaseDevice::ApplyWidgetToScreen() const
{
	if (IsValid(OnScreenWidget) && DeviceActor->CanAddWidgetsToScreen())
	{
		OnScreenWidget->AddToViewport();
	}
}

void UOperatingSystemBaseDevice::ReApplyWidget() const
{
	DeviceActor->WidgetChanged(OnScreenWidget);
}

void UOperatingSystemBaseDevice::ClockTick()
{
	// @TODO
}

void UOperatingSystemBaseDevice::OpenBIOS(TWeakObjectPtr<UOperatingSystemBiosWidget> InBiosWidget)
{
	BiosWidget = InBiosWidget;
	UpdateDeviceState(EOperatingSystemDeviceState::BIOS);
}

void UOperatingSystemBaseDevice::OnFinishOperatingSystemInstallation()
{
	OS_LOG(BaseDevice, FString::Printf(TEXT("%s installed on %s"), *ActiveOperatingSystem->GetOperatingSystemName().ToString(), *DeviceName.ToString()));

	bOperatingSystemInstalled = true;
	UpdateDeviceState(EOperatingSystemDeviceState::Restarting);

	// We need to immediately restart so clear the restart timer handle.
	GetWorld()->GetTimerManager().ClearTimer(TimerHandle_SessionEnd);

	DestroyDeviceAndRestart();
	ChangeOnScreenWidget(DeviceWidget);
}

void UOperatingSystemBaseDevice::OnFinishSettingUpOperatingSystemPostInstallation()
{
	UOperatingSystemSaveGame::SaveGame(this);
}

bool UOperatingSystemBaseDevice::ShowBSOD()
{
	return UpdateDeviceState(EOperatingSystemDeviceState::BSOD);
}

void UOperatingSystemBaseDevice::DeviceSessionEnd(const bool bShouldRestart)
{
	UpdateDeviceState(bShouldRestart ? EOperatingSystemDeviceState::Restarting : EOperatingSystemDeviceState::ShuttingDown);
}

void UOperatingSystemBaseDevice::ChangeOnScreenWidget(UUserWidget* NewOnScreenWidget /* = nullptr */)
{
	ClearOnScreenWidget();
	OnScreenWidget = NewOnScreenWidget;
	ApplyWidgetToScreen();

	DeviceActor->WidgetChanged(OnScreenWidget);
}

void UOperatingSystemBaseDevice::CheckHardware(FGenericError& OutError)
{
	ensure(Hardwares.IsEmpty());
	for (auto& It : Hardwares)
	{
		if (IsValid(It))
		{
			It->MarkAsGarbage();
			It = nullptr;
		}
	}

	Hardwares.Reset();
	
	auto Motherboard = UOperatingSystemMBB::CreateMotherboard(this, OutError);
	if (OutError.IsValid())
	{
		DeviceWidget->CheckHardwareFailed(OutError);
		return;
	}
	Hardwares.Emplace(Motherboard);

	auto CPU = UOperatingSystemCPU::CreateCPU(Motherboard, OutError);
	if (OutError.IsValid())
	{
		DeviceWidget->CheckHardwareFailed(OutError);
		return;
	}
	Hardwares.Emplace(CPU);

	auto GPU = UOperatingSystemGPU::CreateGPU(Motherboard, OutError);
	if (OutError.IsValid())
	{
		DeviceWidget->CheckHardwareFailed(OutError);
		return;
	}
	Hardwares.Emplace(GPU);

	auto HDD = UOperatingSystemHDD::CreateHDD(Motherboard, OutError);
	if (OutError.IsValid())
	{
		DeviceWidget->CheckHardwareFailed(OutError);
		return;
	}
	Hardwares.Emplace(HDD);

	auto PSU = UOperatingSystemPSU::CreatePSU(this, OutError);
	if (OutError.IsValid())
	{
		DeviceWidget->CheckHardwareFailed(OutError);
		return;
	}
	Hardwares.Emplace(PSU);

	auto RAM = UOperatingSystemRAM::CreateRAM(Motherboard, OutError);
	if (OutError.IsValid())
	{
		DeviceWidget->CheckHardwareFailed(OutError);
		return;
	}
	Hardwares.Emplace(RAM);
}

bool UOperatingSystemBaseDevice::UpdateDeviceState(const EOperatingSystemDeviceState& NewState)
{
	FGenericError DummyError;
	return UpdateDeviceState(NewState, DummyError);
}

bool UOperatingSystemBaseDevice::UpdateDeviceState(const EOperatingSystemDeviceState& NewState, FGenericError& OutError)
{
	if (CurrentState != NewState)
	{
		PreviousState = CurrentState;
		CurrentState = NewState;
		switch (CurrentState)
		{
			case EOperatingSystemDeviceState::Starting:
				OS_LOG_VERY_VERBOSE(BaseDevice, FString::Printf(TEXT("%s started successfully."), *DeviceName.ToString()));
				CheckHardware(OutError);
				break;
			case EOperatingSystemDeviceState::BIOS:
				OS_LOG_VERY_VERBOSE(BaseDevice, FString::Printf(TEXT("%s changed state to BIOS"), *DeviceName.ToString()));
				ChangeOnScreenWidget(BiosWidget.Get());
				break;
			case EOperatingSystemDeviceState::Running:
				OS_LOG_VERY_VERBOSE(BaseDevice, FString::Printf(TEXT("%s changed state to Running."), *DeviceName.ToString()));
				OnDeviceStartRunning();
				break;
			case EOperatingSystemDeviceState::Restarting:
				OS_LOG_VERY_VERBOSE(BaseDevice, FString::Printf(TEXT("%s changed state to Restarting."), *DeviceName.ToString()));
				OnDeviceRestart();
				break;
			case EOperatingSystemDeviceState::ShuttingDown:
				OS_LOG_VERY_VERBOSE(BaseDevice, FString::Printf(TEXT("%s changed state to Shutting down."), *DeviceName.ToString()));
				OnDeviceShutdown();
				break;
			case EOperatingSystemDeviceState::BSOD:
				OS_LOG_VERY_VERBOSE(BaseDevice, FString::Printf(TEXT("%s changed state to BSOD."), *DeviceName.ToString()));				
				ChangeOnScreenWidget(ActiveOperatingSystem->GetBsodWidget().Get());
				DeviceActor->OnShowBlueScreen(ActiveOperatingSystem->GetBsodOnScreenTime());
				break;
			default: 
				break;
		}

		OnDeviceStateChanged.Broadcast(PreviousState, CurrentState);
		return true;
	}

	return false;
}

void UOperatingSystemBaseDevice::OnDeviceStartRunning()
{
	FGenericError OutError;
	if (!IsValid(ActiveOperatingSystem))
	{
		ActiveOperatingSystem = UOperatingSystem::CreateOperatingSystem(this, OutError);
		if (OutError.IsValid())
		{
			DeviceWidget->OperatingSystemError(OutError);
			return;
		}
	}

	UOperatingSystemSaveGame* LoadGameInstance = UOperatingSystemSaveGame::LoadGame(this);
	if (LoadGameInstance)
	{
		const auto Os_ID = UOperatingSystem::GetOperatingSystemUniqueID(ActiveOperatingSystem);
		const auto& DeviceRef = LoadGameInstance->GetDeviceDataRef();
		if (DeviceRef.SaveLoad_OperatingSystem.SaveLoad_OperatingSystemID != Os_ID)
		{
			OutError = MAKE_ERROR("OPERATING_SYSTEM_MISMATCH", FString::Printf(TEXT("Operating System mismatch.\n\n%s is trying to load '%s'. Expected '%s'."), *DeviceName.ToString(), *ActiveOperatingSystem->GetOperatingSystemName().ToString(), *DeviceRef.SaveLoad_OperatingSystem.SaveLoad_OperatingSystemName));
			DeviceWidget->OperatingSystemError(OutError);
			ActiveOperatingSystem->MarkAsGarbage();
			ActiveOperatingSystem = nullptr;
			return;
		}
		
		bOperatingSystemInstalled = DeviceRef.bSaveLoad_OperatingSystemInstalled;
	}

	ChangeOnScreenWidget(ActiveOperatingSystem->GetOperatingSystemWidget().Get());
	ActiveOperatingSystem->StartOperatingSystem(LoadGameInstance, OutError);
	if (OutError.IsValid())
	{
		UpdateDeviceState(EOperatingSystemDeviceState::BSOD);
	}
}

void UOperatingSystemBaseDevice::OnDeviceShutdown()
{
	Internal_OnDeviceSessionEnd(false);
}

void UOperatingSystemBaseDevice::OnDeviceRestart()
{
	Internal_OnDeviceSessionEnd(true);
}

void UOperatingSystemBaseDevice::DestroyDeviceAndRestart()
{
	Internal_DestroyDevice();
	DeviceActor->RestartDevice();
}

void UOperatingSystemBaseDevice::Internal_OnDeviceSessionEnd(const bool bRestart)
{
	GetWorld()->GetTimerManager().ClearAllTimersForObject(this);
	const bool bSaveSuccess = UOperatingSystemSaveGame::SaveGame(this);
	OS_LOG(BaseDevice, FString::Printf(TEXT("Save game %s"), bSaveSuccess ? *FString("success.") : *FString("failed :(")));

	bRestart ? ActiveOperatingSystem->RestartOS() : ActiveOperatingSystem->ShutdownOS();
	if (bRestart)
	{
		GetWorld()->GetTimerManager().SetTimer(TimerHandle_SessionEnd, this, &ThisClass::DestroyDeviceAndRestart, SessionEndTime.GetTime());
	}
	else
	{
		GetWorld()->GetTimerManager().SetTimer(TimerHandle_SessionEnd, this, &ThisClass::DestroyDevice, SessionEndTime.GetTime());
	}
}

void UOperatingSystemBaseDevice::Internal_DestroyDevice()
{
	if (IsValid(ActiveOperatingSystem))
	{
		ActiveOperatingSystem->DestroyOS();
		ActiveOperatingSystem->MarkAsGarbage();
		ActiveOperatingSystem = nullptr;
	}

	DeviceWidget = nullptr;
	ChangeOnScreenWidget();
}

UOperatingSystem* UOperatingSystemBaseDevice::GetCurrentOperatingSystem() const
{
	return ActiveOperatingSystem;
}

TSoftClassPtr<UOperatingSystem> UOperatingSystemBaseDevice::GetOperatingSystemClass() const
{
	return OperatingSystemClass;
}

UOperatingSystemBaseHardware* UOperatingSystemBaseDevice::GetHardwareByTag(const FGameplayTag TestTag) const
{
	for (const auto& It : Hardwares)
	{
		if (IsValid(It) && It->GetHardwareTag() == TestTag)
		{
			return It;
		}
	}

	return nullptr;
}

AOperatingSystemDeviceActor* UOperatingSystemBaseDevice::GetParentDeviceActor() const
{
	return DeviceActor.Get();
}

TSoftClassPtr<UOperatingSystemSaveGame> UOperatingSystemBaseDevice::GetSaveGameClass() const
{
	if (DeviceActor.IsValid())
	{
		return DeviceActor->GetSaveGameClass();
	}

	return nullptr;
}
