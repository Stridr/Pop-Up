// Copyright 2023 - YetiTech Studios, Pvt Ltd. All Rights Reserved.

#pragma once

#include "GameplayTagContainer.h"
#include "OperatingSystemDeviceMessenger.generated.h"

class UOperatingSystemBaseDevice;

DECLARE_DYNAMIC_DELEGATE_OneParam(FOperatingSystemDeviceMessageDelegate, UObject*, Payload);

class FOperatingSystemDeviceMessengerSystem : public TSharedFromThis<FOperatingSystemDeviceMessengerSystem, ESPMode::NotThreadSafe>
{
	TMap<FName, TArray<FOperatingSystemDeviceMessageDelegate>> MappedDelegates;

public:

	~FOperatingSystemDeviceMessengerSystem()
	{
		ClearAll();
	}

	void Broadcast(const FName& EventName, UObject* Payload);
	void BeginListening(const FName& ListenToEventName, const FOperatingSystemDeviceMessageDelegate& Callback);
	void StopListening(const FName& EventName);

	FORCEINLINE void ClearAll()
	{
		MappedDelegates.Empty();
		MappedDelegates.Compact();
		MappedDelegates.Shrink();
	}
};

typedef TSharedPtr<FOperatingSystemDeviceMessengerSystem, ESPMode::NotThreadSafe> FOperatingSystemDeviceMessengerSystemPtr;
typedef TSharedRef<FOperatingSystemDeviceMessengerSystem, ESPMode::NotThreadSafe> FOperatingSystemDeviceMessengerSystemRef;

UCLASS(MinimalAPI, Blueprintable, BlueprintType)
class UOperatingSystemDeviceMessenger : public UObject
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadOnly, Category = OperatingSystemDeviceMessenger, meta = (AllowPrivateAccess = true))
	TWeakObjectPtr<UOperatingSystemBaseDevice> ParentDevice;

	FOperatingSystemDeviceMessengerSystemPtr DeviceMessengerSystemPtr;

	uint8 bHasBlueprintOnConstructed : 1;
	uint8 bHasBlueprintOnMessengerBeginDestroy : 1;

public:

	UOperatingSystemDeviceMessenger();

	static UOperatingSystemDeviceMessenger* CreateMessenger(UOperatingSystemBaseDevice* NewDevice);

	void BeginDestroyMessenger();

	UFUNCTION(BlueprintCallable, Category = OperatingSystemDeviceMessenger)
	OPERATINGSYSTEMSIMULATOR_API void Broadcast(const FName EventName, UObject* Payload);

	UFUNCTION(BlueprintCallable, Category = OperatingSystemDeviceMessenger)
	OPERATINGSYSTEMSIMULATOR_API void BeginListening(const FName ListenToEventName, const FOperatingSystemDeviceMessageDelegate& Callback);

	UFUNCTION(BlueprintCallable, Category = OperatingSystemDeviceMessenger)
	OPERATINGSYSTEMSIMULATOR_API void StopListening(const FName EventName);

protected:

	OPERATINGSYSTEMSIMULATOR_API virtual void OnConstructed() {}
	OPERATINGSYSTEMSIMULATOR_API TWeakObjectPtr<UOperatingSystemBaseDevice> GetParentDevice() const;

	UFUNCTION(BlueprintImplementableEvent, Category = OperatingSystemDeviceMessenger, DisplayName = "On Constructed")
	void K2_OnConstructed();
	
	UFUNCTION(BlueprintImplementableEvent, Category = OperatingSystemDeviceMessenger, DisplayName = "On Messenger Begin Destroy")
	void K2_OnMessengerBeginDestroy();
};
