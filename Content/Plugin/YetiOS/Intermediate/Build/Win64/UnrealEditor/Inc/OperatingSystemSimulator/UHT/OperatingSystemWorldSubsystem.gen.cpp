// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OperatingSystemSimulator/Public/Subsystems/OperatingSystemWorldSubsystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOperatingSystemWorldSubsystem() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UWorldSubsystem();
	OPERATINGSYSTEMSIMULATOR_API UClass* Z_Construct_UClass_AOperatingSystemDeviceActor_NoRegister();
	OPERATINGSYSTEMSIMULATOR_API UClass* Z_Construct_UClass_UOperatingSystemUserManager_NoRegister();
	OPERATINGSYSTEMSIMULATOR_API UClass* Z_Construct_UClass_UOperatingSystemWorldSubsystem();
	OPERATINGSYSTEMSIMULATOR_API UClass* Z_Construct_UClass_UOperatingSystemWorldSubsystem_NoRegister();
	UPackage* Z_Construct_UPackage__Script_OperatingSystemSimulator();
// End Cross Module References
	void UOperatingSystemWorldSubsystem::StaticRegisterNativesUOperatingSystemWorldSubsystem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOperatingSystemWorldSubsystem);
	UClass* Z_Construct_UClass_UOperatingSystemWorldSubsystem_NoRegister()
	{
		return UOperatingSystemWorldSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UOperatingSystemWorldSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_RegisteredDeviceActors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RegisteredDeviceActors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_RegisteredDeviceActors;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UserManager_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_UserManager;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOperatingSystemWorldSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWorldSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_OperatingSystemSimulator,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemWorldSubsystem_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOperatingSystemWorldSubsystem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Subsystems/OperatingSystemWorldSubsystem.h" },
		{ "ModuleRelativePath", "Public/Subsystems/OperatingSystemWorldSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UOperatingSystemWorldSubsystem_Statics::NewProp_RegisteredDeviceActors_Inner = { "RegisteredDeviceActors", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AOperatingSystemDeviceActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOperatingSystemWorldSubsystem_Statics::NewProp_RegisteredDeviceActors_MetaData[] = {
		{ "ModuleRelativePath", "Public/Subsystems/OperatingSystemWorldSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UOperatingSystemWorldSubsystem_Statics::NewProp_RegisteredDeviceActors = { "RegisteredDeviceActors", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOperatingSystemWorldSubsystem, RegisteredDeviceActors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemWorldSubsystem_Statics::NewProp_RegisteredDeviceActors_MetaData), Z_Construct_UClass_UOperatingSystemWorldSubsystem_Statics::NewProp_RegisteredDeviceActors_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOperatingSystemWorldSubsystem_Statics::NewProp_UserManager_MetaData[] = {
		{ "ModuleRelativePath", "Public/Subsystems/OperatingSystemWorldSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UOperatingSystemWorldSubsystem_Statics::NewProp_UserManager = { "UserManager", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOperatingSystemWorldSubsystem, UserManager), Z_Construct_UClass_UOperatingSystemUserManager_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemWorldSubsystem_Statics::NewProp_UserManager_MetaData), Z_Construct_UClass_UOperatingSystemWorldSubsystem_Statics::NewProp_UserManager_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOperatingSystemWorldSubsystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOperatingSystemWorldSubsystem_Statics::NewProp_RegisteredDeviceActors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOperatingSystemWorldSubsystem_Statics::NewProp_RegisteredDeviceActors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOperatingSystemWorldSubsystem_Statics::NewProp_UserManager,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOperatingSystemWorldSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOperatingSystemWorldSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOperatingSystemWorldSubsystem_Statics::ClassParams = {
		&UOperatingSystemWorldSubsystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UOperatingSystemWorldSubsystem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemWorldSubsystem_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemWorldSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UOperatingSystemWorldSubsystem_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemWorldSubsystem_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UOperatingSystemWorldSubsystem()
	{
		if (!Z_Registration_Info_UClass_UOperatingSystemWorldSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOperatingSystemWorldSubsystem.OuterSingleton, Z_Construct_UClass_UOperatingSystemWorldSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOperatingSystemWorldSubsystem.OuterSingleton;
	}
	template<> OPERATINGSYSTEMSIMULATOR_API UClass* StaticClass<UOperatingSystemWorldSubsystem>()
	{
		return UOperatingSystemWorldSubsystem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOperatingSystemWorldSubsystem);
	UOperatingSystemWorldSubsystem::~UOperatingSystemWorldSubsystem() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Subsystems_OperatingSystemWorldSubsystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Subsystems_OperatingSystemWorldSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOperatingSystemWorldSubsystem, UOperatingSystemWorldSubsystem::StaticClass, TEXT("UOperatingSystemWorldSubsystem"), &Z_Registration_Info_UClass_UOperatingSystemWorldSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOperatingSystemWorldSubsystem), 2190018761U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Subsystems_OperatingSystemWorldSubsystem_h_2707559642(TEXT("/Script/OperatingSystemSimulator"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Subsystems_OperatingSystemWorldSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Subsystems_OperatingSystemWorldSubsystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
