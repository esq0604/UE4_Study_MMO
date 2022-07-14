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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Solotnum_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Solotnum;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Count_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Count;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USlot_Statics::NewProp_Solotnum_MetaData[] = {
		{ "Category", "Slot" },
		{ "ModuleRelativePath", "Public/Slot.h" },
		{ "UIMax", "31" },
		{ "UIMin", "-1" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_USlot_Statics::NewProp_Solotnum = { "Solotnum", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USlot, Solotnum), METADATA_PARAMS(Z_Construct_UClass_USlot_Statics::NewProp_Solotnum_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USlot_Statics::NewProp_Solotnum_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USlot_Statics::NewProp_Count_MetaData[] = {
		{ "Category", "Slot" },
		{ "ModuleRelativePath", "Public/Slot.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_USlot_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USlot, Count), METADATA_PARAMS(Z_Construct_UClass_USlot_Statics::NewProp_Count_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USlot_Statics::NewProp_Count_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USlot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USlot_Statics::NewProp_Solotnum,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USlot_Statics::NewProp_Count,
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
	IMPLEMENT_CLASS(USlot, 2141341624);
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
