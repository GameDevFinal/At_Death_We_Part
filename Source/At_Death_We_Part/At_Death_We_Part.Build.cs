// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class At_Death_We_Part : ModuleRules
{
	public At_Death_We_Part(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
