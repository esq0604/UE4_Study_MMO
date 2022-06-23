// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UEStudyForMMO/FireBallMovement.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFireBallMovement() {}
// Cross Module References
	UESTUDYFORMMO_API UClass* Z_Construct_UClass_UFireBallMovement_NoRegister();
	UESTUDYFORMMO_API UClass* Z_Construct_UClass_UFireBallMovement();
	ENGINE_API UClass* Z_Construct_UClass_UMovementComponent();
	UPackage* Z_Construct_UPackage__Script_UEStudyForMMO();
// End Cross Module References
	void UFireBallMovement::StaticRegisterNativesUFireBallMovement()
	{
	}
	UClass* Z_Construct_UClass_UFireBallMovement_NoRegister()
	{
		return UFireBallMovement::StaticClass();
	}
	struct Z_Construct_UClass_UFireBallMovement_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFireBallMovement_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovementComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_UEStudyForMMO,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFireBallMovement_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "FireBallMovement.h" },
		{ "ModuleRelativePath", "FireBallMovement.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFireBallMovement_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFireBallMovement>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFireBallMovement_Statics::ClassParams = {
		&UFireBallMovement::StaticClass,
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
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UFireBallMovement_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFireBallMovement_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFireBallMovement()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFireBallMovement_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFireBallMovement, 3563915637);
	template<> UESTUDYFORMMO_API UClass* StaticClass<UFireBallMovement>()
	{
		return UFireBallMovement::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFireBallMovement(Z_Construct_UClass_UFireBallMovement, &UFireBallMovement::StaticClass, TEXT("/Script/UEStudyForMMO"), TEXT("UFireBallMovement"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFireBallMovement);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
