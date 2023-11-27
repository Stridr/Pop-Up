// Copyright 2023 - YetiTech Studios, Pvt Ltd. All Rights Reserved.

#pragma once

#include "Engine/DeveloperSettings.h"
#include "OperatingSystemPluginSettings.generated.h"

class UOperatingSystemUserManager;

UCLASS(Config = Game, DefaultConfig)
class UOperatingSystemPluginSettings : public UDeveloperSettings
{
	GENERATED_BODY()

	/** Scans these paths to find additional commands that should be added to Operating System Terminal. */
	UPROPERTY(Config, EditAnywhere, Category = OperatingSystemSettings, meta = (RelativeToGameContentDir, LongPackageName, ConfigRestartRequired = true))
	TArray<FDirectoryPath> AdditionalTerminalCommandsPath;

	UPROPERTY(Config, EditAnywhere, Category = OperatingSystemSettings)
	TSoftClassPtr<UOperatingSystemUserManager> UserManagerClass;

	/** Name for the save game slot to use for User Manager class. If empty, automatically falls back to using 'user_manager' */
	UPROPERTY(Config, EditAnywhere, Category = OperatingSystemSettings)
	FName UserManagerSaveSlotName;

public:

	UOperatingSystemPluginSettings();

	static const UOperatingSystemPluginSettings* Get();

#if WITH_EDITOR
	virtual void PreEditChange(FProperty* PropertyAboutToChange) override;
	virtual FName GetCategoryName() const override { return FName("Operating System"); }
	virtual FText GetSectionText() const override { return INVTEXT("Settings"); }
	FORCEINLINE const TArray<FDirectoryPath>& GetAdditionalTerminalCommandsDirectoryPath() const { return AdditionalTerminalCommandsPath; }
#endif

	TSoftClassPtr<UOperatingSystemUserManager> GetUserManagerClass() const;
	FString GetUserManagerSaveSlotName() const;
	
	FORCEINLINE TArray<FString> GetAdditionalTerminalCommandsPath() const
	{
		TArray<FString> ReturnPath;
		for (const auto& It : AdditionalTerminalCommandsPath)
		{
			ReturnPath.Emplace(It.Path);
		}

		return ReturnPath;
	}

	static FORCEINLINE TArray<FString> GetDefaultTerminalCommandPaths()
	{
		TArray<FString> DefaultPaths;
		DefaultPaths.Emplace("/Game/OperatingSystem/TerminalCommands");
		DefaultPaths.Emplace("/Game/TerminalCommands");
		return DefaultPaths;
	}
};
