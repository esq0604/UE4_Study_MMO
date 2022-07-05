// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UEStudyForMMO/CustomUI.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCustomUI() {}
// Cross Module References
	UESTUDYFORMMO_API UClass* Z_Construct_UClass_UCustomUI_NoRegister();
	UESTUDYFORMMO_API UClass* Z_Construct_UClass_UCustomUI();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_UEStudyForMMO();
// End Cross Module References
	void UCustomUI::StaticRegisterNativesUCustomUI()
	{
	}
	UClass* Z_Construct_UClass_UCustomUI_NoRegister()
	{
		return UCustomUI::StaticClass();
	}
	struct Z_Construct_UClass_UCustomUI_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCustomUI_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_UEStudyForMMO,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomUI_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "CustomUI.h" },
		{ "ModuleRelativePath", "CustomUI.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCustomUI_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCustomUI>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCustomUI_Statics::ClassParams = {
		&UCustomUI::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UCustomUI_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomUI_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCustomUI()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCustomUI_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCustomUI, 865915342);
	template<> UESTUDYFORMMO_API UClass* StaticClass<UCustomUI>()
	{
		return UCustomUI::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCustomUI(Z_Construct_UClass_UCustomUI, &UCustomUI::StaticClass, TEXT("/Script/UEStudyForMMO"), TEXT("UCustomUI"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCustomUI);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
