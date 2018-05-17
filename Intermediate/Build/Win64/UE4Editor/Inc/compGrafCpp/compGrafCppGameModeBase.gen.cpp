// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "compGrafCppGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodecompGrafCppGameModeBase() {}
// Cross Module References
	COMPGRAFCPP_API UClass* Z_Construct_UClass_AcompGrafCppGameModeBase_NoRegister();
	COMPGRAFCPP_API UClass* Z_Construct_UClass_AcompGrafCppGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_compGrafCpp();
// End Cross Module References
	void AcompGrafCppGameModeBase::StaticRegisterNativesAcompGrafCppGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AcompGrafCppGameModeBase_NoRegister()
	{
		return AcompGrafCppGameModeBase::StaticClass();
	}
	UClass* Z_Construct_UClass_AcompGrafCppGameModeBase()
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
				{ "IncludePath", "compGrafCppGameModeBase.h" },
				{ "ModuleRelativePath", "compGrafCppGameModeBase.h" },
				{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AcompGrafCppGameModeBase>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AcompGrafCppGameModeBase::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900288u,
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
	IMPLEMENT_CLASS(AcompGrafCppGameModeBase, 603695650);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AcompGrafCppGameModeBase(Z_Construct_UClass_AcompGrafCppGameModeBase, &AcompGrafCppGameModeBase::StaticClass, TEXT("/Script/compGrafCpp"), TEXT("AcompGrafCppGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AcompGrafCppGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
