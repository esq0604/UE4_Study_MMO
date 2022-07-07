// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UEStudyForMMO/Public/InGameData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInGameData() {}
// Cross Module References
	UESTUDYFORMMO_API UEnum* Z_Construct_UEnum_UEStudyForMMO_EGaugeType();
	UPackage* Z_Construct_UPackage__Script_UEStudyForMMO();
// End Cross Module References
	static UEnum* EGaugeType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_UEStudyForMMO_EGaugeType, Z_Construct_UPackage__Script_UEStudyForMMO(), TEXT("EGaugeType"));
		}
		return Singleton;
	}
	template<> UESTUDYFORMMO_API UEnum* StaticEnum<EGaugeType>()
	{
		return EGaugeType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EGaugeType(EGaugeType_StaticEnum, TEXT("/Script/UEStudyForMMO"), TEXT("EGaugeType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_UEStudyForMMO_EGaugeType_Hash() { return 700939629U; }
	UEnum* Z_Construct_UEnum_UEStudyForMMO_EGaugeType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_UEStudyForMMO();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EGaugeType"), 0, Get_Z_Construct_UEnum_UEStudyForMMO_EGaugeType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "Gauge_HP", (int64)Gauge_HP },
				{ "Gauge_Resource", (int64)Gauge_Resource },
				{ "Gauge_Exp", (int64)Gauge_Exp },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Gauge_Exp.DisplayName", "Exp" },
				{ "Gauge_Exp.Name", "Gauge_Exp" },
				{ "Gauge_HP.DisplayName", "HP_Enum" },
				{ "Gauge_HP.Name", "Gauge_HP" },
				{ "Gauge_Resource.DisplayName", "Resource" },
				{ "Gauge_Resource.Name", "Gauge_Resource" },
				{ "ModuleRelativePath", "Public/InGameData.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_UEStudyForMMO,
				nullptr,
				"EGaugeType",
				"EGaugeType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
