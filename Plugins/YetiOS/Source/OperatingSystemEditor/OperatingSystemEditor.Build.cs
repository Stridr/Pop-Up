// Copyright 2023 - YetiTech Studios, Pvt Ltd. All Rights Reserved.

using UnrealBuildTool;

public class OperatingSystemEditor : ModuleRules
{
    public OperatingSystemEditor(ReadOnlyTargetRules Target) : base(Target)
    {
        PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicDependencyModuleNames.AddRange(new string[] { "Core" });
        PrivateDependencyModuleNames.AddRange(new string[] {"CoreUObject", "Engine", "Slate", "SlateCore",
            "InputCore",
            "MessageLog",
            "UnrealEd",
            "OperatingSystemSimulator"
        });
    }
}