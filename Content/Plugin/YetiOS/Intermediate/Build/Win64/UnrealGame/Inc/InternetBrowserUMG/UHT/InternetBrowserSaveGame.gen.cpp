// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InternetBrowserUMG/Public/InternetBrowserSaveGame.h"
#include "InternetBrowserUMG/Public/InternetBrowser.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInternetBrowserSaveGame() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_USaveGame();
	INTERNETBROWSERUMG_API UClass* Z_Construct_UClass_UInternetBrowserSaveGame();
	INTERNETBROWSERUMG_API UClass* Z_Construct_UClass_UInternetBrowserSaveGame_NoRegister();
	INTERNETBROWSERUMG_API UScriptStruct* Z_Construct_UScriptStruct_FBrowserBookmark();
	UPackage* Z_Construct_UPackage__Script_InternetBrowserUMG();
// End Cross Module References
	void UInternetBrowserSaveGame::StaticRegisterNativesUInternetBrowserSaveGame()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInternetBrowserSaveGame);
	UClass* Z_Construct_UClass_UInternetBrowserSaveGame_NoRegister()
	{
		return UInternetBrowserSaveGame::StaticClass();
	}
	struct Z_Construct_UClass_UInternetBrowserSaveGame_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SaveSlotName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SaveSlotName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UserIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_UserIndex;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Bookmarks_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Bookmarks_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Bookmarks;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInternetBrowserSaveGame_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USaveGame,
		(UObject* (*)())Z_Construct_UPackage__Script_InternetBrowserUMG,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInternetBrowserSaveGame_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInternetBrowserSaveGame_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "InternetBrowserSaveGame.h" },
		{ "ModuleRelativePath", "Public/InternetBrowserSaveGame.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInternetBrowserSaveGame_Statics::NewProp_SaveSlotName_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Internet Browser Save Game" },
		{ "ModuleRelativePath", "Public/InternetBrowserSaveGame.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UInternetBrowserSaveGame_Statics::NewProp_SaveSlotName = { "SaveSlotName", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInternetBrowserSaveGame, SaveSlotName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInternetBrowserSaveGame_Statics::NewProp_SaveSlotName_MetaData), Z_Construct_UClass_UInternetBrowserSaveGame_Statics::NewProp_SaveSlotName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInternetBrowserSaveGame_Statics::NewProp_UserIndex_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Internet Browser Save Game" },
		{ "ModuleRelativePath", "Public/InternetBrowserSaveGame.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UInternetBrowserSaveGame_Statics::NewProp_UserIndex = { "UserIndex", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInternetBrowserSaveGame, UserIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInternetBrowserSaveGame_Statics::NewProp_UserIndex_MetaData), Z_Construct_UClass_UInternetBrowserSaveGame_Statics::NewProp_UserIndex_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInternetBrowserSaveGame_Statics::NewProp_Bookmarks_Inner = { "Bookmarks", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FBrowserBookmark, METADATA_PARAMS(0, nullptr) }; // 1634466100
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInternetBrowserSaveGame_Statics::NewProp_Bookmarks_MetaData[] = {
		{ "ModuleRelativePath", "Public/InternetBrowserSaveGame.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInternetBrowserSaveGame_Statics::NewProp_Bookmarks = { "Bookmarks", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInternetBrowserSaveGame, Bookmarks), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInternetBrowserSaveGame_Statics::NewProp_Bookmarks_MetaData), Z_Construct_UClass_UInternetBrowserSaveGame_Statics::NewProp_Bookmarks_MetaData) }; // 1634466100
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInternetBrowserSaveGame_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInternetBrowserSaveGame_Statics::NewProp_SaveSlotName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInternetBrowserSaveGame_Statics::NewProp_UserIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInternetBrowserSaveGame_Statics::NewProp_Bookmarks_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInternetBrowserSaveGame_Statics::NewProp_Bookmarks,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInternetBrowserSaveGame_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInternetBrowserSaveGame>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInternetBrowserSaveGame_Statics::ClassParams = {
		&UInternetBrowserSaveGame::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UInternetBrowserSaveGame_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UInternetBrowserSaveGame_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInternetBrowserSaveGame_Statics::Class_MetaDataParams), Z_Construct_UClass_UInternetBrowserSaveGame_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInternetBrowserSaveGame_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UInternetBrowserSaveGame()
	{
		if (!Z_Registration_Info_UClass_UInternetBrowserSaveGame.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInternetBrowserSaveGame.OuterSingleton, Z_Construct_UClass_UInternetBrowserSaveGame_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInternetBrowserSaveGame.OuterSingleton;
	}
	template<> INTERNETBROWSERUMG_API UClass* StaticClass<UInternetBrowserSaveGame>()
	{
		return UInternetBrowserSaveGame::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInternetBrowserSaveGame);
	UInternetBrowserSaveGame::~UInternetBrowserSaveGame() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_InternetBrowserUMG_Public_InternetBrowserSaveGame_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_InternetBrowserUMG_Public_InternetBrowserSaveGame_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInternetBrowserSaveGame, UInternetBrowserSaveGame::StaticClass, TEXT("UInternetBrowserSaveGame"), &Z_Registration_Info_UClass_UInternetBrowserSaveGame, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInternetBrowserSaveGame), 577030043U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_InternetBrowserUMG_Public_InternetBrowserSaveGame_h_2057352548(TEXT("/Script/InternetBrowserUMG"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_InternetBrowserUMG_Public_InternetBrowserSaveGame_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_InternetBrowserUMG_Public_InternetBrowserSaveGame_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
