// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Player/NetPlayerController.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CHATPROJECT_NetPlayerController_generated_h
#error "NetPlayerController.generated.h already included, missing '#pragma once' in NetPlayerController.h"
#endif
#define CHATPROJECT_NetPlayerController_generated_h

#define FID_ChatProject_Source_ChatProject_Public_Player_NetPlayerController_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void ServerRPCPrintChatMessageString_Implementation(const FString& InChatMessageString); \
	virtual void ClientRPCPrintChatMessageString_Implementation(const FString& InChatMessageString); \
	DECLARE_FUNCTION(execServerRPCPrintChatMessageString); \
	DECLARE_FUNCTION(execClientRPCPrintChatMessageString);


#define FID_ChatProject_Source_ChatProject_Public_Player_NetPlayerController_h_13_CALLBACK_WRAPPERS
#define FID_ChatProject_Source_ChatProject_Public_Player_NetPlayerController_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesANetPlayerController(); \
	friend struct Z_Construct_UClass_ANetPlayerController_Statics; \
public: \
	DECLARE_CLASS(ANetPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ChatProject"), NO_API) \
	DECLARE_SERIALIZER(ANetPlayerController) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		NotificationText=NETFIELD_REP_START, \
		NETFIELD_REP_END=NotificationText	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_ChatProject_Source_ChatProject_Public_Player_NetPlayerController_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ANetPlayerController(ANetPlayerController&&); \
	ANetPlayerController(const ANetPlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANetPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANetPlayerController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ANetPlayerController) \
	NO_API virtual ~ANetPlayerController();


#define FID_ChatProject_Source_ChatProject_Public_Player_NetPlayerController_h_10_PROLOG
#define FID_ChatProject_Source_ChatProject_Public_Player_NetPlayerController_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ChatProject_Source_ChatProject_Public_Player_NetPlayerController_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ChatProject_Source_ChatProject_Public_Player_NetPlayerController_h_13_CALLBACK_WRAPPERS \
	FID_ChatProject_Source_ChatProject_Public_Player_NetPlayerController_h_13_INCLASS_NO_PURE_DECLS \
	FID_ChatProject_Source_ChatProject_Public_Player_NetPlayerController_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CHATPROJECT_API UClass* StaticClass<class ANetPlayerController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ChatProject_Source_ChatProject_Public_Player_NetPlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
