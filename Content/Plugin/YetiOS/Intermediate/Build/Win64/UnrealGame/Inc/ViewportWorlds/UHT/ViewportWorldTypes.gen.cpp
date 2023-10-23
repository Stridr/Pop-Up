// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ViewportWorlds/Public/ViewportWorldTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeViewportWorldTypes() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ViewportWorlds();
	VIEWPORTWORLDS_API UEnum* Z_Construct_UEnum_ViewportWorlds_EViewportWorldRenderingMode();
	VIEWPORTWORLDS_API UEnum* Z_Construct_UEnum_ViewportWorlds_EViewportWorldViewMode();
	VIEWPORTWORLDS_API UFunction* Z_Construct_UDelegateFunction_ViewportWorlds_OnWorldUnloaded__DelegateSignature();
	VIEWPORTWORLDS_API UScriptStruct* Z_Construct_UScriptStruct_FViewportWorldHandle();
	VIEWPORTWORLDS_API UScriptStruct* Z_Construct_UScriptStruct_FViewportWorldOptions();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_ViewportWorlds_OnWorldUnloaded__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ViewportWorlds_OnWorldUnloaded__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ViewportWorldTypes.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ViewportWorlds_OnWorldUnloaded__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ViewportWorlds, nullptr, "OnWorldUnloaded__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ViewportWorlds_OnWorldUnloaded__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ViewportWorlds_OnWorldUnloaded__DelegateSignature_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UDelegateFunction_ViewportWorlds_OnWorldUnloaded__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ViewportWorlds_OnWorldUnloaded__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnWorldUnloaded_DelegateWrapper(const FScriptDelegate& OnWorldUnloaded)
{
	OnWorldUnloaded.ProcessDelegate<UObject>(NULL);
}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EViewportWorldViewMode;
	static UEnum* EViewportWorldViewMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EViewportWorldViewMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EViewportWorldViewMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ViewportWorlds_EViewportWorldViewMode, (UObject*)Z_Construct_UPackage__Script_ViewportWorlds(), TEXT("EViewportWorldViewMode"));
		}
		return Z_Registration_Info_UEnum_EViewportWorldViewMode.OuterSingleton;
	}
	template<> VIEWPORTWORLDS_API UEnum* StaticEnum<EViewportWorldViewMode>()
	{
		return EViewportWorldViewMode_StaticEnum();
	}
	struct Z_Construct_UEnum_ViewportWorlds_EViewportWorldViewMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ViewportWorlds_EViewportWorldViewMode_Statics::Enumerators[] = {
		{ "EViewportWorldViewMode::Lit", (int64)EViewportWorldViewMode::Lit },
		{ "EViewportWorldViewMode::BrushWireframe", (int64)EViewportWorldViewMode::BrushWireframe },
		{ "EViewportWorldViewMode::Wireframe", (int64)EViewportWorldViewMode::Wireframe },
		{ "EViewportWorldViewMode::LightComplexity", (int64)EViewportWorldViewMode::LightComplexity },
		{ "EViewportWorldViewMode::LightmapDensity", (int64)EViewportWorldViewMode::LightmapDensity },
		{ "EViewportWorldViewMode::LitLightmapDensity", (int64)EViewportWorldViewMode::LitLightmapDensity },
		{ "EViewportWorldViewMode::StationaryLightOverlap", (int64)EViewportWorldViewMode::StationaryLightOverlap },
		{ "EViewportWorldViewMode::CollisionPawn", (int64)EViewportWorldViewMode::CollisionPawn },
		{ "EViewportWorldViewMode::CollisionVisibility", (int64)EViewportWorldViewMode::CollisionVisibility },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ViewportWorlds_EViewportWorldViewMode_Statics::Enum_MetaDataParams[] = {
		{ "BrushWireframe.Name", "EViewportWorldViewMode::BrushWireframe" },
		{ "CollisionPawn.Name", "EViewportWorldViewMode::CollisionPawn" },
		{ "CollisionVisibility.Name", "EViewportWorldViewMode::CollisionVisibility" },
		{ "LightComplexity.Name", "EViewportWorldViewMode::LightComplexity" },
		{ "LightmapDensity.Name", "EViewportWorldViewMode::LightmapDensity" },
		{ "Lit.Name", "EViewportWorldViewMode::Lit" },
		{ "LitLightmapDensity.Name", "EViewportWorldViewMode::LitLightmapDensity" },
		{ "ModuleRelativePath", "Public/ViewportWorldTypes.h" },
		{ "StationaryLightOverlap.Name", "EViewportWorldViewMode::StationaryLightOverlap" },
		{ "Wireframe.Name", "EViewportWorldViewMode::Wireframe" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ViewportWorlds_EViewportWorldViewMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ViewportWorlds,
		nullptr,
		"EViewportWorldViewMode",
		"EViewportWorldViewMode",
		Z_Construct_UEnum_ViewportWorlds_EViewportWorldViewMode_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ViewportWorlds_EViewportWorldViewMode_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ViewportWorlds_EViewportWorldViewMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ViewportWorlds_EViewportWorldViewMode_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_ViewportWorlds_EViewportWorldViewMode()
	{
		if (!Z_Registration_Info_UEnum_EViewportWorldViewMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EViewportWorldViewMode.InnerSingleton, Z_Construct_UEnum_ViewportWorlds_EViewportWorldViewMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EViewportWorldViewMode.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EViewportWorldRenderingMode;
	static UEnum* EViewportWorldRenderingMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EViewportWorldRenderingMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EViewportWorldRenderingMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ViewportWorlds_EViewportWorldRenderingMode, (UObject*)Z_Construct_UPackage__Script_ViewportWorlds(), TEXT("EViewportWorldRenderingMode"));
		}
		return Z_Registration_Info_UEnum_EViewportWorldRenderingMode.OuterSingleton;
	}
	template<> VIEWPORTWORLDS_API UEnum* StaticEnum<EViewportWorldRenderingMode>()
	{
		return EViewportWorldRenderingMode_StaticEnum();
	}
	struct Z_Construct_UEnum_ViewportWorlds_EViewportWorldRenderingMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ViewportWorlds_EViewportWorldRenderingMode_Statics::Enumerators[] = {
		{ "EViewportWorldRenderingMode::Fast", (int64)EViewportWorldRenderingMode::Fast },
		{ "EViewportWorldRenderingMode::Partial", (int64)EViewportWorldRenderingMode::Partial },
		{ "EViewportWorldRenderingMode::Replace", (int64)EViewportWorldRenderingMode::Replace },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ViewportWorlds_EViewportWorldRenderingMode_Statics::Enum_MetaDataParams[] = {
		{ "Fast.Comment", "/** Low quality render and offers fastest performance. Dynamic GI not supported. */" },
		{ "Fast.Name", "EViewportWorldRenderingMode::Fast" },
		{ "Fast.ToolTip", "Low quality render and offers fastest performance. Dynamic GI not supported." },
		{ "ModuleRelativePath", "Public/ViewportWorldTypes.h" },
		{ "Partial.Comment", "/** Somewhat good quality but might cause flickering issues. */" },
		{ "Partial.Name", "EViewportWorldRenderingMode::Partial" },
		{ "Partial.ToolTip", "Somewhat good quality but might cause flickering issues." },
		{ "Replace.Comment", "/** Offers the best quality but can impact performance. Dynamic GI and all post processing effects is fully supported. */" },
		{ "Replace.Name", "EViewportWorldRenderingMode::Replace" },
		{ "Replace.ToolTip", "Offers the best quality but can impact performance. Dynamic GI and all post processing effects is fully supported." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ViewportWorlds_EViewportWorldRenderingMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ViewportWorlds,
		nullptr,
		"EViewportWorldRenderingMode",
		"EViewportWorldRenderingMode",
		Z_Construct_UEnum_ViewportWorlds_EViewportWorldRenderingMode_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ViewportWorlds_EViewportWorldRenderingMode_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ViewportWorlds_EViewportWorldRenderingMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ViewportWorlds_EViewportWorldRenderingMode_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_ViewportWorlds_EViewportWorldRenderingMode()
	{
		if (!Z_Registration_Info_UEnum_EViewportWorldRenderingMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EViewportWorldRenderingMode.InnerSingleton, Z_Construct_UEnum_ViewportWorlds_EViewportWorldRenderingMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EViewportWorldRenderingMode.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ViewportWorldHandle;
class UScriptStruct* FViewportWorldHandle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ViewportWorldHandle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ViewportWorldHandle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FViewportWorldHandle, (UObject*)Z_Construct_UPackage__Script_ViewportWorlds(), TEXT("ViewportWorldHandle"));
	}
	return Z_Registration_Info_UScriptStruct_ViewportWorldHandle.OuterSingleton;
}
template<> VIEWPORTWORLDS_API UScriptStruct* StaticStruct<FViewportWorldHandle>()
{
	return FViewportWorldHandle::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FViewportWorldHandle_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FViewportWorldHandle_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ViewportWorldTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FViewportWorldHandle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FViewportWorldHandle>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FViewportWorldHandle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ViewportWorlds,
		nullptr,
		&NewStructOps,
		"ViewportWorldHandle",
		nullptr,
		0,
		sizeof(FViewportWorldHandle),
		alignof(FViewportWorldHandle),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FViewportWorldHandle_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FViewportWorldHandle_Statics::Struct_MetaDataParams)
	};
	UScriptStruct* Z_Construct_UScriptStruct_FViewportWorldHandle()
	{
		if (!Z_Registration_Info_UScriptStruct_ViewportWorldHandle.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ViewportWorldHandle.InnerSingleton, Z_Construct_UScriptStruct_FViewportWorldHandle_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ViewportWorldHandle.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ViewportWorldOptions;
class UScriptStruct* FViewportWorldOptions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ViewportWorldOptions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ViewportWorldOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FViewportWorldOptions, (UObject*)Z_Construct_UPackage__Script_ViewportWorlds(), TEXT("ViewportWorldOptions"));
	}
	return Z_Registration_Info_UScriptStruct_ViewportWorldOptions.OuterSingleton;
}
template<> VIEWPORTWORLDS_API UScriptStruct* StaticStruct<FViewportWorldOptions>()
{
	return FViewportWorldOptions::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FViewportWorldOptions_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInitializeScenes_MetaData[];
#endif
		static void NewProp_bInitializeScenes_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInitializeScenes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAllowAudioPlayback_MetaData[];
#endif
		static void NewProp_bAllowAudioPlayback_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowAudioPlayback;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRequiresHitProxies_MetaData[];
#endif
		static void NewProp_bRequiresHitProxies_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRequiresHitProxies;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCreatePhysicsScene_MetaData[];
#endif
		static void NewProp_bCreatePhysicsScene_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCreatePhysicsScene;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCreateNavigation_MetaData[];
#endif
		static void NewProp_bCreateNavigation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCreateNavigation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCreateAI_System_MetaData[];
#endif
		static void NewProp_bCreateAI_System_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCreateAI_System;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableTraceCollision_MetaData[];
#endif
		static void NewProp_bEnableTraceCollision_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableTraceCollision;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCreateFX_System_MetaData[];
#endif
		static void NewProp_bCreateFX_System_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCreateFX_System;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCreateWorldPartition_MetaData[];
#endif
		static void NewProp_bCreateWorldPartition_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCreateWorldPartition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverrideGameMode_MetaData[];
#endif
		static const UECodeGen_Private::FSoftClassPropertyParams NewProp_OverrideGameMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bTickWorld_MetaData[];
#endif
		static void NewProp_bTickWorld_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bTickWorld;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FViewportWorldOptions_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ViewportWorldTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FViewportWorldOptions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FViewportWorldOptions>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FViewportWorldOptions_Statics::NewProp_bInitializeScenes_MetaData[] = {
		{ "Category", "ViewportWorldOptions" },
		{ "Comment", "/** Should the scenes (physics, rendering) be created. */" },
		{ "ModuleRelativePath", "Public/ViewportWorldTypes.h" },
		{ "ToolTip", "Should the scenes (physics, rendering) be created." },
	};
#endif
	void Z_Construct_UScriptStruct_FViewportWorldOptions_Statics::NewProp_bInitializeScenes_SetBit(void* Obj)
	{
		((FViewportWorldOptions*)Obj)->bInitializeScenes = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FViewportWorldOptions_Statics::NewProp_bInitializeScenes = { "bInitializeScenes", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FViewportWorldOptions), &Z_Construct_UScriptStruct_FViewportWorldOptions_Statics::NewProp_bInitializeScenes_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FViewportWorldOptions_Statics::NewProp_bInitializeScenes_MetaData), Z_Construct_UScriptStruct_FViewportWorldOptions_Statics::NewProp_bInitializeScenes_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FViewportWorldOptions_Statics::NewProp_bAllowAudioPlayback_MetaData[] = {
		{ "Category", "ViewportWorldOptions" },
		{ "Comment", "/** Are sounds allowed to be generated from this world. */" },
		{ "ModuleRelativePath", "Public/ViewportWorldTypes.h" },
		{ "ToolTip", "Are sounds allowed to be generated from this world." },
	};
#endif
	void Z_Construct_UScriptStruct_FViewportWorldOptions_Statics::NewProp_bAllowAudioPlayback_SetBit(void* Obj)
	{
		((FViewportWorldOptions*)Obj)->bAllowAudioPlayback = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FViewportWorldOptions_Statics::NewProp_bAllowAudioPlayback = { "bAllowAudioPlayback", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FViewportWorldOptions), &Z_Construct_UScriptStruct_FViewportWorldOptions_Statics::NewProp_bAllowAudioPlayback_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FViewportWorldOptions_Statics::NewProp_bAllowAudioPlayback_MetaData), Z_Construct_UScriptStruct_FViewportWorldOptions_Statics::NewProp_bAllowAudioPlayback_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FViewportWorldOptions_Statics::NewProp_bRequiresHitProxies_MetaData[] = {
		{ "Category", "ViewportWorldOptions" },
		{ "Comment", "/** Should the render scene create hit proxies. */" },
		{ "ModuleRelativePath", "Public/ViewportWorldTypes.h" },
		{ "ToolTip", "Should the render scene create hit proxies." },
	};
#endif
	void Z_Construct_UScriptStruct_FViewportWorldOptions_Statics::NewProp_bRequiresHitProxies_SetBit(void* Obj)
	{
		((FViewportWorldOptions*)Obj)->bRequiresHitProxies = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FViewportWorldOptions_Statics::NewProp_bRequiresHitProxies = { "bRequiresHitProxies", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FViewportWorldOptions), &Z_Construct_UScriptStruct_FViewportWorldOptions_Statics::NewProp_bRequiresHitProxies_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FViewportWorldOptions_Statics::NewProp_bRequiresHitProxies_MetaData), Z_Construct_UScriptStruct_FViewportWorldOptions_Statics::NewProp_bRequiresHitProxies_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FViewportWorldOptions_Statics::NewProp_bCreatePhysicsScene_MetaData[] = {
		{ "Category", "ViewportWorldOptions" },
		{ "Comment", "/** Should the physics scene be created. bInitializeScenes must be true for this to be considered. */" },
		{ "ModuleRelativePath", "Public/ViewportWorldTypes.h" },
		{ "ToolTip", "Should the physics scene be created. bInitializeScenes must be true for this to be considered." },
	};
#endif
	void Z_Construct_UScriptStruct_FViewportWorldOptions_Statics::NewProp_bCreatePhysicsScene_SetBit(void* Obj)
	{
		((FViewportWorldOptions*)Obj)->bCreatePhysicsScene = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FViewportWorldOptions_Statics::NewProp_bCreatePhysicsScene = { "bCreatePhysicsScene", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FViewportWorldOptions), &Z_Construct_UScriptStruct_FViewportWorldOptions_Statics::NewProp_bCreatePhysicsScene_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FViewportWorldOptions_Statics::NewProp_bCreatePhysicsScene_MetaData), Z_Construct_UScriptStruct_FViewportWorldOptions_Statics::NewProp_bCreatePhysicsScene_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FViewportWorldOptions_Statics::NewProp_bCreateNavigation_MetaData[] = {
		{ "Category", "ViewportWorldOptions" },
		{ "Comment", "/** Should the navigation system be created for this world. */" },
		{ "ModuleRelativePath", "Public/ViewportWorldTypes.h" },
		{ "ToolTip", "Should the navigation system be created for this world." },
	};
#endif
	void Z_Construct_UScriptStruct_FViewportWorldOptions_Statics::NewProp_bCreateNavigation_SetBit(void* Obj)
	{
		((FViewportWorldOptions*)Obj)->bCreateNavigation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FViewportWorldOptions_Statics::NewProp_bCreateNavigation = { "bCreateNavigation", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FViewportWorldOptions), &Z_Construct_UScriptStruct_FViewportWorldOptions_Statics::NewProp_bCreateNavigation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FViewportWorldOptions_Statics::NewProp_bCreateNavigation_MetaData), Z_Construct_UScriptStruct_FViewportWorldOptions_Statics::NewProp_bCreateNavigation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FViewportWorldOptions_Statics::NewProp_bCreateAI_System_MetaData[] = {
		{ "Category", "ViewportWorldOptions" },
		{ "Comment", "/** Should the AI system be created for this world. */" },
		{ "ModuleRelativePath", "Public/ViewportWorldTypes.h" },
		{ "ToolTip", "Should the AI system be created for this world." },
	};
#endif
	void Z_Construct_UScriptStruct_FViewportWorldOptions_Statics::NewProp_bCreateAI_System_SetBit(void* Obj)
	{
		((FViewportWorldOptions*)Obj)->bCreateAI_System = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FViewportWorldOptions_Statics::NewProp_bCreateAI_System = { "bCreateAI_System", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FViewportWorldOptions), &Z_Construct_UScriptStruct_FViewportWorldOptions_Statics::NewProp_bCreateAI_System_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FViewportWorldOptions_Statics::NewProp_bCreateAI_System_MetaData), Z_Construct_UScriptStruct_FViewportWorldOptions_Statics::NewProp_bCreateAI_System_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FViewportWorldOptions_Statics::NewProp_bEnableTraceCollision_MetaData[] = {
		{ "Category", "ViewportWorldOptions" },
		{ "Comment", "/** Are collision trace calls valid within this world. */" },
		{ "ModuleRelativePath", "Public/ViewportWorldTypes.h" },
		{ "ToolTip", "Are collision trace calls valid within this world." },
	};
#endif
	void Z_Construct_UScriptStruct_FViewportWorldOptions_Statics::NewProp_bEnableTraceCollision_SetBit(void* Obj)
	{
		((FViewportWorldOptions*)Obj)->bEnableTraceCollision = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FViewportWorldOptions_Statics::NewProp_bEnableTraceCollision = { "bEnableTraceCollision", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FViewportWorldOptions), &Z_Construct_UScriptStruct_FViewportWorldOptions_Statics::NewProp_bEnableTraceCollision_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FViewportWorldOptions_Statics::NewProp_bEnableTraceCollision_MetaData), Z_Construct_UScriptStruct_FViewportWorldOptions_Statics::NewProp_bEnableTraceCollision_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FViewportWorldOptions_Statics::NewProp_bCreateFX_System_MetaData[] = {
		{ "Category", "ViewportWorldOptions" },
		{ "Comment", "/** Should the FX system be created for this world. */" },
		{ "ModuleRelativePath", "Public/ViewportWorldTypes.h" },
		{ "ToolTip", "Should the FX system be created for this world." },
	};
#endif
	void Z_Construct_UScriptStruct_FViewportWorldOptions_Statics::NewProp_bCreateFX_System_SetBit(void* Obj)
	{
		((FViewportWorldOptions*)Obj)->bCreateFX_System = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FViewportWorldOptions_Statics::NewProp_bCreateFX_System = { "bCreateFX_System", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FViewportWorldOptions), &Z_Construct_UScriptStruct_FViewportWorldOptions_Statics::NewProp_bCreateFX_System_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FViewportWorldOptions_Statics::NewProp_bCreateFX_System_MetaData), Z_Construct_UScriptStruct_FViewportWorldOptions_Statics::NewProp_bCreateFX_System_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FViewportWorldOptions_Statics::NewProp_bCreateWorldPartition_MetaData[] = {
		{ "Category", "ViewportWorldOptions" },
		{ "Comment", "/** Should the world be partitioned */" },
		{ "ModuleRelativePath", "Public/ViewportWorldTypes.h" },
		{ "ToolTip", "Should the world be partitioned" },
	};
#endif
	void Z_Construct_UScriptStruct_FViewportWorldOptions_Statics::NewProp_bCreateWorldPartition_SetBit(void* Obj)
	{
		((FViewportWorldOptions*)Obj)->bCreateWorldPartition = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FViewportWorldOptions_Statics::NewProp_bCreateWorldPartition = { "bCreateWorldPartition", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FViewportWorldOptions), &Z_Construct_UScriptStruct_FViewportWorldOptions_Statics::NewProp_bCreateWorldPartition_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FViewportWorldOptions_Statics::NewProp_bCreateWorldPartition_MetaData), Z_Construct_UScriptStruct_FViewportWorldOptions_Statics::NewProp_bCreateWorldPartition_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FViewportWorldOptions_Statics::NewProp_OverrideGameMode_MetaData[] = {
		{ "Category", "ViewportWorldOptions" },
		{ "ModuleRelativePath", "Public/ViewportWorldTypes.h" },
	};
#endif
	const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UScriptStruct_FViewportWorldOptions_Statics::NewProp_OverrideGameMode = { "OverrideGameMode", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FViewportWorldOptions, OverrideGameMode), Z_Construct_UClass_AGameModeBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FViewportWorldOptions_Statics::NewProp_OverrideGameMode_MetaData), Z_Construct_UScriptStruct_FViewportWorldOptions_Statics::NewProp_OverrideGameMode_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FViewportWorldOptions_Statics::NewProp_bTickWorld_MetaData[] = {
		{ "Category", "ViewportWorldOptions" },
		{ "Comment", "/** Should the world be ticked? */" },
		{ "ModuleRelativePath", "Public/ViewportWorldTypes.h" },
		{ "ToolTip", "Should the world be ticked?" },
	};
#endif
	void Z_Construct_UScriptStruct_FViewportWorldOptions_Statics::NewProp_bTickWorld_SetBit(void* Obj)
	{
		((FViewportWorldOptions*)Obj)->bTickWorld = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FViewportWorldOptions_Statics::NewProp_bTickWorld = { "bTickWorld", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FViewportWorldOptions), &Z_Construct_UScriptStruct_FViewportWorldOptions_Statics::NewProp_bTickWorld_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FViewportWorldOptions_Statics::NewProp_bTickWorld_MetaData), Z_Construct_UScriptStruct_FViewportWorldOptions_Statics::NewProp_bTickWorld_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FViewportWorldOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FViewportWorldOptions_Statics::NewProp_bInitializeScenes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FViewportWorldOptions_Statics::NewProp_bAllowAudioPlayback,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FViewportWorldOptions_Statics::NewProp_bRequiresHitProxies,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FViewportWorldOptions_Statics::NewProp_bCreatePhysicsScene,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FViewportWorldOptions_Statics::NewProp_bCreateNavigation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FViewportWorldOptions_Statics::NewProp_bCreateAI_System,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FViewportWorldOptions_Statics::NewProp_bEnableTraceCollision,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FViewportWorldOptions_Statics::NewProp_bCreateFX_System,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FViewportWorldOptions_Statics::NewProp_bCreateWorldPartition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FViewportWorldOptions_Statics::NewProp_OverrideGameMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FViewportWorldOptions_Statics::NewProp_bTickWorld,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FViewportWorldOptions_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ViewportWorlds,
		nullptr,
		&NewStructOps,
		"ViewportWorldOptions",
		Z_Construct_UScriptStruct_FViewportWorldOptions_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FViewportWorldOptions_Statics::PropPointers),
		sizeof(FViewportWorldOptions),
		alignof(FViewportWorldOptions),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FViewportWorldOptions_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FViewportWorldOptions_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FViewportWorldOptions_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FViewportWorldOptions()
	{
		if (!Z_Registration_Info_UScriptStruct_ViewportWorldOptions.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ViewportWorldOptions.InnerSingleton, Z_Construct_UScriptStruct_FViewportWorldOptions_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ViewportWorldOptions.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_ViewportWorlds_Public_ViewportWorldTypes_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_ViewportWorlds_Public_ViewportWorldTypes_h_Statics::EnumInfo[] = {
		{ EViewportWorldViewMode_StaticEnum, TEXT("EViewportWorldViewMode"), &Z_Registration_Info_UEnum_EViewportWorldViewMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4204396864U) },
		{ EViewportWorldRenderingMode_StaticEnum, TEXT("EViewportWorldRenderingMode"), &Z_Registration_Info_UEnum_EViewportWorldRenderingMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3729622833U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_ViewportWorlds_Public_ViewportWorldTypes_h_Statics::ScriptStructInfo[] = {
		{ FViewportWorldHandle::StaticStruct, Z_Construct_UScriptStruct_FViewportWorldHandle_Statics::NewStructOps, TEXT("ViewportWorldHandle"), &Z_Registration_Info_UScriptStruct_ViewportWorldHandle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FViewportWorldHandle), 2124359825U) },
		{ FViewportWorldOptions::StaticStruct, Z_Construct_UScriptStruct_FViewportWorldOptions_Statics::NewStructOps, TEXT("ViewportWorldOptions"), &Z_Registration_Info_UScriptStruct_ViewportWorldOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FViewportWorldOptions), 314000971U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_ViewportWorlds_Public_ViewportWorldTypes_h_3406243591(TEXT("/Script/ViewportWorlds"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_ViewportWorlds_Public_ViewportWorldTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_ViewportWorlds_Public_ViewportWorldTypes_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_ViewportWorlds_Public_ViewportWorldTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_ViewportWorlds_Public_ViewportWorldTypes_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
