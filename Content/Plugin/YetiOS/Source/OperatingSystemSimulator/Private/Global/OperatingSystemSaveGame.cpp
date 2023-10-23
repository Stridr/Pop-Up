// Copyright 2023 - YetiTech Studios, Pvt Ltd. All Rights Reserved.

#include "Global/OperatingSystemSaveGame.h"
#include "Devices/OperatingSystemBaseDevice.h"
#include "OperatingSystemLogs.h"
#include "Devices/OperatingSystemDeviceActor.h"
#include "Kismet/GameplayStatics.h"
#include "Core/OperatingSystem.h"
#include "Core/OperatingSystemDirectory.h"
#include "Hardware/OperatingSystemHDD.h"
#include "Core/OperatingSystemPartition.h"
#include "Programs/OperatingSystemBaseProgram.h"

static constexpr const float SAVE_VERSION = 3.2;

DEFINE_OS_LOG(Save)

UOperatingSystemSaveGame::UOperatingSystemSaveGame() 
	: UserIndex(0)
	, SaveVersion(3.0)
{

}

bool UOperatingSystemSaveGame::SaveGame(const UOperatingSystemBaseDevice* NewSaveDevice)
{
	if (!IsValid(NewSaveDevice))
	{
		OS_LOG_ERROR(Save, "Save game failed. Save Device was not valid.");
		return false;
	}

	if (NewSaveDevice->GetSaveGameClass().IsNull())
	{
		OS_LOG_ERROR(Save, "Save game failed. Save Device was valid but it didn't provide a valid save game class.");
		return false;
	}

	const auto SaveDeviceActor = NewSaveDevice->GetParentDeviceActor();
	if (!IsValid(SaveDeviceActor))
	{
		OS_LOG_ERROR(Save, FString::Printf(TEXT("Save game failed. %s is missing a valid parent actor."), *NewSaveDevice->GetDeviceName().ToString()));
		return false;
	}

	if (!SaveDeviceActor->CanSaveGame())
	{
		OS_LOG_ERROR(Save, FString::Printf(TEXT("Save game failed. %s is set NOT to save game."), *SaveDeviceActor->GetName()));
		return false;
	}

	UOperatingSystemSaveGame* SaveGameInstance = Internal_CreateSaveGame(NewSaveDevice->GetSaveGameClass());
	SaveGameInstance->SaveVersion = SAVE_VERSION;
	SaveGameInstance->DeviceData.bSaveLoad_OperatingSystemInstalled = NewSaveDevice->IsOperatingSystemInstalled();
	const auto CurrentOperatingSystem = NewSaveDevice->GetCurrentOperatingSystem();

	if (!IsValid(CurrentOperatingSystem))
	{
		OS_LOG_ERROR(Save, FString::Printf(TEXT("Save game failed. Operating system not valid for %s"), *NewSaveDevice->GetName()));
		return false;
	}

	const auto StartTime = FPlatformTime::Seconds();

	const auto HDD = NewSaveDevice->GetHardwareByTag<UOperatingSystemHDD>(HddTag);
	const auto& Partitions = HDD->GetPartitions();

	// Save all our partitions
	for (const auto& It : Partitions)
	{
		auto& PartitionSaveData = SaveGameInstance->DeviceData.SaveLoad_Partitions.Emplace_GetRef(It->GetNewPartitionSaveLoad());
		const auto& PartitionDirectories = It->GetChildDirectories();

		// Save each directory (including files) inside current partition
		for (const auto& Dir : PartitionDirectories)
		{
			Dir->GetSaveData(PartitionSaveData.SaveLoad_Directories);
		}
	}
	
	auto& OsSaveLoad = SaveGameInstance->DeviceData.SaveLoad_OperatingSystem;
	OsSaveLoad.SaveLoad_Version = CurrentOperatingSystem->GetOperatingSystemVersion();
	OsSaveLoad.bIsStartingForTheFirstTime = CurrentOperatingSystem->IsStartingForTheFirstTime();
	OsSaveLoad.SaveLoad_PartitionID = CurrentOperatingSystem->GetPartitionID().ToString();
	OsSaveLoad.SaveLoad_OperatingSystemName = CurrentOperatingSystem->GetOperatingSystemName().ToString();
	OsSaveLoad.SaveLoad_OperatingSystemID = UOperatingSystem::GetOperatingSystemUniqueID(CurrentOperatingSystem);
	OsSaveLoad.SaveLoad_DeviceName = CurrentOperatingSystem->GetDeviceName().ToString();
	OsSaveLoad.bAutoLogin = CurrentOperatingSystem->CanAutoLogin();

	const auto& InstalledPrograms = CurrentOperatingSystem->GetInstalledPrograms();
	for (const auto& It : InstalledPrograms)
	{
		if (It->IsSystemInstalledProgram())
		{
			// Do not save system installed programs
			// as they are always added when starting operating system because you know...they are "system installed" ¯\_(ツ)_/¯
			continue;
		}
		
		auto& ProgramSaveLoad = OsSaveLoad.InstalledPrograms.Emplace_GetRef();
		ProgramSaveLoad.ClassPath = TSoftClassPtr<UOperatingSystemBaseProgram>(It->GetClass()).ToString();
		ProgramSaveLoad.PartitionID = It->GetParentPartition()->GetPartitionID().ToString();
	}

	OS_LOG(Save, FString::Printf(TEXT("Took %.5f seconds to collect save data for %s"), FPlatformTime::Seconds() - StartTime, *CurrentOperatingSystem->GetOperatingSystemName().ToString()));

	return UGameplayStatics::SaveGameToSlot(SaveGameInstance, Internal_GetSaveSlotName(*NewSaveDevice), SaveGameInstance->UserIndex);
}

UOperatingSystemSaveGame* UOperatingSystemSaveGame::LoadGame(const UOperatingSystemBaseDevice* TargetDevice)
{
	auto Local_SaveLoadInstance = Internal_CreateSaveGame(TargetDevice->GetSaveGameClass());
	if (!IsValid(Local_SaveLoadInstance))
	{
		OS_LOG_ERROR(Save, FString::Printf(TEXT("Load game failed. Load game instance failed. %s"), *TargetDevice->GetName()));
		return nullptr;
	}

	const auto Local_SaveSlotName = Internal_GetSaveSlotName(*TargetDevice);
	const auto Local_UserIndex = Local_SaveLoadInstance->UserIndex;
	Local_SaveLoadInstance->MarkAsGarbage();
	Local_SaveLoadInstance = nullptr;

	if (UGameplayStatics::DoesSaveGameExist(Local_SaveSlotName, Local_UserIndex))
	{
		Local_SaveLoadInstance = Cast<UOperatingSystemSaveGame>(UGameplayStatics::LoadGameFromSlot(Local_SaveSlotName, Local_UserIndex));
		if (Local_SaveLoadInstance->SaveVersion < SAVE_VERSION)
		{
			OS_LOG_ERROR(Save, FString::Printf(TEXT("Load game failed for %s. Expected: %.2f, Found: %.2f"), *TargetDevice->GetName(), SAVE_VERSION, Local_SaveLoadInstance->SaveVersion));
			Local_SaveLoadInstance->MarkAsGarbage();
			Local_SaveLoadInstance = nullptr;
		}
	}

	OS_CLOG(Save, IsValid(Local_SaveLoadInstance), "Loaded save game successfully.");

	return Local_SaveLoadInstance;
}

UOperatingSystemSaveGame* UOperatingSystemSaveGame::Internal_CreateSaveGame(const TSoftClassPtr<UOperatingSystemSaveGame>& InSoftClass)
{
	return Cast<UOperatingSystemSaveGame>(UGameplayStatics::CreateSaveGameObject(InSoftClass.LoadSynchronous()));
}

FString UOperatingSystemSaveGame::Internal_GetSaveSlotName(const UOperatingSystemBaseDevice& TargetDevice)
{
	const auto DeviceActor = TargetDevice.GetParentDeviceActor();
	return DeviceActor->GetDeviceActorUniqueID();
}
