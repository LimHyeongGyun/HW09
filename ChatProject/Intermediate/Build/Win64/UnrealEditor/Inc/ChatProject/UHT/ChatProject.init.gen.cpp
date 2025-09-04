// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChatProject_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_ChatProject;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_ChatProject()
	{
		if (!Z_Registration_Info_UPackage__Script_ChatProject.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/ChatProject",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0xC09C30DA,
				0x32531E5F,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_ChatProject.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_ChatProject.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_ChatProject(Z_Construct_UPackage__Script_ChatProject, TEXT("/Script/ChatProject"), Z_Registration_Info_UPackage__Script_ChatProject, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xC09C30DA, 0x32531E5F));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
