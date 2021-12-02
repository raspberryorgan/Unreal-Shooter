// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BelenNavaFinal/SpeedBuff.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpeedBuff() {}
// Cross Module References
	BELENNAVAFINAL_API UClass* Z_Construct_UClass_ASpeedBuff_NoRegister();
	BELENNAVAFINAL_API UClass* Z_Construct_UClass_ASpeedBuff();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_BelenNavaFinal();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ASpeedBuff::execOnAction)
	{
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnAction(Z_Param_OtherActor);
		P_NATIVE_END;
	}
	void ASpeedBuff::StaticRegisterNativesASpeedBuff()
	{
		UClass* Class = ASpeedBuff::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnAction", &ASpeedBuff::execOnAction },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASpeedBuff_OnAction_Statics
	{
		struct SpeedBuff_eventOnAction_Parms
		{
			AActor* OtherActor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASpeedBuff_OnAction_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpeedBuff_eventOnAction_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASpeedBuff_OnAction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpeedBuff_OnAction_Statics::NewProp_OtherActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASpeedBuff_OnAction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SpeedBuff.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASpeedBuff_OnAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASpeedBuff, nullptr, "OnAction", nullptr, nullptr, sizeof(SpeedBuff_eventOnAction_Parms), Z_Construct_UFunction_ASpeedBuff_OnAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpeedBuff_OnAction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASpeedBuff_OnAction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpeedBuff_OnAction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASpeedBuff_OnAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASpeedBuff_OnAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASpeedBuff_NoRegister()
	{
		return ASpeedBuff::StaticClass();
	}
	struct Z_Construct_UClass_ASpeedBuff_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASpeedBuff_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_BelenNavaFinal,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASpeedBuff_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASpeedBuff_OnAction, "OnAction" }, // 3988693336
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpeedBuff_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SpeedBuff.h" },
		{ "ModuleRelativePath", "SpeedBuff.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASpeedBuff_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASpeedBuff>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASpeedBuff_Statics::ClassParams = {
		&ASpeedBuff::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASpeedBuff_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASpeedBuff_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASpeedBuff()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASpeedBuff_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASpeedBuff, 3254665856);
	template<> BELENNAVAFINAL_API UClass* StaticClass<ASpeedBuff>()
	{
		return ASpeedBuff::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASpeedBuff(Z_Construct_UClass_ASpeedBuff, &ASpeedBuff::StaticClass, TEXT("/Script/BelenNavaFinal"), TEXT("ASpeedBuff"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASpeedBuff);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
