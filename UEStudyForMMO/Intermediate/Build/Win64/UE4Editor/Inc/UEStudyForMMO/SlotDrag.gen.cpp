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
	const FCppClassTypeInfoStatic Z_Construct_UClass_USlotDrag_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USlotDrag>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USlotDrag_Statics::ClassParams = {
		&USlotDrag::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
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
	IMPLEMENT_CLASS(USlotDrag, 2366373473);
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
