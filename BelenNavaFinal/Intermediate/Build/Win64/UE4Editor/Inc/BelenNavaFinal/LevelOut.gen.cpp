// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BelenNavaFinal/LevelOut.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLevelOut() {}
// Cross Module References
	BELENNAVAFINAL_API UClass* Z_Construct_UClass_ALevelOut_NoRegister();
	BELENNAVAFINAL_API UClass* Z_Construct_UClass_ALevelOut();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_BelenNavaFinal();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	void ALevelOut::StaticRegisterNativesALevelOut()
	{
	}
	UClass* Z_Construct_UClass_ALevelOut_NoRegister()
	{
		return ALevelOut::StaticClass();
	}
	struct Z_Construct_UClass_ALevelOut_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_player_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_player;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALevelOut_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_BelenNavaFinal,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALevelOut_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LevelOut.h" },
		{ "ModuleRelativePath", "LevelOut.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALevelOut_Statics::NewProp_player_MetaData[] = {
		{ "Category", "LevelOut" },
		{ "ModuleRelativePath", "LevelOut.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALevelOut_Statics::NewProp_player = { "player", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALevelOut, player), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALevelOut_Statics::NewProp_player_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALevelOut_Statics::NewProp_player_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALevelOut_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelOut_Statics::NewProp_player,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALevelOut_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALevelOut>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ALevelOut_Statics::ClassParams = {
		&ALevelOut::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ALevelOut_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ALevelOut_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ALevelOut_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ALevelOut_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALevelOut()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ALevelOut_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ALevelOut, 367515057);
	template<> BELENNAVAFINAL_API UClass* StaticClass<ALevelOut>()
	{
		return ALevelOut::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ALevelOut(Z_Construct_UClass_ALevelOut, &ALevelOut::StaticClass, TEXT("/Script/BelenNavaFinal"), TEXT("ALevelOut"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALevelOut);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
