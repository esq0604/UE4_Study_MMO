// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UEStudyForMMO/FInvenItem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFInvenItem() {}
// Cross Module References
	UESTUDYFORMMO_API UScriptStruct* Z_Construct_UScriptStruct_FInvenItem();
	UPackage* Z_Construct_UPackage__Script_UEStudyForMMO();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FInvenItem>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FInvenItem cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FInvenItem::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern UESTUDYFORMMO_API uint32 Get_Z_Construct_UScriptStruct_FInvenItem_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FInvenItem, Z_Construct_UPackage__Script_UEStudyForMMO(), TEXT("InvenItem"), sizeof(FInvenItem), Get_Z_Construct_UScriptStruct_FInvenItem_Hash());
	}
	return Singleton;
}
template<> UESTUDYFORMMO_API UScriptStruct* StaticStruct<FInvenItem>()
{
	return FInvenItem::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FInvenItem(FInvenItem::StaticStruct, TEXT("/Script/UEStudyForMMO"), TEXT("InvenItem"), false, nullptr, nullptr);
static struct FScriptStruct_UEStudyForMMO_StaticRegisterNativesFInvenItem
{
	FScriptStruct_UEStudyForMMO_StaticRegisterNativesFInvenItem()
	{
		UScriptStruct::DeferCppStructOps<FInvenItem>(FName(TEXT("InvenItem")));
	}
} ScriptStruct_UEStudyForMMO_StaticRegisterNativesFInvenItem;
	struct Z_Construct_UScriptStruct_FInvenItem_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemID_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ItemID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Weight_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Weight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Thumbnail_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Thumbnail;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Description;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInvenItem_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "FInvenItem.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FInvenItem_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInvenItem>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInvenItem_Statics::NewProp_ItemID_MetaData[] = {
		{ "Category", "InvenItem" },
		{ "ModuleRelativePath", "FInvenItem.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FInvenItem_Statics::NewProp_ItemID = { "ItemID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInvenItem, ItemID), METADATA_PARAMS(Z_Construct_UScriptStruct_FInvenItem_Statics::NewProp_ItemID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInvenItem_Statics::NewProp_ItemID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInvenItem_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "InvenItem" },
		{ "ModuleRelativePath", "FInvenItem.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FInvenItem_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInvenItem, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FInvenItem_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInvenItem_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInvenItem_Statics::NewProp_Weight_MetaData[] = {
		{ "Category", "InvenItem" },
		{ "ModuleRelativePath", "FInvenItem.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FInvenItem_Statics::NewProp_Weight = { "Weight", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInvenItem, Weight), METADATA_PARAMS(Z_Construct_UScriptStruct_FInvenItem_Statics::NewProp_Weight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInvenItem_Statics::NewProp_Weight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInvenItem_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "InvenItem" },
		{ "ModuleRelativePath", "FInvenItem.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FInvenItem_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInvenItem, Value), METADATA_PARAMS(Z_Construct_UScriptStruct_FInvenItem_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInvenItem_Statics::NewProp_Value_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInvenItem_Statics::NewProp_Thumbnail_MetaData[] = {
		{ "Category", "InvenItem" },
		{ "ModuleRelativePath", "FInvenItem.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FInvenItem_Statics::NewProp_Thumbnail = { "Thumbnail", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInvenItem, Thumbnail), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FInvenItem_Statics::NewProp_Thumbnail_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInvenItem_Statics::NewProp_Thumbnail_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInvenItem_Statics::NewProp_Description_MetaData[] = {
		{ "Category", "InvenItem" },
		{ "ModuleRelativePath", "FInvenItem.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FInvenItem_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInvenItem, Description), METADATA_PARAMS(Z_Construct_UScriptStruct_FInvenItem_Statics::NewProp_Description_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInvenItem_Statics::NewProp_Description_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInvenItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInvenItem_Statics::NewProp_ItemID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInvenItem_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInvenItem_Statics::NewProp_Weight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInvenItem_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInvenItem_Statics::NewProp_Thumbnail,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInvenItem_Statics::NewProp_Description,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInvenItem_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UEStudyForMMO,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"InvenItem",
		sizeof(FInvenItem),
		alignof(FInvenItem),
		Z_Construct_UScriptStruct_FInvenItem_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInvenItem_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FInvenItem_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInvenItem_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FInvenItem()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FInvenItem_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_UEStudyForMMO();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("InvenItem"), sizeof(FInvenItem), Get_Z_Construct_UScriptStruct_FInvenItem_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FInvenItem_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FInvenItem_Hash() { return 2401225190U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
