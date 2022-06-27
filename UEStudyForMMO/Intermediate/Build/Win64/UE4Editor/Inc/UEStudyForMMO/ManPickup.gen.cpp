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
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
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
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PickupMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PickupMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemID_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ItemID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
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
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AManPickup_Statics::NewProp_PickupMesh_MetaData[] = {
		{ "Category", "ManPickup" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ManPickup.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AManPickup_Statics::NewProp_PickupMesh = { "PickupMesh", nullptr, (EPropertyFlags)0x0020080000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AManPickup, PickupMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AManPickup_Statics::NewProp_PickupMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AManPickup_Statics::NewProp_PickupMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AManPickup_Statics::NewProp_ItemID_MetaData[] = {
		{ "Category", "ManPickup" },
		{ "ModuleRelativePath", "ManPickup.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_AManPickup_Statics::NewProp_ItemID = { "ItemID", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AManPickup, ItemID), METADATA_PARAMS(Z_Construct_UClass_AManPickup_Statics::NewProp_ItemID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AManPickup_Statics::NewProp_ItemID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AManPickup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AManPickup_Statics::NewProp_PickupMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AManPickup_Statics::NewProp_ItemID,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AManPickup_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AManPickup>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AManPickup_Statics::ClassParams = {
		&AManPickup::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AManPickup_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AManPickup_Statics::PropPointers),
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
	IMPLEMENT_CLASS(AManPickup, 2706183964);
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
