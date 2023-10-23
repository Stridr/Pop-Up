// Copyright 2023 - Satheesh (ryanjon2040). All Rights Reserved.

using UnrealBuildTool;

public class OperatingSystemJSON : ModuleRules
{
    public OperatingSystemJSON(ReadOnlyTargetRules Target) : base(Target)
    {
        PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicDependencyModuleNames.AddRange(new string[] {"Core", "JsonUtilities"});
        PrivateDependencyModuleNames.AddRange(new string[] {"CoreUObject", "Engine", "Json"});
    }
}