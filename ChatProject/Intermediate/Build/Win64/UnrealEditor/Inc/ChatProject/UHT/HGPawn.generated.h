// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Player/HGPawn.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CHATPROJECT_HGPawn_generated_h
#error "HGPawn.generated.h already included, missing '#pragma once' in HGPawn.h"
#endif
#define CHATPROJECT_HGPawn_generated_h

#define FID_ChatProject_Source_ChatProject_Public_Player_HGPawn_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAHGPawn(); \
	friend struct Z_Construct_UClass_AHGPawn_Statics; \
public: \
	DECLARE_CLASS(AHGPawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ChatProject"), NO_API) \
	DECLARE_SERIALIZER(AHGPawn)


#define FID_ChatProject_Source_ChatProject_Public_Player_HGPawn_h_10_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AHGPawn(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AHGPawn(AHGPawn&&); \
	AHGPawn(const AHGPawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHGPawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHGPawn); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AHGPawn) \
	NO_API virtual ~AHGPawn();


#define FID_ChatProject_Source_ChatProject_Public_Player_HGPawn_h_7_PROLOG
#define FID_ChatProject_Source_ChatProject_Public_Player_HGPawn_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ChatProject_Source_ChatProject_Public_Player_HGPawn_h_10_INCLASS_NO_PURE_DECLS \
	FID_ChatProject_Source_ChatProject_Public_Player_HGPawn_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CHATPROJECT_API UClass* StaticClass<class AHGPawn>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ChatProject_Source_ChatProject_Public_Player_HGPawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
