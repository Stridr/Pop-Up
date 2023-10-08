// Copyright 2023 - YetiTech Studios, Pvt Ltd. All Rights Reserved.

using UnrealBuildTool;

public class GlobalMessengerEditor : ModuleRules
{
    public GlobalMessengerEditor(ReadOnlyTargetRules Target) : base(Target)
    {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        
        PublicDependencyModuleNames.AddRange(new string[] { "Core"});
        PrivateDependencyModuleNames.AddRange(new string[] { "CoreUObject", "Engine", "GameplayDebugger", 
            "GlobalMessenger" });
    }
}