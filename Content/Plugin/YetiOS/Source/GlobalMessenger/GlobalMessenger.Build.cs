// Copyright 2023 - YetiTech Studios, Pvt Ltd. All Rights Reserved.

using UnrealBuildTool;

public class GlobalMessenger : ModuleRules
{
    public GlobalMessenger(ReadOnlyTargetRules Target) : base(Target)
    {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicDependencyModuleNames.AddRange(new string[] { "Core"});
        PrivateDependencyModuleNames.AddRange(new string[] { "CoreUObject", "Engine", "GameplayTags" });
        if (Target.bUseGameplayDebugger)
        {
            PrivateDependencyModuleNames.Add("GameplayDebugger");
        }
        else
        {
            PublicDefinitions.Add("WITH_GAMEPLAY_DEBUGGER=0");
        }
    }
}