// Copyright 2023 - YetiTech Studios, Pvt Ltd. All Rights Reserved.

#include "Devices/OperatingSystemDeviceMessenger.h"
#include "OperatingSystemLogs.h"
#include "OperatingSystemMacros.h"
#include "Devices/OperatingSystemBaseDevice.h"
#include "Devices/OperatingSystemDeviceActor.h"

DEFINE_OS_LOG(DeviceMessenger);

///// Messenger system implementation /////////////////////////////////////////////////////////
void FOperatingSystemDeviceMessengerSystem::Broadcast(const FName& EventName, UObject* Payload)
{
	if (EventName.IsNone())
	{
		for (const auto& It : MappedDelegates)
		{
			for (const auto& Callback : It.Value)
			{
				if (!Callback.IsBound())
				{
					OS_LOG_WARN(DeviceMessenger, FString::Printf(TEXT("Found orphaned function '%s'."), *Callback.GetFunctionName().ToString()));
					continue;
				}
				
				Callback.Execute(Payload);
			}
		}
		
		return;
	}

	const auto& TargetCallbacks = MappedDelegates.FindRef(EventName);
	for (const auto& Callback : TargetCallbacks)
	{
		if (!Callback.IsBound())
		{
			OS_LOG_WARN(DeviceMessenger, FString::Printf(TEXT("Found orphaned function '%s' when executing '%s'."), *Callback.GetFunctionName().ToString(), *EventName.ToString()));
			continue;
		}
		
		Callback.Execute(Payload);
	}
}

void FOperatingSystemDeviceMessengerSystem::BeginListening(const FName& ListenToEventName,
	const FOperatingSystemDeviceMessageDelegate& Callback)
{
	auto& MappedValue = MappedDelegates.FindOrAdd(ListenToEventName);
	MappedValue.Emplace(Callback);
}

void FOperatingSystemDeviceMessengerSystem::StopListening(const FName& EventName)
{
	if (EventName.IsNone())
	{
		ClearAll();
		return;
	}

	auto& MappedValue = MappedDelegates.FindOrAdd(EventName);
	MappedValue.Reset();
}
/////////////////////////////////////////////////////////////////////////////////////////////

UOperatingSystemDeviceMessenger::UOperatingSystemDeviceMessenger()
	: ParentDevice(nullptr)
	, DeviceMessengerSystemPtr(nullptr)
{
	IMPLEMENTED_IN_BP_LAMBDA();

	CHECK_IN_BP(UOperatingSystemDeviceMessenger, OnConstructed);
	CHECK_IN_BP(UOperatingSystemDeviceMessenger, OnMessengerBeginDestroy);
}

UOperatingSystemDeviceMessenger* UOperatingSystemDeviceMessenger::CreateMessenger(UOperatingSystemBaseDevice* NewDevice)
{
	if (IsValid(NewDevice) && !NewDevice->GetParentDeviceActor()->GetMessengerClass().IsNull())
	{
		auto ProxyMessenger = NEW_SOFT_OBJ(UOperatingSystemDeviceMessenger, NewDevice, NewDevice->GetParentDeviceActor()->GetMessengerClass(), Messenger);
		ProxyMessenger->ParentDevice = NewDevice;
		ProxyMessenger->DeviceMessengerSystemPtr = MakeShared<FOperatingSystemDeviceMessengerSystem, ESPMode::NotThreadSafe>();
		ProxyMessenger->OnConstructed();
		if (ProxyMessenger->bHasBlueprintOnConstructed)
		{
			ProxyMessenger->K2_OnConstructed();
		}
		OS_LOG_VERBOSE(DeviceMessenger, FString::Printf(TEXT("New messenger (%s) created for %s"), *ProxyMessenger->GetName(), *NewDevice->GetName()));
		return ProxyMessenger;
	}

	return nullptr;
}

void UOperatingSystemDeviceMessenger::BeginDestroyMessenger()
{
	if (bHasBlueprintOnMessengerBeginDestroy)
	{
		K2_OnMessengerBeginDestroy();
	}
	
	DeviceMessengerSystemPtr.Reset();
	ParentDevice.Reset();
}

void UOperatingSystemDeviceMessenger::Broadcast(const FName EventName, UObject* Payload)
{
	DeviceMessengerSystemPtr->Broadcast(EventName, Payload);
}

void UOperatingSystemDeviceMessenger::BeginListening(const FName ListenToEventName,
	const FOperatingSystemDeviceMessageDelegate& Callback)
{
	DeviceMessengerSystemPtr->BeginListening(ListenToEventName, Callback);
}

void UOperatingSystemDeviceMessenger::StopListening(const FName EventName)
{
	DeviceMessengerSystemPtr->StopListening(EventName);
}

TWeakObjectPtr<UOperatingSystemBaseDevice> UOperatingSystemDeviceMessenger::GetParentDevice() const
{
	return ParentDevice;
}
