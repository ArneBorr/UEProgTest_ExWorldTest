// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UEPROGTEST_UEProgTestCharacter_generated_h
#error "UEProgTestCharacter.generated.h already included, missing '#pragma once' in UEProgTestCharacter.h"
#endif
#define UEPROGTEST_UEProgTestCharacter_generated_h

#define UEProgTest_Source_UEProgTest_UEProgTestCharacter_h_12_SPARSE_DATA
#define UEProgTest_Source_UEProgTest_UEProgTestCharacter_h_12_RPC_WRAPPERS
#define UEProgTest_Source_UEProgTest_UEProgTestCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define UEProgTest_Source_UEProgTest_UEProgTestCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAUEProgTestCharacter(); \
	friend struct Z_Construct_UClass_AUEProgTestCharacter_Statics; \
public: \
	DECLARE_CLASS(AUEProgTestCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UEProgTest"), NO_API) \
	DECLARE_SERIALIZER(AUEProgTestCharacter)


#define UEProgTest_Source_UEProgTest_UEProgTestCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAUEProgTestCharacter(); \
	friend struct Z_Construct_UClass_AUEProgTestCharacter_Statics; \
public: \
	DECLARE_CLASS(AUEProgTestCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UEProgTest"), NO_API) \
	DECLARE_SERIALIZER(AUEProgTestCharacter)


#define UEProgTest_Source_UEProgTest_UEProgTestCharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AUEProgTestCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AUEProgTestCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AUEProgTestCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AUEProgTestCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AUEProgTestCharacter(AUEProgTestCharacter&&); \
	NO_API AUEProgTestCharacter(const AUEProgTestCharacter&); \
public:


#define UEProgTest_Source_UEProgTest_UEProgTestCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AUEProgTestCharacter(AUEProgTestCharacter&&); \
	NO_API AUEProgTestCharacter(const AUEProgTestCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AUEProgTestCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AUEProgTestCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AUEProgTestCharacter)


#define UEProgTest_Source_UEProgTest_UEProgTestCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(AUEProgTestCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__FollowCamera() { return STRUCT_OFFSET(AUEProgTestCharacter, FollowCamera); }


#define UEProgTest_Source_UEProgTest_UEProgTestCharacter_h_9_PROLOG
#define UEProgTest_Source_UEProgTest_UEProgTestCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UEProgTest_Source_UEProgTest_UEProgTestCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	UEProgTest_Source_UEProgTest_UEProgTestCharacter_h_12_SPARSE_DATA \
	UEProgTest_Source_UEProgTest_UEProgTestCharacter_h_12_RPC_WRAPPERS \
	UEProgTest_Source_UEProgTest_UEProgTestCharacter_h_12_INCLASS \
	UEProgTest_Source_UEProgTest_UEProgTestCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UEProgTest_Source_UEProgTest_UEProgTestCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UEProgTest_Source_UEProgTest_UEProgTestCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	UEProgTest_Source_UEProgTest_UEProgTestCharacter_h_12_SPARSE_DATA \
	UEProgTest_Source_UEProgTest_UEProgTestCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	UEProgTest_Source_UEProgTest_UEProgTestCharacter_h_12_INCLASS_NO_PURE_DECLS \
	UEProgTest_Source_UEProgTest_UEProgTestCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UEPROGTEST_API UClass* StaticClass<class AUEProgTestCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UEProgTest_Source_UEProgTest_UEProgTestCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
