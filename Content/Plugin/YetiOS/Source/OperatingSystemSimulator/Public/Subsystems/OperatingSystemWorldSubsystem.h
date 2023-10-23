// Copyright 2023 - YetiTech Studios, Pvt Ltd. All Rights Reserved.

#pragma once

#include "GameplayTagContainer.h"
#include "Subsystems/WorldSubsystem.h"
#include "OperatingSystemWorldSubsystem.generated.h"

class UOperatingSystemBaseHardware;
class UOperatingSystemUserManager;
class AOperatingSystemDeviceActor;

UCLASS()
class UOperatingSystemWorldSubsystem : public UWorldSubsystem
{
	GENERATED_BODY()

	UPROPERTY()
	TArray<TWeakObjectPtr<AOperatingSystemDeviceActor>> RegisteredDeviceActors;

	UPROPERTY()
	TObjectPtr<UOperatingSystemUserManager> UserManager;

public:

	UOperatingSystemWorldSubsystem();

	virtual void Initialize(FSubsystemCollectionBase& Collection) override;

	static UOperatingSystemWorldSubsystem* Get(const UObject* WorldContextObject);

	void RegisterDeviceActor(AOperatingSystemDeviceActor* DeviceActor);
	void UnregisterDeviceActor(AOperatingSystemDeviceActor* DeviceActor);
	
	AOperatingSystemDeviceActor* FindDeviceActorByTag(const FGameplayTag TestTag);
	void FindDeviceActorsByTag(const FGameplayTag TestTag, TArray<AOperatingSystemDeviceActor*>& OutDeviceActors);

	UOperatingSystemUserManager* GetUserManager() const;
};
