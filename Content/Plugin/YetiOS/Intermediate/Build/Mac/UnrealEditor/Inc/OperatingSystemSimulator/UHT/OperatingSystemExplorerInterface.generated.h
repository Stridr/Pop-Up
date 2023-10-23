// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interfaces/OperatingSystemExplorerInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class IOperatingSystemExplorerInterface;
class UOperatingSystemDirectory;
class UOperatingSystemFile;
struct FGameplayTag;
#ifdef OPERATINGSYSTEMSIMULATOR_OperatingSystemExplorerInterface_generated_h
#error "OperatingSystemExplorerInterface.generated.h already included, missing '#pragma once' in OperatingSystemExplorerInterface.h"
#endif
#define OPERATINGSYSTEMSIMULATOR_OperatingSystemExplorerInterface_generated_h

#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Interfaces_OperatingSystemExplorerInterface_h_17_SPARSE_DATA
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Interfaces_OperatingSystemExplorerInterface_h_17_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Interfaces_OperatingSystemExplorerInterface_h_17_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Interfaces_OperatingSystemExplorerInterface_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetAllFiles); \
	DECLARE_FUNCTION(execGetChildDirectory); \
	DECLARE_FUNCTION(execFindDirectoryByTag); \
	DECLARE_FUNCTION(execGetInterfaceDisplayName); \
	DECLARE_FUNCTION(execIsPartition); \
	DECLARE_FUNCTION(execGetParentExplorerInterface); \
	DECLARE_FUNCTION(execGetChildDirectories);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Interfaces_OperatingSystemExplorerInterface_h_17_ACCESSORS
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Interfaces_OperatingSystemExplorerInterface_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	OPERATINGSYSTEMSIMULATOR_API UOperatingSystemExplorerInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	OPERATINGSYSTEMSIMULATOR_API UOperatingSystemExplorerInterface(UOperatingSystemExplorerInterface&&); \
	OPERATINGSYSTEMSIMULATOR_API UOperatingSystemExplorerInterface(const UOperatingSystemExplorerInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(OPERATINGSYSTEMSIMULATOR_API, UOperatingSystemExplorerInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOperatingSystemExplorerInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOperatingSystemExplorerInterface) \
	OPERATINGSYSTEMSIMULATOR_API virtual ~UOperatingSystemExplorerInterface();


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Interfaces_OperatingSystemExplorerInterface_h_17_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUOperatingSystemExplorerInterface(); \
	friend struct Z_Construct_UClass_UOperatingSystemExplorerInterface_Statics; \
public: \
	DECLARE_CLASS(UOperatingSystemExplorerInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/OperatingSystemSimulator"), OPERATINGSYSTEMSIMULATOR_API) \
	DECLARE_SERIALIZER(UOperatingSystemExplorerInterface)


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Interfaces_OperatingSystemExplorerInterface_h_17_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Interfaces_OperatingSystemExplorerInterface_h_17_GENERATED_UINTERFACE_BODY() \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Interfaces_OperatingSystemExplorerInterface_h_17_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Interfaces_OperatingSystemExplorerInterface_h_17_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IOperatingSystemExplorerInterface() {} \
public: \
	typedef UOperatingSystemExplorerInterface UClassType; \
	typedef IOperatingSystemExplorerInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Interfaces_OperatingSystemExplorerInterface_h_14_PROLOG
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Interfaces_OperatingSystemExplorerInterface_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Interfaces_OperatingSystemExplorerInterface_h_17_SPARSE_DATA \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Interfaces_OperatingSystemExplorerInterface_h_17_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Interfaces_OperatingSystemExplorerInterface_h_17_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Interfaces_OperatingSystemExplorerInterface_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Interfaces_OperatingSystemExplorerInterface_h_17_ACCESSORS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Interfaces_OperatingSystemExplorerInterface_h_17_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OPERATINGSYSTEMSIMULATOR_API UClass* StaticClass<class UOperatingSystemExplorerInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Interfaces_OperatingSystemExplorerInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
