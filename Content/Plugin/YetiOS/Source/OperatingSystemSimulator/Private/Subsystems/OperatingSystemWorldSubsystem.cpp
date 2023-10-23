// Copyright 2023 - YetiTech Studios, Pvt Ltd. All Rights Reserved.

#include "Subsystems/OperatingSystemWorldSubsystem.h"
#include "OperatingSystemLogs.h"
#include "OperatingSystemTags.h"
#include "Core/OperatingSystem.h"
#include "Core/OperatingSystemUserManager.h"
#include "Devices/OperatingSystemDeviceActor.h"
#include "Global/OperatingSystemStatics.h"
#include "Runtime/Engine/Classes/Engine/World.h"

DEFINE_OS_LOG(GameSubsystem);

UOperatingSystemWorldSubsystem::UOperatingSystemWorldSubsystem()
	: RegisteredDeviceActors({})
	, UserManager(nullptr)
{
}

void UOperatingSystemWorldSubsystem::Initialize(FSubsystemCollectionBase& Collection)
{
	UserManager = UOperatingSystemUserManager::CreateUserManager();
	Super::Initialize(Collection);
}

UOperatingSystemWorldSubsystem* UOperatingSystemWorldSubsystem::Get(const UObject* WorldContextObject)
{
	const UWorld* World = WorldContextObject->GetWorld();
	return World->GetSubsystem<UOperatingSystemWorldSubsystem>();
}

void UOperatingSystemWorldSubsystem::RegisterDeviceActor(AOperatingSystemDeviceActor* DeviceActor)
{
	RegisteredDeviceActors.Emplace(DeviceActor);
}

void UOperatingSystemWorldSubsystem::UnregisterDeviceActor(AOperatingSystemDeviceActor* DeviceActor)
{
	RegisteredDeviceActors.RemoveSingleSwap(DeviceActor);
}

AOperatingSystemDeviceActor* UOperatingSystemWorldSubsystem::FindDeviceActorByTag(const FGameplayTag TestTag)
{
	if (!UOperatingSystemStatics::IsOperatingSystemTagValid(TestTag))
	{
		OS_LOG_ERROR(GameSubsystem, FString::Printf(TEXT("FindDeviceActorByTag failed because tag '%s' is not valid."), *InvalidTag.GetTag().ToString()));
		return nullptr;
	}

	for (const auto& It : RegisteredDeviceActors)
	{
		if (It.IsValid() && It->GetDeviceTag() == TestTag)
		{
			return It.Get();
		}
	}

	OS_LOG_WARN(GameSubsystem, FString::Printf(TEXT("Couldn't find Device Actor with Tag %s"), *TestTag.ToString()));
	return nullptr;
}

void UOperatingSystemWorldSubsystem::FindDeviceActorsByTag(const FGameplayTag TestTag, TArray<AOperatingSystemDeviceActor*>& OutDeviceActors)
{
	OutDeviceActors.Reset();
	if (!UOperatingSystemStatics::IsOperatingSystemTagValid(TestTag))
	{
		OS_LOG_ERROR(GameSubsystem, FString::Printf(TEXT("FindDeviceActorsByTag failed because tag '%s' is not valid."), *InvalidTag.GetTag().ToString()));
		return;
	}

	for (const auto& It : RegisteredDeviceActors)
	{
		if (It.IsValid() && It->GetDeviceTag() == TestTag)
		{
			OutDeviceActors.Emplace(It.Get());
		}
	}

	OS_CLOG_WARN(GameSubsystem, OutDeviceActors.IsEmpty(), FString::Printf(TEXT("Couldn't find Device Actors with Tag %s"), *TestTag.ToString()));
}

UOperatingSystemUserManager* UOperatingSystemWorldSubsystem::GetUserManager() const
{
	return UserManager;
}
