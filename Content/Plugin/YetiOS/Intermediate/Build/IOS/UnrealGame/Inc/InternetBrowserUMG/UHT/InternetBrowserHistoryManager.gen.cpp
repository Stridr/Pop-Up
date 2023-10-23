// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InternetBrowserUMG/Public/InternetBrowserHistoryManager.h"
#include "InternetBrowserUMG/Public/InternetBrowser.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInternetBrowserHistoryManager() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	INTERNETBROWSERUMG_API UClass* Z_Construct_UClass_UInternetBrowserHistoryManager();
	INTERNETBROWSERUMG_API UClass* Z_Construct_UClass_UInternetBrowserHistoryManager_NoRegister();
	INTERNETBROWSERUMG_API UScriptStruct* Z_Construct_UScriptStruct_FInternetBrowserHistory();
	UPackage* Z_Construct_UPackage__Script_InternetBrowserUMG();
// End Cross Module References
	DEFINE_FUNCTION(UInternetBrowserHistoryManager::execDeleteHistory)
	{
		P_GET_STRUCT_REF(FInternetBrowserHistory,Z_Param_Out_InHistory);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DeleteHistory(Z_Param_Out_InHistory);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInternetBrowserHistoryManager::execDestroyHistoryManager)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UInternetBrowserHistoryManager::DestroyHistoryManager();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInternetBrowserHistoryManager::execGetHistoryManager)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UInternetBrowserHistoryManager**)Z_Param__Result=UInternetBrowserHistoryManager::GetHistoryManager();
		P_NATIVE_END;
	}
	void UInternetBrowserHistoryManager::StaticRegisterNativesUInternetBrowserHistoryManager()
	{
		UClass* Class = UInternetBrowserHistoryManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DeleteHistory", &UInternetBrowserHistoryManager::execDeleteHistory },
			{ "DestroyHistoryManager", &UInternetBrowserHistoryManager::execDestroyHistoryManager },
			{ "GetHistoryManager", &UInternetBrowserHistoryManager::execGetHistoryManager },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UInternetBrowserHistoryManager_DeleteHistory_Statics
	{
		struct InternetBrowserHistoryManager_eventDeleteHistory_Parms
		{
			FInternetBrowserHistory InHistory;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InHistory_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InHistory;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInternetBrowserHistoryManager_DeleteHistory_Statics::NewProp_InHistory_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInternetBrowserHistoryManager_DeleteHistory_Statics::NewProp_InHistory = { "InHistory", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InternetBrowserHistoryManager_eventDeleteHistory_Parms, InHistory), Z_Construct_UScriptStruct_FInternetBrowserHistory, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInternetBrowserHistoryManager_DeleteHistory_Statics::NewProp_InHistory_MetaData), Z_Construct_UFunction_UInternetBrowserHistoryManager_DeleteHistory_Statics::NewProp_InHistory_MetaData) }; // 3846432127
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInternetBrowserHistoryManager_DeleteHistory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInternetBrowserHistoryManager_DeleteHistory_Statics::NewProp_InHistory,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInternetBrowserHistoryManager_DeleteHistory_Statics::Function_MetaDataParams[] = {
		{ "Category", "Internet Browser" },
		{ "ModuleRelativePath", "Public/InternetBrowserHistoryManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInternetBrowserHistoryManager_DeleteHistory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInternetBrowserHistoryManager, nullptr, "DeleteHistory", nullptr, nullptr, Z_Construct_UFunction_UInternetBrowserHistoryManager_DeleteHistory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInternetBrowserHistoryManager_DeleteHistory_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInternetBrowserHistoryManager_DeleteHistory_Statics::InternetBrowserHistoryManager_eventDeleteHistory_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInternetBrowserHistoryManager_DeleteHistory_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInternetBrowserHistoryManager_DeleteHistory_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInternetBrowserHistoryManager_DeleteHistory_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInternetBrowserHistoryManager_DeleteHistory_Statics::InternetBrowserHistoryManager_eventDeleteHistory_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInternetBrowserHistoryManager_DeleteHistory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInternetBrowserHistoryManager_DeleteHistory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInternetBrowserHistoryManager_DestroyHistoryManager_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInternetBrowserHistoryManager_DestroyHistoryManager_Statics::Function_MetaDataParams[] = {
		{ "Category", "Internet Browser" },
		{ "ModuleRelativePath", "Public/InternetBrowserHistoryManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInternetBrowserHistoryManager_DestroyHistoryManager_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInternetBrowserHistoryManager, nullptr, "DestroyHistoryManager", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInternetBrowserHistoryManager_DestroyHistoryManager_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInternetBrowserHistoryManager_DestroyHistoryManager_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UInternetBrowserHistoryManager_DestroyHistoryManager()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInternetBrowserHistoryManager_DestroyHistoryManager_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInternetBrowserHistoryManager_GetHistoryManager_Statics
	{
		struct InternetBrowserHistoryManager_eventGetHistoryManager_Parms
		{
			UInternetBrowserHistoryManager* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInternetBrowserHistoryManager_GetHistoryManager_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InternetBrowserHistoryManager_eventGetHistoryManager_Parms, ReturnValue), Z_Construct_UClass_UInternetBrowserHistoryManager_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInternetBrowserHistoryManager_GetHistoryManager_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInternetBrowserHistoryManager_GetHistoryManager_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInternetBrowserHistoryManager_GetHistoryManager_Statics::Function_MetaDataParams[] = {
		{ "Category", "Internet Browser" },
		{ "ModuleRelativePath", "Public/InternetBrowserHistoryManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInternetBrowserHistoryManager_GetHistoryManager_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInternetBrowserHistoryManager, nullptr, "GetHistoryManager", nullptr, nullptr, Z_Construct_UFunction_UInternetBrowserHistoryManager_GetHistoryManager_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInternetBrowserHistoryManager_GetHistoryManager_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInternetBrowserHistoryManager_GetHistoryManager_Statics::InternetBrowserHistoryManager_eventGetHistoryManager_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInternetBrowserHistoryManager_GetHistoryManager_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInternetBrowserHistoryManager_GetHistoryManager_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInternetBrowserHistoryManager_GetHistoryManager_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInternetBrowserHistoryManager_GetHistoryManager_Statics::InternetBrowserHistoryManager_eventGetHistoryManager_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInternetBrowserHistoryManager_GetHistoryManager()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInternetBrowserHistoryManager_GetHistoryManager_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInternetBrowserHistoryManager);
	UClass* Z_Construct_UClass_UInternetBrowserHistoryManager_NoRegister()
	{
		return UInternetBrowserHistoryManager::StaticClass();
	}
	struct Z_Construct_UClass_UInternetBrowserHistoryManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInternetBrowserHistoryManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_InternetBrowserUMG,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInternetBrowserHistoryManager_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UInternetBrowserHistoryManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UInternetBrowserHistoryManager_DeleteHistory, "DeleteHistory" }, // 2301073473
		{ &Z_Construct_UFunction_UInternetBrowserHistoryManager_DestroyHistoryManager, "DestroyHistoryManager" }, // 4217160324
		{ &Z_Construct_UFunction_UInternetBrowserHistoryManager_GetHistoryManager, "GetHistoryManager" }, // 3895693000
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInternetBrowserHistoryManager_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInternetBrowserHistoryManager_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "InternetBrowserHistoryManager.h" },
		{ "ModuleRelativePath", "Public/InternetBrowserHistoryManager.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInternetBrowserHistoryManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInternetBrowserHistoryManager>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInternetBrowserHistoryManager_Statics::ClassParams = {
		&UInternetBrowserHistoryManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInternetBrowserHistoryManager_Statics::Class_MetaDataParams), Z_Construct_UClass_UInternetBrowserHistoryManager_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UInternetBrowserHistoryManager()
	{
		if (!Z_Registration_Info_UClass_UInternetBrowserHistoryManager.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInternetBrowserHistoryManager.OuterSingleton, Z_Construct_UClass_UInternetBrowserHistoryManager_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInternetBrowserHistoryManager.OuterSingleton;
	}
	template<> INTERNETBROWSERUMG_API UClass* StaticClass<UInternetBrowserHistoryManager>()
	{
		return UInternetBrowserHistoryManager::StaticClass();
	}
	UInternetBrowserHistoryManager::UInternetBrowserHistoryManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInternetBrowserHistoryManager);
	UInternetBrowserHistoryManager::~UInternetBrowserHistoryManager() {}
	struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_InternetBrowserUMG_Public_InternetBrowserHistoryManager_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_InternetBrowserUMG_Public_InternetBrowserHistoryManager_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInternetBrowserHistoryManager, UInternetBrowserHistoryManager::StaticClass, TEXT("UInternetBrowserHistoryManager"), &Z_Registration_Info_UClass_UInternetBrowserHistoryManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInternetBrowserHistoryManager), 2192036945U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_InternetBrowserUMG_Public_InternetBrowserHistoryManager_h_3922463334(TEXT("/Script/InternetBrowserUMG"),
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_InternetBrowserUMG_Public_InternetBrowserHistoryManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_InternetBrowserUMG_Public_InternetBrowserHistoryManager_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
