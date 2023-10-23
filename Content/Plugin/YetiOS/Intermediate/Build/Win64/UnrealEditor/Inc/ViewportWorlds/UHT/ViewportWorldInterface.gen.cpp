// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ViewportWorlds/Public/ViewportWorldInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeViewportWorldInterface() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ViewportWorlds();
	VIEWPORTWORLDS_API UClass* Z_Construct_UClass_UViewportWorldInterface();
	VIEWPORTWORLDS_API UClass* Z_Construct_UClass_UViewportWorldInterface_NoRegister();
// End Cross Module References
	struct ViewportWorldInterface_eventOnPlayerInputUpdated_Parms
	{
		UInputMappingContext* InputMappingContext;
	};
	void IViewportWorldInterface::OnPlayerInputUpdated(UInputMappingContext* InputMappingContext)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnPlayerInputUpdated instead.");
	}
	void UViewportWorldInterface::StaticRegisterNativesUViewportWorldInterface()
	{
	}
	struct Z_Construct_UFunction_UViewportWorldInterface_OnPlayerInputUpdated_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InputMappingContext;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UViewportWorldInterface_OnPlayerInputUpdated_Statics::NewProp_InputMappingContext = { "InputMappingContext", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ViewportWorldInterface_eventOnPlayerInputUpdated_Parms, InputMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UViewportWorldInterface_OnPlayerInputUpdated_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UViewportWorldInterface_OnPlayerInputUpdated_Statics::NewProp_InputMappingContext,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UViewportWorldInterface_OnPlayerInputUpdated_Statics::Function_MetaDataParams[] = {
		{ "Category", "ViewportWorldInterface" },
		{ "ModuleRelativePath", "Public/ViewportWorldInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UViewportWorldInterface_OnPlayerInputUpdated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UViewportWorldInterface, nullptr, "OnPlayerInputUpdated", nullptr, nullptr, Z_Construct_UFunction_UViewportWorldInterface_OnPlayerInputUpdated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UViewportWorldInterface_OnPlayerInputUpdated_Statics::PropPointers), sizeof(ViewportWorldInterface_eventOnPlayerInputUpdated_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UViewportWorldInterface_OnPlayerInputUpdated_Statics::Function_MetaDataParams), Z_Construct_UFunction_UViewportWorldInterface_OnPlayerInputUpdated_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UViewportWorldInterface_OnPlayerInputUpdated_Statics::PropPointers) < 2048);
	static_assert(sizeof(ViewportWorldInterface_eventOnPlayerInputUpdated_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UViewportWorldInterface_OnPlayerInputUpdated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UViewportWorldInterface_OnPlayerInputUpdated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UViewportWorldInterface);
	UClass* Z_Construct_UClass_UViewportWorldInterface_NoRegister()
	{
		return UViewportWorldInterface::StaticClass();
	}
	struct Z_Construct_UClass_UViewportWorldInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UViewportWorldInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_ViewportWorlds,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UViewportWorldInterface_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UViewportWorldInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UViewportWorldInterface_OnPlayerInputUpdated, "OnPlayerInputUpdated" }, // 3163877610
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UViewportWorldInterface_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UViewportWorldInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ViewportWorldInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UViewportWorldInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IViewportWorldInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UViewportWorldInterface_Statics::ClassParams = {
		&UViewportWorldInterface::StaticClass,
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
		0x000840A1u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UViewportWorldInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UViewportWorldInterface_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UViewportWorldInterface()
	{
		if (!Z_Registration_Info_UClass_UViewportWorldInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UViewportWorldInterface.OuterSingleton, Z_Construct_UClass_UViewportWorldInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UViewportWorldInterface.OuterSingleton;
	}
	template<> VIEWPORTWORLDS_API UClass* StaticClass<UViewportWorldInterface>()
	{
		return UViewportWorldInterface::StaticClass();
	}
	UViewportWorldInterface::UViewportWorldInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UViewportWorldInterface);
	UViewportWorldInterface::~UViewportWorldInterface() {}
	static FName NAME_UViewportWorldInterface_OnPlayerInputUpdated = FName(TEXT("OnPlayerInputUpdated"));
	void IViewportWorldInterface::Execute_OnPlayerInputUpdated(UObject* O, UInputMappingContext* InputMappingContext)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UViewportWorldInterface::StaticClass()));
		ViewportWorldInterface_eventOnPlayerInputUpdated_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UViewportWorldInterface_OnPlayerInputUpdated);
		if (Func)
		{
			Parms.InputMappingContext=InputMappingContext;
			O->ProcessEvent(Func, &Parms);
		}
	}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_ViewportWorlds_Public_ViewportWorldInterface_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_ViewportWorlds_Public_ViewportWorldInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UViewportWorldInterface, UViewportWorldInterface::StaticClass, TEXT("UViewportWorldInterface"), &Z_Registration_Info_UClass_UViewportWorldInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UViewportWorldInterface), 2217624907U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_ViewportWorlds_Public_ViewportWorldInterface_h_23212498(TEXT("/Script/ViewportWorlds"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_ViewportWorlds_Public_ViewportWorldInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_ViewportWorlds_Public_ViewportWorldInterface_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
