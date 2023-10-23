// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ViewportWorlds/Private/Global/ViewportWorldSubsystem.h"
#include "../../Source/Runtime/Engine/Classes/Engine/GameInstance.h"
#include "ViewportWorlds/Public/ViewportWorldTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeViewportWorldSubsystem() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
	UPackage* Z_Construct_UPackage__Script_ViewportWorlds();
	VIEWPORTWORLDS_API UClass* Z_Construct_UClass_UViewportWorldSubsystem();
	VIEWPORTWORLDS_API UClass* Z_Construct_UClass_UViewportWorldSubsystem_NoRegister();
	VIEWPORTWORLDS_API UScriptStruct* Z_Construct_UScriptStruct_FViewportWorldHandle();
// End Cross Module References
	void UViewportWorldSubsystem::StaticRegisterNativesUViewportWorldSubsystem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UViewportWorldSubsystem);
	UClass* Z_Construct_UClass_UViewportWorldSubsystem_NoRegister()
	{
		return UViewportWorldSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UViewportWorldSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LoadedWorlds_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_LoadedWorlds_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LoadedWorlds_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_LoadedWorlds;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UViewportWorldSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_ViewportWorlds,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UViewportWorldSubsystem_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UViewportWorldSubsystem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Global/ViewportWorldSubsystem.h" },
		{ "ModuleRelativePath", "Private/Global/ViewportWorldSubsystem.h" },
		{ "NotBlueprintType", "true" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UViewportWorldSubsystem_Statics::NewProp_LoadedWorlds_ValueProp = { "LoadedWorlds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FViewportWorldHandle, METADATA_PARAMS(0, nullptr) }; // 2124359825
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UViewportWorldSubsystem_Statics::NewProp_LoadedWorlds_Key_KeyProp = { "LoadedWorlds_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UViewportWorldSubsystem_Statics::NewProp_LoadedWorlds_MetaData[] = {
		{ "ModuleRelativePath", "Private/Global/ViewportWorldSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UViewportWorldSubsystem_Statics::NewProp_LoadedWorlds = { "LoadedWorlds", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UViewportWorldSubsystem, LoadedWorlds), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UViewportWorldSubsystem_Statics::NewProp_LoadedWorlds_MetaData), Z_Construct_UClass_UViewportWorldSubsystem_Statics::NewProp_LoadedWorlds_MetaData) }; // 2124359825
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UViewportWorldSubsystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UViewportWorldSubsystem_Statics::NewProp_LoadedWorlds_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UViewportWorldSubsystem_Statics::NewProp_LoadedWorlds_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UViewportWorldSubsystem_Statics::NewProp_LoadedWorlds,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UViewportWorldSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UViewportWorldSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UViewportWorldSubsystem_Statics::ClassParams = {
		&UViewportWorldSubsystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UViewportWorldSubsystem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UViewportWorldSubsystem_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UViewportWorldSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UViewportWorldSubsystem_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UViewportWorldSubsystem_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UViewportWorldSubsystem()
	{
		if (!Z_Registration_Info_UClass_UViewportWorldSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UViewportWorldSubsystem.OuterSingleton, Z_Construct_UClass_UViewportWorldSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UViewportWorldSubsystem.OuterSingleton;
	}
	template<> VIEWPORTWORLDS_API UClass* StaticClass<UViewportWorldSubsystem>()
	{
		return UViewportWorldSubsystem::StaticClass();
	}
	UViewportWorldSubsystem::UViewportWorldSubsystem() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UViewportWorldSubsystem);
	UViewportWorldSubsystem::~UViewportWorldSubsystem() {}
	struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_ViewportWorlds_Private_Global_ViewportWorldSubsystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_ViewportWorlds_Private_Global_ViewportWorldSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UViewportWorldSubsystem, UViewportWorldSubsystem::StaticClass, TEXT("UViewportWorldSubsystem"), &Z_Registration_Info_UClass_UViewportWorldSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UViewportWorldSubsystem), 4144999652U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_ViewportWorlds_Private_Global_ViewportWorldSubsystem_h_2826979701(TEXT("/Script/ViewportWorlds"),
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_ViewportWorlds_Private_Global_ViewportWorldSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_ViewportWorlds_Private_Global_ViewportWorldSubsystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
