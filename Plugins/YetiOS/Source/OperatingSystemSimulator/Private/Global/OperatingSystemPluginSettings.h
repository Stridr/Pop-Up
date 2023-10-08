// Copyright 2023 - YetiTech Studios, Pvt Ltd. All Rights Reserved.

#pragma once

#include "Engine/DeveloperSettings.h"
#include "OperatingSystemPluginSettings.generated.h"

/**
 * 
 */
UCLASS(Config = Game, DefaultConfig)
class UOperatingSystemPluginSettings : public UDeveloperSettings
{
	GENERATED_BODY()

	/** Scans these paths to find additional commands that should be added to Operating System Terminal. */
	UPROPERTY(Config, EditAnywhere, Category = OperatingSystemSettings, meta = (RelativeToGameContentDir, LongPackageName, ConfigRestartRequired = true))
	TArray<FDirectoryPath> AdditionalTerminalCommandsPath;

public:

	UOperatingSystemPluginSettings();

	static const UOperatingSystemPluginSettings* Get();

#if WITH_EDITOR
	virtual void PreEditChange(FProperty* PropertyAboutToChange) override;
	virtual FName GetCategoryName() const override { return FName("Operating System"); }
	virtual FText GetSectionText() const override { return INVTEXT("Settings"); }
	FORCEINLINE const TArray<FDirectoryPath>& GetAdditionalTerminalCommandsDirectoryPath() const { return AdditionalTerminalCommandsPath; }
#endif

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
