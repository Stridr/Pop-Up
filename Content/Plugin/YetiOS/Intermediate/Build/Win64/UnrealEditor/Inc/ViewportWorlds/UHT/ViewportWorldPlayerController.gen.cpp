// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ViewportWorlds/Public/Player/ViewportWorldPlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeViewportWorldPlayerController() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ViewportWorlds();
	VIEWPORTWORLDS_API UClass* Z_Construct_UClass_AViewportWorldPlayerController();
	VIEWPORTWORLDS_API UClass* Z_Construct_UClass_AViewportWorldPlayerController_NoRegister();
	VIEWPORTWORLDS_API UClass* Z_Construct_UClass_UViewportWorldInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AViewportWorldPlayerController::execUpdatePlayerInput)
	{
		P_GET_OBJECT(UInputMappingContext,Z_Param_NewInputMapping);
		P_GET_UBOOL(Z_Param_bApplyImmediately);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->UpdatePlayerInput(Z_Param_NewInputMapping,Z_Param_bApplyImmediately);
		P_NATIVE_END;
	}
	void AViewportWorldPlayerController::StaticRegisterNativesAViewportWorldPlayerController()
	{
		UClass* Class = AViewportWorldPlayerController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "UpdatePlayerInput", &AViewportWorldPlayerController::execUpdatePlayerInput },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AViewportWorldPlayerController_UpdatePlayerInput_Statics
	{
		struct ViewportWorldPlayerController_eventUpdatePlayerInput_Parms
		{
			UInputMappingContext* NewInputMapping;
			bool bApplyImmediately;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewInputMapping;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bApplyImmediately_MetaData[];
#endif
		static void NewProp_bApplyImmediately_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bApplyImmediately;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AViewportWorldPlayerController_UpdatePlayerInput_Statics::NewProp_NewInputMapping = { "NewInputMapping", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ViewportWorldPlayerController_eventUpdatePlayerInput_Parms, NewInputMapping), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AViewportWorldPlayerController_UpdatePlayerInput_Statics::NewProp_bApplyImmediately_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_AViewportWorldPlayerController_UpdatePlayerInput_Statics::NewProp_bApplyImmediately_SetBit(void* Obj)
	{
		((ViewportWorldPlayerController_eventUpdatePlayerInput_Parms*)Obj)->bApplyImmediately = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AViewportWorldPlayerController_UpdatePlayerInput_Statics::NewProp_bApplyImmediately = { "bApplyImmediately", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ViewportWorldPlayerController_eventUpdatePlayerInput_Parms), &Z_Construct_UFunction_AViewportWorldPlayerController_UpdatePlayerInput_Statics::NewProp_bApplyImmediately_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AViewportWorldPlayerController_UpdatePlayerInput_Statics::NewProp_bApplyImmediately_MetaData), Z_Construct_UFunction_AViewportWorldPlayerController_UpdatePlayerInput_Statics::NewProp_bApplyImmediately_MetaData) };
	void Z_Construct_UFunction_AViewportWorldPlayerController_UpdatePlayerInput_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ViewportWorldPlayerController_eventUpdatePlayerInput_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AViewportWorldPlayerController_UpdatePlayerInput_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ViewportWorldPlayerController_eventUpdatePlayerInput_Parms), &Z_Construct_UFunction_AViewportWorldPlayerController_UpdatePlayerInput_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AViewportWorldPlayerController_UpdatePlayerInput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AViewportWorldPlayerController_UpdatePlayerInput_Statics::NewProp_NewInputMapping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AViewportWorldPlayerController_UpdatePlayerInput_Statics::NewProp_bApplyImmediately,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AViewportWorldPlayerController_UpdatePlayerInput_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AViewportWorldPlayerController_UpdatePlayerInput_Statics::Function_MetaDataParams[] = {
		{ "Category", "ViewportWorldPlayerController" },
		{ "CPP_Default_bApplyImmediately", "true" },
		{ "ModuleRelativePath", "Public/Player/ViewportWorldPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AViewportWorldPlayerController_UpdatePlayerInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AViewportWorldPlayerController, nullptr, "UpdatePlayerInput", nullptr, nullptr, Z_Construct_UFunction_AViewportWorldPlayerController_UpdatePlayerInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AViewportWorldPlayerController_UpdatePlayerInput_Statics::PropPointers), sizeof(Z_Construct_UFunction_AViewportWorldPlayerController_UpdatePlayerInput_Statics::ViewportWorldPlayerController_eventUpdatePlayerInput_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AViewportWorldPlayerController_UpdatePlayerInput_Statics::Function_MetaDataParams), Z_Construct_UFunction_AViewportWorldPlayerController_UpdatePlayerInput_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AViewportWorldPlayerController_UpdatePlayerInput_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AViewportWorldPlayerController_UpdatePlayerInput_Statics::ViewportWorldPlayerController_eventUpdatePlayerInput_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AViewportWorldPlayerController_UpdatePlayerInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AViewportWorldPlayerController_UpdatePlayerInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AViewportWorldPlayerController);
	UClass* Z_Construct_UClass_AViewportWorldPlayerController_NoRegister()
	{
		return AViewportWorldPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_AViewportWorldPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputMapping_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_InputMapping;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bApplyInputMappingImmediately_MetaData[];
#endif
		static void NewProp_bApplyInputMappingImmediately_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bApplyInputMappingImmediately;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AViewportWorldPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_ViewportWorlds,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AViewportWorldPlayerController_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AViewportWorldPlayerController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AViewportWorldPlayerController_UpdatePlayerInput, "UpdatePlayerInput" }, // 3460616253
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AViewportWorldPlayerController_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AViewportWorldPlayerController_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "Player/ViewportWorldPlayerController.h" },
		{ "ModuleRelativePath", "Public/Player/ViewportWorldPlayerController.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AViewportWorldPlayerController_Statics::NewProp_InputMapping_MetaData[] = {
		{ "Category", "ViewportWorldPlayerController" },
		{ "ModuleRelativePath", "Public/Player/ViewportWorldPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AViewportWorldPlayerController_Statics::NewProp_InputMapping = { "InputMapping", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AViewportWorldPlayerController, InputMapping), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AViewportWorldPlayerController_Statics::NewProp_InputMapping_MetaData), Z_Construct_UClass_AViewportWorldPlayerController_Statics::NewProp_InputMapping_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AViewportWorldPlayerController_Statics::NewProp_bApplyInputMappingImmediately_MetaData[] = {
		{ "Category", "ViewportWorldPlayerController" },
		{ "ModuleRelativePath", "Public/Player/ViewportWorldPlayerController.h" },
	};
#endif
	void Z_Construct_UClass_AViewportWorldPlayerController_Statics::NewProp_bApplyInputMappingImmediately_SetBit(void* Obj)
	{
		((AViewportWorldPlayerController*)Obj)->bApplyInputMappingImmediately = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AViewportWorldPlayerController_Statics::NewProp_bApplyInputMappingImmediately = { "bApplyInputMappingImmediately", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AViewportWorldPlayerController), &Z_Construct_UClass_AViewportWorldPlayerController_Statics::NewProp_bApplyInputMappingImmediately_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AViewportWorldPlayerController_Statics::NewProp_bApplyInputMappingImmediately_MetaData), Z_Construct_UClass_AViewportWorldPlayerController_Statics::NewProp_bApplyInputMappingImmediately_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AViewportWorldPlayerController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AViewportWorldPlayerController_Statics::NewProp_InputMapping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AViewportWorldPlayerController_Statics::NewProp_bApplyInputMappingImmediately,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AViewportWorldPlayerController_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UViewportWorldInterface_NoRegister, (int32)VTABLE_OFFSET(AViewportWorldPlayerController, IViewportWorldInterface), false },  // 2217624907
		};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AViewportWorldPlayerController_Statics::InterfaceParams) < 64);
	const FCppClassTypeInfoStatic Z_Construct_UClass_AViewportWorldPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AViewportWorldPlayerController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AViewportWorldPlayerController_Statics::ClassParams = {
		&AViewportWorldPlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AViewportWorldPlayerController_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AViewportWorldPlayerController_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009002A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AViewportWorldPlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_AViewportWorldPlayerController_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AViewportWorldPlayerController_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AViewportWorldPlayerController()
	{
		if (!Z_Registration_Info_UClass_AViewportWorldPlayerController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AViewportWorldPlayerController.OuterSingleton, Z_Construct_UClass_AViewportWorldPlayerController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AViewportWorldPlayerController.OuterSingleton;
	}
	template<> VIEWPORTWORLDS_API UClass* StaticClass<AViewportWorldPlayerController>()
	{
		return AViewportWorldPlayerController::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AViewportWorldPlayerController);
	AViewportWorldPlayerController::~AViewportWorldPlayerController() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_ViewportWorlds_Public_Player_ViewportWorldPlayerController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_ViewportWorlds_Public_Player_ViewportWorldPlayerController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AViewportWorldPlayerController, AViewportWorldPlayerController::StaticClass, TEXT("AViewportWorldPlayerController"), &Z_Registration_Info_UClass_AViewportWorldPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AViewportWorldPlayerController), 441729838U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_ViewportWorlds_Public_Player_ViewportWorldPlayerController_h_623620455(TEXT("/Script/ViewportWorlds"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_ViewportWorlds_Public_Player_ViewportWorldPlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_ViewportWorlds_Public_Player_ViewportWorldPlayerController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
