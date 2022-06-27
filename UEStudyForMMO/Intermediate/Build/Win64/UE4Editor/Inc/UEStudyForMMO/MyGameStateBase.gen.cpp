// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UEStudyForMMO/MyGameStateBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyGameStateBase() {}
// Cross Module References
	UESTUDYFORMMO_API UClass* Z_Construct_UClass_AMyGameStateBase_NoRegister();
	UESTUDYFORMMO_API UClass* Z_Construct_UClass_AMyGameStateBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameStateBase();
	UPackage* Z_Construct_UPackage__Script_UEStudyForMMO();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
// End Cross Module References
	void AMyGameStateBase::StaticRegisterNativesAMyGameStateBase()
	{
	}
	UClass* Z_Construct_UClass_AMyGameStateBase_NoRegister()
	{
		return AMyGameStateBase::StaticClass();
	}
	struct Z_Construct_UClass_AMyGameStateBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemDB_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ItemDB;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyGameStateBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameStateBase,
		(UObject* (*)())Z_Construct_UPackage__Script_UEStudyForMMO,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyGameStateBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "MyGameStateBase.h" },
		{ "ModuleRelativePath", "MyGameStateBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyGameStateBase_Statics::NewProp_ItemDB_MetaData[] = {
		{ "Category", "MyGameStateBase" },
		{ "ModuleRelativePath", "MyGameStateBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyGameStateBase_Statics::NewProp_ItemDB = { "ItemDB", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyGameStateBase, ItemDB), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMyGameStateBase_Statics::NewProp_ItemDB_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyGameStateBase_Statics::NewProp_ItemDB_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyGameStateBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyGameStateBase_Statics::NewProp_ItemDB,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyGameStateBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyGameStateBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMyGameStateBase_Statics::ClassParams = {
		&AMyGameStateBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AMyGameStateBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AMyGameStateBase_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMyGameStateBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMyGameStateBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMyGameStateBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMyGameStateBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMyGameStateBase, 3441205361);
	template<> UESTUDYFORMMO_API UClass* StaticClass<AMyGameStateBase>()
	{
		return AMyGameStateBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMyGameStateBase(Z_Construct_UClass_AMyGameStateBase, &AMyGameStateBase::StaticClass, TEXT("/Script/UEStudyForMMO"), TEXT("AMyGameStateBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyGameStateBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
