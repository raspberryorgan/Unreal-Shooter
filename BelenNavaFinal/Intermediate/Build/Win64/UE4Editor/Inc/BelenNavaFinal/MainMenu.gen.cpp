// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BelenNavaFinal/MainMenu.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMainMenu() {}
// Cross Module References
	BELENNAVAFINAL_API UClass* Z_Construct_UClass_UMainMenu_NoRegister();
	BELENNAVAFINAL_API UClass* Z_Construct_UClass_UMainMenu();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_BelenNavaFinal();
// End Cross Module References
	void UMainMenu::StaticRegisterNativesUMainMenu()
	{
	}
	UClass* Z_Construct_UClass_UMainMenu_NoRegister()
	{
		return UMainMenu::StaticClass();
	}
	struct Z_Construct_UClass_UMainMenu_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMainMenu_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_BelenNavaFinal,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMainMenu_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "MainMenu.h" },
		{ "ModuleRelativePath", "MainMenu.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMainMenu_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMainMenu>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMainMenu_Statics::ClassParams = {
		&UMainMenu::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMainMenu_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMainMenu_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMainMenu()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMainMenu_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMainMenu, 776569758);
	template<> BELENNAVAFINAL_API UClass* StaticClass<UMainMenu>()
	{
		return UMainMenu::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMainMenu(Z_Construct_UClass_UMainMenu, &UMainMenu::StaticClass, TEXT("/Script/BelenNavaFinal"), TEXT("UMainMenu"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMainMenu);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
