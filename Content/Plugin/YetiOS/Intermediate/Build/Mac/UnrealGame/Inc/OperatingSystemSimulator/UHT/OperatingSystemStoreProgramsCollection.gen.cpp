// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OperatingSystemSimulator/Public/Misc/OperatingSystemStoreProgramsCollection.h"
#include "OperatingSystemSimulator/Public/OperatingSystemTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOperatingSystemStoreProgramsCollection() {}
// Cross Module References
	OPERATINGSYSTEMSIMULATOR_API UClass* Z_Construct_UClass_UOperatingSystemProgramsCollection();
	OPERATINGSYSTEMSIMULATOR_API UClass* Z_Construct_UClass_UOperatingSystemStoreProgramsCollection();
	OPERATINGSYSTEMSIMULATOR_API UClass* Z_Construct_UClass_UOperatingSystemStoreProgramsCollection_NoRegister();
	OPERATINGSYSTEMSIMULATOR_API UScriptStruct* Z_Construct_UScriptStruct_FOperatingSystemStoreProgramData();
	UPackage* Z_Construct_UPackage__Script_OperatingSystemSimulator();
// End Cross Module References
	void UOperatingSystemStoreProgramsCollection::StaticRegisterNativesUOperatingSystemStoreProgramsCollection()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOperatingSystemStoreProgramsCollection);
	UClass* Z_Construct_UClass_UOperatingSystemStoreProgramsCollection_NoRegister()
	{
		return UOperatingSystemStoreProgramsCollection::StaticClass();
	}
	struct Z_Construct_UClass_UOperatingSystemStoreProgramsCollection_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StorePrograms_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StorePrograms_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_StorePrograms;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOperatingSystemStoreProgramsCollection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UOperatingSystemProgramsCollection,
		(UObject* (*)())Z_Construct_UPackage__Script_OperatingSystemSimulator,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemStoreProgramsCollection_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOperatingSystemStoreProgramsCollection_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "OperatingSystemPrograms" },
		{ "IncludePath", "Misc/OperatingSystemStoreProgramsCollection.h" },
		{ "ModuleRelativePath", "Public/Misc/OperatingSystemStoreProgramsCollection.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOperatingSystemStoreProgramsCollection_Statics::NewProp_StorePrograms_ElementProp = { "StorePrograms", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FOperatingSystemStoreProgramData, METADATA_PARAMS(0, nullptr) }; // 3112091046
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOperatingSystemStoreProgramsCollection_Statics::NewProp_StorePrograms_MetaData[] = {
		{ "Category", "OperatingSystemStorePrograms" },
		{ "ModuleRelativePath", "Public/Misc/OperatingSystemStoreProgramsCollection.h" },
	};
#endif
	static_assert(TModels_V<CGetTypeHashable, FOperatingSystemStoreProgramData>, "The structure 'FOperatingSystemStoreProgramData' is used in a TSet but does not have a GetValueTypeHash defined");
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_UOperatingSystemStoreProgramsCollection_Statics::NewProp_StorePrograms = { "StorePrograms", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOperatingSystemStoreProgramsCollection, StorePrograms), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemStoreProgramsCollection_Statics::NewProp_StorePrograms_MetaData), Z_Construct_UClass_UOperatingSystemStoreProgramsCollection_Statics::NewProp_StorePrograms_MetaData) }; // 3112091046
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOperatingSystemStoreProgramsCollection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOperatingSystemStoreProgramsCollection_Statics::NewProp_StorePrograms_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOperatingSystemStoreProgramsCollection_Statics::NewProp_StorePrograms,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOperatingSystemStoreProgramsCollection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOperatingSystemStoreProgramsCollection>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOperatingSystemStoreProgramsCollection_Statics::ClassParams = {
		&UOperatingSystemStoreProgramsCollection::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UOperatingSystemStoreProgramsCollection_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemStoreProgramsCollection_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemStoreProgramsCollection_Statics::Class_MetaDataParams), Z_Construct_UClass_UOperatingSystemStoreProgramsCollection_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemStoreProgramsCollection_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UOperatingSystemStoreProgramsCollection()
	{
		if (!Z_Registration_Info_UClass_UOperatingSystemStoreProgramsCollection.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOperatingSystemStoreProgramsCollection.OuterSingleton, Z_Construct_UClass_UOperatingSystemStoreProgramsCollection_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOperatingSystemStoreProgramsCollection.OuterSingleton;
	}
	template<> OPERATINGSYSTEMSIMULATOR_API UClass* StaticClass<UOperatingSystemStoreProgramsCollection>()
	{
		return UOperatingSystemStoreProgramsCollection::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOperatingSystemStoreProgramsCollection);
	UOperatingSystemStoreProgramsCollection::~UOperatingSystemStoreProgramsCollection() {}
	struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Misc_OperatingSystemStoreProgramsCollection_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Misc_OperatingSystemStoreProgramsCollection_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOperatingSystemStoreProgramsCollection, UOperatingSystemStoreProgramsCollection::StaticClass, TEXT("UOperatingSystemStoreProgramsCollection"), &Z_Registration_Info_UClass_UOperatingSystemStoreProgramsCollection, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOperatingSystemStoreProgramsCollection), 2442638404U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Misc_OperatingSystemStoreProgramsCollection_h_2412124934(TEXT("/Script/OperatingSystemSimulator"),
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Misc_OperatingSystemStoreProgramsCollection_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Misc_OperatingSystemStoreProgramsCollection_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
