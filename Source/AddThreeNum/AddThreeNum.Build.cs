using UnrealBuildTool;

public class AddThreeNum : ModuleRules
{
	public AddThreeNum(TargetInfo Target)
	{
		PublicIncludePaths.AddRange(new string[] {"AddThreeNum/Public"});
		PrivateIncludePaths.AddRange(new string[] {"AddThreeNum/Private"});
		PublicDependencyModuleNames.AddRange(new string[]{"Core"});
		PrivateDependencyModuleNames.AddRange(new string[]{"CoreUObject","Engine","Slate","SlateCore"});
	}
}
