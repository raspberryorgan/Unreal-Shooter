// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BelenNavaFinal/PlayerBullet.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerBullet() {}
// Cross Module References
	BELENNAVAFINAL_API UClass* Z_Construct_UClass_APlayerBullet_NoRegister();
	BELENNAVAFINAL_API UClass* Z_Construct_UClass_APlayerBullet();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_BelenNavaFinal();
// End Cross Module References
	void APlayerBullet::StaticRegisterNativesAPlayerBullet()
	{
	}
	UClass* Z_Construct_UClass_APlayerBullet_NoRegister()
	{
		return APlayerBullet::StaticClass();
	}
	struct Z_Construct_UClass_APlayerBullet_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_speed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_speed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APlayerBullet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_BelenNavaFinal,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerBullet_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PlayerBullet.h" },
		{ "ModuleRelativePath", "PlayerBullet.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerBullet_Statics::NewProp_speed_MetaData[] = {
		{ "Category", "PlayerBullet" },
		{ "ModuleRelativePath", "PlayerBullet.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlayerBullet_Statics::NewProp_speed = { "speed", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerBullet, speed), METADATA_PARAMS(Z_Construct_UClass_APlayerBullet_Statics::NewProp_speed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerBullet_Statics::NewProp_speed_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APlayerBullet_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerBullet_Statics::NewProp_speed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APlayerBullet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlayerBullet>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APlayerBullet_Statics::ClassParams = {
		&APlayerBullet::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_APlayerBullet_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_APlayerBullet_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APlayerBullet_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerBullet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APlayerBullet()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APlayerBullet_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APlayerBullet, 2036676552);
	template<> BELENNAVAFINAL_API UClass* StaticClass<APlayerBullet>()
	{
		return APlayerBullet::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APlayerBullet(Z_Construct_UClass_APlayerBullet, &APlayerBullet::StaticClass, TEXT("/Script/BelenNavaFinal"), TEXT("APlayerBullet"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APlayerBullet);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
