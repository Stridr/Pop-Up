// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ViewportWorlds/Private/Global/ViewportWorldSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeViewportWorldSettings() {}
// Cross Module References
	DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
	UPackage* Z_Construct_UPackage__Script_ViewportWorlds();
	VIEWPORTWORLDS_API UClass* Z_Construct_UClass_UViewportWorldGameClient_NoRegister();
	VIEWPORTWORLDS_API UClass* Z_Construct_UClass_UViewportWorldSettings();
	VIEWPORTWORLDS_API UClass* Z_Construct_UClass_UViewportWorldSettings_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UViewportWorldSettings::execIsViewportWorldsEnabled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UViewportWorldSettings::IsViewportWorldsEnabled();
		P_NATIVE_END;
	}
	void UViewportWorldSettings::StaticRegisterNativesUViewportWorldSettings()
	{
		UClass* Class = UViewportWorldSettings::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsViewportWorldsEnabled", &UViewportWorldSettings::execIsViewportWorldsEnabled },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UViewportWorldSettings_IsViewportWorldsEnabled_Statics
	{
		struct ViewportWorldSettings_eventIsViewportWorldsEnabled_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UViewportWorldSettings_IsViewportWorldsEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ViewportWorldSettings_eventIsViewportWorldsEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UViewportWorldSettings_IsViewportWorldsEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ViewportWorldSettings_eventIsViewportWorldsEnabled_Parms), &Z_Construct_UFunction_UViewportWorldSettings_IsViewportWorldsEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UViewportWorldSettings_IsViewportWorldsEnabled_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UViewportWorldSettings_IsViewportWorldsEnabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UViewportWorldSettings_IsViewportWorldsEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "ViewportWorldSettings" },
		{ "ModuleRelativePath", "Private/Global/ViewportWorldSettings.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UViewportWorldSettings_IsViewportWorldsEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UViewportWorldSettings, nullptr, "IsViewportWorldsEnabled", nullptr, nullptr, Z_Construct_UFunction_UViewportWorldSettings_IsViewportWorldsEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UViewportWorldSettings_IsViewportWorldsEnabled_Statics::PropPointers), sizeof(Z_Construct_UFunction_UViewportWorldSettings_IsViewportWorldsEnabled_Statics::ViewportWorldSettings_eventIsViewportWorldsEnabled_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UViewportWorldSettings_IsViewportWorldsEnabled_Statics::Function_MetaDataParams), Z_Construct_UFunction_UViewportWorldSettings_IsViewportWorldsEnabled_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UViewportWorldSettings_IsViewportWorldsEnabled_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UViewportWorldSettings_IsViewportWorldsEnabled_Statics::ViewportWorldSettings_eventIsViewportWorldsEnabled_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UViewportWorldSettings_IsViewportWorldsEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UViewportWorldSettings_IsViewportWorldsEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UViewportWorldSettings);
	UClass* Z_Construct_UClass_UViewportWorldSettings_NoRegister()
	{
		return UViewportWorldSettings::StaticClass();
	}
	struct Z_Construct_UClass_UViewportWorldSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableViewportWorlds_MetaData[];
#endif
		static void NewProp_bEnableViewportWorlds_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableViewportWorlds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ViewportGameClientClass_MetaData[];
#endif
		static const UECodeGen_Private::FSoftClassPropertyParams NewProp_ViewportGameClientClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UViewportWorldSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_ViewportWorlds,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UViewportWorldSettings_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UViewportWorldSettings_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UViewportWorldSettings_IsViewportWorldsEnabled, "IsViewportWorldsEnabled" }, // 4245240772
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UViewportWorldSettings_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UViewportWorldSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Global/ViewportWorldSettings.h" },
		{ "ModuleRelativePath", "Private/Global/ViewportWorldSettings.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UViewportWorldSettings_Statics::NewProp_bEnableViewportWorlds_MetaData[] = {
		{ "Category", "ViewportWorldSettings" },
		{ "DisplayName", "Enable Viewport Worlds (Experimental)" },
		{ "ModuleRelativePath", "Private/Global/ViewportWorldSettings.h" },
	};
#endif
	void Z_Construct_UClass_UViewportWorldSettings_Statics::NewProp_bEnableViewportWorlds_SetBit(void* Obj)
	{
		((UViewportWorldSettings*)Obj)->bEnableViewportWorlds = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UViewportWorldSettings_Statics::NewProp_bEnableViewportWorlds = { "bEnableViewportWorlds", nullptr, (EPropertyFlags)0x0040000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UViewportWorldSettings), &Z_Construct_UClass_UViewportWorldSettings_Statics::NewProp_bEnableViewportWorlds_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UViewportWorldSettings_Statics::NewProp_bEnableViewportWorlds_MetaData), Z_Construct_UClass_UViewportWorldSettings_Statics::NewProp_bEnableViewportWorlds_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UViewportWorldSettings_Statics::NewProp_ViewportGameClientClass_MetaData[] = {
		{ "Category", "ViewportWorldSettings" },
		{ "EditCondition", "bEnableViewportWorlds" },
		{ "ModuleRelativePath", "Private/Global/ViewportWorldSettings.h" },
	};
#endif
	const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_UViewportWorldSettings_Statics::NewProp_ViewportGameClientClass = { "ViewportGameClientClass", nullptr, (EPropertyFlags)0x0044000002004001, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UViewportWorldSettings, ViewportGameClientClass), Z_Construct_UClass_UViewportWorldGameClient_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UViewportWorldSettings_Statics::NewProp_ViewportGameClientClass_MetaData), Z_Construct_UClass_UViewportWorldSettings_Statics::NewProp_ViewportGameClientClass_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UViewportWorldSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UViewportWorldSettings_Statics::NewProp_bEnableViewportWorlds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UViewportWorldSettings_Statics::NewProp_ViewportGameClientClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UViewportWorldSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UViewportWorldSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UViewportWorldSettings_Statics::ClassParams = {
		&UViewportWorldSettings::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UViewportWorldSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UViewportWorldSettings_Statics::PropPointers),
		0,
		0x000000A6u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UViewportWorldSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UViewportWorldSettings_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UViewportWorldSettings_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UViewportWorldSettings()
	{
		if (!Z_Registration_Info_UClass_UViewportWorldSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UViewportWorldSettings.OuterSingleton, Z_Construct_UClass_UViewportWorldSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UViewportWorldSettings.OuterSingleton;
	}
	template<> VIEWPORTWORLDS_API UClass* StaticClass<UViewportWorldSettings>()
	{
		return UViewportWorldSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UViewportWorldSettings);
	UViewportWorldSettings::~UViewportWorldSettings() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_ViewportWorlds_Private_Global_ViewportWorldSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_ViewportWorlds_Private_Global_ViewportWorldSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UViewportWorldSettings, UViewportWorldSettings::StaticClass, TEXT("UViewportWorldSettings"), &Z_Registration_Info_UClass_UViewportWorldSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UViewportWorldSettings), 2072195737U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_ViewportWorlds_Private_Global_ViewportWorldSettings_h_369628176(TEXT("/Script/ViewportWorlds"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_ViewportWorlds_Private_Global_ViewportWorldSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_ViewportWorlds_Private_Global_ViewportWorldSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
