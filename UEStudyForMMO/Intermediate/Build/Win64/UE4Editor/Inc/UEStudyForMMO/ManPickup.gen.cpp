// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UEStudyForMMO/ManPickup.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeManPickup() {}
// Cross Module References
	UESTUDYFORMMO_API UClass* Z_Construct_UClass_AManPickup_NoRegister();
	UESTUDYFORMMO_API UClass* Z_Construct_UClass_AManPickup();
	UESTUDYFORMMO_API UClass* Z_Construct_UClass_AInteractable();
	UPackage* Z_Construct_UPackage__Script_UEStudyForMMO();
// End Cross Module References
	void AManPickup::StaticRegisterNativesAManPickup()
	{
	}
	UClass* Z_Construct_UClass_AManPickup_NoRegister()
	{
		return AManPickup::StaticClass();
	}
	struct Z_Construct_UClass_AManPickup_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AManPickup_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AInteractable,
		(UObject* (*)())Z_Construct_UPackage__Script_UEStudyForMMO,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AManPickup_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "ManPickup.h" },
		{ "ModuleRelativePath", "ManPickup.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AManPickup_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AManPickup>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AManPickup_Statics::ClassParams = {
		&AManPickup::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AManPickup_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AManPickup_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AManPickup()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AManPickup_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AManPickup, 422202716);
	template<> UESTUDYFORMMO_API UClass* StaticClass<AManPickup>()
	{
		return AManPickup::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AManPickup(Z_Construct_UClass_AManPickup, &AManPickup::StaticClass, TEXT("/Script/UEStudyForMMO"), TEXT("AManPickup"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AManPickup);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
