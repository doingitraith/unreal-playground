// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class UnrealPlayground : ModuleRules
{
	public UnrealPlayground(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
