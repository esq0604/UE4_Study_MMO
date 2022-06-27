// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APlayerController;
#ifdef UESTUDYFORMMO_AutoPickup_generated_h
#error "AutoPickup.generated.h already included, missing '#pragma once' in AutoPickup.h"
#endif
#define UESTUDYFORMMO_AutoPickup_generated_h

#define UEStudyForMMO_Source_UEStudyForMMO_AutoPickup_h_12_SPARSE_DATA
#define UEStudyForMMO_Source_UEStudyForMMO_AutoPickup_h_12_RPC_WRAPPERS \
	virtual void Collect_Implementation(APlayerController* IController); \
 \
	DECLARE_FUNCTION(execCollect);


#define UEStudyForMMO_Source_UEStudyForMMO_AutoPickup_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCollect);


#define UEStudyForMMO_Source_UEStudyForMMO_AutoPickup_h_12_EVENT_PARMS \
	struct AutoPickup_eventCollect_Parms \
	{ \
		APlayerController* IController; \
	};


#define UEStudyForMMO_Source_UEStudyForMMO_AutoPickup_h_12_CALLBACK_WRAPPERS
#define UEStudyForMMO_Source_UEStudyForMMO_AutoPickup_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAutoPickup(); \
	friend struct Z_Construct_UClass_AAutoPickup_Statics; \
public: \
	DECLARE_CLASS(AAutoPickup, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UEStudyForMMO"), NO_API) \
	DECLARE_SERIALIZER(AAutoPickup)


#define UEStudyForMMO_Source_UEStudyForMMO_AutoPickup_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAAutoPickup(); \
	friend struct Z_Construct_UClass_AAutoPickup_Statics; \
public: \
	DECLARE_CLASS(AAutoPickup, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UEStudyForMMO"), NO_API) \
	DECLARE_SERIALIZER(AAutoPickup)


#define UEStudyForMMO_Source_UEStudyForMMO_AutoPickup_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAutoPickup(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAutoPickup) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAutoPickup); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAutoPickup); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAutoPickup(AAutoPickup&&); \
	NO_API AAutoPickup(const AAutoPickup&); \
public:


#define UEStudyForMMO_Source_UEStudyForMMO_AutoPickup_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAutoPickup(AAutoPickup&&); \
	NO_API AAutoPickup(const AAutoPickup&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAutoPickup); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAutoPickup); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AAutoPickup)


#define UEStudyForMMO_Source_UEStudyForMMO_AutoPickup_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__PickupMesh() { return STRUCT_OFFSET(AAutoPickup, PickupMesh); } \
	FORCEINLINE static uint32 __PPO__ItemID() { return STRUCT_OFFSET(AAutoPickup, ItemID); }


#define UEStudyForMMO_Source_UEStudyForMMO_AutoPickup_h_9_PROLOG \
	UEStudyForMMO_Source_UEStudyForMMO_AutoPickup_h_12_EVENT_PARMS


#define UEStudyForMMO_Source_UEStudyForMMO_AutoPickup_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UEStudyForMMO_Source_UEStudyForMMO_AutoPickup_h_12_PRIVATE_PROPERTY_OFFSET \
	UEStudyForMMO_Source_UEStudyForMMO_AutoPickup_h_12_SPARSE_DATA \
	UEStudyForMMO_Source_UEStudyForMMO_AutoPickup_h_12_RPC_WRAPPERS \
	UEStudyForMMO_Source_UEStudyForMMO_AutoPickup_h_12_CALLBACK_WRAPPERS \
	UEStudyForMMO_Source_UEStudyForMMO_AutoPickup_h_12_INCLASS \
	UEStudyForMMO_Source_UEStudyForMMO_AutoPickup_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UEStudyForMMO_Source_UEStudyForMMO_AutoPickup_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UEStudyForMMO_Source_UEStudyForMMO_AutoPickup_h_12_PRIVATE_PROPERTY_OFFSET \
	UEStudyForMMO_Source_UEStudyForMMO_AutoPickup_h_12_SPARSE_DATA \
	UEStudyForMMO_Source_UEStudyForMMO_AutoPickup_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	UEStudyForMMO_Source_UEStudyForMMO_AutoPickup_h_12_CALLBACK_WRAPPERS \
	UEStudyForMMO_Source_UEStudyForMMO_AutoPickup_h_12_INCLASS_NO_PURE_DECLS \
	UEStudyForMMO_Source_UEStudyForMMO_AutoPickup_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UESTUDYFORMMO_API UClass* StaticClass<class AAutoPickup>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UEStudyForMMO_Source_UEStudyForMMO_AutoPickup_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
