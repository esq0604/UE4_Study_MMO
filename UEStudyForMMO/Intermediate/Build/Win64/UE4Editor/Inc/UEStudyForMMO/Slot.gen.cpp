// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UEStudyForMMO/Public/Slot.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSlot() {}
// Cross Module References
	UESTUDYFORMMO_API UClass* Z_Construct_UClass_USlot_NoRegister();
	UESTUDYFORMMO_API UClass* Z_Construct_UClass_USlot();
	UESTUDYFORMMO_API UClass* Z_Construct_UClass_UCustomUI();
	UPackage* Z_Construct_UPackage__Script_UEStudyForMMO();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UESTUDYFORMMO_API UEnum* Z_Construct_UEnum_UEStudyForMMO_ESlotType();
	UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
// End Cross Module References
	void USlot::StaticRegisterNativesUSlot()
	{
	}
	UClass* Z_Construct_UClass_USlot_NoRegister()
	{
		return USlot::StaticClass();
	}
	struct Z_Construct_UClass_USlot_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DragVisualClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_DragVisualClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Slotnum_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Slotnum;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Index;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Count_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Count;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Type;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Img_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Img;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Text;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USlot_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCustomUI,
		(UObject* (*)())Z_Construct_UPackage__Script_UEStudyForMMO,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USlot_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Slot.h" },
		{ "ModuleRelativePath", "Public/Slot.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USlot_Statics::NewProp_DragVisualClass_MetaData[] = {
		{ "Category", "Slot" },
		{ "Comment", "//?\xe5\xb7\xa1?\xd7\xbd? ???? SlotClass \n" },
		{ "ModuleRelativePath", "Public/Slot.h" },
		{ "ToolTip", "?\xe5\xb7\xa1?\xd7\xbd? ???? SlotClass" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_USlot_Statics::NewProp_DragVisualClass = { "DragVisualClass", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USlot, DragVisualClass), Z_Construct_UClass_USlot_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_USlot_Statics::NewProp_DragVisualClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USlot_Statics::NewProp_DragVisualClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USlot_Statics::NewProp_Slotnum_MetaData[] = {
		{ "Category", "Slot" },
		{ "ModuleRelativePath", "Public/Slot.h" },
		{ "UIMax", "31" },
		{ "UIMin", "-1" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_USlot_Statics::NewProp_Slotnum = { "Slotnum", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USlot, Slotnum), METADATA_PARAMS(Z_Construct_UClass_USlot_Statics::NewProp_Slotnum_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USlot_Statics::NewProp_Slotnum_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USlot_Statics::NewProp_Index_MetaData[] = {
		{ "Category", "Slot" },
		{ "ModuleRelativePath", "Public/Slot.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_USlot_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USlot, Index), METADATA_PARAMS(Z_Construct_UClass_USlot_Statics::NewProp_Index_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USlot_Statics::NewProp_Index_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USlot_Statics::NewProp_Count_MetaData[] = {
		{ "Category", "Slot" },
		{ "ModuleRelativePath", "Public/Slot.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_USlot_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USlot, Count), METADATA_PARAMS(Z_Construct_UClass_USlot_Statics::NewProp_Count_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USlot_Statics::NewProp_Count_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USlot_Statics::NewProp_Type_MetaData[] = {
		{ "Category", "Slot" },
		{ "ModuleRelativePath", "Public/Slot.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USlot_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USlot, Type), Z_Construct_UEnum_UEStudyForMMO_ESlotType, METADATA_PARAMS(Z_Construct_UClass_USlot_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USlot_Statics::NewProp_Type_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USlot_Statics::NewProp_Img_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Slot" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Slot.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USlot_Statics::NewProp_Img = { "Img", nullptr, (EPropertyFlags)0x00100000000a000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USlot, Img), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USlot_Statics::NewProp_Img_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USlot_Statics::NewProp_Img_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USlot_Statics::NewProp_Text_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Slot" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Slot.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USlot_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x00100000000a000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USlot, Text), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USlot_Statics::NewProp_Text_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USlot_Statics::NewProp_Text_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USlot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USlot_Statics::NewProp_DragVisualClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USlot_Statics::NewProp_Slotnum,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USlot_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USlot_Statics::NewProp_Count,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USlot_Statics::NewProp_Type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USlot_Statics::NewProp_Img,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USlot_Statics::NewProp_Text,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USlot_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USlot>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USlot_Statics::ClassParams = {
		&USlot::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USlot_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USlot_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USlot_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USlot_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USlot()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USlot_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USlot, 4086230239);
	template<> UESTUDYFORMMO_API UClass* StaticClass<USlot>()
	{
		return USlot::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USlot(Z_Construct_UClass_USlot, &USlot::StaticClass, TEXT("/Script/UEStudyForMMO"), TEXT("USlot"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USlot);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
