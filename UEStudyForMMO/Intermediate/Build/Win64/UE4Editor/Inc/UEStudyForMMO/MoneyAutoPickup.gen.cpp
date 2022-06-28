// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UEStudyForMMO/MoneyAutoPickup.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMoneyAutoPickup() {}
// Cross Module References
	UESTUDYFORMMO_API UClass* Z_Construct_UClass_AMoneyAutoPickup_NoRegister();
	UESTUDYFORMMO_API UClass* Z_Construct_UClass_AMoneyAutoPickup();
	UESTUDYFORMMO_API UClass* Z_Construct_UClass_AAutoPickup();
	UPackage* Z_Construct_UPackage__Script_UEStudyForMMO();
// End Cross Module References
	void AMoneyAutoPickup::StaticRegisterNativesAMoneyAutoPickup()
	{
	}
	UClass* Z_Construct_UClass_AMoneyAutoPickup_NoRegister()
	{
		return AMoneyAutoPickup::StaticClass();
	}
	struct Z_Construct_UClass_AMoneyAutoPickup_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMoneyAutoPickup_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAutoPickup,
		(UObject* (*)())Z_Construct_UPackage__Script_UEStudyForMMO,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMoneyAutoPickup_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MoneyAutoPickup.h" },
		{ "ModuleRelativePath", "MoneyAutoPickup.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMoneyAutoPickup_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "MoneyAutoPickup" },
		{ "ModuleRelativePath", "MoneyAutoPickup.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMoneyAutoPickup_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMoneyAutoPickup, Value), METADATA_PARAMS(Z_Construct_UClass_AMoneyAutoPickup_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMoneyAutoPickup_Statics::NewProp_Value_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMoneyAutoPickup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMoneyAutoPickup_Statics::NewProp_Value,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMoneyAutoPickup_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMoneyAutoPickup>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMoneyAutoPickup_Statics::ClassParams = {
		&AMoneyAutoPickup::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AMoneyAutoPickup_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AMoneyAutoPickup_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMoneyAutoPickup_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMoneyAutoPickup_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMoneyAutoPickup()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMoneyAutoPickup_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMoneyAutoPickup, 1839121285);
	template<> UESTUDYFORMMO_API UClass* StaticClass<AMoneyAutoPickup>()
	{
		return AMoneyAutoPickup::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMoneyAutoPickup(Z_Construct_UClass_AMoneyAutoPickup, &AMoneyAutoPickup::StaticClass, TEXT("/Script/UEStudyForMMO"), TEXT("AMoneyAutoPickup"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMoneyAutoPickup);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
