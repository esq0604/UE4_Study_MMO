// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UEStudyForMMO/Public/SlotDrag.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSlotDrag() {}
// Cross Module References
	UESTUDYFORMMO_API UClass* Z_Construct_UClass_USlotDrag_NoRegister();
	UESTUDYFORMMO_API UClass* Z_Construct_UClass_USlotDrag();
	UMG_API UClass* Z_Construct_UClass_UDragDropOperation();
	UPackage* Z_Construct_UPackage__Script_UEStudyForMMO();
	UESTUDYFORMMO_API UEnum* Z_Construct_UEnum_UEStudyForMMO_ESlotType();
// End Cross Module References
	void USlotDrag::StaticRegisterNativesUSlotDrag()
	{
	}
	UClass* Z_Construct_UClass_USlotDrag_NoRegister()
	{
		return USlotDrag::StaticClass();
	}
	struct Z_Construct_UClass_USlotDrag_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FromNum_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_FromNum;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Type;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USlotDrag_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDragDropOperation,
		(UObject* (*)())Z_Construct_UPackage__Script_UEStudyForMMO,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USlotDrag_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "SlotDrag.h" },
		{ "ModuleRelativePath", "Public/SlotDrag.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USlotDrag_Statics::NewProp_FromNum_MetaData[] = {
		{ "Category", "SlotDrag" },
		{ "ModuleRelativePath", "Public/SlotDrag.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_USlotDrag_Statics::NewProp_FromNum = { "FromNum", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USlotDrag, FromNum), METADATA_PARAMS(Z_Construct_UClass_USlotDrag_Statics::NewProp_FromNum_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USlotDrag_Statics::NewProp_FromNum_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USlotDrag_Statics::NewProp_Type_MetaData[] = {
		{ "Category", "SlotDrag" },
		{ "ModuleRelativePath", "Public/SlotDrag.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USlotDrag_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USlotDrag, Type), Z_Construct_UEnum_UEStudyForMMO_ESlotType, METADATA_PARAMS(Z_Construct_UClass_USlotDrag_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USlotDrag_Statics::NewProp_Type_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USlotDrag_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USlotDrag_Statics::NewProp_FromNum,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USlotDrag_Statics::NewProp_Type,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USlotDrag_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USlotDrag>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USlotDrag_Statics::ClassParams = {
		&USlotDrag::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USlotDrag_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USlotDrag_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USlotDrag_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USlotDrag_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USlotDrag()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USlotDrag_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USlotDrag, 1884308765);
	template<> UESTUDYFORMMO_API UClass* StaticClass<USlotDrag>()
	{
		return USlotDrag::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USlotDrag(Z_Construct_UClass_USlotDrag, &USlotDrag::StaticClass, TEXT("/Script/UEStudyForMMO"), TEXT("USlotDrag"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USlotDrag);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
