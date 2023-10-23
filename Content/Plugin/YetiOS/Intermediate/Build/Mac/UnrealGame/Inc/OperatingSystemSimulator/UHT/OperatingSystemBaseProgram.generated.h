// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Programs/OperatingSystemBaseProgram.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UOperatingSystem;
class UOperatingSystemBaseProgram;
class UOperatingSystemProgramIconWidget;
class UOperatingSystemProgramSettings;
enum class EOperatingSystemProgramViewState : uint8;
struct FGenericError;
struct FOperatingSystemStoreProgramData;
#ifdef OPERATINGSYSTEMSIMULATOR_OperatingSystemBaseProgram_generated_h
#error "OperatingSystemBaseProgram.generated.h already included, missing '#pragma once' in OperatingSystemBaseProgram.h"
#endif
#define OPERATINGSYSTEMSIMULATOR_OperatingSystemBaseProgram_generated_h

#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Programs_OperatingSystemBaseProgram_h_36_DELEGATE \
OPERATINGSYSTEMSIMULATOR_API void FOnOperatingSystemProgramViewStateChanged_DelegateWrapper(const FMulticastScriptDelegate& OnOperatingSystemProgramViewStateChanged, EOperatingSystemProgramViewState const& CurrentViewState);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Programs_OperatingSystemBaseProgram_h_41_SPARSE_DATA
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Programs_OperatingSystemBaseProgram_h_41_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Programs_OperatingSystemBaseProgram_h_41_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Programs_OperatingSystemBaseProgram_h_41_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetIconWidget); \
	DECLARE_FUNCTION(execCreateIconWidget); \
	DECLARE_FUNCTION(execGetOperatingSystem); \
	DECLARE_FUNCTION(execCanAddToDesktop); \
	DECLARE_FUNCTION(execIsRunning); \
	DECLARE_FUNCTION(execStartProgram); \
	DECLARE_FUNCTION(execIsStoreItemFree);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Programs_OperatingSystemBaseProgram_h_41_ACCESSORS
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Programs_OperatingSystemBaseProgram_h_41_CALLBACK_WRAPPERS
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Programs_OperatingSystemBaseProgram_h_41_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOperatingSystemBaseProgram(); \
	friend struct Z_Construct_UClass_UOperatingSystemBaseProgram_Statics; \
public: \
	DECLARE_CLASS(UOperatingSystemBaseProgram, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/OperatingSystemSimulator"), NO_API) \
	DECLARE_SERIALIZER(UOperatingSystemBaseProgram) \
	DECLARE_WITHIN(UOperatingSystem)


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Programs_OperatingSystemBaseProgram_h_41_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOperatingSystemBaseProgram(UOperatingSystemBaseProgram&&); \
	NO_API UOperatingSystemBaseProgram(const UOperatingSystemBaseProgram&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOperatingSystemBaseProgram); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOperatingSystemBaseProgram); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UOperatingSystemBaseProgram) \
	NO_API virtual ~UOperatingSystemBaseProgram();


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Programs_OperatingSystemBaseProgram_h_38_PROLOG
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Programs_OperatingSystemBaseProgram_h_41_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Programs_OperatingSystemBaseProgram_h_41_SPARSE_DATA \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Programs_OperatingSystemBaseProgram_h_41_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Programs_OperatingSystemBaseProgram_h_41_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Programs_OperatingSystemBaseProgram_h_41_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Programs_OperatingSystemBaseProgram_h_41_ACCESSORS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Programs_OperatingSystemBaseProgram_h_41_CALLBACK_WRAPPERS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Programs_OperatingSystemBaseProgram_h_41_INCLASS_NO_PURE_DECLS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Programs_OperatingSystemBaseProgram_h_41_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OPERATINGSYSTEMSIMULATOR_API UClass* StaticClass<class UOperatingSystemBaseProgram>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Programs_OperatingSystemBaseProgram_h


#define FOREACH_ENUM_EPROGRAMSAVEMETHOD(op) \
	op(EProgramSaveMethod::SaveOnOperatingSystemShutdown) \
	op(EProgramSaveMethod::SaveOnExit) \
	op(EProgramSaveMethod::SaveManually) \
	op(EProgramSaveMethod::DoNotSave) 

enum class EProgramSaveMethod : uint8;
template<> struct TIsUEnumClass<EProgramSaveMethod> { enum { Value = true }; };
template<> OPERATINGSYSTEMSIMULATOR_API UEnum* StaticEnum<EProgramSaveMethod>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
