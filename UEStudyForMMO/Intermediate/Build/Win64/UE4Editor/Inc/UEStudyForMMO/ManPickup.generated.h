// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UESTUDYFORMMO_ManPickup_generated_h
#error "ManPickup.generated.h already included, missing '#pragma once' in ManPickup.h"
#endif
#define UESTUDYFORMMO_ManPickup_generated_h

#define UEStudyForMMO_Source_UEStudyForMMO_ManPickup_h_15_SPARSE_DATA
#define UEStudyForMMO_Source_UEStudyForMMO_ManPickup_h_15_RPC_WRAPPERS
#define UEStudyForMMO_Source_UEStudyForMMO_ManPickup_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define UEStudyForMMO_Source_UEStudyForMMO_ManPickup_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAManPickup(); \
	friend struct Z_Construct_UClass_AManPickup_Statics; \
public: \
	DECLARE_CLASS(AManPickup, AInteractable, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UEStudyForMMO"), NO_API) \
	DECLARE_SERIALIZER(AManPickup)


#define UEStudyForMMO_Source_UEStudyForMMO_ManPickup_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAManPickup(); \
	friend struct Z_Construct_UClass_AManPickup_Statics; \
public: \
	DECLARE_CLASS(AManPickup, AInteractable, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UEStudyForMMO"), NO_API) \
	DECLARE_SERIALIZER(AManPickup)


#define UEStudyForMMO_Source_UEStudyForMMO_ManPickup_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AManPickup(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AManPickup) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AManPickup); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AManPickup); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AManPickup(AManPickup&&); \
	NO_API AManPickup(const AManPickup&); \
public:


#define UEStudyForMMO_Source_UEStudyForMMO_ManPickup_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AManPickup(AManPickup&&); \
	NO_API AManPickup(const AManPickup&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AManPickup); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AManPickup); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AManPickup)


#define UEStudyForMMO_Source_UEStudyForMMO_ManPickup_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__PickupMesh() { return STRUCT_OFFSET(AManPickup, PickupMesh); } \
	FORCEINLINE static uint32 __PPO__ItemID() { return STRUCT_OFFSET(AManPickup, ItemID); }


#define UEStudyForMMO_Source_UEStudyForMMO_ManPickup_h_12_PROLOG
#define UEStudyForMMO_Source_UEStudyForMMO_ManPickup_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UEStudyForMMO_Source_UEStudyForMMO_ManPickup_h_15_PRIVATE_PROPERTY_OFFSET \
	UEStudyForMMO_Source_UEStudyForMMO_ManPickup_h_15_SPARSE_DATA \
	UEStudyForMMO_Source_UEStudyForMMO_ManPickup_h_15_RPC_WRAPPERS \
	UEStudyForMMO_Source_UEStudyForMMO_ManPickup_h_15_INCLASS \
	UEStudyForMMO_Source_UEStudyForMMO_ManPickup_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UEStudyForMMO_Source_UEStudyForMMO_ManPickup_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UEStudyForMMO_Source_UEStudyForMMO_ManPickup_h_15_PRIVATE_PROPERTY_OFFSET \
	UEStudyForMMO_Source_UEStudyForMMO_ManPickup_h_15_SPARSE_DATA \
	UEStudyForMMO_Source_UEStudyForMMO_ManPickup_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	UEStudyForMMO_Source_UEStudyForMMO_ManPickup_h_15_INCLASS_NO_PURE_DECLS \
	UEStudyForMMO_Source_UEStudyForMMO_ManPickup_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UESTUDYFORMMO_API UClass* StaticClass<class AManPickup>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UEStudyForMMO_Source_UEStudyForMMO_ManPickup_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
