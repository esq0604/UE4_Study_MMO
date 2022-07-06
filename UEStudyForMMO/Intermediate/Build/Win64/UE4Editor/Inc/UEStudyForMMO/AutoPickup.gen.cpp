// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UEStudyForMMO/Public/AutoPickup.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAutoPickup() {}
// Cross Module References
	UESTUDYFORMMO_API UClass* Z_Construct_UClass_AAutoPickup_NoRegister();
	UESTUDYFORMMO_API UClass* Z_Construct_UClass_AAutoPickup();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_UEStudyForMMO();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AAutoPickup::execCollect)
	{
		P_GET_OBJECT(APlayerController,Z_Param_IController);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Collect_Implementation(Z_Param_IController);
		P_NATIVE_END;
	}
	static FName NAME_AAutoPickup_Collect = FName(TEXT("Collect"));
	void AAutoPickup::Collect(APlayerController* IController)
	{
		AutoPickup_eventCollect_Parms Parms;
		Parms.IController=IController;
		ProcessEvent(FindFunctionChecked(NAME_AAutoPickup_Collect),&Parms);
	}
	void AAutoPickup::StaticRegisterNativesAAutoPickup()
	{
		UClass* Class = AAutoPickup::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Collect", &AAutoPickup::execCollect },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AAutoPickup_Collect_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_IController;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAutoPickup_Collect_Statics::NewProp_IController = { "IController", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AutoPickup_eventCollect_Parms, IController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAutoPickup_Collect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAutoPickup_Collect_Statics::NewProp_IController,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAutoPickup_Collect_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AutoPickup.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAutoPickup_Collect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAutoPickup, nullptr, "Collect", nullptr, nullptr, sizeof(AutoPickup_eventCollect_Parms), Z_Construct_UFunction_AAutoPickup_Collect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAutoPickup_Collect_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAutoPickup_Collect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAutoPickup_Collect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAutoPickup_Collect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAutoPickup_Collect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AAutoPickup_NoRegister()
	{
		return AAutoPickup::StaticClass();
	}
	struct Z_Construct_UClass_AAutoPickup_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
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
	UObject* (*const Z_Construct_UClass_AAutoPickup_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_UEStudyForMMO,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AAutoPickup_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AAutoPickup_Collect, "Collect" }, // 1122965562
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAutoPickup_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AutoPickup.h" },
		{ "ModuleRelativePath", "Public/AutoPickup.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAutoPickup_Statics::NewProp_PickupMesh_MetaData[] = {
		{ "Category", "AutoPickup" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AutoPickup.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAutoPickup_Statics::NewProp_PickupMesh = { "PickupMesh", nullptr, (EPropertyFlags)0x0020080000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAutoPickup, PickupMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAutoPickup_Statics::NewProp_PickupMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAutoPickup_Statics::NewProp_PickupMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAutoPickup_Statics::NewProp_ItemID_MetaData[] = {
		{ "Category", "AutoPickup" },
		{ "ModuleRelativePath", "Public/AutoPickup.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_AAutoPickup_Statics::NewProp_ItemID = { "ItemID", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAutoPickup, ItemID), METADATA_PARAMS(Z_Construct_UClass_AAutoPickup_Statics::NewProp_ItemID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAutoPickup_Statics::NewProp_ItemID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAutoPickup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAutoPickup_Statics::NewProp_PickupMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAutoPickup_Statics::NewProp_ItemID,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAutoPickup_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAutoPickup>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAutoPickup_Statics::ClassParams = {
		&AAutoPickup::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AAutoPickup_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AAutoPickup_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AAutoPickup_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAutoPickup_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAutoPickup()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAutoPickup_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAutoPickup, 17787068);
	template<> UESTUDYFORMMO_API UClass* StaticClass<AAutoPickup>()
	{
		return AAutoPickup::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAutoPickup(Z_Construct_UClass_AAutoPickup, &AAutoPickup::StaticClass, TEXT("/Script/UEStudyForMMO"), TEXT("AAutoPickup"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAutoPickup);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
