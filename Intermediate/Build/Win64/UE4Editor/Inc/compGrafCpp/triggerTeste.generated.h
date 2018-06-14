// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef COMPGRAFCPP_triggerTeste_generated_h
#error "triggerTeste.generated.h already included, missing '#pragma once' in triggerTeste.h"
#endif
#define COMPGRAFCPP_triggerTeste_generated_h

#define compgraf_Source_compGrafCpp_triggerTeste_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnTriggerExit) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_OverlapedActor); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnTriggerExit(Z_Param_OverlapedActor,Z_Param_OtherActor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnTriggerEnter) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_OverlapedActor); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnTriggerEnter(Z_Param_OverlapedActor,Z_Param_OtherActor); \
		P_NATIVE_END; \
	}


#define compgraf_Source_compGrafCpp_triggerTeste_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnTriggerExit) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_OverlapedActor); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnTriggerExit(Z_Param_OverlapedActor,Z_Param_OtherActor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnTriggerEnter) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_OverlapedActor); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnTriggerEnter(Z_Param_OverlapedActor,Z_Param_OtherActor); \
		P_NATIVE_END; \
	}


#define compgraf_Source_compGrafCpp_triggerTeste_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAtriggerTeste(); \
	friend COMPGRAFCPP_API class UClass* Z_Construct_UClass_AtriggerTeste(); \
public: \
	DECLARE_CLASS(AtriggerTeste, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/compGrafCpp"), NO_API) \
	DECLARE_SERIALIZER(AtriggerTeste) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define compgraf_Source_compGrafCpp_triggerTeste_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAtriggerTeste(); \
	friend COMPGRAFCPP_API class UClass* Z_Construct_UClass_AtriggerTeste(); \
public: \
	DECLARE_CLASS(AtriggerTeste, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/compGrafCpp"), NO_API) \
	DECLARE_SERIALIZER(AtriggerTeste) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define compgraf_Source_compGrafCpp_triggerTeste_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AtriggerTeste(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AtriggerTeste) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AtriggerTeste); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AtriggerTeste); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AtriggerTeste(AtriggerTeste&&); \
	NO_API AtriggerTeste(const AtriggerTeste&); \
public:


#define compgraf_Source_compGrafCpp_triggerTeste_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AtriggerTeste(AtriggerTeste&&); \
	NO_API AtriggerTeste(const AtriggerTeste&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AtriggerTeste); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AtriggerTeste); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AtriggerTeste)


#define compgraf_Source_compGrafCpp_triggerTeste_h_12_PRIVATE_PROPERTY_OFFSET
#define compgraf_Source_compGrafCpp_triggerTeste_h_9_PROLOG
#define compgraf_Source_compGrafCpp_triggerTeste_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	compgraf_Source_compGrafCpp_triggerTeste_h_12_PRIVATE_PROPERTY_OFFSET \
	compgraf_Source_compGrafCpp_triggerTeste_h_12_RPC_WRAPPERS \
	compgraf_Source_compGrafCpp_triggerTeste_h_12_INCLASS \
	compgraf_Source_compGrafCpp_triggerTeste_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define compgraf_Source_compGrafCpp_triggerTeste_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	compgraf_Source_compGrafCpp_triggerTeste_h_12_PRIVATE_PROPERTY_OFFSET \
	compgraf_Source_compGrafCpp_triggerTeste_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	compgraf_Source_compGrafCpp_triggerTeste_h_12_INCLASS_NO_PURE_DECLS \
	compgraf_Source_compGrafCpp_triggerTeste_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID compgraf_Source_compGrafCpp_triggerTeste_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
