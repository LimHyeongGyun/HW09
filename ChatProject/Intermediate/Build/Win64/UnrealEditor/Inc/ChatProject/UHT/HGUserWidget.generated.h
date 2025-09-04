// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/HGUserWidget.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CHATPROJECT_HGUserWidget_generated_h
#error "HGUserWidget.generated.h already included, missing '#pragma once' in HGUserWidget.h"
#endif
#define CHATPROJECT_HGUserWidget_generated_h

#define FID_ChatProject_Source_ChatProject_Public_UI_HGUserWidget_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnChatInputTextCommitted);


#define FID_ChatProject_Source_ChatProject_Public_UI_HGUserWidget_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHGUserWidget(); \
	friend struct Z_Construct_UClass_UHGUserWidget_Statics; \
public: \
	DECLARE_CLASS(UHGUserWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ChatProject"), NO_API) \
	DECLARE_SERIALIZER(UHGUserWidget)


#define FID_ChatProject_Source_ChatProject_Public_UI_HGUserWidget_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHGUserWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UHGUserWidget(UHGUserWidget&&); \
	UHGUserWidget(const UHGUserWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHGUserWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHGUserWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHGUserWidget) \
	NO_API virtual ~UHGUserWidget();


#define FID_ChatProject_Source_ChatProject_Public_UI_HGUserWidget_h_9_PROLOG
#define FID_ChatProject_Source_ChatProject_Public_UI_HGUserWidget_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ChatProject_Source_ChatProject_Public_UI_HGUserWidget_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ChatProject_Source_ChatProject_Public_UI_HGUserWidget_h_12_INCLASS_NO_PURE_DECLS \
	FID_ChatProject_Source_ChatProject_Public_UI_HGUserWidget_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CHATPROJECT_API UClass* StaticClass<class UHGUserWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ChatProject_Source_ChatProject_Public_UI_HGUserWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
