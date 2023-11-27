// Copyright 2023 - YetiTech Studios, Pvt Ltd. All Rights Reserved.

using UnrealBuildTool;

public class ViewportWorlds : ModuleRules
{
    public ViewportWorlds(ReadOnlyTargetRules Target) : base(Target)
    {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicDependencyModuleNames.AddRange(new string[] { "Core", "InputCore", "CommonUI"});
        PrivateDependencyModuleNames.AddRange(new string[] {"CoreUObject", "Engine", 
            "Slate", 
            "SlateCore", 
            "UMG", 
            "RenderCore", 
            "RHI", 
            "EnhancedInput",
            "ApplicationCore",
            "DeveloperSettings",
            "GlobalCore"
        });
    }
}