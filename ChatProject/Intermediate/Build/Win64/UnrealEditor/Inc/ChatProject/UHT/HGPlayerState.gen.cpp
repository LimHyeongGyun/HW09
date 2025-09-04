// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ChatProject/Public/Player/HGPlayerState.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHGPlayerState() {}

// Begin Cross Module References
CHATPROJECT_API UClass* Z_Construct_UClass_AHGPlayerState();
CHATPROJECT_API UClass* Z_Construct_UClass_AHGPlayerState_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APlayerState();
UPackage* Z_Construct_UPackage__Script_ChatProject();
// End Cross Module References

// Begin Class AHGPlayerState
void AHGPlayerState::StaticRegisterNativesAHGPlayerState()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AHGPlayerState);
UClass* Z_Construct_UClass_AHGPlayerState_NoRegister()
{
	return AHGPlayerState::StaticClass();
}
struct Z_Construct_UClass_AHGPlayerState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Player/HGPlayerState.h" },
		{ "ModuleRelativePath", "Public/Player/HGPlayerState.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerNameString_MetaData[] = {
		{ "ModuleRelativePath", "Public/Player/HGPlayerState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentGuessCount_MetaData[] = {
		{ "ModuleRelativePath", "Public/Player/HGPlayerState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxGuessCount_MetaData[] = {
		{ "ModuleRelativePath", "Public/Player/HGPlayerState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_PlayerNameString;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentGuessCount;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxGuessCount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHGPlayerState>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AHGPlayerState_Statics::NewProp_PlayerNameString = { "PlayerNameString", nullptr, (EPropertyFlags)0x0010000000000020, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHGPlayerState, PlayerNameString), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerNameString_MetaData), NewProp_PlayerNameString_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AHGPlayerState_Statics::NewProp_CurrentGuessCount = { "CurrentGuessCount", nullptr, (EPropertyFlags)0x0010000000000020, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHGPlayerState, CurrentGuessCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentGuessCount_MetaData), NewProp_CurrentGuessCount_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AHGPlayerState_Statics::NewProp_MaxGuessCount = { "MaxGuessCount", nullptr, (EPropertyFlags)0x0010000000000020, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHGPlayerState, MaxGuessCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxGuessCount_MetaData), NewProp_MaxGuessCount_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AHGPlayerState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHGPlayerState_Statics::NewProp_PlayerNameString,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHGPlayerState_Statics::NewProp_CurrentGuessCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHGPlayerState_Statics::NewProp_MaxGuessCount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AHGPlayerState_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AHGPlayerState_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerState,
	(UObject* (*)())Z_Construct_UPackage__Script_ChatProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AHGPlayerState_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AHGPlayerState_Statics::ClassParams = {
	&AHGPlayerState::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AHGPlayerState_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AHGPlayerState_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AHGPlayerState_Statics::Class_MetaDataParams), Z_Construct_UClass_AHGPlayerState_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AHGPlayerState()
{
	if (!Z_Registration_Info_UClass_AHGPlayerState.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AHGPlayerState.OuterSingleton, Z_Construct_UClass_AHGPlayerState_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AHGPlayerState.OuterSingleton;
}
template<> CHATPROJECT_API UClass* StaticClass<AHGPlayerState>()
{
	return AHGPlayerState::StaticClass();
}
void AHGPlayerState::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_PlayerNameString(TEXT("PlayerNameString"));
	static const FName Name_CurrentGuessCount(TEXT("CurrentGuessCount"));
	static const FName Name_MaxGuessCount(TEXT("MaxGuessCount"));
	const bool bIsValid = true
		&& Name_PlayerNameString == ClassReps[(int32)ENetFields_Private::PlayerNameString].Property->GetFName()
		&& Name_CurrentGuessCount == ClassReps[(int32)ENetFields_Private::CurrentGuessCount].Property->GetFName()
		&& Name_MaxGuessCount == ClassReps[(int32)ENetFields_Private::MaxGuessCount].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AHGPlayerState"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AHGPlayerState);
AHGPlayerState::~AHGPlayerState() {}
// End Class AHGPlayerState

// Begin Registration
struct Z_CompiledInDeferFile_FID_ChatProject_Source_ChatProject_Public_Player_HGPlayerState_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AHGPlayerState, AHGPlayerState::StaticClass, TEXT("AHGPlayerState"), &Z_Registration_Info_UClass_AHGPlayerState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AHGPlayerState), 2541985260U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ChatProject_Source_ChatProject_Public_Player_HGPlayerState_h_2052845722(TEXT("/Script/ChatProject"),
	Z_CompiledInDeferFile_FID_ChatProject_Source_ChatProject_Public_Player_HGPlayerState_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ChatProject_Source_ChatProject_Public_Player_HGPlayerState_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
