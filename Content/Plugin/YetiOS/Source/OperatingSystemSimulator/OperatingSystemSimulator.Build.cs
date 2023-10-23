// Copyright 2023 - YetiTech Studios, Pvt Ltd. All Rights Reserved.

using UnrealBuildTool;

public class OperatingSystemSimulator : ModuleRules
{
	public OperatingSystemSimulator(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;
		PublicDependencyModuleNames.AddRange(new string[] { "Core"});
		PrivateDependencyModuleNames.AddRange(new string[] { "CoreUObject", "Engine", "Slate", "SlateCore",
			"GlobalCore",
			"DeveloperSettings",
			"DraggableWindowUMG",
			"GlobalMessenger",
			"GameplayTags",
			"UMG", 
			"CommonUI",
			"OperatingSystemJSON",
			"Json",
			"JsonUtilities"
		});

		if (Target.bBuildEditor)
		{
			PrivateDependencyModuleNames.AddRange(new string[] {"DeveloperToolSettings"});
		}
	}
}
