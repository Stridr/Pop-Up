// Copyright 2023 - YetiTech Studios, Pvt Ltd. All Rights Reserved.

#include "OperatingSystemPluginSettings.h"
#include "OperatingSystemSimulatorModule.h"
#include "Core/OperatingSystemUserManager.h"

static const FName UserManagerFallbackSaveSlotName = FName("user_manager");

UOperatingSystemPluginSettings::UOperatingSystemPluginSettings()
	: UserManagerClass(UOperatingSystemUserManager::StaticClass())
	, UserManagerSaveSlotName(UserManagerFallbackSaveSlotName)
{
	auto DefaultPaths = GetDefaultTerminalCommandPaths();
	
	FDirectoryPath Path1;
	Path1.Path = DefaultPaths[0];
	AdditionalTerminalCommandsPath.Emplace(Path1);

	FDirectoryPath Path2;
	Path2.Path = DefaultPaths[1];
	AdditionalTerminalCommandsPath.Emplace(Path2);
}

const UOperatingSystemPluginSettings* UOperatingSystemPluginSettings::Get()
{
	return GetDefault<UOperatingSystemPluginSettings>();
}

#if WITH_EDITOR
void UOperatingSystemPluginSettings::PreEditChange(FProperty* PropertyAboutToChange)
{
	Super::PreEditChange(PropertyAboutToChange);
	if (PropertyAboutToChange->GetFName() == GET_MEMBER_NAME_CHECKED(UOperatingSystemPluginSettings, AdditionalTerminalCommandsPath))
	{
		FOperatingSystemSimulatorModule::ClearCookEntries(AdditionalTerminalCommandsPath);
	}
}
#endif

TSoftClassPtr<UOperatingSystemUserManager> UOperatingSystemPluginSettings::GetUserManagerClass() const
{
	if (UserManagerClass.IsNull())
	{
		return UOperatingSystemUserManager::StaticClass();
	}

	return UserManagerClass;
}

FString UOperatingSystemPluginSettings::GetUserManagerSaveSlotName() const
{
	if (UserManagerSaveSlotName.IsNone())
	{
		return UserManagerFallbackSaveSlotName.ToString();
	}

	return UserManagerSaveSlotName.ToString();
}
