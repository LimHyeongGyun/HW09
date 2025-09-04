// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ChatProject/Public/Player/NetPlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNetPlayerController() {}

// Begin Cross Module References
CHATPROJECT_API UClass* Z_Construct_UClass_ANetPlayerController();
CHATPROJECT_API UClass* Z_Construct_UClass_ANetPlayerController_NoRegister();
CHATPROJECT_API UClass* Z_Construct_UClass_UHGUserWidget_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_ChatProject();
// End Cross Module References

// Begin Class ANetPlayerController Function ClientRPCPrintChatMessageString
struct NetPlayerController_eventClientRPCPrintChatMessageString_Parms
{
	FString InChatMessageString;
};
static const FName NAME_ANetPlayerController_ClientRPCPrintChatMessageString = FName(TEXT("ClientRPCPrintChatMessageString"));
void ANetPlayerController::ClientRPCPrintChatMessageString(const FString& InChatMessageString)
{
	NetPlayerController_eventClientRPCPrintChatMessageString_Parms Parms;
	Parms.InChatMessageString=InChatMessageString;
	UFunction* Func = FindFunctionChecked(NAME_ANetPlayerController_ClientRPCPrintChatMessageString);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_ANetPlayerController_ClientRPCPrintChatMessageString_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/NetPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InChatMessageString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_InChatMessageString;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ANetPlayerController_ClientRPCPrintChatMessageString_Statics::NewProp_InChatMessageString = { "InChatMessageString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NetPlayerController_eventClientRPCPrintChatMessageString_Parms, InChatMessageString), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InChatMessageString_MetaData), NewProp_InChatMessageString_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANetPlayerController_ClientRPCPrintChatMessageString_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANetPlayerController_ClientRPCPrintChatMessageString_Statics::NewProp_InChatMessageString,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANetPlayerController_ClientRPCPrintChatMessageString_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANetPlayerController_ClientRPCPrintChatMessageString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANetPlayerController, nullptr, "ClientRPCPrintChatMessageString", nullptr, nullptr, Z_Construct_UFunction_ANetPlayerController_ClientRPCPrintChatMessageString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANetPlayerController_ClientRPCPrintChatMessageString_Statics::PropPointers), sizeof(NetPlayerController_eventClientRPCPrintChatMessageString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANetPlayerController_ClientRPCPrintChatMessageString_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANetPlayerController_ClientRPCPrintChatMessageString_Statics::Function_MetaDataParams) };
static_assert(sizeof(NetPlayerController_eventClientRPCPrintChatMessageString_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANetPlayerController_ClientRPCPrintChatMessageString()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANetPlayerController_ClientRPCPrintChatMessageString_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANetPlayerController::execClientRPCPrintChatMessageString)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_InChatMessageString);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClientRPCPrintChatMessageString_Implementation(Z_Param_InChatMessageString);
	P_NATIVE_END;
}
// End Class ANetPlayerController Function ClientRPCPrintChatMessageString

// Begin Class ANetPlayerController Function ServerRPCPrintChatMessageString
struct NetPlayerController_eventServerRPCPrintChatMessageString_Parms
{
	FString InChatMessageString;
};
static const FName NAME_ANetPlayerController_ServerRPCPrintChatMessageString = FName(TEXT("ServerRPCPrintChatMessageString"));
void ANetPlayerController::ServerRPCPrintChatMessageString(const FString& InChatMessageString)
{
	NetPlayerController_eventServerRPCPrintChatMessageString_Parms Parms;
	Parms.InChatMessageString=InChatMessageString;
	UFunction* Func = FindFunctionChecked(NAME_ANetPlayerController_ServerRPCPrintChatMessageString);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_ANetPlayerController_ServerRPCPrintChatMessageString_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/NetPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InChatMessageString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_InChatMessageString;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ANetPlayerController_ServerRPCPrintChatMessageString_Statics::NewProp_InChatMessageString = { "InChatMessageString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NetPlayerController_eventServerRPCPrintChatMessageString_Parms, InChatMessageString), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InChatMessageString_MetaData), NewProp_InChatMessageString_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANetPlayerController_ServerRPCPrintChatMessageString_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANetPlayerController_ServerRPCPrintChatMessageString_Statics::NewProp_InChatMessageString,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANetPlayerController_ServerRPCPrintChatMessageString_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANetPlayerController_ServerRPCPrintChatMessageString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANetPlayerController, nullptr, "ServerRPCPrintChatMessageString", nullptr, nullptr, Z_Construct_UFunction_ANetPlayerController_ServerRPCPrintChatMessageString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANetPlayerController_ServerRPCPrintChatMessageString_Statics::PropPointers), sizeof(NetPlayerController_eventServerRPCPrintChatMessageString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANetPlayerController_ServerRPCPrintChatMessageString_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANetPlayerController_ServerRPCPrintChatMessageString_Statics::Function_MetaDataParams) };
static_assert(sizeof(NetPlayerController_eventServerRPCPrintChatMessageString_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANetPlayerController_ServerRPCPrintChatMessageString()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANetPlayerController_ServerRPCPrintChatMessageString_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANetPlayerController::execServerRPCPrintChatMessageString)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_InChatMessageString);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ServerRPCPrintChatMessageString_Implementation(Z_Param_InChatMessageString);
	P_NATIVE_END;
}
// End Class ANetPlayerController Function ServerRPCPrintChatMessageString

// Begin Class ANetPlayerController
void ANetPlayerController::StaticRegisterNativesANetPlayerController()
{
	UClass* Class = ANetPlayerController::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ClientRPCPrintChatMessageString", &ANetPlayerController::execClientRPCPrintChatMessageString },
		{ "ServerRPCPrintChatMessageString", &ANetPlayerController::execServerRPCPrintChatMessageString },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ANetPlayerController);
UClass* Z_Construct_UClass_ANetPlayerController_NoRegister()
{
	return ANetPlayerController::StaticClass();
}
struct Z_Construct_UClass_ANetPlayerController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "Player/NetPlayerController.h" },
		{ "ModuleRelativePath", "Public/Player/NetPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChatInputWidgetClass_MetaData[] = {
		{ "Category", "NetPlayerController" },
		{ "ModuleRelativePath", "Public/Player/NetPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChatInputWidgetInstance_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Player/NetPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NotificationTextWidgetClass_MetaData[] = {
		{ "Category", "NetPlayerController" },
		{ "ModuleRelativePath", "Public/Player/NetPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NotificationTextWidgetInstance_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Player/NetPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NotificationText_MetaData[] = {
		{ "Category", "NetPlayerController" },
		{ "ModuleRelativePath", "Public/Player/NetPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_ChatInputWidgetClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ChatInputWidgetInstance;
	static const UECodeGen_Private::FClassPropertyParams NewProp_NotificationTextWidgetClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NotificationTextWidgetInstance;
	static const UECodeGen_Private::FTextPropertyParams NewProp_NotificationText;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ANetPlayerController_ClientRPCPrintChatMessageString, "ClientRPCPrintChatMessageString" }, // 2194381974
		{ &Z_Construct_UFunction_ANetPlayerController_ServerRPCPrintChatMessageString, "ServerRPCPrintChatMessageString" }, // 562713128
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANetPlayerController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ANetPlayerController_Statics::NewProp_ChatInputWidgetClass = { "ChatInputWidgetClass", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANetPlayerController, ChatInputWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UHGUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChatInputWidgetClass_MetaData), NewProp_ChatInputWidgetClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANetPlayerController_Statics::NewProp_ChatInputWidgetInstance = { "ChatInputWidgetInstance", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANetPlayerController, ChatInputWidgetInstance), Z_Construct_UClass_UHGUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChatInputWidgetInstance_MetaData), NewProp_ChatInputWidgetInstance_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ANetPlayerController_Statics::NewProp_NotificationTextWidgetClass = { "NotificationTextWidgetClass", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANetPlayerController, NotificationTextWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NotificationTextWidgetClass_MetaData), NewProp_NotificationTextWidgetClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANetPlayerController_Statics::NewProp_NotificationTextWidgetInstance = { "NotificationTextWidgetInstance", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANetPlayerController, NotificationTextWidgetInstance), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NotificationTextWidgetInstance_MetaData), NewProp_NotificationTextWidgetInstance_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_ANetPlayerController_Statics::NewProp_NotificationText = { "NotificationText", nullptr, (EPropertyFlags)0x0010000000000034, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANetPlayerController, NotificationText), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NotificationText_MetaData), NewProp_NotificationText_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANetPlayerController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANetPlayerController_Statics::NewProp_ChatInputWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANetPlayerController_Statics::NewProp_ChatInputWidgetInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANetPlayerController_Statics::NewProp_NotificationTextWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANetPlayerController_Statics::NewProp_NotificationTextWidgetInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANetPlayerController_Statics::NewProp_NotificationText,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANetPlayerController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ANetPlayerController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_ChatProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANetPlayerController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ANetPlayerController_Statics::ClassParams = {
	&ANetPlayerController::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ANetPlayerController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ANetPlayerController_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANetPlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_ANetPlayerController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ANetPlayerController()
{
	if (!Z_Registration_Info_UClass_ANetPlayerController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ANetPlayerController.OuterSingleton, Z_Construct_UClass_ANetPlayerController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ANetPlayerController.OuterSingleton;
}
template<> CHATPROJECT_API UClass* StaticClass<ANetPlayerController>()
{
	return ANetPlayerController::StaticClass();
}
void ANetPlayerController::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_NotificationText(TEXT("NotificationText"));
	const bool bIsValid = true
		&& Name_NotificationText == ClassReps[(int32)ENetFields_Private::NotificationText].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ANetPlayerController"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ANetPlayerController);
ANetPlayerController::~ANetPlayerController() {}
// End Class ANetPlayerController

// Begin Registration
struct Z_CompiledInDeferFile_FID_ChatProject_Source_ChatProject_Public_Player_NetPlayerController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ANetPlayerController, ANetPlayerController::StaticClass, TEXT("ANetPlayerController"), &Z_Registration_Info_UClass_ANetPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANetPlayerController), 19727621U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ChatProject_Source_ChatProject_Public_Player_NetPlayerController_h_2003248529(TEXT("/Script/ChatProject"),
	Z_CompiledInDeferFile_FID_ChatProject_Source_ChatProject_Public_Player_NetPlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ChatProject_Source_ChatProject_Public_Player_NetPlayerController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
