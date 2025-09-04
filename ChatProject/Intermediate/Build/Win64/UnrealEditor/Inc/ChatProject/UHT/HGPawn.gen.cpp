// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ChatProject/Public/Player/HGPawn.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHGPawn() {}

// Begin Cross Module References
CHATPROJECT_API UClass* Z_Construct_UClass_AHGPawn();
CHATPROJECT_API UClass* Z_Construct_UClass_AHGPawn_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APawn();
UPackage* Z_Construct_UPackage__Script_ChatProject();
// End Cross Module References

// Begin Class AHGPawn
void AHGPawn::StaticRegisterNativesAHGPawn()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AHGPawn);
UClass* Z_Construct_UClass_AHGPawn_NoRegister()
{
	return AHGPawn::StaticClass();
}
struct Z_Construct_UClass_AHGPawn_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Player/HGPawn.h" },
		{ "ModuleRelativePath", "Public/Player/HGPawn.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHGPawn>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AHGPawn_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APawn,
	(UObject* (*)())Z_Construct_UPackage__Script_ChatProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AHGPawn_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AHGPawn_Statics::ClassParams = {
	&AHGPawn::StaticClass,
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
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AHGPawn_Statics::Class_MetaDataParams), Z_Construct_UClass_AHGPawn_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AHGPawn()
{
	if (!Z_Registration_Info_UClass_AHGPawn.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AHGPawn.OuterSingleton, Z_Construct_UClass_AHGPawn_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AHGPawn.OuterSingleton;
}
template<> CHATPROJECT_API UClass* StaticClass<AHGPawn>()
{
	return AHGPawn::StaticClass();
}
AHGPawn::AHGPawn(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AHGPawn);
AHGPawn::~AHGPawn() {}
// End Class AHGPawn

// Begin Registration
struct Z_CompiledInDeferFile_FID_ChatProject_Source_ChatProject_Public_Player_HGPawn_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AHGPawn, AHGPawn::StaticClass, TEXT("AHGPawn"), &Z_Registration_Info_UClass_AHGPawn, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AHGPawn), 2369909153U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ChatProject_Source_ChatProject_Public_Player_HGPawn_h_426730435(TEXT("/Script/ChatProject"),
	Z_CompiledInDeferFile_FID_ChatProject_Source_ChatProject_Public_Player_HGPawn_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ChatProject_Source_ChatProject_Public_Player_HGPawn_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
