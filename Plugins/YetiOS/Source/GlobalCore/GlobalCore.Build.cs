// Copyright 2023 - YetiTech Studios, Pvt Ltd. All Rights Reserved.

using UnrealBuildTool;

public class GlobalCore : ModuleRules
{
    public GlobalCore(ReadOnlyTargetRules Target) : base(Target)
    {
        PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicDependencyModuleNames.AddRange(new string[] { "Core" });

        if (BuildVersion.TryRead(BuildVersion.GetDefaultFileName(), out var version))
        {
            var EngineVersion = version.MajorVersion * 100 + version.MinorVersion;
            PublicDefinitions.Add("OS_UNREAL_VERSION=" + EngineVersion);
            System.Console.WriteLine(string.Format("Operating System Simulator compiling for Unreal Engine {0}.{1} ({2}). Configuration: {3}.", version.MajorVersion, version.MinorVersion, EngineVersion, Target.Configuration.ToString()));
        }
        else
        {
            throw new BuildException("Failed to read Build Version. Global Core will not compile.");
        }
    }
}