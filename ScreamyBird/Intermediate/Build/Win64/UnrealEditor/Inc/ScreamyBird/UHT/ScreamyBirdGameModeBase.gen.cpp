// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ScreamyBird/ScreamyBirdGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeScreamyBirdGameModeBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	SCREAMYBIRD_API UClass* Z_Construct_UClass_AScreamyBirdGameModeBase();
	SCREAMYBIRD_API UClass* Z_Construct_UClass_AScreamyBirdGameModeBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ScreamyBird();
// End Cross Module References
	void AScreamyBirdGameModeBase::StaticRegisterNativesAScreamyBirdGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AScreamyBirdGameModeBase);
	UClass* Z_Construct_UClass_AScreamyBirdGameModeBase_NoRegister()
	{
		return AScreamyBirdGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AScreamyBirdGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AScreamyBirdGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ScreamyBird,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AScreamyBirdGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "ScreamyBirdGameModeBase.h" },
		{ "ModuleRelativePath", "ScreamyBirdGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AScreamyBirdGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AScreamyBirdGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AScreamyBirdGameModeBase_Statics::ClassParams = {
		&AScreamyBirdGameModeBase::StaticClass,
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
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AScreamyBirdGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AScreamyBirdGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AScreamyBirdGameModeBase()
	{
		if (!Z_Registration_Info_UClass_AScreamyBirdGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AScreamyBirdGameModeBase.OuterSingleton, Z_Construct_UClass_AScreamyBirdGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AScreamyBirdGameModeBase.OuterSingleton;
	}
	template<> SCREAMYBIRD_API UClass* StaticClass<AScreamyBirdGameModeBase>()
	{
		return AScreamyBirdGameModeBase::StaticClass();
	}
	AScreamyBirdGameModeBase::AScreamyBirdGameModeBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AScreamyBirdGameModeBase);
	AScreamyBirdGameModeBase::~AScreamyBirdGameModeBase() {}
	struct Z_CompiledInDeferFile_FID_ScreamyBird_Source_ScreamyBird_ScreamyBirdGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ScreamyBird_Source_ScreamyBird_ScreamyBirdGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AScreamyBirdGameModeBase, AScreamyBirdGameModeBase::StaticClass, TEXT("AScreamyBirdGameModeBase"), &Z_Registration_Info_UClass_AScreamyBirdGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AScreamyBirdGameModeBase), 2016618084U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ScreamyBird_Source_ScreamyBird_ScreamyBirdGameModeBase_h_3883481249(TEXT("/Script/ScreamyBird"),
		Z_CompiledInDeferFile_FID_ScreamyBird_Source_ScreamyBird_ScreamyBirdGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ScreamyBird_Source_ScreamyBird_ScreamyBirdGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
