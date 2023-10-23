// Copyright 2023 - YetiTech Studios, Pvt Ltd. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"

class FOperatingSystemSimulatorModule : public IModuleInterface
{
public:

	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;

#if WITH_EDITOR
	static void ClearCookEntries(const TArray<FDirectoryPath>& PathsToRemove);
	static void SetupDirectoriesToCook(const TArray<FDirectoryPath>& AdditionalPaths);
#endif
};
