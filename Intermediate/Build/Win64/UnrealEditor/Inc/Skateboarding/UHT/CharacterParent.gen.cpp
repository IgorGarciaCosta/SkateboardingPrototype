// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Skateboarding/CharacterParent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCharacterParent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	SKATEBOARDING_API UClass* Z_Construct_UClass_ACharacterParent();
	SKATEBOARDING_API UClass* Z_Construct_UClass_ACharacterParent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Skateboarding();
// End Cross Module References
	void ACharacterParent::StaticRegisterNativesACharacterParent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACharacterParent);
	UClass* Z_Construct_UClass_ACharacterParent_NoRegister()
	{
		return ACharacterParent::StaticClass();
	}
	struct Z_Construct_UClass_ACharacterParent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACharacterParent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_Skateboarding,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterParent_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterParent_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "CharacterParent.h" },
		{ "ModuleRelativePath", "CharacterParent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACharacterParent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACharacterParent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACharacterParent_Statics::ClassParams = {
		&ACharacterParent::StaticClass,
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
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterParent_Statics::Class_MetaDataParams), Z_Construct_UClass_ACharacterParent_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ACharacterParent()
	{
		if (!Z_Registration_Info_UClass_ACharacterParent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACharacterParent.OuterSingleton, Z_Construct_UClass_ACharacterParent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACharacterParent.OuterSingleton;
	}
	template<> SKATEBOARDING_API UClass* StaticClass<ACharacterParent>()
	{
		return ACharacterParent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACharacterParent);
	ACharacterParent::~ACharacterParent() {}
	struct Z_CompiledInDeferFile_FID_Users_ISILV125_Documents_Unreal_Projects_Skateboarding_Source_Skateboarding_CharacterParent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_ISILV125_Documents_Unreal_Projects_Skateboarding_Source_Skateboarding_CharacterParent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACharacterParent, ACharacterParent::StaticClass, TEXT("ACharacterParent"), &Z_Registration_Info_UClass_ACharacterParent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACharacterParent), 3289842342U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_ISILV125_Documents_Unreal_Projects_Skateboarding_Source_Skateboarding_CharacterParent_h_702233481(TEXT("/Script/Skateboarding"),
		Z_CompiledInDeferFile_FID_Users_ISILV125_Documents_Unreal_Projects_Skateboarding_Source_Skateboarding_CharacterParent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_ISILV125_Documents_Unreal_Projects_Skateboarding_Source_Skateboarding_CharacterParent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
