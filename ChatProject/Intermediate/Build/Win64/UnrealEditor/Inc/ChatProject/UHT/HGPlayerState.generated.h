// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Player/HGPlayerState.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CHATPROJECT_HGPlayerState_generated_h
#error "HGPlayerState.generated.h already included, missing '#pragma once' in HGPlayerState.h"
#endif
#define CHATPROJECT_HGPlayerState_generated_h

#define FID_ChatProject_Source_ChatProject_Public_Player_HGPlayerState_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAHGPlayerState(); \
	friend struct Z_Construct_UClass_AHGPlayerState_Statics; \
public: \
	DECLARE_CLASS(AHGPlayerState, APlayerState, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ChatProject"), NO_API) \
	DECLARE_SERIALIZER(AHGPlayerState) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		PlayerNameString=NETFIELD_REP_START, \
		CurrentGuessCount, \
		MaxGuessCount, \
		NETFIELD_REP_END=MaxGuessCount	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_ChatProject_Source_ChatProject_Public_Player_HGPlayerState_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AHGPlayerState(AHGPlayerState&&); \
	AHGPlayerState(const AHGPlayerState&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHGPlayerState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHGPlayerState); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AHGPlayerState) \
	NO_API virtual ~AHGPlayerState();


#define FID_ChatProject_Source_ChatProject_Public_Player_HGPlayerState_h_7_PROLOG
#define FID_ChatProject_Source_ChatProject_Public_Player_HGPlayerState_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ChatProject_Source_ChatProject_Public_Player_HGPlayerState_h_10_INCLASS_NO_PURE_DECLS \
	FID_ChatProject_Source_ChatProject_Public_Player_HGPlayerState_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CHATPROJECT_API UClass* StaticClass<class AHGPlayerState>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ChatProject_Source_ChatProject_Public_Player_HGPlayerState_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
