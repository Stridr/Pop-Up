// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OperatingSystemSimulator/Private/Global/OperatingSystemPluginSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOperatingSystemPluginSettings() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDirectoryPath();
	DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
	OPERATINGSYSTEMSIMULATOR_API UClass* Z_Construct_UClass_UOperatingSystemPluginSettings();
	OPERATINGSYSTEMSIMULATOR_API UClass* Z_Construct_UClass_UOperatingSystemPluginSettings_NoRegister();
	OPERATINGSYSTEMSIMULATOR_API UClass* Z_Construct_UClass_UOperatingSystemUserManager_NoRegister();
	UPackage* Z_Construct_UPackage__Script_OperatingSystemSimulator();
// End Cross Module References
	void UOperatingSystemPluginSettings::StaticRegisterNativesUOperatingSystemPluginSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOperatingSystemPluginSettings);
	UClass* Z_Construct_UClass_UOperatingSystemPluginSettings_NoRegister()
	{
		return UOperatingSystemPluginSettings::StaticClass();
	}
	struct Z_Construct_UClass_UOperatingSystemPluginSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AdditionalTerminalCommandsPath_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AdditionalTerminalCommandsPath_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AdditionalTerminalCommandsPath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UserManagerClass_MetaData[];
#endif
		static const UECodeGen_Private::FSoftClassPropertyParams NewProp_UserManagerClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UserManagerSaveSlotName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_UserManagerSaveSlotName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOperatingSystemPluginSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_OperatingSystemSimulator,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemPluginSettings_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOperatingSystemPluginSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Global/OperatingSystemPluginSettings.h" },
		{ "ModuleRelativePath", "Private/Global/OperatingSystemPluginSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOperatingSystemPluginSettings_Statics::NewProp_AdditionalTerminalCommandsPath_Inner = { "AdditionalTerminalCommandsPath", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOperatingSystemPluginSettings_Statics::NewProp_AdditionalTerminalCommandsPath_MetaData[] = {
		{ "Category", "OperatingSystemSettings" },
		{ "Comment", "/** Scans these paths to find additional commands that should be added to Operating System Terminal. */" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "LongPackageName", "" },
		{ "ModuleRelativePath", "Private/Global/OperatingSystemPluginSettings.h" },
		{ "RelativeToGameContentDir", "" },
		{ "ToolTip", "Scans these paths to find additional commands that should be added to Operating System Terminal." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UOperatingSystemPluginSettings_Statics::NewProp_AdditionalTerminalCommandsPath = { "AdditionalTerminalCommandsPath", nullptr, (EPropertyFlags)0x0040000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOperatingSystemPluginSettings, AdditionalTerminalCommandsPath), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemPluginSettings_Statics::NewProp_AdditionalTerminalCommandsPath_MetaData), Z_Construct_UClass_UOperatingSystemPluginSettings_Statics::NewProp_AdditionalTerminalCommandsPath_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOperatingSystemPluginSettings_Statics::NewProp_UserManagerClass_MetaData[] = {
		{ "Category", "OperatingSystemSettings" },
		{ "ModuleRelativePath", "Private/Global/OperatingSystemPluginSettings.h" },
	};
#endif
	const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_UOperatingSystemPluginSettings_Statics::NewProp_UserManagerClass = { "UserManagerClass", nullptr, (EPropertyFlags)0x0044000000004001, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOperatingSystemPluginSettings, UserManagerClass), Z_Construct_UClass_UOperatingSystemUserManager_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemPluginSettings_Statics::NewProp_UserManagerClass_MetaData), Z_Construct_UClass_UOperatingSystemPluginSettings_Statics::NewProp_UserManagerClass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOperatingSystemPluginSettings_Statics::NewProp_UserManagerSaveSlotName_MetaData[] = {
		{ "Category", "OperatingSystemSettings" },
		{ "Comment", "/** Name for the save game slot to use for User Manager class. If empty, automatically falls back to using 'user_manager' */" },
		{ "ModuleRelativePath", "Private/Global/OperatingSystemPluginSettings.h" },
		{ "ToolTip", "Name for the save game slot to use for User Manager class. If empty, automatically falls back to using 'user_manager'" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UOperatingSystemPluginSettings_Statics::NewProp_UserManagerSaveSlotName = { "UserManagerSaveSlotName", nullptr, (EPropertyFlags)0x0040000000004001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOperatingSystemPluginSettings, UserManagerSaveSlotName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemPluginSettings_Statics::NewProp_UserManagerSaveSlotName_MetaData), Z_Construct_UClass_UOperatingSystemPluginSettings_Statics::NewProp_UserManagerSaveSlotName_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOperatingSystemPluginSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOperatingSystemPluginSettings_Statics::NewProp_AdditionalTerminalCommandsPath_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOperatingSystemPluginSettings_Statics::NewProp_AdditionalTerminalCommandsPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOperatingSystemPluginSettings_Statics::NewProp_UserManagerClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOperatingSystemPluginSettings_Statics::NewProp_UserManagerSaveSlotName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOperatingSystemPluginSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOperatingSystemPluginSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOperatingSystemPluginSettings_Statics::ClassParams = {
		&UOperatingSystemPluginSettings::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UOperatingSystemPluginSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemPluginSettings_Statics::PropPointers),
		0,
		0x000000A6u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemPluginSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UOperatingSystemPluginSettings_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemPluginSettings_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UOperatingSystemPluginSettings()
	{
		if (!Z_Registration_Info_UClass_UOperatingSystemPluginSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOperatingSystemPluginSettings.OuterSingleton, Z_Construct_UClass_UOperatingSystemPluginSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOperatingSystemPluginSettings.OuterSingleton;
	}
	template<> OPERATINGSYSTEMSIMULATOR_API UClass* StaticClass<UOperatingSystemPluginSettings>()
	{
		return UOperatingSystemPluginSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOperatingSystemPluginSettings);
	UOperatingSystemPluginSettings::~UOperatingSystemPluginSettings() {}
	struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Private_Global_OperatingSystemPluginSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Private_Global_OperatingSystemPluginSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOperatingSystemPluginSettings, UOperatingSystemPluginSettings::StaticClass, TEXT("UOperatingSystemPluginSettings"), &Z_Registration_Info_UClass_UOperatingSystemPluginSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOperatingSystemPluginSettings), 3276039275U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Private_Global_OperatingSystemPluginSettings_h_1244694067(TEXT("/Script/OperatingSystemSimulator"),
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Private_Global_OperatingSystemPluginSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Private_Global_OperatingSystemPluginSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
