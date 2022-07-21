// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UEStudyForMMO/Public/GameUI.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameUI() {}
// Cross Module References
	UESTUDYFORMMO_API UClass* Z_Construct_UClass_UGameUI_NoRegister();
	UESTUDYFORMMO_API UClass* Z_Construct_UClass_UGameUI();
	UESTUDYFORMMO_API UClass* Z_Construct_UClass_UCustomUI();
	UPackage* Z_Construct_UPackage__Script_UEStudyForMMO();
	UESTUDYFORMMO_API UClass* Z_Construct_UClass_UInventory_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	UESTUDYFORMMO_API UClass* Z_Construct_UClass_UGauge_NoRegister();
// End Cross Module References
	void UGameUI::StaticRegisterNativesUGameUI()
	{
	}
	UClass* Z_Construct_UClass_UGameUI_NoRegister()
	{
		return UGameUI::StaticClass();
	}
	struct Z_Construct_UClass_UGameUI_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Inventory_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Inventory;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HPBarTex_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HPBarTex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HPBarColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HPBarColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResourceBarTex_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ResourceBarTex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResourceBarColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ResourceBarColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExpBarTex_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ExpBarTex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExBarColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ExBarColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HPBar_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HPBar;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResourceBar_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ResourceBar;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExpBar_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ExpBar;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGameUI_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCustomUI,
		(UObject* (*)())Z_Construct_UPackage__Script_UEStudyForMMO,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameUI_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GameUI.h" },
		{ "ModuleRelativePath", "Public/GameUI.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameUI_Statics::NewProp_Inventory_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "UI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GameUI.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGameUI_Statics::NewProp_Inventory = { "Inventory", nullptr, (EPropertyFlags)0x001000000008001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGameUI, Inventory), Z_Construct_UClass_UInventory_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGameUI_Statics::NewProp_Inventory_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameUI_Statics::NewProp_Inventory_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameUI_Statics::NewProp_HPBarTex_MetaData[] = {
		{ "Category", "ProgressBarData" },
		{ "ModuleRelativePath", "Public/GameUI.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGameUI_Statics::NewProp_HPBarTex = { "HPBarTex", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGameUI, HPBarTex), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGameUI_Statics::NewProp_HPBarTex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameUI_Statics::NewProp_HPBarTex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameUI_Statics::NewProp_HPBarColor_MetaData[] = {
		{ "Category", "ProgressBarData" },
		{ "ModuleRelativePath", "Public/GameUI.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameUI_Statics::NewProp_HPBarColor = { "HPBarColor", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGameUI, HPBarColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UGameUI_Statics::NewProp_HPBarColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameUI_Statics::NewProp_HPBarColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameUI_Statics::NewProp_ResourceBarTex_MetaData[] = {
		{ "Category", "ProgressBarData" },
		{ "ModuleRelativePath", "Public/GameUI.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGameUI_Statics::NewProp_ResourceBarTex = { "ResourceBarTex", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGameUI, ResourceBarTex), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGameUI_Statics::NewProp_ResourceBarTex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameUI_Statics::NewProp_ResourceBarTex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameUI_Statics::NewProp_ResourceBarColor_MetaData[] = {
		{ "Category", "ProgressBarData" },
		{ "ModuleRelativePath", "Public/GameUI.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameUI_Statics::NewProp_ResourceBarColor = { "ResourceBarColor", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGameUI, ResourceBarColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UGameUI_Statics::NewProp_ResourceBarColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameUI_Statics::NewProp_ResourceBarColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameUI_Statics::NewProp_ExpBarTex_MetaData[] = {
		{ "Category", "ProgressBarData" },
		{ "ModuleRelativePath", "Public/GameUI.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGameUI_Statics::NewProp_ExpBarTex = { "ExpBarTex", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGameUI, ExpBarTex), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGameUI_Statics::NewProp_ExpBarTex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameUI_Statics::NewProp_ExpBarTex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameUI_Statics::NewProp_ExBarColor_MetaData[] = {
		{ "Category", "ProgressBarData" },
		{ "ModuleRelativePath", "Public/GameUI.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameUI_Statics::NewProp_ExBarColor = { "ExBarColor", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGameUI, ExBarColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UGameUI_Statics::NewProp_ExBarColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameUI_Statics::NewProp_ExBarColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameUI_Statics::NewProp_HPBar_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "UI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GameUI.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGameUI_Statics::NewProp_HPBar = { "HPBar", nullptr, (EPropertyFlags)0x001000000008001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGameUI, HPBar), Z_Construct_UClass_UGauge_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGameUI_Statics::NewProp_HPBar_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameUI_Statics::NewProp_HPBar_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameUI_Statics::NewProp_ResourceBar_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "UI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GameUI.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGameUI_Statics::NewProp_ResourceBar = { "ResourceBar", nullptr, (EPropertyFlags)0x001000000008001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGameUI, ResourceBar), Z_Construct_UClass_UGauge_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGameUI_Statics::NewProp_ResourceBar_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameUI_Statics::NewProp_ResourceBar_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameUI_Statics::NewProp_ExpBar_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "UI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GameUI.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGameUI_Statics::NewProp_ExpBar = { "ExpBar", nullptr, (EPropertyFlags)0x001000000008001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGameUI, ExpBar), Z_Construct_UClass_UGauge_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGameUI_Statics::NewProp_ExpBar_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameUI_Statics::NewProp_ExpBar_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGameUI_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameUI_Statics::NewProp_Inventory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameUI_Statics::NewProp_HPBarTex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameUI_Statics::NewProp_HPBarColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameUI_Statics::NewProp_ResourceBarTex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameUI_Statics::NewProp_ResourceBarColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameUI_Statics::NewProp_ExpBarTex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameUI_Statics::NewProp_ExBarColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameUI_Statics::NewProp_HPBar,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameUI_Statics::NewProp_ResourceBar,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameUI_Statics::NewProp_ExpBar,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGameUI_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameUI>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGameUI_Statics::ClassParams = {
		&UGameUI::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGameUI_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGameUI_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGameUI_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGameUI_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGameUI()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGameUI_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGameUI, 2234678842);
	template<> UESTUDYFORMMO_API UClass* StaticClass<UGameUI>()
	{
		return UGameUI::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGameUI(Z_Construct_UClass_UGameUI, &UGameUI::StaticClass, TEXT("/Script/UEStudyForMMO"), TEXT("UGameUI"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameUI);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
