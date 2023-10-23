// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OperatingSystemSimulator/Public/Global/OperatingSystemSaveGame.h"
#include "OperatingSystemSimulator/Public/OperatingSystemTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOperatingSystemSaveGame() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_USaveGame();
	OPERATINGSYSTEMSIMULATOR_API UClass* Z_Construct_UClass_UOperatingSystemSaveGame();
	OPERATINGSYSTEMSIMULATOR_API UClass* Z_Construct_UClass_UOperatingSystemSaveGame_NoRegister();
	OPERATINGSYSTEMSIMULATOR_API UScriptStruct* Z_Construct_UScriptStruct_FOperatingSystemDeviceSaveLoad();
	UPackage* Z_Construct_UPackage__Script_OperatingSystemSimulator();
// End Cross Module References
	void UOperatingSystemSaveGame::StaticRegisterNativesUOperatingSystemSaveGame()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOperatingSystemSaveGame);
	UClass* Z_Construct_UClass_UOperatingSystemSaveGame_NoRegister()
	{
		return UOperatingSystemSaveGame::StaticClass();
	}
	struct Z_Construct_UClass_UOperatingSystemSaveGame_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UserIndex_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_UserIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SaveVersion_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SaveVersion;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeviceData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DeviceData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOperatingSystemSaveGame_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USaveGame,
		(UObject* (*)())Z_Construct_UPackage__Script_OperatingSystemSimulator,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemSaveGame_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOperatingSystemSaveGame_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Global/OperatingSystemSaveGame.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Global/OperatingSystemSaveGame.h" },
		{ "NotBlueprintType", "true" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOperatingSystemSaveGame_Statics::NewProp_UserIndex_MetaData[] = {
		{ "Category", "OperatingSystemSaveGame" },
		{ "ModuleRelativePath", "Public/Global/OperatingSystemSaveGame.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UOperatingSystemSaveGame_Statics::NewProp_UserIndex = { "UserIndex", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOperatingSystemSaveGame, UserIndex), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemSaveGame_Statics::NewProp_UserIndex_MetaData), Z_Construct_UClass_UOperatingSystemSaveGame_Statics::NewProp_UserIndex_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOperatingSystemSaveGame_Statics::NewProp_SaveVersion_MetaData[] = {
		{ "Category", "OperatingSystemSaveGame" },
		{ "Comment", "/** Static save version. DO NOT CHANGE if not required. Newer save versions are NOT compatible with previous ones. */" },
		{ "ModuleRelativePath", "Public/Global/OperatingSystemSaveGame.h" },
		{ "ToolTip", "Static save version. DO NOT CHANGE if not required. Newer save versions are NOT compatible with previous ones." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UOperatingSystemSaveGame_Statics::NewProp_SaveVersion = { "SaveVersion", nullptr, (EPropertyFlags)0x0020080000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOperatingSystemSaveGame, SaveVersion), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemSaveGame_Statics::NewProp_SaveVersion_MetaData), Z_Construct_UClass_UOperatingSystemSaveGame_Statics::NewProp_SaveVersion_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOperatingSystemSaveGame_Statics::NewProp_DeviceData_MetaData[] = {
		{ "ModuleRelativePath", "Public/Global/OperatingSystemSaveGame.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOperatingSystemSaveGame_Statics::NewProp_DeviceData = { "DeviceData", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOperatingSystemSaveGame, DeviceData), Z_Construct_UScriptStruct_FOperatingSystemDeviceSaveLoad, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemSaveGame_Statics::NewProp_DeviceData_MetaData), Z_Construct_UClass_UOperatingSystemSaveGame_Statics::NewProp_DeviceData_MetaData) }; // 507218749
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOperatingSystemSaveGame_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOperatingSystemSaveGame_Statics::NewProp_UserIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOperatingSystemSaveGame_Statics::NewProp_SaveVersion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOperatingSystemSaveGame_Statics::NewProp_DeviceData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOperatingSystemSaveGame_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOperatingSystemSaveGame>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOperatingSystemSaveGame_Statics::ClassParams = {
		&UOperatingSystemSaveGame::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UOperatingSystemSaveGame_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemSaveGame_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemSaveGame_Statics::Class_MetaDataParams), Z_Construct_UClass_UOperatingSystemSaveGame_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemSaveGame_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UOperatingSystemSaveGame()
	{
		if (!Z_Registration_Info_UClass_UOperatingSystemSaveGame.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOperatingSystemSaveGame.OuterSingleton, Z_Construct_UClass_UOperatingSystemSaveGame_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOperatingSystemSaveGame.OuterSingleton;
	}
	template<> OPERATINGSYSTEMSIMULATOR_API UClass* StaticClass<UOperatingSystemSaveGame>()
	{
		return UOperatingSystemSaveGame::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOperatingSystemSaveGame);
	UOperatingSystemSaveGame::~UOperatingSystemSaveGame() {}
	struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Global_OperatingSystemSaveGame_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Global_OperatingSystemSaveGame_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOperatingSystemSaveGame, UOperatingSystemSaveGame::StaticClass, TEXT("UOperatingSystemSaveGame"), &Z_Registration_Info_UClass_UOperatingSystemSaveGame, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOperatingSystemSaveGame), 3816816408U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Global_OperatingSystemSaveGame_h_2027232599(TEXT("/Script/OperatingSystemSimulator"),
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Global_OperatingSystemSaveGame_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Global_OperatingSystemSaveGame_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
