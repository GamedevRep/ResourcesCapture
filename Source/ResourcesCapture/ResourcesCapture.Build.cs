// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class ResourcesCapture : ModuleRules
{
	public ResourcesCapture(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
