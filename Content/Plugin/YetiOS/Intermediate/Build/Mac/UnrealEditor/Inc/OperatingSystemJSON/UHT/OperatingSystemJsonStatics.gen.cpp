// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OperatingSystemJSON/Public/OperatingSystemJsonStatics.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOperatingSystemJsonStatics() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	OPERATINGSYSTEMJSON_API UClass* Z_Construct_UClass_UOperatingSystemJsonStatics();
	OPERATINGSYSTEMJSON_API UClass* Z_Construct_UClass_UOperatingSystemJsonStatics_NoRegister();
	UPackage* Z_Construct_UPackage__Script_OperatingSystemJSON();
// End Cross Module References
	void UOperatingSystemJsonStatics::StaticRegisterNativesUOperatingSystemJsonStatics()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOperatingSystemJsonStatics);
	UClass* Z_Construct_UClass_UOperatingSystemJsonStatics_NoRegister()
	{
		return UOperatingSystemJsonStatics::StaticClass();
	}
	struct Z_Construct_UClass_UOperatingSystemJsonStatics_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOperatingSystemJsonStatics_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_OperatingSystemJSON,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemJsonStatics_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOperatingSystemJsonStatics_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "OperatingSystemJsonStatics.h" },
		{ "ModuleRelativePath", "Public/OperatingSystemJsonStatics.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOperatingSystemJsonStatics_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOperatingSystemJsonStatics>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOperatingSystemJsonStatics_Statics::ClassParams = {
		&UOperatingSystemJsonStatics::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemJsonStatics_Statics::Class_MetaDataParams), Z_Construct_UClass_UOperatingSystemJsonStatics_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UOperatingSystemJsonStatics()
	{
		if (!Z_Registration_Info_UClass_UOperatingSystemJsonStatics.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOperatingSystemJsonStatics.OuterSingleton, Z_Construct_UClass_UOperatingSystemJsonStatics_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOperatingSystemJsonStatics.OuterSingleton;
	}
	template<> OPERATINGSYSTEMJSON_API UClass* StaticClass<UOperatingSystemJsonStatics>()
	{
		return UOperatingSystemJsonStatics::StaticClass();
	}
	UOperatingSystemJsonStatics::UOperatingSystemJsonStatics(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOperatingSystemJsonStatics);
	UOperatingSystemJsonStatics::~UOperatingSystemJsonStatics() {}
	struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemJSON_Public_OperatingSystemJsonStatics_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemJSON_Public_OperatingSystemJsonStatics_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOperatingSystemJsonStatics, UOperatingSystemJsonStatics::StaticClass, TEXT("UOperatingSystemJsonStatics"), &Z_Registration_Info_UClass_UOperatingSystemJsonStatics, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOperatingSystemJsonStatics), 1249415451U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemJSON_Public_OperatingSystemJsonStatics_h_3662945344(TEXT("/Script/OperatingSystemJSON"),
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemJSON_Public_OperatingSystemJsonStatics_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemJSON_Public_OperatingSystemJsonStatics_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
