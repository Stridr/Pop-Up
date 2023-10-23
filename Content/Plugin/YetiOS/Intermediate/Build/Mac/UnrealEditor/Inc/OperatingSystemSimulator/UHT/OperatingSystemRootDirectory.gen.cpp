// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OperatingSystemSimulator/Public/Core/OperatingSystemRootDirectory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOperatingSystemRootDirectory() {}
// Cross Module References
	OPERATINGSYSTEMSIMULATOR_API UClass* Z_Construct_UClass_UOperatingSystemDirectory();
	OPERATINGSYSTEMSIMULATOR_API UClass* Z_Construct_UClass_UOperatingSystemRootDirectory();
	OPERATINGSYSTEMSIMULATOR_API UClass* Z_Construct_UClass_UOperatingSystemRootDirectory_NoRegister();
	UPackage* Z_Construct_UPackage__Script_OperatingSystemSimulator();
// End Cross Module References
	void UOperatingSystemRootDirectory::StaticRegisterNativesUOperatingSystemRootDirectory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOperatingSystemRootDirectory);
	UClass* Z_Construct_UClass_UOperatingSystemRootDirectory_NoRegister()
	{
		return UOperatingSystemRootDirectory::StaticClass();
	}
	struct Z_Construct_UClass_UOperatingSystemRootDirectory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOperatingSystemRootDirectory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UOperatingSystemDirectory,
		(UObject* (*)())Z_Construct_UPackage__Script_OperatingSystemSimulator,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemRootDirectory_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOperatingSystemRootDirectory_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Only usable for Unix Operating Systems\n */" },
		{ "IncludePath", "Core/OperatingSystemRootDirectory.h" },
		{ "ModuleRelativePath", "Public/Core/OperatingSystemRootDirectory.h" },
		{ "ToolTip", "Only usable for Unix Operating Systems" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOperatingSystemRootDirectory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOperatingSystemRootDirectory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOperatingSystemRootDirectory_Statics::ClassParams = {
		&UOperatingSystemRootDirectory::StaticClass,
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
		0x001000A1u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemRootDirectory_Statics::Class_MetaDataParams), Z_Construct_UClass_UOperatingSystemRootDirectory_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UOperatingSystemRootDirectory()
	{
		if (!Z_Registration_Info_UClass_UOperatingSystemRootDirectory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOperatingSystemRootDirectory.OuterSingleton, Z_Construct_UClass_UOperatingSystemRootDirectory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOperatingSystemRootDirectory.OuterSingleton;
	}
	template<> OPERATINGSYSTEMSIMULATOR_API UClass* StaticClass<UOperatingSystemRootDirectory>()
	{
		return UOperatingSystemRootDirectory::StaticClass();
	}
	UOperatingSystemRootDirectory::UOperatingSystemRootDirectory() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOperatingSystemRootDirectory);
	UOperatingSystemRootDirectory::~UOperatingSystemRootDirectory() {}
	struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Core_OperatingSystemRootDirectory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Core_OperatingSystemRootDirectory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOperatingSystemRootDirectory, UOperatingSystemRootDirectory::StaticClass, TEXT("UOperatingSystemRootDirectory"), &Z_Registration_Info_UClass_UOperatingSystemRootDirectory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOperatingSystemRootDirectory), 1783012663U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Core_OperatingSystemRootDirectory_h_2943587297(TEXT("/Script/OperatingSystemSimulator"),
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Core_OperatingSystemRootDirectory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Core_OperatingSystemRootDirectory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
