// Copyright 2023 - YetiTech Studios, Pvt Ltd. All Rights Reserved.

#pragma once

#include "GameplayTagContainer.h"
#include "Subsystems/WorldSubsystem.h"
#include "OperatingSystemWorldSubsystem.generated.h"

class UOperatingSystemBaseHardware;
class AOperatingSystemDeviceActor;

UCLASS()
class UOperatingSystemWorldSubsystem : public UWorldSubsystem
{
	GENERATED_BODY()

	UPROPERTY()
	TArray<TWeakObjectPtr<AOperatingSystemDeviceActor>> RegisteredDeviceActors;

public:

	UOperatingSystemWorldSubsystem();

	static UOperatingSystemWorldSubsystem* Get(const UObject* WorldContextObject);

	void RegisterDeviceActor(AOperatingSystemDeviceActor* DeviceActor);
	void UnregisterDeviceActor(AOperatingSystemDeviceActor* DeviceActor);
	
	AOperatingSystemDeviceActor* FindDeviceActorByTag(const FGameplayTag TestTag);
	void FindDeviceActorsByTag(const FGameplayTag TestTag, TArray<AOperatingSystemDeviceActor*>& OutDeviceActors);
};
