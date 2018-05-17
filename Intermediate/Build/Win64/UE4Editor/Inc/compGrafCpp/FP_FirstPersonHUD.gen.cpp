// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "FP_FirstPerson/FP_FirstPersonHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFP_FirstPersonHUD() {}
// Cross Module References
	COMPGRAFCPP_API UClass* Z_Construct_UClass_AFP_FirstPersonHUD_NoRegister();
	COMPGRAFCPP_API UClass* Z_Construct_UClass_AFP_FirstPersonHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_compGrafCpp();
// End Cross Module References
	void AFP_FirstPersonHUD::StaticRegisterNativesAFP_FirstPersonHUD()
	{
	}
	UClass* Z_Construct_UClass_AFP_FirstPersonHUD_NoRegister()
	{
		return AFP_FirstPersonHUD::StaticClass();
	}
	UClass* Z_Construct_UClass_AFP_FirstPersonHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AHUD,
				(UObject* (*)())Z_Construct_UPackage__Script_compGrafCpp,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Rendering Actor Input Replication" },
				{ "IncludePath", "FP_FirstPerson/FP_FirstPersonHUD.h" },
				{ "ModuleRelativePath", "FP_FirstPerson/FP_FirstPersonHUD.h" },
				{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AFP_FirstPersonHUD>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AFP_FirstPersonHUD::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x0080028Cu,
				nullptr, 0,
				nullptr, 0,
				"Game",
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFP_FirstPersonHUD, 1873130996);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFP_FirstPersonHUD(Z_Construct_UClass_AFP_FirstPersonHUD, &AFP_FirstPersonHUD::StaticClass, TEXT("/Script/compGrafCpp"), TEXT("AFP_FirstPersonHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFP_FirstPersonHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
