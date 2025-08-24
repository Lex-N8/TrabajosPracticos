// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class TareaProgramacion : ModuleRules
{
	public TareaProgramacion(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] {
			"Core",
			"CoreUObject",
			"Engine",
			"InputCore",
			"EnhancedInput",
			"AIModule",
			"StateTreeModule",
			"GameplayStateTreeModule",
			"UMG",
			"Slate"
		});

		PrivateDependencyModuleNames.AddRange(new string[] { });

		PublicIncludePaths.AddRange(new string[] {
			"TareaProgramacion",
			"TareaProgramacion/Variant_Platforming",
			"TareaProgramacion/Variant_Platforming/Animation",
			"TareaProgramacion/Variant_Combat",
			"TareaProgramacion/Variant_Combat/AI",
			"TareaProgramacion/Variant_Combat/Animation",
			"TareaProgramacion/Variant_Combat/Gameplay",
			"TareaProgramacion/Variant_Combat/Interfaces",
			"TareaProgramacion/Variant_Combat/UI",
			"TareaProgramacion/Variant_SideScrolling",
			"TareaProgramacion/Variant_SideScrolling/AI",
			"TareaProgramacion/Variant_SideScrolling/Gameplay",
			"TareaProgramacion/Variant_SideScrolling/Interfaces",
			"TareaProgramacion/Variant_SideScrolling/UI"
		});

		// Uncomment if you are using Slate UI
		// PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });

		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
	}
}
