// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ChatProject/Public/Game/HGGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHGGameModeBase() {}

// Begin Cross Module References
CHATPROJECT_API UClass* Z_Construct_UClass_AHGGameModeBase();
CHATPROJECT_API UClass* Z_Construct_UClass_AHGGameModeBase_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UPackage* Z_Construct_UPackage__Script_ChatProject();
// End Cross Module References

// Begin Class AHGGameModeBase
void AHGGameModeBase::StaticRegisterNativesAHGGameModeBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AHGGameModeBase);
UClass* Z_Construct_UClass_AHGGameModeBase_NoRegister()
{
	return AHGGameModeBase::StaticClass();
}
struct Z_Construct_UClass_AHGGameModeBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Game/HGGameModeBase.h" },
		{ "ModuleRelativePath", "Public/Game/HGGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHGGameModeBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AHGGameModeBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_ChatProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AHGGameModeBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AHGGameModeBase_Statics::ClassParams = {
	&AHGGameModeBase::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AHGGameModeBase_Statics::Class_MetaDataParams), Z_Construct_UClass_AHGGameModeBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AHGGameModeBase()
{
	if (!Z_Registration_Info_UClass_AHGGameModeBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AHGGameModeBase.OuterSingleton, Z_Construct_UClass_AHGGameModeBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AHGGameModeBase.OuterSingleton;
}
template<> CHATPROJECT_API UClass* StaticClass<AHGGameModeBase>()
{
	return AHGGameModeBase::StaticClass();
}
AHGGameModeBase::AHGGameModeBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AHGGameModeBase);
AHGGameModeBase::~AHGGameModeBase() {}
// End Class AHGGameModeBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_ChatProject_Source_ChatProject_Public_Game_HGGameModeBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AHGGameModeBase, AHGGameModeBase::StaticClass, TEXT("AHGGameModeBase"), &Z_Registration_Info_UClass_AHGGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AHGGameModeBase), 1856183549U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ChatProject_Source_ChatProject_Public_Game_HGGameModeBase_h_2508226163(TEXT("/Script/ChatProject"),
	Z_CompiledInDeferFile_FID_ChatProject_Source_ChatProject_Public_Game_HGGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ChatProject_Source_ChatProject_Public_Game_HGGameModeBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
