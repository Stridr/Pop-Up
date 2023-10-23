// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ViewportWorldTypes.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef VIEWPORTWORLDS_ViewportWorldTypes_generated_h
#error "ViewportWorldTypes.generated.h already included, missing '#pragma once' in ViewportWorldTypes.h"
#endif
#define VIEWPORTWORLDS_ViewportWorldTypes_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_ViewportWorlds_Public_ViewportWorldTypes_h_13_DELEGATE \
VIEWPORTWORLDS_API void FOnWorldUnloaded_DelegateWrapper(const FScriptDelegate& OnWorldUnloaded);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_ViewportWorlds_Public_ViewportWorldTypes_h_46_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FViewportWorldHandle_Statics; \
	VIEWPORTWORLDS_API static class UScriptStruct* StaticStruct();


template<> VIEWPORTWORLDS_API UScriptStruct* StaticStruct<struct FViewportWorldHandle>();

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_ViewportWorlds_Public_ViewportWorldTypes_h_102_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FViewportWorldOptions_Statics; \
	VIEWPORTWORLDS_API static class UScriptStruct* StaticStruct();


template<> VIEWPORTWORLDS_API UScriptStruct* StaticStruct<struct FViewportWorldOptions>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_ViewportWorlds_Public_ViewportWorldTypes_h


#define FOREACH_ENUM_EVIEWPORTWORLDVIEWMODE(op) \
	op(EViewportWorldViewMode::Lit) \
	op(EViewportWorldViewMode::BrushWireframe) \
	op(EViewportWorldViewMode::Wireframe) \
	op(EViewportWorldViewMode::LightComplexity) \
	op(EViewportWorldViewMode::LightmapDensity) \
	op(EViewportWorldViewMode::LitLightmapDensity) \
	op(EViewportWorldViewMode::StationaryLightOverlap) \
	op(EViewportWorldViewMode::CollisionPawn) \
	op(EViewportWorldViewMode::CollisionVisibility) 

enum class EViewportWorldViewMode : uint8;
template<> struct TIsUEnumClass<EViewportWorldViewMode> { enum { Value = true }; };
template<> VIEWPORTWORLDS_API UEnum* StaticEnum<EViewportWorldViewMode>();

#define FOREACH_ENUM_EVIEWPORTWORLDRENDERINGMODE(op) \
	op(EViewportWorldRenderingMode::Fast) \
	op(EViewportWorldRenderingMode::Partial) \
	op(EViewportWorldRenderingMode::Replace) 

enum class EViewportWorldRenderingMode : uint8;
template<> struct TIsUEnumClass<EViewportWorldRenderingMode> { enum { Value = true }; };
template<> VIEWPORTWORLDS_API UEnum* StaticEnum<EViewportWorldRenderingMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
