// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ViewportWorlds/Public/ViewportWorldGameClient.h"
#include "../../Source/Runtime/Engine/Classes/Engine/Engine.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeViewportWorldGameClient() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UGameViewportClient();
	UPackage* Z_Construct_UPackage__Script_ViewportWorlds();
	VIEWPORTWORLDS_API UClass* Z_Construct_UClass_UViewportWorldGameClient();
	VIEWPORTWORLDS_API UClass* Z_Construct_UClass_UViewportWorldGameClient_NoRegister();
// End Cross Module References
	void UViewportWorldGameClient::StaticRegisterNativesUViewportWorldGameClient()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UViewportWorldGameClient);
	UClass* Z_Construct_UClass_UViewportWorldGameClient_NoRegister()
	{
		return UViewportWorldGameClient::StaticClass();
	}
	struct Z_Construct_UClass_UViewportWorldGameClient_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UViewportWorldGameClient_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameViewportClient,
		(UObject* (*)())Z_Construct_UPackage__Script_ViewportWorlds,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UViewportWorldGameClient_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UViewportWorldGameClient_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ViewportWorldGameClient.h" },
		{ "ModuleRelativePath", "Public/ViewportWorldGameClient.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UViewportWorldGameClient_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UViewportWorldGameClient>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UViewportWorldGameClient_Statics::ClassParams = {
		&UViewportWorldGameClient::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000800ACu,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UViewportWorldGameClient_Statics::Class_MetaDataParams), Z_Construct_UClass_UViewportWorldGameClient_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UViewportWorldGameClient()
	{
		if (!Z_Registration_Info_UClass_UViewportWorldGameClient.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UViewportWorldGameClient.OuterSingleton, Z_Construct_UClass_UViewportWorldGameClient_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UViewportWorldGameClient.OuterSingleton;
	}
	template<> VIEWPORTWORLDS_API UClass* StaticClass<UViewportWorldGameClient>()
	{
		return UViewportWorldGameClient::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UViewportWorldGameClient);
	UViewportWorldGameClient::~UViewportWorldGameClient() {}
	struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_ViewportWorlds_Public_ViewportWorldGameClient_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_ViewportWorlds_Public_ViewportWorldGameClient_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UViewportWorldGameClient, UViewportWorldGameClient::StaticClass, TEXT("UViewportWorldGameClient"), &Z_Registration_Info_UClass_UViewportWorldGameClient, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UViewportWorldGameClient), 4043111901U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_ViewportWorlds_Public_ViewportWorldGameClient_h_181170959(TEXT("/Script/ViewportWorlds"),
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_ViewportWorlds_Public_ViewportWorldGameClient_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_ViewportWorlds_Public_ViewportWorldGameClient_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS