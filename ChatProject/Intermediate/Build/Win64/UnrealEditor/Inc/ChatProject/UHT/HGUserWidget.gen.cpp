// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ChatProject/Public/UI/HGUserWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHGUserWidget() {}

// Begin Cross Module References
CHATPROJECT_API UClass* Z_Construct_UClass_UHGUserWidget();
CHATPROJECT_API UClass* Z_Construct_UClass_UHGUserWidget_NoRegister();
SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_ETextCommit();
UMG_API UClass* Z_Construct_UClass_UEditableTextBox_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_ChatProject();
// End Cross Module References

// Begin Class UHGUserWidget Function OnChatInputTextCommitted
struct Z_Construct_UFunction_UHGUserWidget_OnChatInputTextCommitted_Statics
{
	struct HGUserWidget_eventOnChatInputTextCommitted_Parms
	{
		FText Text;
		TEnumAsByte<ETextCommit::Type> CommitMethod;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/HGUserWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_Text;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CommitMethod;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UHGUserWidget_OnChatInputTextCommitted_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HGUserWidget_eventOnChatInputTextCommitted_Parms, Text), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Text_MetaData), NewProp_Text_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UHGUserWidget_OnChatInputTextCommitted_Statics::NewProp_CommitMethod = { "CommitMethod", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HGUserWidget_eventOnChatInputTextCommitted_Parms, CommitMethod), Z_Construct_UEnum_SlateCore_ETextCommit, METADATA_PARAMS(0, nullptr) }; // 1817921380
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHGUserWidget_OnChatInputTextCommitted_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHGUserWidget_OnChatInputTextCommitted_Statics::NewProp_Text,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHGUserWidget_OnChatInputTextCommitted_Statics::NewProp_CommitMethod,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHGUserWidget_OnChatInputTextCommitted_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHGUserWidget_OnChatInputTextCommitted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHGUserWidget, nullptr, "OnChatInputTextCommitted", nullptr, nullptr, Z_Construct_UFunction_UHGUserWidget_OnChatInputTextCommitted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHGUserWidget_OnChatInputTextCommitted_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHGUserWidget_OnChatInputTextCommitted_Statics::HGUserWidget_eventOnChatInputTextCommitted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHGUserWidget_OnChatInputTextCommitted_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHGUserWidget_OnChatInputTextCommitted_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UHGUserWidget_OnChatInputTextCommitted_Statics::HGUserWidget_eventOnChatInputTextCommitted_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHGUserWidget_OnChatInputTextCommitted()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHGUserWidget_OnChatInputTextCommitted_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHGUserWidget::execOnChatInputTextCommitted)
{
	P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_Text);
	P_GET_PROPERTY(FByteProperty,Z_Param_CommitMethod);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnChatInputTextCommitted(Z_Param_Out_Text,ETextCommit::Type(Z_Param_CommitMethod));
	P_NATIVE_END;
}
// End Class UHGUserWidget Function OnChatInputTextCommitted

// Begin Class UHGUserWidget
void UHGUserWidget::StaticRegisterNativesUHGUserWidget()
{
	UClass* Class = UHGUserWidget::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnChatInputTextCommitted", &UHGUserWidget::execOnChatInputTextCommitted },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHGUserWidget);
UClass* Z_Construct_UClass_UHGUserWidget_NoRegister()
{
	return UHGUserWidget::StaticClass();
}
struct Z_Construct_UClass_UHGUserWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "UI/HGUserWidget.h" },
		{ "ModuleRelativePath", "Public/UI/HGUserWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EditableTextBox_UserInput_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/HGUserWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EditableTextBox_UserInput;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UHGUserWidget_OnChatInputTextCommitted, "OnChatInputTextCommitted" }, // 2805698817
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHGUserWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHGUserWidget_Statics::NewProp_EditableTextBox_UserInput = { "EditableTextBox_UserInput", nullptr, (EPropertyFlags)0x0114000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHGUserWidget, EditableTextBox_UserInput), Z_Construct_UClass_UEditableTextBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EditableTextBox_UserInput_MetaData), NewProp_EditableTextBox_UserInput_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHGUserWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHGUserWidget_Statics::NewProp_EditableTextBox_UserInput,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHGUserWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UHGUserWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_ChatProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHGUserWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHGUserWidget_Statics::ClassParams = {
	&UHGUserWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UHGUserWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UHGUserWidget_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHGUserWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UHGUserWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHGUserWidget()
{
	if (!Z_Registration_Info_UClass_UHGUserWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHGUserWidget.OuterSingleton, Z_Construct_UClass_UHGUserWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHGUserWidget.OuterSingleton;
}
template<> CHATPROJECT_API UClass* StaticClass<UHGUserWidget>()
{
	return UHGUserWidget::StaticClass();
}
UHGUserWidget::UHGUserWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHGUserWidget);
UHGUserWidget::~UHGUserWidget() {}
// End Class UHGUserWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_ChatProject_Source_ChatProject_Public_UI_HGUserWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UHGUserWidget, UHGUserWidget::StaticClass, TEXT("UHGUserWidget"), &Z_Registration_Info_UClass_UHGUserWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHGUserWidget), 734579942U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ChatProject_Source_ChatProject_Public_UI_HGUserWidget_h_2887893243(TEXT("/Script/ChatProject"),
	Z_CompiledInDeferFile_FID_ChatProject_Source_ChatProject_Public_UI_HGUserWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ChatProject_Source_ChatProject_Public_UI_HGUserWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
