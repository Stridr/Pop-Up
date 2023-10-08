// Copyright 2023 - YetiTech Studios, Pvt Ltd. All Rights Reserved.

#include "OperatingSystemSimulatorModule.h"
#include "OperatingSystemLogs.h"

#if WITH_EDITOR
#include "Global/OperatingSystemPluginSettings.h"
#include "Settings/ProjectPackagingSettings.h"
#endif

#define LOCTEXT_NAMESPACE "FOperatingSystemSimulatorModule"

DEFINE_OS_LOG(Module);

void FOperatingSystemSimulatorModule::StartupModule()
{
	OS_LOG(Module, "Operating System Module started");

#if WITH_EDITOR
	SetupDirectoriesToCook(UOperatingSystemPluginSettings::Get()->GetAdditionalTerminalCommandsDirectoryPath());
#endif
}

void FOperatingSystemSimulatorModule::ShutdownModule()
{
	OS_LOG(Module, "Operating System Module shutdown");
}

#if WITH_EDITOR
void FOperatingSystemSimulatorModule::ClearCookEntries(const TArray<FDirectoryPath>& PathsToRemove)
{
	const auto PackagingSettings = Cast<UProjectPackagingSettings>(UProjectPackagingSettings::StaticClass()->GetDefaultObject());
	TArray<FDirectoryPath>& DirectoriesToCook = PackagingSettings->DirectoriesToAlwaysCook;
	
	auto Paths = UOperatingSystemPluginSettings::GetDefaultTerminalCommandPaths();
	for (const auto& It : PathsToRemove)
	{
		Paths.Emplace(It.Path);
	}
	
	for (const auto& It : Paths)
	{
		for (int i = DirectoriesToCook.Num() - 1; i >= 0; --i)
		{
			if (FPaths::IsSamePath(DirectoriesToCook[i].Path, It))
			{
				DirectoriesToCook.RemoveAt(i);
			}
		}
	}
}

void FOperatingSystemSimulatorModule::SetupDirectoriesToCook(const TArray<FDirectoryPath>& AdditionalPaths)
{
	if (!AdditionalPaths.IsEmpty())
	{
		bool bPathAdded = false;
		const auto PackagingSettings = Cast<UProjectPackagingSettings>(UProjectPackagingSettings::StaticClass()->GetDefaultObject());
		TArray<FDirectoryPath>& DirectoriesToCook = PackagingSettings->DirectoriesToAlwaysCook;
		
		for (const auto& It : AdditionalPaths)
		{
			if (It.Path.IsEmpty())
			{
				continue;
			}
			
			for (int i = DirectoriesToCook.Num() - 1; i >= 0; --i)
			{
				if (FPaths::IsSamePath(DirectoriesToCook[i].Path, It.Path))
				{
					bPathAdded = true;
					break;
				}
			}

			if (!bPathAdded)
			{
				FDirectoryPath NewPath;
				NewPath.Path = It.Path;
				PackagingSettings->DirectoriesToAlwaysCook.Emplace(NewPath);

				OS_LOG(Module, FString::Printf(TEXT("Path added to cook: %s"), *NewPath.Path));
			}
		}
	}
}
#endif

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FOperatingSystemSimulatorModule, OperatingSystemSimulator)
