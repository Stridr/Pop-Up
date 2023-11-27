// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Devices/OperatingSystemBaseDevice.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AOperatingSystemDeviceActor;
class UOperatingSystemBaseHardware;
enum class EOperatingSystemDeviceState : uint8;
struct FGameplayTag;
#ifdef OPERATINGSYSTEMSIMULATOR_OperatingSystemBaseDevice_generated_h
#error "OperatingSystemBaseDevice.generated.h already included, missing '#pragma once' in OperatingSystemBaseDevice.h"
#endif
#define OPERATINGSYSTEMSIMULATOR_OperatingSystemBaseDevice_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Devices_OperatingSystemBaseDevice_h_26_DELEGATE \
OPERATINGSYSTEMSIMULATOR_API void FOnDeviceStateChanged_DelegateWrapper(const FMulticastScriptDelegate& OnDeviceStateChanged, EOperatingSystemDeviceState const& _PrevState, EOperatingSystemDeviceState const& _NewState);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Devices_OperatingSystemBaseDevice_h_31_SPARSE_DATA
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Devices_OperatingSystemBaseDevice_h_31_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Devices_OperatingSystemBaseDevice_h_31_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Devices_OperatingSystemBaseDevice_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetParentDeviceActor); \
	DECLARE_FUNCTION(execGetCurrentState); \
	DECLARE_FUNCTION(execGetHardwareByTag);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Devices_OperatingSystemBaseDevice_h_31_ACCESSORS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Devices_OperatingSystemBaseDevice_h_31_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOperatingSystemBaseDevice(); \
	friend struct Z_Construct_UClass_UOperatingSystemBaseDevice_Statics; \
public: \
	DECLARE_CLASS(UOperatingSystemBaseDevice, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/OperatingSystemSimulator"), NO_API) \
	DECLARE_SERIALIZER(UOperatingSystemBaseDevice) \
	DECLARE_WITHIN(AOperatingSystemDeviceActor)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Devices_OperatingSystemBaseDevice_h_31_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOperatingSystemBaseDevice(UOperatingSystemBaseDevice&&); \
	NO_API UOperatingSystemBaseDevice(const UOperatingSystemBaseDevice&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOperatingSystemBaseDevice); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOperatingSystemBaseDevice); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UOperatingSystemBaseDevice) \
	NO_API virtual ~UOperatingSystemBaseDevice();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Devices_OperatingSystemBaseDevice_h_28_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Devices_OperatingSystemBaseDevice_h_31_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Devices_OperatingSystemBaseDevice_h_31_SPARSE_DATA \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Devices_OperatingSystemBaseDevice_h_31_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Devices_OperatingSystemBaseDevice_h_31_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Devices_OperatingSystemBaseDevice_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Devices_OperatingSystemBaseDevice_h_31_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Devices_OperatingSystemBaseDevice_h_31_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Devices_OperatingSystemBaseDevice_h_31_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OPERATINGSYSTEMSIMULATOR_API UClass* StaticClass<class UOperatingSystemBaseDevice>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Devices_OperatingSystemBaseDevice_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
