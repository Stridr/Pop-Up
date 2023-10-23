// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OperatingSystemSimulator/Public/Widgets/Common/OperatingSystemTaskbarButton.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOperatingSystemTaskbarButton() {}
// Cross Module References
	OPERATINGSYSTEMSIMULATOR_API UClass* Z_Construct_UClass_UOperatingSystemBaseProgram_NoRegister();
	OPERATINGSYSTEMSIMULATOR_API UClass* Z_Construct_UClass_UOperatingSystemTaskbarButton();
	OPERATINGSYSTEMSIMULATOR_API UClass* Z_Construct_UClass_UOperatingSystemTaskbarButton_NoRegister();
	OPERATINGSYSTEMSIMULATOR_API UClass* Z_Construct_UClass_UOperatingSystemWidgetBase();
	OPERATINGSYSTEMSIMULATOR_API UEnum* Z_Construct_UEnum_OperatingSystemSimulator_EOperatingSystemProgramViewState();
	UPackage* Z_Construct_UPackage__Script_OperatingSystemSimulator();
// End Cross Module References
	DEFINE_FUNCTION(UOperatingSystemTaskbarButton::execToggleState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ToggleState();
		P_NATIVE_END;
	}
	static FName NAME_UOperatingSystemTaskbarButton_K2_OnCreated = FName(TEXT("K2_OnCreated"));
	void UOperatingSystemTaskbarButton::K2_OnCreated()
	{
		ProcessEvent(FindFunctionChecked(NAME_UOperatingSystemTaskbarButton_K2_OnCreated),NULL);
	}
	void UOperatingSystemTaskbarButton::StaticRegisterNativesUOperatingSystemTaskbarButton()
	{
		UClass* Class = UOperatingSystemTaskbarButton::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ToggleState", &UOperatingSystemTaskbarButton::execToggleState },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOperatingSystemTaskbarButton_K2_OnCreated_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemTaskbarButton_K2_OnCreated_Statics::Function_MetaDataParams[] = {
		{ "Category", "OperatingSystemTaskbarButton" },
		{ "DisplayName", "OnCreated" },
		{ "ModuleRelativePath", "Public/Widgets/Common/OperatingSystemTaskbarButton.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOperatingSystemTaskbarButton_K2_OnCreated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOperatingSystemTaskbarButton, nullptr, "K2_OnCreated", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemTaskbarButton_K2_OnCreated_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOperatingSystemTaskbarButton_K2_OnCreated_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UOperatingSystemTaskbarButton_K2_OnCreated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOperatingSystemTaskbarButton_K2_OnCreated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOperatingSystemTaskbarButton_ToggleState_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemTaskbarButton_ToggleState_Statics::Function_MetaDataParams[] = {
		{ "Category", "OperatingSystemTaskbarButton" },
		{ "ModuleRelativePath", "Public/Widgets/Common/OperatingSystemTaskbarButton.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOperatingSystemTaskbarButton_ToggleState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOperatingSystemTaskbarButton, nullptr, "ToggleState", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemTaskbarButton_ToggleState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOperatingSystemTaskbarButton_ToggleState_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UOperatingSystemTaskbarButton_ToggleState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOperatingSystemTaskbarButton_ToggleState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOperatingSystemTaskbarButton);
	UClass* Z_Construct_UClass_UOperatingSystemTaskbarButton_NoRegister()
	{
		return UOperatingSystemTaskbarButton::StaticClass();
	}
	struct Z_Construct_UClass_UOperatingSystemTaskbarButton_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_CurrentState_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentState_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CurrentState;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParentProgram_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_ParentProgram;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOperatingSystemTaskbarButton_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UOperatingSystemWidgetBase,
		(UObject* (*)())Z_Construct_UPackage__Script_OperatingSystemSimulator,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemTaskbarButton_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UOperatingSystemTaskbarButton_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOperatingSystemTaskbarButton_K2_OnCreated, "K2_OnCreated" }, // 1591165043
		{ &Z_Construct_UFunction_UOperatingSystemTaskbarButton_ToggleState, "ToggleState" }, // 1795734445
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemTaskbarButton_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOperatingSystemTaskbarButton_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Widgets/Common/OperatingSystemTaskbarButton.h" },
		{ "ModuleRelativePath", "Public/Widgets/Common/OperatingSystemTaskbarButton.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UOperatingSystemTaskbarButton_Statics::NewProp_CurrentState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOperatingSystemTaskbarButton_Statics::NewProp_CurrentState_MetaData[] = {
		{ "Category", "OperatingSystemTaskbarButton" },
		{ "ModuleRelativePath", "Public/Widgets/Common/OperatingSystemTaskbarButton.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UOperatingSystemTaskbarButton_Statics::NewProp_CurrentState = { "CurrentState", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOperatingSystemTaskbarButton, CurrentState), Z_Construct_UEnum_OperatingSystemSimulator_EOperatingSystemProgramViewState, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemTaskbarButton_Statics::NewProp_CurrentState_MetaData), Z_Construct_UClass_UOperatingSystemTaskbarButton_Statics::NewProp_CurrentState_MetaData) }; // 3957317527
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOperatingSystemTaskbarButton_Statics::NewProp_ParentProgram_MetaData[] = {
		{ "Category", "OperatingSystemTaskbarButton" },
		{ "ModuleRelativePath", "Public/Widgets/Common/OperatingSystemTaskbarButton.h" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UOperatingSystemTaskbarButton_Statics::NewProp_ParentProgram = { "ParentProgram", nullptr, (EPropertyFlags)0x0024080000000014, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOperatingSystemTaskbarButton, ParentProgram), Z_Construct_UClass_UOperatingSystemBaseProgram_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemTaskbarButton_Statics::NewProp_ParentProgram_MetaData), Z_Construct_UClass_UOperatingSystemTaskbarButton_Statics::NewProp_ParentProgram_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOperatingSystemTaskbarButton_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOperatingSystemTaskbarButton_Statics::NewProp_CurrentState_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOperatingSystemTaskbarButton_Statics::NewProp_CurrentState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOperatingSystemTaskbarButton_Statics::NewProp_ParentProgram,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOperatingSystemTaskbarButton_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOperatingSystemTaskbarButton>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOperatingSystemTaskbarButton_Statics::ClassParams = {
		&UOperatingSystemTaskbarButton::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UOperatingSystemTaskbarButton_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemTaskbarButton_Statics::PropPointers),
		0,
		0x00B010A1u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemTaskbarButton_Statics::Class_MetaDataParams), Z_Construct_UClass_UOperatingSystemTaskbarButton_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemTaskbarButton_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UOperatingSystemTaskbarButton()
	{
		if (!Z_Registration_Info_UClass_UOperatingSystemTaskbarButton.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOperatingSystemTaskbarButton.OuterSingleton, Z_Construct_UClass_UOperatingSystemTaskbarButton_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOperatingSystemTaskbarButton.OuterSingleton;
	}
	template<> OPERATINGSYSTEMSIMULATOR_API UClass* StaticClass<UOperatingSystemTaskbarButton>()
	{
		return UOperatingSystemTaskbarButton::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOperatingSystemTaskbarButton);
	UOperatingSystemTaskbarButton::~UOperatingSystemTaskbarButton() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Widgets_Common_OperatingSystemTaskbarButton_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Widgets_Common_OperatingSystemTaskbarButton_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOperatingSystemTaskbarButton, UOperatingSystemTaskbarButton::StaticClass, TEXT("UOperatingSystemTaskbarButton"), &Z_Registration_Info_UClass_UOperatingSystemTaskbarButton, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOperatingSystemTaskbarButton), 3560964766U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Widgets_Common_OperatingSystemTaskbarButton_h_1460584905(TEXT("/Script/OperatingSystemSimulator"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Widgets_Common_OperatingSystemTaskbarButton_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Widgets_Common_OperatingSystemTaskbarButton_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
