// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OperatingSystemSimulator/Public/Widgets/Common/OperatingSystemWidgetBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOperatingSystemWidgetBase() {}
// Cross Module References
	COMMONUI_API UClass* Z_Construct_UClass_UCommonUserWidget();
	OPERATINGSYSTEMSIMULATOR_API UClass* Z_Construct_UClass_UOperatingSystem_NoRegister();
	OPERATINGSYSTEMSIMULATOR_API UClass* Z_Construct_UClass_UOperatingSystemWidgetBase();
	OPERATINGSYSTEMSIMULATOR_API UClass* Z_Construct_UClass_UOperatingSystemWidgetBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_OperatingSystemSimulator();
// End Cross Module References
	DEFINE_FUNCTION(UOperatingSystemWidgetBase::execSetOperatingSystem)
	{
		P_GET_OBJECT(UOperatingSystem,Z_Param_NewOS);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetOperatingSystem(Z_Param_NewOS);
		P_NATIVE_END;
	}
	static FName NAME_UOperatingSystemWidgetBase_K2_OnSetOperatingSystem = FName(TEXT("K2_OnSetOperatingSystem"));
	void UOperatingSystemWidgetBase::K2_OnSetOperatingSystem()
	{
		ProcessEvent(FindFunctionChecked(NAME_UOperatingSystemWidgetBase_K2_OnSetOperatingSystem),NULL);
	}
	void UOperatingSystemWidgetBase::StaticRegisterNativesUOperatingSystemWidgetBase()
	{
		UClass* Class = UOperatingSystemWidgetBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetOperatingSystem", &UOperatingSystemWidgetBase::execSetOperatingSystem },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOperatingSystemWidgetBase_K2_OnSetOperatingSystem_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemWidgetBase_K2_OnSetOperatingSystem_Statics::Function_MetaDataParams[] = {
		{ "Category", "OperatingSystemWidgetBase" },
		{ "DisplayName", "OnSetOperatingSystem" },
		{ "ModuleRelativePath", "Public/Widgets/Common/OperatingSystemWidgetBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOperatingSystemWidgetBase_K2_OnSetOperatingSystem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOperatingSystemWidgetBase, nullptr, "K2_OnSetOperatingSystem", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemWidgetBase_K2_OnSetOperatingSystem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOperatingSystemWidgetBase_K2_OnSetOperatingSystem_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UOperatingSystemWidgetBase_K2_OnSetOperatingSystem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOperatingSystemWidgetBase_K2_OnSetOperatingSystem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOperatingSystemWidgetBase_SetOperatingSystem_Statics
	{
		struct OperatingSystemWidgetBase_eventSetOperatingSystem_Parms
		{
			UOperatingSystem* NewOS;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewOS;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOperatingSystemWidgetBase_SetOperatingSystem_Statics::NewProp_NewOS = { "NewOS", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystemWidgetBase_eventSetOperatingSystem_Parms, NewOS), Z_Construct_UClass_UOperatingSystem_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOperatingSystemWidgetBase_SetOperatingSystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemWidgetBase_SetOperatingSystem_Statics::NewProp_NewOS,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemWidgetBase_SetOperatingSystem_Statics::Function_MetaDataParams[] = {
		{ "Category", "OperatingSystemWidgetBase" },
		{ "ModuleRelativePath", "Public/Widgets/Common/OperatingSystemWidgetBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOperatingSystemWidgetBase_SetOperatingSystem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOperatingSystemWidgetBase, nullptr, "SetOperatingSystem", nullptr, nullptr, Z_Construct_UFunction_UOperatingSystemWidgetBase_SetOperatingSystem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemWidgetBase_SetOperatingSystem_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOperatingSystemWidgetBase_SetOperatingSystem_Statics::OperatingSystemWidgetBase_eventSetOperatingSystem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemWidgetBase_SetOperatingSystem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOperatingSystemWidgetBase_SetOperatingSystem_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemWidgetBase_SetOperatingSystem_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOperatingSystemWidgetBase_SetOperatingSystem_Statics::OperatingSystemWidgetBase_eventSetOperatingSystem_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOperatingSystemWidgetBase_SetOperatingSystem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOperatingSystemWidgetBase_SetOperatingSystem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOperatingSystemWidgetBase);
	UClass* Z_Construct_UClass_UOperatingSystemWidgetBase_NoRegister()
	{
		return UOperatingSystemWidgetBase::StaticClass();
	}
	struct Z_Construct_UClass_UOperatingSystemWidgetBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParentOS_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ParentOS;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOperatingSystemWidgetBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCommonUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_OperatingSystemSimulator,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemWidgetBase_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UOperatingSystemWidgetBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOperatingSystemWidgetBase_K2_OnSetOperatingSystem, "K2_OnSetOperatingSystem" }, // 198801484
		{ &Z_Construct_UFunction_UOperatingSystemWidgetBase_SetOperatingSystem, "SetOperatingSystem" }, // 3301899733
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemWidgetBase_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOperatingSystemWidgetBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Widgets/Common/OperatingSystemWidgetBase.h" },
		{ "ModuleRelativePath", "Public/Widgets/Common/OperatingSystemWidgetBase.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOperatingSystemWidgetBase_Statics::NewProp_ParentOS_MetaData[] = {
		{ "Category", "OperatingSystemWidgetBase" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/Widgets/Common/OperatingSystemWidgetBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UOperatingSystemWidgetBase_Statics::NewProp_ParentOS = { "ParentOS", nullptr, (EPropertyFlags)0x0025080000000014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOperatingSystemWidgetBase, ParentOS), Z_Construct_UClass_UOperatingSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemWidgetBase_Statics::NewProp_ParentOS_MetaData), Z_Construct_UClass_UOperatingSystemWidgetBase_Statics::NewProp_ParentOS_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOperatingSystemWidgetBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOperatingSystemWidgetBase_Statics::NewProp_ParentOS,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOperatingSystemWidgetBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOperatingSystemWidgetBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOperatingSystemWidgetBase_Statics::ClassParams = {
		&UOperatingSystemWidgetBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UOperatingSystemWidgetBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemWidgetBase_Statics::PropPointers),
		0,
		0x00A010A1u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemWidgetBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UOperatingSystemWidgetBase_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemWidgetBase_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UOperatingSystemWidgetBase()
	{
		if (!Z_Registration_Info_UClass_UOperatingSystemWidgetBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOperatingSystemWidgetBase.OuterSingleton, Z_Construct_UClass_UOperatingSystemWidgetBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOperatingSystemWidgetBase.OuterSingleton;
	}
	template<> OPERATINGSYSTEMSIMULATOR_API UClass* StaticClass<UOperatingSystemWidgetBase>()
	{
		return UOperatingSystemWidgetBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOperatingSystemWidgetBase);
	UOperatingSystemWidgetBase::~UOperatingSystemWidgetBase() {}
	struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Widgets_Common_OperatingSystemWidgetBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Widgets_Common_OperatingSystemWidgetBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOperatingSystemWidgetBase, UOperatingSystemWidgetBase::StaticClass, TEXT("UOperatingSystemWidgetBase"), &Z_Registration_Info_UClass_UOperatingSystemWidgetBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOperatingSystemWidgetBase), 432551611U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Widgets_Common_OperatingSystemWidgetBase_h_3163544253(TEXT("/Script/OperatingSystemSimulator"),
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Widgets_Common_OperatingSystemWidgetBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Widgets_Common_OperatingSystemWidgetBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
