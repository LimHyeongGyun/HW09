// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Game/HGGameStateBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CHATPROJECT_HGGameStateBase_generated_h
#error "HGGameStateBase.generated.h already included, missing '#pragma once' in HGGameStateBase.h"
#endif
#define CHATPROJECT_HGGameStateBase_generated_h

#define FID_ChatProject_Source_ChatProject_Public_Game_HGGameStateBase_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void MulticastRPCBroadcastLoginMessage_Implementation(const FString& InNameString); \
	DECLARE_FUNCTION(execMulticastRPCBroadcastLoginMessage);


#define FID_ChatProject_Source_ChatProject_Public_Game_HGGameStateBase_h_10_CALLBACK_WRAPPERS
#define FID_ChatProject_Source_ChatProject_Public_Game_HGGameStateBase_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAHGGameStateBase(); \
	friend struct Z_Construct_UClass_AHGGameStateBase_Statics; \
public: \
	DECLARE_CLASS(AHGGameStateBase, AGameStateBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ChatProject"), NO_API) \
	DECLARE_SERIALIZER(AHGGameStateBase)


#define FID_ChatProject_Source_ChatProject_Public_Game_HGGameStateBase_h_10_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AHGGameStateBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AHGGameStateBase(AHGGameStateBase&&); \
	AHGGameStateBase(const AHGGameStateBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHGGameStateBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHGGameStateBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AHGGameStateBase) \
	NO_API virtual ~AHGGameStateBase();


#define FID_ChatProject_Source_ChatProject_Public_Game_HGGameStateBase_h_7_PROLOG
#define FID_ChatProject_Source_ChatProject_Public_Game_HGGameStateBase_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ChatProject_Source_ChatProject_Public_Game_HGGameStateBase_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ChatProject_Source_ChatProject_Public_Game_HGGameStateBase_h_10_CALLBACK_WRAPPERS \
	FID_ChatProject_Source_ChatProject_Public_Game_HGGameStateBase_h_10_INCLASS_NO_PURE_DECLS \
	FID_ChatProject_Source_ChatProject_Public_Game_HGGameStateBase_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CHATPROJECT_API UClass* StaticClass<class AHGGameStateBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ChatProject_Source_ChatProject_Public_Game_HGGameStateBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
