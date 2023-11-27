// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OperatingSystemSimulator/Public/Programs/OperatingSystemProgramSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOperatingSystemProgramSettings() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_USaveGame();
	OPERATINGSYSTEMSIMULATOR_API UClass* Z_Construct_UClass_UOperatingSystemBaseProgram_NoRegister();
	OPERATINGSYSTEMSIMULATOR_API UClass* Z_Construct_UClass_UOperatingSystemProgramSettings();
	OPERATINGSYSTEMSIMULATOR_API UClass* Z_Construct_UClass_UOperatingSystemProgramSettings_NoRegister();
	UPackage* Z_Construct_UPackage__Script_OperatingSystemSimulator();
// End Cross Module References
	DEFINE_FUNCTION(UOperatingSystemProgramSettings::execSaveSettings)
	{
		P_GET_OBJECT(UOperatingSystemBaseProgram,Z_Param_TargetProgram);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UOperatingSystemProgramSettings::SaveSettings(Z_Param_TargetProgram);
		P_NATIVE_END;
	}
	struct OperatingSystemProgramSettings_eventK2_CanSave_Parms
	{
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		OperatingSystemProgramSettings_eventK2_CanSave_Parms()
			: ReturnValue(false)
		{
		}
	};
	static FName NAME_UOperatingSystemProgramSettings_K2_CanSave = FName(TEXT("K2_CanSave"));
	bool UOperatingSystemProgramSettings::K2_CanSave() const
	{
		OperatingSystemProgramSettings_eventK2_CanSave_Parms Parms;
		const_cast<UOperatingSystemProgramSettings*>(this)->ProcessEvent(FindFunctionChecked(NAME_UOperatingSystemProgramSettings_K2_CanSave),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UOperatingSystemProgramSettings_K2_PreSave = FName(TEXT("K2_PreSave"));
	void UOperatingSystemProgramSettings::K2_PreSave()
	{
		ProcessEvent(FindFunctionChecked(NAME_UOperatingSystemProgramSettings_K2_PreSave),NULL);
	}
	void UOperatingSystemProgramSettings::StaticRegisterNativesUOperatingSystemProgramSettings()
	{
		UClass* Class = UOperatingSystemProgramSettings::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SaveSettings", &UOperatingSystemProgramSettings::execSaveSettings },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOperatingSystemProgramSettings_K2_CanSave_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UOperatingSystemProgramSettings_K2_CanSave_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OperatingSystemProgramSettings_eventK2_CanSave_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOperatingSystemProgramSettings_K2_CanSave_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OperatingSystemProgramSettings_eventK2_CanSave_Parms), &Z_Construct_UFunction_UOperatingSystemProgramSettings_K2_CanSave_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOperatingSystemProgramSettings_K2_CanSave_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemProgramSettings_K2_CanSave_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemProgramSettings_K2_CanSave_Statics::Function_MetaDataParams[] = {
		{ "Category", "OperatingSystemProgramSettings" },
		{ "DisplayName", "CanSave" },
		{ "ModuleRelativePath", "Public/Programs/OperatingSystemProgramSettings.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOperatingSystemProgramSettings_K2_CanSave_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOperatingSystemProgramSettings, nullptr, "K2_CanSave", nullptr, nullptr, Z_Construct_UFunction_UOperatingSystemProgramSettings_K2_CanSave_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemProgramSettings_K2_CanSave_Statics::PropPointers), sizeof(OperatingSystemProgramSettings_eventK2_CanSave_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemProgramSettings_K2_CanSave_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOperatingSystemProgramSettings_K2_CanSave_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemProgramSettings_K2_CanSave_Statics::PropPointers) < 2048);
	static_assert(sizeof(OperatingSystemProgramSettings_eventK2_CanSave_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOperatingSystemProgramSettings_K2_CanSave()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOperatingSystemProgramSettings_K2_CanSave_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOperatingSystemProgramSettings_K2_PreSave_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemProgramSettings_K2_PreSave_Statics::Function_MetaDataParams[] = {
		{ "Category", "OperatingSystemProgramSettings" },
		{ "DisplayName", "PreSave" },
		{ "ModuleRelativePath", "Public/Programs/OperatingSystemProgramSettings.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOperatingSystemProgramSettings_K2_PreSave_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOperatingSystemProgramSettings, nullptr, "K2_PreSave", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemProgramSettings_K2_PreSave_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOperatingSystemProgramSettings_K2_PreSave_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UOperatingSystemProgramSettings_K2_PreSave()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOperatingSystemProgramSettings_K2_PreSave_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOperatingSystemProgramSettings_SaveSettings_Statics
	{
		struct OperatingSystemProgramSettings_eventSaveSettings_Parms
		{
			UOperatingSystemBaseProgram* TargetProgram;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetProgram;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOperatingSystemProgramSettings_SaveSettings_Statics::NewProp_TargetProgram = { "TargetProgram", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystemProgramSettings_eventSaveSettings_Parms, TargetProgram), Z_Construct_UClass_UOperatingSystemBaseProgram_NoRegister, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UOperatingSystemProgramSettings_SaveSettings_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OperatingSystemProgramSettings_eventSaveSettings_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOperatingSystemProgramSettings_SaveSettings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OperatingSystemProgramSettings_eventSaveSettings_Parms), &Z_Construct_UFunction_UOperatingSystemProgramSettings_SaveSettings_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOperatingSystemProgramSettings_SaveSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemProgramSettings_SaveSettings_Statics::NewProp_TargetProgram,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemProgramSettings_SaveSettings_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemProgramSettings_SaveSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "OperatingSystemProgramSettings" },
		{ "ModuleRelativePath", "Public/Programs/OperatingSystemProgramSettings.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOperatingSystemProgramSettings_SaveSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOperatingSystemProgramSettings, nullptr, "SaveSettings", nullptr, nullptr, Z_Construct_UFunction_UOperatingSystemProgramSettings_SaveSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemProgramSettings_SaveSettings_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOperatingSystemProgramSettings_SaveSettings_Statics::OperatingSystemProgramSettings_eventSaveSettings_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemProgramSettings_SaveSettings_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOperatingSystemProgramSettings_SaveSettings_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemProgramSettings_SaveSettings_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOperatingSystemProgramSettings_SaveSettings_Statics::OperatingSystemProgramSettings_eventSaveSettings_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOperatingSystemProgramSettings_SaveSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOperatingSystemProgramSettings_SaveSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOperatingSystemProgramSettings);
	UClass* Z_Construct_UClass_UOperatingSystemProgramSettings_NoRegister()
	{
		return UOperatingSystemProgramSettings::StaticClass();
	}
	struct Z_Construct_UClass_UOperatingSystemProgramSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Identifier_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Identifier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SaveSlotName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SaveSlotName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UserIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_UserIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParentProgram_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_ParentProgram;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOperatingSystemProgramSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USaveGame,
		(UObject* (*)())Z_Construct_UPackage__Script_OperatingSystemSimulator,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemProgramSettings_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UOperatingSystemProgramSettings_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOperatingSystemProgramSettings_K2_CanSave, "K2_CanSave" }, // 1220719616
		{ &Z_Construct_UFunction_UOperatingSystemProgramSettings_K2_PreSave, "K2_PreSave" }, // 2558352612
		{ &Z_Construct_UFunction_UOperatingSystemProgramSettings_SaveSettings, "SaveSettings" }, // 2424195615
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemProgramSettings_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOperatingSystemProgramSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Programs/OperatingSystemProgramSettings.h" },
		{ "ModuleRelativePath", "Public/Programs/OperatingSystemProgramSettings.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOperatingSystemProgramSettings_Statics::NewProp_Identifier_MetaData[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Public/Programs/OperatingSystemProgramSettings.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UOperatingSystemProgramSettings_Statics::NewProp_Identifier = { "Identifier", nullptr, (EPropertyFlags)0x0020080000020801, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOperatingSystemProgramSettings, Identifier), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemProgramSettings_Statics::NewProp_Identifier_MetaData), Z_Construct_UClass_UOperatingSystemProgramSettings_Statics::NewProp_Identifier_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOperatingSystemProgramSettings_Statics::NewProp_SaveSlotName_MetaData[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Public/Programs/OperatingSystemProgramSettings.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UOperatingSystemProgramSettings_Statics::NewProp_SaveSlotName = { "SaveSlotName", nullptr, (EPropertyFlags)0x0020080000020801, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOperatingSystemProgramSettings, SaveSlotName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemProgramSettings_Statics::NewProp_SaveSlotName_MetaData), Z_Construct_UClass_UOperatingSystemProgramSettings_Statics::NewProp_SaveSlotName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOperatingSystemProgramSettings_Statics::NewProp_UserIndex_MetaData[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Public/Programs/OperatingSystemProgramSettings.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UOperatingSystemProgramSettings_Statics::NewProp_UserIndex = { "UserIndex", nullptr, (EPropertyFlags)0x0020080000020801, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOperatingSystemProgramSettings, UserIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemProgramSettings_Statics::NewProp_UserIndex_MetaData), Z_Construct_UClass_UOperatingSystemProgramSettings_Statics::NewProp_UserIndex_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOperatingSystemProgramSettings_Statics::NewProp_ParentProgram_MetaData[] = {
		{ "Category", "OperatingSystemProgramSettings" },
		{ "ModuleRelativePath", "Public/Programs/OperatingSystemProgramSettings.h" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UOperatingSystemProgramSettings_Statics::NewProp_ParentProgram = { "ParentProgram", nullptr, (EPropertyFlags)0x0024080000000014, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOperatingSystemProgramSettings, ParentProgram), Z_Construct_UClass_UOperatingSystemBaseProgram_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemProgramSettings_Statics::NewProp_ParentProgram_MetaData), Z_Construct_UClass_UOperatingSystemProgramSettings_Statics::NewProp_ParentProgram_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOperatingSystemProgramSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOperatingSystemProgramSettings_Statics::NewProp_Identifier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOperatingSystemProgramSettings_Statics::NewProp_SaveSlotName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOperatingSystemProgramSettings_Statics::NewProp_UserIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOperatingSystemProgramSettings_Statics::NewProp_ParentProgram,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOperatingSystemProgramSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOperatingSystemProgramSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOperatingSystemProgramSettings_Statics::ClassParams = {
		&UOperatingSystemProgramSettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UOperatingSystemProgramSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemProgramSettings_Statics::PropPointers),
		0,
		0x001000A1u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemProgramSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UOperatingSystemProgramSettings_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemProgramSettings_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UOperatingSystemProgramSettings()
	{
		if (!Z_Registration_Info_UClass_UOperatingSystemProgramSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOperatingSystemProgramSettings.OuterSingleton, Z_Construct_UClass_UOperatingSystemProgramSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOperatingSystemProgramSettings.OuterSingleton;
	}
	template<> OPERATINGSYSTEMSIMULATOR_API UClass* StaticClass<UOperatingSystemProgramSettings>()
	{
		return UOperatingSystemProgramSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOperatingSystemProgramSettings);
	UOperatingSystemProgramSettings::~UOperatingSystemProgramSettings() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Programs_OperatingSystemProgramSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Programs_OperatingSystemProgramSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOperatingSystemProgramSettings, UOperatingSystemProgramSettings::StaticClass, TEXT("UOperatingSystemProgramSettings"), &Z_Registration_Info_UClass_UOperatingSystemProgramSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOperatingSystemProgramSettings), 546671725U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Programs_OperatingSystemProgramSettings_h_885783466(TEXT("/Script/OperatingSystemSimulator"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Programs_OperatingSystemProgramSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Programs_OperatingSystemProgramSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
