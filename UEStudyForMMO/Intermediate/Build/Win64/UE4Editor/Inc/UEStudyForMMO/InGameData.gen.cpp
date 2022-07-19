// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UEStudyForMMO/Public/InGameData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInGameData() {}
// Cross Module References
	UESTUDYFORMMO_API UEnum* Z_Construct_UEnum_UEStudyForMMO_ESlotType();
	UPackage* Z_Construct_UPackage__Script_UEStudyForMMO();
	UESTUDYFORMMO_API UEnum* Z_Construct_UEnum_UEStudyForMMO_EItemType();
	UESTUDYFORMMO_API UEnum* Z_Construct_UEnum_UEStudyForMMO_EGaugeType();
	UESTUDYFORMMO_API UScriptStruct* Z_Construct_UScriptStruct_FItemData();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
// End Cross Module References
	static UEnum* ESlotType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_UEStudyForMMO_ESlotType, Z_Construct_UPackage__Script_UEStudyForMMO(), TEXT("ESlotType"));
		}
		return Singleton;
	}
	template<> UESTUDYFORMMO_API UEnum* StaticEnum<ESlotType>()
	{
		return ESlotType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESlotType(ESlotType_StaticEnum, TEXT("/Script/UEStudyForMMO"), TEXT("ESlotType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_UEStudyForMMO_ESlotType_Hash() { return 1916598362U; }
	UEnum* Z_Construct_UEnum_UEStudyForMMO_ESlotType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_UEStudyForMMO();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESlotType"), 0, Get_Z_Construct_UEnum_UEStudyForMMO_ESlotType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "SLOT_None", (int64)SLOT_None },
				{ "SLOT_Item", (int64)SLOT_Item },
				{ "SLOT_Skill", (int64)SLOT_Skill },
				{ "SLOT_Quick", (int64)SLOT_Quick },
				{ "SLOT_Q_Item", (int64)SLOT_Q_Item },
				{ "SLOT_Q_Skill", (int64)SLOT_Q_Skill },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "//Slot Type\n" },
				{ "ModuleRelativePath", "Public/InGameData.h" },
				{ "SLOT_Item.DisplayName", "Item" },
				{ "SLOT_Item.Name", "SLOT_Item" },
				{ "SLOT_None.DisplayName", "None" },
				{ "SLOT_None.Name", "SLOT_None" },
				{ "SLOT_Q_Item.DisplayName", "Q_Item" },
				{ "SLOT_Q_Item.Name", "SLOT_Q_Item" },
				{ "SLOT_Q_Skill.DisplayName", "Q_Skill" },
				{ "SLOT_Q_Skill.Name", "SLOT_Q_Skill" },
				{ "SLOT_Quick.DisplayName", "Quick" },
				{ "SLOT_Quick.Name", "SLOT_Quick" },
				{ "SLOT_Skill.DisplayName", "Skill" },
				{ "SLOT_Skill.Name", "SLOT_Skill" },
				{ "ToolTip", "Slot Type" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_UEStudyForMMO,
				nullptr,
				"ESlotType",
				"ESlotType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EItemType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_UEStudyForMMO_EItemType, Z_Construct_UPackage__Script_UEStudyForMMO(), TEXT("EItemType"));
		}
		return Singleton;
	}
	template<> UESTUDYFORMMO_API UEnum* StaticEnum<EItemType>()
	{
		return EItemType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EItemType(EItemType_StaticEnum, TEXT("/Script/UEStudyForMMO"), TEXT("EItemType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_UEStudyForMMO_EItemType_Hash() { return 987474385U; }
	UEnum* Z_Construct_UEnum_UEStudyForMMO_EItemType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_UEStudyForMMO();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EItemType"), 0, Get_Z_Construct_UEnum_UEStudyForMMO_EItemType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ITEM_None", (int64)ITEM_None },
				{ "ITEM_Useable", (int64)ITEM_Useable },
				{ "ITEM_Equiment", (int64)ITEM_Equiment },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "//Inventory Data\n" },
				{ "ITEM_Equiment.DisplayName", "Equiment" },
				{ "ITEM_Equiment.Name", "ITEM_Equiment" },
				{ "ITEM_None.DisplayName", "None" },
				{ "ITEM_None.Name", "ITEM_None" },
				{ "ITEM_Useable.DisplayName", "Useable" },
				{ "ITEM_Useable.Name", "ITEM_Useable" },
				{ "ModuleRelativePath", "Public/InGameData.h" },
				{ "ToolTip", "Inventory Data" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_UEStudyForMMO,
				nullptr,
				"EItemType",
				"EItemType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EGaugeType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_UEStudyForMMO_EGaugeType, Z_Construct_UPackage__Script_UEStudyForMMO(), TEXT("EGaugeType"));
		}
		return Singleton;
	}
	template<> UESTUDYFORMMO_API UEnum* StaticEnum<EGaugeType>()
	{
		return EGaugeType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EGaugeType(EGaugeType_StaticEnum, TEXT("/Script/UEStudyForMMO"), TEXT("EGaugeType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_UEStudyForMMO_EGaugeType_Hash() { return 273292568U; }
	UEnum* Z_Construct_UEnum_UEStudyForMMO_EGaugeType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_UEStudyForMMO();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EGaugeType"), 0, Get_Z_Construct_UEnum_UEStudyForMMO_EGaugeType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "Gauge_HP", (int64)Gauge_HP },
				{ "Gauge_Resource", (int64)Gauge_Resource },
				{ "Gauge_Exp", (int64)Gauge_Exp },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "//Gague Data\n" },
				{ "Gauge_Exp.DisplayName", "Exp" },
				{ "Gauge_Exp.Name", "Gauge_Exp" },
				{ "Gauge_HP.DisplayName", "HP" },
				{ "Gauge_HP.Name", "Gauge_HP" },
				{ "Gauge_Resource.DisplayName", "Resource" },
				{ "Gauge_Resource.Name", "Gauge_Resource" },
				{ "ModuleRelativePath", "Public/InGameData.h" },
				{ "ToolTip", "Gague Data" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_UEStudyForMMO,
				nullptr,
				"EGaugeType",
				"EGaugeType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FItemData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern UESTUDYFORMMO_API uint32 Get_Z_Construct_UScriptStruct_FItemData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FItemData, Z_Construct_UPackage__Script_UEStudyForMMO(), TEXT("ItemData"), sizeof(FItemData), Get_Z_Construct_UScriptStruct_FItemData_Hash());
	}
	return Singleton;
}
template<> UESTUDYFORMMO_API UScriptStruct* StaticStruct<FItemData>()
{
	return FItemData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FItemData(FItemData::StaticStruct, TEXT("/Script/UEStudyForMMO"), TEXT("ItemData"), false, nullptr, nullptr);
static struct FScriptStruct_UEStudyForMMO_StaticRegisterNativesFItemData
{
	FScriptStruct_UEStudyForMMO_StaticRegisterNativesFItemData()
	{
		UScriptStruct::DeferCppStructOps<FItemData>(FName(TEXT("ItemData")));
	}
} ScriptStruct_UEStudyForMMO_StaticRegisterNativesFItemData;
	struct Z_Construct_UScriptStruct_FItemData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Texture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Texture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Type;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Count_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Count;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/InGameData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FItemData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FItemData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemData_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "ItemData" },
		{ "ModuleRelativePath", "Public/InGameData.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FItemData_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FItemData, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FItemData_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemData_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemData_Statics::NewProp_Texture_MetaData[] = {
		{ "Category", "ItemData" },
		{ "ModuleRelativePath", "Public/InGameData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FItemData_Statics::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FItemData, Texture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FItemData_Statics::NewProp_Texture_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemData_Statics::NewProp_Texture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemData_Statics::NewProp_Type_MetaData[] = {
		{ "Category", "ItemData" },
		{ "ModuleRelativePath", "Public/InGameData.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FItemData_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FItemData, Type), Z_Construct_UEnum_UEStudyForMMO_EItemType, METADATA_PARAMS(Z_Construct_UScriptStruct_FItemData_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemData_Statics::NewProp_Type_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemData_Statics::NewProp_Count_MetaData[] = {
		{ "Category", "ItemData" },
		{ "ModuleRelativePath", "Public/InGameData.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FItemData_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FItemData, Count), METADATA_PARAMS(Z_Construct_UScriptStruct_FItemData_Statics::NewProp_Count_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemData_Statics::NewProp_Count_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FItemData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemData_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemData_Statics::NewProp_Texture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemData_Statics::NewProp_Type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemData_Statics::NewProp_Count,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FItemData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UEStudyForMMO,
		nullptr,
		&NewStructOps,
		"ItemData",
		sizeof(FItemData),
		alignof(FItemData),
		Z_Construct_UScriptStruct_FItemData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FItemData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FItemData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FItemData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_UEStudyForMMO();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ItemData"), sizeof(FItemData), Get_Z_Construct_UScriptStruct_FItemData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FItemData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FItemData_Hash() { return 1035609324U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
