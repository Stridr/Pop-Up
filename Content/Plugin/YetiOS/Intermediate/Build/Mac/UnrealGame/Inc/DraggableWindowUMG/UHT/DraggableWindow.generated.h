// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DraggableWindow.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UDraggableWindow;
class UObject;
class UUserWidget;
struct FEventReply;
struct FGeometry;
struct FPointerEvent;
#ifdef DRAGGABLEWINDOWUMG_DraggableWindow_generated_h
#error "DraggableWindow.generated.h already included, missing '#pragma once' in DraggableWindow.h"
#endif
#define DRAGGABLEWINDOWUMG_DraggableWindow_generated_h

#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_DraggableWindowUMG_DraggableWindow_h_15_SPARSE_DATA
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_DraggableWindowUMG_DraggableWindow_h_15_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_DraggableWindowUMG_DraggableWindow_h_15_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_DraggableWindowUMG_DraggableWindow_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetChildWidget); \
	DECLARE_FUNCTION(execUpdateWindowSize); \
	DECLARE_FUNCTION(execCenterWindowToScreen); \
	DECLARE_FUNCTION(execAddContentWidget); \
	DECLARE_FUNCTION(execAddContentWidgetClass); \
	DECLARE_FUNCTION(execInternal_OnMouseButtonDown_ResizeArea); \
	DECLARE_FUNCTION(execInternal_OnMouseButtonDown_WindowTitleBorder); \
	DECLARE_FUNCTION(execInternal_OnMouseButtonUp_WindowTitleBorder); \
	DECLARE_FUNCTION(execCreateDraggableWindowFromWidget); \
	DECLARE_FUNCTION(execCreateDraggableWindow);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_DraggableWindowUMG_DraggableWindow_h_15_ACCESSORS
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_DraggableWindowUMG_DraggableWindow_h_15_CALLBACK_WRAPPERS
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_DraggableWindowUMG_DraggableWindow_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDraggableWindow(); \
	friend struct Z_Construct_UClass_UDraggableWindow_Statics; \
public: \
	DECLARE_CLASS(UDraggableWindow, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DraggableWindowUMG"), NO_API) \
	DECLARE_SERIALIZER(UDraggableWindow)


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_DraggableWindowUMG_DraggableWindow_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDraggableWindow(UDraggableWindow&&); \
	NO_API UDraggableWindow(const UDraggableWindow&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDraggableWindow); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDraggableWindow); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDraggableWindow) \
	NO_API virtual ~UDraggableWindow();


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_DraggableWindowUMG_DraggableWindow_h_12_PROLOG
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_DraggableWindowUMG_DraggableWindow_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_DraggableWindowUMG_DraggableWindow_h_15_SPARSE_DATA \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_DraggableWindowUMG_DraggableWindow_h_15_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_DraggableWindowUMG_DraggableWindow_h_15_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_DraggableWindowUMG_DraggableWindow_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_DraggableWindowUMG_DraggableWindow_h_15_ACCESSORS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_DraggableWindowUMG_DraggableWindow_h_15_CALLBACK_WRAPPERS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_DraggableWindowUMG_DraggableWindow_h_15_INCLASS_NO_PURE_DECLS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_DraggableWindowUMG_DraggableWindow_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DRAGGABLEWINDOWUMG_API UClass* StaticClass<class UDraggableWindow>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_DraggableWindowUMG_DraggableWindow_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
