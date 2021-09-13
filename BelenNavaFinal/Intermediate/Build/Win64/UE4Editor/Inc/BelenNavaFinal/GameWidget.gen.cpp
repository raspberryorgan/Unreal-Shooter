// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BelenNavaFinal/GameWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameWidget() {}
// Cross Module References
	BELENNAVAFINAL_API UClass* Z_Construct_UClass_UGameWidget_NoRegister();
	BELENNAVAFINAL_API UClass* Z_Construct_UClass_UGameWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_BelenNavaFinal();
// End Cross Module References
	void UGameWidget::StaticRegisterNativesUGameWidget()
	{
	}
	UClass* Z_Construct_UClass_UGameWidget_NoRegister()
	{
		return UGameWidget::StaticClass();
	}
	struct Z_Construct_UClass_UGameWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGameWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_BelenNavaFinal,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameWidget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "GameWidget.h" },
		{ "ModuleRelativePath", "GameWidget.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGameWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGameWidget_Statics::ClassParams = {
		&UGameWidget::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UGameWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGameWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGameWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGameWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGameWidget, 3970495071);
	template<> BELENNAVAFINAL_API UClass* StaticClass<UGameWidget>()
	{
		return UGameWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGameWidget(Z_Construct_UClass_UGameWidget, &UGameWidget::StaticClass, TEXT("/Script/BelenNavaFinal"), TEXT("UGameWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
