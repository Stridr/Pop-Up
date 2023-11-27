// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OperatingSystemSimulator/Public/Misc/OperatingSystemCmdCollection.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOperatingSystemCmdCollection() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	OPERATINGSYSTEMSIMULATOR_API UClass* Z_Construct_UClass_UOperatingSystemCmdCollection();
	OPERATINGSYSTEMSIMULATOR_API UClass* Z_Construct_UClass_UOperatingSystemCmdCollection_NoRegister();
	OPERATINGSYSTEMSIMULATOR_API UClass* Z_Construct_UClass_UOperatingSystemTerminalCommand_NoRegister();
	UPackage* Z_Construct_UPackage__Script_OperatingSystemSimulator();
// End Cross Module References
	void UOperatingSystemCmdCollection::StaticRegisterNativesUOperatingSystemCmdCollection()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOperatingSystemCmdCollection);
	UClass* Z_Construct_UClass_UOperatingSystemCmdCollection_NoRegister()
	{
		return UOperatingSystemCmdCollection::StaticClass();
	}
	struct Z_Construct_UClass_UOperatingSystemCmdCollection_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FSoftClassPropertyParams NewProp_Commands_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Commands_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_Commands;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOperatingSystemCmdCollection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_OperatingSystemSimulator,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemCmdCollection_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOperatingSystemCmdCollection_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Misc/OperatingSystemCmdCollection.h" },
		{ "ModuleRelativePath", "Public/Misc/OperatingSystemCmdCollection.h" },
	};
#endif
	const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_UOperatingSystemCmdCollection_Statics::NewProp_Commands_ElementProp = { "Commands", nullptr, (EPropertyFlags)0x0004000000000001, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UOperatingSystemTerminalCommand_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOperatingSystemCmdCollection_Statics::NewProp_Commands_MetaData[] = {
		{ "Category", "OperatingSystemTerminalCommands" },
		{ "ModuleRelativePath", "Public/Misc/OperatingSystemCmdCollection.h" },
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_UOperatingSystemCmdCollection_Statics::NewProp_Commands = { "Commands", nullptr, (EPropertyFlags)0x0024080000010015, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOperatingSystemCmdCollection, Commands), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemCmdCollection_Statics::NewProp_Commands_MetaData), Z_Construct_UClass_UOperatingSystemCmdCollection_Statics::NewProp_Commands_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOperatingSystemCmdCollection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOperatingSystemCmdCollection_Statics::NewProp_Commands_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOperatingSystemCmdCollection_Statics::NewProp_Commands,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOperatingSystemCmdCollection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOperatingSystemCmdCollection>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOperatingSystemCmdCollection_Statics::ClassParams = {
		&UOperatingSystemCmdCollection::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UOperatingSystemCmdCollection_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemCmdCollection_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemCmdCollection_Statics::Class_MetaDataParams), Z_Construct_UClass_UOperatingSystemCmdCollection_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemCmdCollection_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UOperatingSystemCmdCollection()
	{
		if (!Z_Registration_Info_UClass_UOperatingSystemCmdCollection.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOperatingSystemCmdCollection.OuterSingleton, Z_Construct_UClass_UOperatingSystemCmdCollection_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOperatingSystemCmdCollection.OuterSingleton;
	}
	template<> OPERATINGSYSTEMSIMULATOR_API UClass* StaticClass<UOperatingSystemCmdCollection>()
	{
		return UOperatingSystemCmdCollection::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOperatingSystemCmdCollection);
	UOperatingSystemCmdCollection::~UOperatingSystemCmdCollection() {}
	struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Misc_OperatingSystemCmdCollection_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Misc_OperatingSystemCmdCollection_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOperatingSystemCmdCollection, UOperatingSystemCmdCollection::StaticClass, TEXT("UOperatingSystemCmdCollection"), &Z_Registration_Info_UClass_UOperatingSystemCmdCollection, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOperatingSystemCmdCollection), 28409152U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Misc_OperatingSystemCmdCollection_h_582233671(TEXT("/Script/OperatingSystemSimulator"),
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Misc_OperatingSystemCmdCollection_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Misc_OperatingSystemCmdCollection_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
