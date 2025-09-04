// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Game/HGGameModeBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CHATPROJECT_HGGameModeBase_generated_h
#error "HGGameModeBase.generated.h already included, missing '#pragma once' in HGGameModeBase.h"
#endif
#define CHATPROJECT_HGGameModeBase_generated_h

#define FID_ChatProject_Source_ChatProject_Public_Game_HGGameModeBase_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAHGGameModeBase(); \
	friend struct Z_Construct_UClass_AHGGameModeBase_Statics; \
public: \
	DECLARE_CLASS(AHGGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/ChatProject"), NO_API) \
	DECLARE_SERIALIZER(AHGGameModeBase)


#define FID_ChatProject_Source_ChatProject_Public_Game_HGGameModeBase_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AHGGameModeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AHGGameModeBase(AHGGameModeBase&&); \
	AHGGameModeBase(const AHGGameModeBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHGGameModeBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHGGameModeBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AHGGameModeBase) \
	NO_API virtual ~AHGGameModeBase();


#define FID_ChatProject_Source_ChatProject_Public_Game_HGGameModeBase_h_9_PROLOG
#define FID_ChatProject_Source_ChatProject_Public_Game_HGGameModeBase_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ChatProject_Source_ChatProject_Public_Game_HGGameModeBase_h_12_INCLASS_NO_PURE_DECLS \
	FID_ChatProject_Source_ChatProject_Public_Game_HGGameModeBase_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CHATPROJECT_API UClass* StaticClass<class AHGGameModeBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ChatProject_Source_ChatProject_Public_Game_HGGameModeBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
