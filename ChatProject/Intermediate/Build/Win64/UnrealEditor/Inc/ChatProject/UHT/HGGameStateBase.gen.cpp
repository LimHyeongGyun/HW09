// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ChatProject/Public/Game/HGGameStateBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHGGameStateBase() {}

// Begin Cross Module References
CHATPROJECT_API UClass* Z_Construct_UClass_AHGGameStateBase();
CHATPROJECT_API UClass* Z_Construct_UClass_AHGGameStateBase_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AGameStateBase();
UPackage* Z_Construct_UPackage__Script_ChatProject();
// End Cross Module References

// Begin Class AHGGameStateBase Function MulticastRPCBroadcastLoginMessage
struct HGGameStateBase_eventMulticastRPCBroadcastLoginMessage_Parms
{
	FString InNameString;
};
static const FName NAME_AHGGameStateBase_MulticastRPCBroadcastLoginMessage = FName(TEXT("MulticastRPCBroadcastLoginMessage"));
void AHGGameStateBase::MulticastRPCBroadcastLoginMessage(const FString& InNameString)
{
	HGGameStateBase_eventMulticastRPCBroadcastLoginMessage_Parms Parms;
	Parms.InNameString=InNameString;
	UFunction* Func = FindFunctionChecked(NAME_AHGGameStateBase_MulticastRPCBroadcastLoginMessage);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AHGGameStateBase_MulticastRPCBroadcastLoginMessage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Game/HGGameStateBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InNameString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_InNameString;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AHGGameStateBase_MulticastRPCBroadcastLoginMessage_Statics::NewProp_InNameString = { "InNameString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HGGameStateBase_eventMulticastRPCBroadcastLoginMessage_Parms, InNameString), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InNameString_MetaData), NewProp_InNameString_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHGGameStateBase_MulticastRPCBroadcastLoginMessage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHGGameStateBase_MulticastRPCBroadcastLoginMessage_Statics::NewProp_InNameString,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AHGGameStateBase_MulticastRPCBroadcastLoginMessage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHGGameStateBase_MulticastRPCBroadcastLoginMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHGGameStateBase, nullptr, "MulticastRPCBroadcastLoginMessage", nullptr, nullptr, Z_Construct_UFunction_AHGGameStateBase_MulticastRPCBroadcastLoginMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHGGameStateBase_MulticastRPCBroadcastLoginMessage_Statics::PropPointers), sizeof(HGGameStateBase_eventMulticastRPCBroadcastLoginMessage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00024CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AHGGameStateBase_MulticastRPCBroadcastLoginMessage_Statics::Function_MetaDataParams), Z_Construct_UFunction_AHGGameStateBase_MulticastRPCBroadcastLoginMessage_Statics::Function_MetaDataParams) };
static_assert(sizeof(HGGameStateBase_eventMulticastRPCBroadcastLoginMessage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AHGGameStateBase_MulticastRPCBroadcastLoginMessage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AHGGameStateBase_MulticastRPCBroadcastLoginMessage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AHGGameStateBase::execMulticastRPCBroadcastLoginMessage)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_InNameString);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MulticastRPCBroadcastLoginMessage_Implementation(Z_Param_InNameString);
	P_NATIVE_END;
}
// End Class AHGGameStateBase Function MulticastRPCBroadcastLoginMessage

// Begin Class AHGGameStateBase
void AHGGameStateBase::StaticRegisterNativesAHGGameStateBase()
{
	UClass* Class = AHGGameStateBase::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "MulticastRPCBroadcastLoginMessage", &AHGGameStateBase::execMulticastRPCBroadcastLoginMessage },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AHGGameStateBase);
UClass* Z_Construct_UClass_AHGGameStateBase_NoRegister()
{
	return AHGGameStateBase::StaticClass();
}
struct Z_Construct_UClass_AHGGameStateBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Game/HGGameStateBase.h" },
		{ "ModuleRelativePath", "Public/Game/HGGameStateBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AHGGameStateBase_MulticastRPCBroadcastLoginMessage, "MulticastRPCBroadcastLoginMessage" }, // 2970509430
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHGGameStateBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AHGGameStateBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameStateBase,
	(UObject* (*)())Z_Construct_UPackage__Script_ChatProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AHGGameStateBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AHGGameStateBase_Statics::ClassParams = {
	&AHGGameStateBase::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AHGGameStateBase_Statics::Class_MetaDataParams), Z_Construct_UClass_AHGGameStateBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AHGGameStateBase()
{
	if (!Z_Registration_Info_UClass_AHGGameStateBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AHGGameStateBase.OuterSingleton, Z_Construct_UClass_AHGGameStateBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AHGGameStateBase.OuterSingleton;
}
template<> CHATPROJECT_API UClass* StaticClass<AHGGameStateBase>()
{
	return AHGGameStateBase::StaticClass();
}
AHGGameStateBase::AHGGameStateBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AHGGameStateBase);
AHGGameStateBase::~AHGGameStateBase() {}
// End Class AHGGameStateBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_ChatProject_Source_ChatProject_Public_Game_HGGameStateBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AHGGameStateBase, AHGGameStateBase::StaticClass, TEXT("AHGGameStateBase"), &Z_Registration_Info_UClass_AHGGameStateBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AHGGameStateBase), 3644072096U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ChatProject_Source_ChatProject_Public_Game_HGGameStateBase_h_1445531474(TEXT("/Script/ChatProject"),
	Z_CompiledInDeferFile_FID_ChatProject_Source_ChatProject_Public_Game_HGGameStateBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ChatProject_Source_ChatProject_Public_Game_HGGameStateBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
