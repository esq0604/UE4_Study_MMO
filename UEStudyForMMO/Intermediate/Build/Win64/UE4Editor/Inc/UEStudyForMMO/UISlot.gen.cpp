// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UEStudyForMMO/UISlot.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUISlot() {}
// Cross Module References
	UESTUDYFORMMO_API UClass* Z_Construct_UClass_UUISlot_NoRegister();
	UESTUDYFORMMO_API UClass* Z_Construct_UClass_UUISlot();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_UEStudyForMMO();
// End Cross Module References
	void UUISlot::StaticRegisterNativesUUISlot()
	{
	}
	UClass* Z_Construct_UClass_UUISlot_NoRegister()
	{
		return UUISlot::StaticClass();
	}
	struct Z_Construct_UClass_UUISlot_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUISlot_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_UEStudyForMMO,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUISlot_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "UISlot.h" },
		{ "ModuleRelativePath", "UISlot.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUISlot_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUISlot>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUISlot_Statics::ClassParams = {
		&UUISlot::StaticClass,
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
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UUISlot_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUISlot_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUISlot()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUISlot_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUISlot, 1349847496);
	template<> UESTUDYFORMMO_API UClass* StaticClass<UUISlot>()
	{
		return UUISlot::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUISlot(Z_Construct_UClass_UUISlot, &UUISlot::StaticClass, TEXT("/Script/UEStudyForMMO"), TEXT("UUISlot"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUISlot);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
