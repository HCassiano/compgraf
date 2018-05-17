// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "FP_FirstPerson/FP_FirstPersonGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFP_FirstPersonGameMode() {}
// Cross Module References
	COMPGRAFCPP_API UClass* Z_Construct_UClass_AFP_FirstPersonGameMode_NoRegister();
	COMPGRAFCPP_API UClass* Z_Construct_UClass_AFP_FirstPersonGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_compGrafCpp();
// End Cross Module References
	void AFP_FirstPersonGameMode::StaticRegisterNativesAFP_FirstPersonGameMode()
	{
	}
	UClass* Z_Construct_UClass_AFP_FirstPersonGameMode_NoRegister()
	{
		return AFP_FirstPersonGameMode::StaticClass();
	}
	UClass* Z_Construct_UClass_AFP_FirstPersonGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AGameModeBase,
				(UObject* (*)())Z_Construct_UPackage__Script_compGrafCpp,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
				{ "IncludePath", "FP_FirstPerson/FP_FirstPersonGameMode.h" },
				{ "ModuleRelativePath", "FP_FirstPerson/FP_FirstPersonGameMode.h" },
				{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AFP_FirstPersonGameMode>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AFP_FirstPersonGameMode::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00880288u,
				nullptr, 0,
				nullptr, 0,
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFP_FirstPersonGameMode, 2262797715);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFP_FirstPersonGameMode(Z_Construct_UClass_AFP_FirstPersonGameMode, &AFP_FirstPersonGameMode::StaticClass, TEXT("/Script/compGrafCpp"), TEXT("AFP_FirstPersonGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFP_FirstPersonGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
