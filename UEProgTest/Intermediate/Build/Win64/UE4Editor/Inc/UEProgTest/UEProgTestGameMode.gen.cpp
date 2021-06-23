// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UEProgTest/UEProgTestGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUEProgTestGameMode() {}
// Cross Module References
	UEPROGTEST_API UClass* Z_Construct_UClass_AUEProgTestGameMode_NoRegister();
	UEPROGTEST_API UClass* Z_Construct_UClass_AUEProgTestGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_UEProgTest();
// End Cross Module References
	void AUEProgTestGameMode::StaticRegisterNativesAUEProgTestGameMode()
	{
	}
	UClass* Z_Construct_UClass_AUEProgTestGameMode_NoRegister()
	{
		return AUEProgTestGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AUEProgTestGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AUEProgTestGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_UEProgTest,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUEProgTestGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "UEProgTestGameMode.h" },
		{ "ModuleRelativePath", "UEProgTestGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AUEProgTestGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUEProgTestGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AUEProgTestGameMode_Statics::ClassParams = {
		&AUEProgTestGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AUEProgTestGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AUEProgTestGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AUEProgTestGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AUEProgTestGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AUEProgTestGameMode, 890474271);
	template<> UEPROGTEST_API UClass* StaticClass<AUEProgTestGameMode>()
	{
		return AUEProgTestGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AUEProgTestGameMode(Z_Construct_UClass_AUEProgTestGameMode, &AUEProgTestGameMode::StaticClass, TEXT("/Script/UEProgTest"), TEXT("AUEProgTestGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AUEProgTestGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
