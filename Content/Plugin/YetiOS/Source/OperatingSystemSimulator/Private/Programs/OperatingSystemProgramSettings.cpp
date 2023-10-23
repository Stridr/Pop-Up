// Copyright 2023 - YetiTech Studios, Pvt Ltd. All Rights Reserved.


#include "Programs/OperatingSystemProgramSettings.h"
#include "Programs/OperatingSystemBaseProgram.h"
#include "OperatingSystemMacros.h"
#include "Kismet/GameplayStatics.h"
#include "Core/OperatingSystem.h"
#include "Devices/OperatingSystemBaseDevice.h"
#include "Devices/OperatingSystemDeviceActor.h"
#include "OperatingSystemLogs.h"

DEFINE_OS_LOG(ProgramSettings);

UOperatingSystemProgramSettings::UOperatingSystemProgramSettings()
	: Identifier(NAME_None)
	, SaveSlotName("")
	, UserIndex(INDEX_NONE)
	, ParentProgram(nullptr)
{
	IMPLEMENTED_IN_BP_LAMBDA();

	CHECK_IN_BP(UOperatingSystemProgramSettings, CanSave)
	CHECK_IN_BP(UOperatingSystemProgramSettings, PreSave)
}

UOperatingSystemProgramSettings* UOperatingSystemProgramSettings::CreateSettings(const TWeakObjectPtr<UOperatingSystemBaseProgram> OwningProgram,
                                                                                 const TSoftClassPtr<UOperatingSystemProgramSettings>& SettingsSoftClass, FGenericError& OutError)
{
	if (OwningProgram->GetIdentifier().IsNone())
	{
		OutError = MAKE_ERROR("ERR_PROGRAM_SETTINGS", FString::Printf(TEXT("%s is missing identifier."), *OwningProgram->GetProgramName()));
		return nullptr;
	}

	const auto ProxySettings = NEW_SOFT_OBJ(UOperatingSystemProgramSettings, OwningProgram.Get(), SettingsSoftClass, Settings);
	ProxySettings->ParentProgram = OwningProgram;
	ProxySettings->Identifier = OwningProgram->GetIdentifier();
	ProxySettings->Internal_SetSaveSlotName();
	return ProxySettings;
}

UOperatingSystemProgramSettings* UOperatingSystemProgramSettings::LoadSettings(const TWeakObjectPtr<UOperatingSystemBaseProgram> OwningProgram)
{
	if (OwningProgram->GetSettingsClass().IsNull())
	{
		return nullptr;
	}

	auto ProxyLoadInstance = Cast<UOperatingSystemProgramSettings>(UGameplayStatics::CreateSaveGameObject(OwningProgram->GetSettingsClass().LoadSynchronous()));
	ProxyLoadInstance->Identifier = OwningProgram->GetIdentifier();
	ProxyLoadInstance->ParentProgram = OwningProgram;
	const auto LoadSlotName = OwningProgram->GetSaveSlotName();
	const auto LoadUserIndex = ProxyLoadInstance->UserIndex;

	ProxyLoadInstance->MarkAsGarbage();
	ProxyLoadInstance = nullptr;

	if (UGameplayStatics::DoesSaveGameExist(LoadSlotName, LoadUserIndex))
	{
		ProxyLoadInstance = Cast<UOperatingSystemProgramSettings>(UGameplayStatics::LoadGameFromSlot(LoadSlotName, LoadUserIndex));
		ProxyLoadInstance->Identifier = OwningProgram->GetIdentifier();
		ProxyLoadInstance->ParentProgram = OwningProgram;
		return ProxyLoadInstance;
	}

	return nullptr;
}

bool UOperatingSystemProgramSettings::SaveSettings(UOperatingSystemBaseProgram* TargetProgram)
{
	if (IsValid(TargetProgram) && TargetProgram->CanSaveSettings())
	{
		return TargetProgram->GetSettings()->Internal_SaveSettings();
	}

	return false;
}

bool UOperatingSystemProgramSettings::Internal_CanSave() const
{
	if (ParentProgram->GetIdentifier().IsNone())
	{
		OS_LOG_ERROR(ProgramSettings, FString::Printf(TEXT("Unable to save settings for %s. Identifier missing."), *ParentProgram->GetProgramName()));
		return false;
	}

	const AOperatingSystemDeviceActor& ParentDeviceActor = *ParentProgram->GetOperatingSystem()->GetParentDevice()->GetParentDeviceActor();
	bool bCanSave = ParentDeviceActor.CanSaveGame();
	if (bHasBlueprintCanSave && bCanSave)
	{
		bCanSave = K2_CanSave();
	}

	return bCanSave;
}

bool UOperatingSystemProgramSettings::Internal_SaveSettings()
{
	if (!Internal_CanSave())
	{
		OS_LOG_ERROR(ProgramSettings, FString::Printf(TEXT("Failed to save %s (%s). Class: %s"), *ParentProgram->GetProgramName(), *ParentProgram->GetIdentifier().ToString(), *GetName()));
		return false;
	}

	if (!bHasBlueprintPreSave)
	{
		OS_LOG_ERROR(ProgramSettings, FString::Printf(TEXT("Failed to save class %s (%s - %s) because K2_PreSave is not implemented."), *GetName(), *ParentProgram->GetProgramName(), *ParentProgram->GetIdentifier().ToString()));
		return false;
	}

	K2_PreSave();
	return UGameplayStatics::SaveGameToSlot(this, SaveSlotName, UserIndex);
}

void UOperatingSystemProgramSettings::Internal_SetSaveSlotName()
{
	SaveSlotName = ParentProgram->GetSaveSlotName();
}
