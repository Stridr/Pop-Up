// Copyright 2023 - YetiTech Studios, Pvt Ltd. All Rights Reserved.

#pragma once

#include "GameFramework/SaveGame.h"
#include "OperatingSystemTypes.h"
#include "Devices/OperatingSystemBaseDevice.h"
#include "OperatingSystemSaveGame.generated.h"

class UOperatingSystemBaseDevice;

/**
 * 
 */
UCLASS(Blueprintable, NotBlueprintType)
class OPERATINGSYSTEMSIMULATOR_API UOperatingSystemSaveGame : public USaveGame
{
	GENERATED_BODY()
	
protected:

	UPROPERTY(EditDefaultsOnly, Category = OperatingSystemSaveGame)
	uint8 UserIndex;

	/** Static save version. DO NOT CHANGE if not required. Newer save versions are NOT compatible with previous ones. */
	UPROPERTY(VisibleAnywhere, Category = OperatingSystemSaveGame)
	float SaveVersion;

	UPROPERTY()
	FOperatingSystemDeviceSaveLoad DeviceData;

public:

	UOperatingSystemSaveGame();

	static bool SaveGame(const UOperatingSystemBaseDevice* NewSaveDevice);
	static UOperatingSystemSaveGame* LoadGame(const UOperatingSystemBaseDevice* TargetDevice);

private:

	static UOperatingSystemSaveGame* Internal_CreateSaveGame(const TSoftClassPtr<UOperatingSystemSaveGame>& InSoftClass);
	static FORCEINLINE FString Internal_GetSaveSlotName(const UOperatingSystemBaseDevice& TargetDevice);

public:

	FORCEINLINE const FOperatingSystemDeviceSaveLoad& GetDeviceDataRef() const { return DeviceData; }
};
