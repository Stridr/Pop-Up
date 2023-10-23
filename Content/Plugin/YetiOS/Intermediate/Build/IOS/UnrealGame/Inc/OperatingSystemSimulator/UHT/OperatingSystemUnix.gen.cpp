// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OperatingSystemSimulator/Public/Core/OperatingSystemUnix.h"
#include "OperatingSystemSimulator/Public/Devices/OperatingSystemBaseDevice.h"
#include "OperatingSystemSimulator/Public/OperatingSystemTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOperatingSystemUnix() {}
// Cross Module References
	OPERATINGSYSTEMSIMULATOR_API UClass* Z_Construct_UClass_UOperatingSystem();
	OPERATINGSYSTEMSIMULATOR_API UClass* Z_Construct_UClass_UOperatingSystemProgramsCollection_NoRegister();
	OPERATINGSYSTEMSIMULATOR_API UClass* Z_Construct_UClass_UOperatingSystemRootDirectory_NoRegister();
	OPERATINGSYSTEMSIMULATOR_API UClass* Z_Construct_UClass_UOperatingSystemUnix();
	OPERATINGSYSTEMSIMULATOR_API UClass* Z_Construct_UClass_UOperatingSystemUnix_NoRegister();
	OPERATINGSYSTEMSIMULATOR_API UScriptStruct* Z_Construct_UScriptStruct_FOperatingSystemUser();
	UPackage* Z_Construct_UPackage__Script_OperatingSystemSimulator();
// End Cross Module References
	void UOperatingSystemUnix::StaticRegisterNativesUOperatingSystemUnix()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOperatingSystemUnix);
	UClass* Z_Construct_UClass_UOperatingSystemUnix_NoRegister()
	{
		return UOperatingSystemUnix::StaticClass();
	}
	struct Z_Construct_UClass_UOperatingSystemUnix_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RootUser_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RootUser;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RootCommand_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_RootCommand;
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_RepositoryClasses_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RepositoryClasses_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_RepositoryClasses;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RootDirectory_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_RootDirectory;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOperatingSystemUnix_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UOperatingSystem,
		(UObject* (*)())Z_Construct_UPackage__Script_OperatingSystemSimulator,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemUnix_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOperatingSystemUnix_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Core/OperatingSystemUnix.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Core/OperatingSystemUnix.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOperatingSystemUnix_Statics::NewProp_RootUser_MetaData[] = {
		{ "Category", "OperatingSystemUnix" },
		{ "Comment", "/** Root user for this Operating System. */" },
		{ "ModuleRelativePath", "Public/Core/OperatingSystemUnix.h" },
		{ "ToolTip", "Root user for this Operating System." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOperatingSystemUnix_Statics::NewProp_RootUser = { "RootUser", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOperatingSystemUnix, RootUser), Z_Construct_UScriptStruct_FOperatingSystemUser, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemUnix_Statics::NewProp_RootUser_MetaData), Z_Construct_UClass_UOperatingSystemUnix_Statics::NewProp_RootUser_MetaData) }; // 1295920940
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOperatingSystemUnix_Statics::NewProp_RootCommand_MetaData[] = {
		{ "Category", "OperatingSystemUnix" },
		{ "Comment", "/** Root command name. Defaults to sudo. */" },
		{ "ModuleRelativePath", "Public/Core/OperatingSystemUnix.h" },
		{ "ToolTip", "Root command name. Defaults to sudo." },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UOperatingSystemUnix_Statics::NewProp_RootCommand = { "RootCommand", nullptr, (EPropertyFlags)0x00200c0000010015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOperatingSystemUnix, RootCommand), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemUnix_Statics::NewProp_RootCommand_MetaData), Z_Construct_UClass_UOperatingSystemUnix_Statics::NewProp_RootCommand_MetaData) };
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UOperatingSystemUnix_Statics::NewProp_RepositoryClasses_ElementProp = { "RepositoryClasses", nullptr, (EPropertyFlags)0x0004000000000001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UOperatingSystemProgramsCollection_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOperatingSystemUnix_Statics::NewProp_RepositoryClasses_MetaData[] = {
		{ "Category", "OperatingSystemUnix" },
		{ "Comment", "/** Simulates the effect of sudo apt-get stuff. You can add as many classes you want and even let users add their own repository via terminal. */" },
		{ "ModuleRelativePath", "Public/Core/OperatingSystemUnix.h" },
		{ "ToolTip", "Simulates the effect of sudo apt-get stuff. You can add as many classes you want and even let users add their own repository via terminal." },
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_UOperatingSystemUnix_Statics::NewProp_RepositoryClasses = { "RepositoryClasses", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOperatingSystemUnix, RepositoryClasses), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemUnix_Statics::NewProp_RepositoryClasses_MetaData), Z_Construct_UClass_UOperatingSystemUnix_Statics::NewProp_RepositoryClasses_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOperatingSystemUnix_Statics::NewProp_RootDirectory_MetaData[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Public/Core/OperatingSystemUnix.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UOperatingSystemUnix_Statics::NewProp_RootDirectory = { "RootDirectory", nullptr, (EPropertyFlags)0x0044000000020801, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOperatingSystemUnix, RootDirectory), Z_Construct_UClass_UOperatingSystemRootDirectory_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemUnix_Statics::NewProp_RootDirectory_MetaData), Z_Construct_UClass_UOperatingSystemUnix_Statics::NewProp_RootDirectory_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOperatingSystemUnix_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOperatingSystemUnix_Statics::NewProp_RootUser,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOperatingSystemUnix_Statics::NewProp_RootCommand,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOperatingSystemUnix_Statics::NewProp_RepositoryClasses_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOperatingSystemUnix_Statics::NewProp_RepositoryClasses,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOperatingSystemUnix_Statics::NewProp_RootDirectory,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOperatingSystemUnix_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOperatingSystemUnix>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOperatingSystemUnix_Statics::ClassParams = {
		&UOperatingSystemUnix::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UOperatingSystemUnix_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemUnix_Statics::PropPointers),
		0,
		0x009000A1u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemUnix_Statics::Class_MetaDataParams), Z_Construct_UClass_UOperatingSystemUnix_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemUnix_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UOperatingSystemUnix()
	{
		if (!Z_Registration_Info_UClass_UOperatingSystemUnix.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOperatingSystemUnix.OuterSingleton, Z_Construct_UClass_UOperatingSystemUnix_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOperatingSystemUnix.OuterSingleton;
	}
	template<> OPERATINGSYSTEMSIMULATOR_API UClass* StaticClass<UOperatingSystemUnix>()
	{
		return UOperatingSystemUnix::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOperatingSystemUnix);
	UOperatingSystemUnix::~UOperatingSystemUnix() {}
	struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Core_OperatingSystemUnix_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Core_OperatingSystemUnix_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOperatingSystemUnix, UOperatingSystemUnix::StaticClass, TEXT("UOperatingSystemUnix"), &Z_Registration_Info_UClass_UOperatingSystemUnix, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOperatingSystemUnix), 1534892089U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Core_OperatingSystemUnix_h_827730359(TEXT("/Script/OperatingSystemSimulator"),
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Core_OperatingSystemUnix_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Core_OperatingSystemUnix_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
