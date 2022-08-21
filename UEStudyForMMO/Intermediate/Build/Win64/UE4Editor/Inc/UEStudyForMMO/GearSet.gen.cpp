// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UEStudyForMMO/Public/GearSet.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGearSet() {}
// Cross Module References
	UESTUDYFORMMO_API UClass* Z_Construct_UClass_UGearSet_NoRegister();
	UESTUDYFORMMO_API UClass* Z_Construct_UClass_UGearSet();
	UESTUDYFORMMO_API UClass* Z_Construct_UClass_UCustomUI();
	UPackage* Z_Construct_UPackage__Script_UEStudyForMMO();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
// End Cross Module References
	void UGearSet::StaticRegisterNativesUGearSet()
	{
	}
	UClass* Z_Construct_UClass_UGearSet_NoRegister()
	{
		return UGearSet::StaticClass();
	}
	struct Z_Construct_UClass_UGearSet_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefTex_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DefTex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGearSet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCustomUI,
		(UObject* (*)())Z_Construct_UPackage__Script_UEStudyForMMO,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGearSet_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GearSet.h" },
		{ "ModuleRelativePath", "Public/GearSet.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGearSet_Statics::NewProp_DefTex_MetaData[] = {
		{ "Category", "GearSet" },
		{ "ModuleRelativePath", "Public/GearSet.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGearSet_Statics::NewProp_DefTex = { "DefTex", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGearSet, DefTex), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGearSet_Statics::NewProp_DefTex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGearSet_Statics::NewProp_DefTex_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGearSet_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGearSet_Statics::NewProp_DefTex,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGearSet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGearSet>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGearSet_Statics::ClassParams = {
		&UGearSet::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGearSet_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGearSet_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGearSet_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGearSet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGearSet()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGearSet_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGearSet, 2093449101);
	template<> UESTUDYFORMMO_API UClass* StaticClass<UGearSet>()
	{
		return UGearSet::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGearSet(Z_Construct_UClass_UGearSet, &UGearSet::StaticClass, TEXT("/Script/UEStudyForMMO"), TEXT("UGearSet"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGearSet);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
