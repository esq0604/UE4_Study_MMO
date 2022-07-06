// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APlayerController;
#ifdef UESTUDYFORMMO_Interactable_generated_h
#error "Interactable.generated.h already included, missing '#pragma once' in Interactable.h"
#endif
#define UESTUDYFORMMO_Interactable_generated_h

#define UEStudyForMMO_Source_UEStudyForMMO_Public_Interactable_h_12_SPARSE_DATA
#define UEStudyForMMO_Source_UEStudyForMMO_Public_Interactable_h_12_RPC_WRAPPERS \
	virtual void Interact_Implementation(APlayerController* Controller); \
 \
	DECLARE_FUNCTION(execGetInteractText); \
	DECLARE_FUNCTION(execInteract);


#define UEStudyForMMO_Source_UEStudyForMMO_Public_Interactable_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetInteractText); \
	DECLARE_FUNCTION(execInteract);


#define UEStudyForMMO_Source_UEStudyForMMO_Public_Interactable_h_12_EVENT_PARMS \
	struct Interactable_eventInteract_Parms \
	{ \
		APlayerController* Controller; \
	};


#define UEStudyForMMO_Source_UEStudyForMMO_Public_Interactable_h_12_CALLBACK_WRAPPERS
#define UEStudyForMMO_Source_UEStudyForMMO_Public_Interactable_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAInteractable(); \
	friend struct Z_Construct_UClass_AInteractable_Statics; \
public: \
	DECLARE_CLASS(AInteractable, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UEStudyForMMO"), NO_API) \
	DECLARE_SERIALIZER(AInteractable)


#define UEStudyForMMO_Source_UEStudyForMMO_Public_Interactable_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAInteractable(); \
	friend struct Z_Construct_UClass_AInteractable_Statics; \
public: \
	DECLARE_CLASS(AInteractable, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UEStudyForMMO"), NO_API) \
	DECLARE_SERIALIZER(AInteractable)


#define UEStudyForMMO_Source_UEStudyForMMO_Public_Interactable_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AInteractable(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AInteractable) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AInteractable); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AInteractable); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AInteractable(AInteractable&&); \
	NO_API AInteractable(const AInteractable&); \
public:


#define UEStudyForMMO_Source_UEStudyForMMO_Public_Interactable_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AInteractable(AInteractable&&); \
	NO_API AInteractable(const AInteractable&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AInteractable); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AInteractable); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AInteractable)


#define UEStudyForMMO_Source_UEStudyForMMO_Public_Interactable_h_12_PRIVATE_PROPERTY_OFFSET
#define UEStudyForMMO_Source_UEStudyForMMO_Public_Interactable_h_9_PROLOG \
	UEStudyForMMO_Source_UEStudyForMMO_Public_Interactable_h_12_EVENT_PARMS


#define UEStudyForMMO_Source_UEStudyForMMO_Public_Interactable_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UEStudyForMMO_Source_UEStudyForMMO_Public_Interactable_h_12_PRIVATE_PROPERTY_OFFSET \
	UEStudyForMMO_Source_UEStudyForMMO_Public_Interactable_h_12_SPARSE_DATA \
	UEStudyForMMO_Source_UEStudyForMMO_Public_Interactable_h_12_RPC_WRAPPERS \
	UEStudyForMMO_Source_UEStudyForMMO_Public_Interactable_h_12_CALLBACK_WRAPPERS \
	UEStudyForMMO_Source_UEStudyForMMO_Public_Interactable_h_12_INCLASS \
	UEStudyForMMO_Source_UEStudyForMMO_Public_Interactable_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UEStudyForMMO_Source_UEStudyForMMO_Public_Interactable_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UEStudyForMMO_Source_UEStudyForMMO_Public_Interactable_h_12_PRIVATE_PROPERTY_OFFSET \
	UEStudyForMMO_Source_UEStudyForMMO_Public_Interactable_h_12_SPARSE_DATA \
	UEStudyForMMO_Source_UEStudyForMMO_Public_Interactable_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	UEStudyForMMO_Source_UEStudyForMMO_Public_Interactable_h_12_CALLBACK_WRAPPERS \
	UEStudyForMMO_Source_UEStudyForMMO_Public_Interactable_h_12_INCLASS_NO_PURE_DECLS \
	UEStudyForMMO_Source_UEStudyForMMO_Public_Interactable_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UESTUDYFORMMO_API UClass* StaticClass<class AInteractable>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UEStudyForMMO_Source_UEStudyForMMO_Public_Interactable_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
