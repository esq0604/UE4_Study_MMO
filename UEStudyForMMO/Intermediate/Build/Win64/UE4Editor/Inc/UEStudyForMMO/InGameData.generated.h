// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UESTUDYFORMMO_InGameData_generated_h
#error "InGameData.generated.h already included, missing '#pragma once' in InGameData.h"
#endif
#define UESTUDYFORMMO_InGameData_generated_h

#define UEStudyForMMO_Source_UEStudyForMMO_Public_InGameData_h_74_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FItemData_Statics; \
	UESTUDYFORMMO_API static class UScriptStruct* StaticStruct();


template<> UESTUDYFORMMO_API UScriptStruct* StaticStruct<struct FItemData>();

#define UEStudyForMMO_Source_UEStudyForMMO_Public_InGameData_h_55_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPotionData_Statics; \
	UESTUDYFORMMO_API static class UScriptStruct* StaticStruct();


template<> UESTUDYFORMMO_API UScriptStruct* StaticStruct<struct FPotionData>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UEStudyForMMO_Source_UEStudyForMMO_Public_InGameData_h


#define FOREACH_ENUM_ESLOTTYPE(op) \
	op(SLOT_None) \
	op(SLOT_Item) \
	op(SLOT_Skill) \
	op(SLOT_Quick) \
	op(SLOT_Q_Item) \
	op(SLOT_Q_Skill) 
#define FOREACH_ENUM_EITEMTYPE(op) \
	op(ITEM_None) \
	op(ITEM_Useable) \
	op(ITEM_Equiment) 
#define FOREACH_ENUM_EGAUGETYPE(op) \
	op(Gauge_HP) \
	op(Gauge_Resource) \
	op(Gauge_Exp) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
