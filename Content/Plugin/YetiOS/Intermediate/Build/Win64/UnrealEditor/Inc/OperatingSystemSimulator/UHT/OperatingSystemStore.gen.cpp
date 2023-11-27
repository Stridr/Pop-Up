// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OperatingSystemSimulator/Public/Programs/OperatingSystemStore.h"
#include "OperatingSystemSimulator/Public/Core/OperatingSystem.h"
#include "OperatingSystemSimulator/Public/OperatingSystemTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOperatingSystemStore() {}
// Cross Module References
	OPERATINGSYSTEMSIMULATOR_API UClass* Z_Construct_UClass_UOperatingSystemBaseProgram();
	OPERATINGSYSTEMSIMULATOR_API UClass* Z_Construct_UClass_UOperatingSystemBaseProgram_NoRegister();
	OPERATINGSYSTEMSIMULATOR_API UClass* Z_Construct_UClass_UOperatingSystemStore();
	OPERATINGSYSTEMSIMULATOR_API UClass* Z_Construct_UClass_UOperatingSystemStore_NoRegister();
	OPERATINGSYSTEMSIMULATOR_API UClass* Z_Construct_UClass_UOperatingSystemStoreProgramsCollection_NoRegister();
	OPERATINGSYSTEMSIMULATOR_API UScriptStruct* Z_Construct_UScriptStruct_FOperatingSystemStoreProgramData();
	OPERATINGSYSTEMSIMULATOR_API UScriptStruct* Z_Construct_UScriptStruct_FOperatingSystemStoreReviewUser();
	UPackage* Z_Construct_UPackage__Script_OperatingSystemSimulator();
// End Cross Module References
	DEFINE_FUNCTION(UOperatingSystemStore::execSubmitRating)
	{
		P_GET_SOFTCLASS_REF(TSoftClassPtr<UOperatingSystemBaseProgram> ,Z_Param_Out_TargetProgram);
		P_GET_STRUCT_REF(FOperatingSystemStoreReviewUser,Z_Param_Out_ReviewingUser);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SubmitRating(Z_Param_Out_TargetProgram,Z_Param_Out_ReviewingUser);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOperatingSystemStore::execGetAverageRating)
	{
		P_GET_STRUCT_REF(FOperatingSystemStoreProgramData,Z_Param_Out_StoreProgramData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UOperatingSystemStore::GetAverageRating(Z_Param_Out_StoreProgramData);
		P_NATIVE_END;
	}
	void UOperatingSystemStore::StaticRegisterNativesUOperatingSystemStore()
	{
		UClass* Class = UOperatingSystemStore::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAverageRating", &UOperatingSystemStore::execGetAverageRating },
			{ "SubmitRating", &UOperatingSystemStore::execSubmitRating },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOperatingSystemStore_GetAverageRating_Statics
	{
		struct OperatingSystemStore_eventGetAverageRating_Parms
		{
			FOperatingSystemStoreProgramData StoreProgramData;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StoreProgramData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StoreProgramData;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemStore_GetAverageRating_Statics::NewProp_StoreProgramData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOperatingSystemStore_GetAverageRating_Statics::NewProp_StoreProgramData = { "StoreProgramData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystemStore_eventGetAverageRating_Parms, StoreProgramData), Z_Construct_UScriptStruct_FOperatingSystemStoreProgramData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemStore_GetAverageRating_Statics::NewProp_StoreProgramData_MetaData), Z_Construct_UFunction_UOperatingSystemStore_GetAverageRating_Statics::NewProp_StoreProgramData_MetaData) }; // 3112091046
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOperatingSystemStore_GetAverageRating_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystemStore_eventGetAverageRating_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOperatingSystemStore_GetAverageRating_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemStore_GetAverageRating_Statics::NewProp_StoreProgramData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemStore_GetAverageRating_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemStore_GetAverageRating_Statics::Function_MetaDataParams[] = {
		{ "Category", "OperatingSystemStore" },
		{ "ModuleRelativePath", "Public/Programs/OperatingSystemStore.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOperatingSystemStore_GetAverageRating_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOperatingSystemStore, nullptr, "GetAverageRating", nullptr, nullptr, Z_Construct_UFunction_UOperatingSystemStore_GetAverageRating_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemStore_GetAverageRating_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOperatingSystemStore_GetAverageRating_Statics::OperatingSystemStore_eventGetAverageRating_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemStore_GetAverageRating_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOperatingSystemStore_GetAverageRating_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemStore_GetAverageRating_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOperatingSystemStore_GetAverageRating_Statics::OperatingSystemStore_eventGetAverageRating_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOperatingSystemStore_GetAverageRating()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOperatingSystemStore_GetAverageRating_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOperatingSystemStore_SubmitRating_Statics
	{
		struct OperatingSystemStore_eventSubmitRating_Parms
		{
			TSoftClassPtr<UOperatingSystemBaseProgram>  TargetProgram;
			FOperatingSystemStoreReviewUser ReviewingUser;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetProgram_MetaData[];
#endif
		static const UECodeGen_Private::FSoftClassPropertyParams NewProp_TargetProgram;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReviewingUser_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReviewingUser;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemStore_SubmitRating_Statics::NewProp_TargetProgram_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UFunction_UOperatingSystemStore_SubmitRating_Statics::NewProp_TargetProgram = { "TargetProgram", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystemStore_eventSubmitRating_Parms, TargetProgram), Z_Construct_UClass_UOperatingSystemBaseProgram_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemStore_SubmitRating_Statics::NewProp_TargetProgram_MetaData), Z_Construct_UFunction_UOperatingSystemStore_SubmitRating_Statics::NewProp_TargetProgram_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemStore_SubmitRating_Statics::NewProp_ReviewingUser_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOperatingSystemStore_SubmitRating_Statics::NewProp_ReviewingUser = { "ReviewingUser", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystemStore_eventSubmitRating_Parms, ReviewingUser), Z_Construct_UScriptStruct_FOperatingSystemStoreReviewUser, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemStore_SubmitRating_Statics::NewProp_ReviewingUser_MetaData), Z_Construct_UFunction_UOperatingSystemStore_SubmitRating_Statics::NewProp_ReviewingUser_MetaData) }; // 1050742907
	void Z_Construct_UFunction_UOperatingSystemStore_SubmitRating_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OperatingSystemStore_eventSubmitRating_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOperatingSystemStore_SubmitRating_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OperatingSystemStore_eventSubmitRating_Parms), &Z_Construct_UFunction_UOperatingSystemStore_SubmitRating_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOperatingSystemStore_SubmitRating_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemStore_SubmitRating_Statics::NewProp_TargetProgram,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemStore_SubmitRating_Statics::NewProp_ReviewingUser,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemStore_SubmitRating_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemStore_SubmitRating_Statics::Function_MetaDataParams[] = {
		{ "Category", "OperatingSystemStore" },
		{ "ModuleRelativePath", "Public/Programs/OperatingSystemStore.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOperatingSystemStore_SubmitRating_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOperatingSystemStore, nullptr, "SubmitRating", nullptr, nullptr, Z_Construct_UFunction_UOperatingSystemStore_SubmitRating_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemStore_SubmitRating_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOperatingSystemStore_SubmitRating_Statics::OperatingSystemStore_eventSubmitRating_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemStore_SubmitRating_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOperatingSystemStore_SubmitRating_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemStore_SubmitRating_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOperatingSystemStore_SubmitRating_Statics::OperatingSystemStore_eventSubmitRating_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOperatingSystemStore_SubmitRating()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOperatingSystemStore_SubmitRating_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOperatingSystemStore);
	UClass* Z_Construct_UClass_UOperatingSystemStore_NoRegister()
	{
		return UOperatingSystemStore::StaticClass();
	}
	struct Z_Construct_UClass_UOperatingSystemStore_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StoreProgramsCollection_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_StoreProgramsCollection;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOperatingSystemStore_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UOperatingSystemBaseProgram,
		(UObject* (*)())Z_Construct_UPackage__Script_OperatingSystemSimulator,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemStore_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UOperatingSystemStore_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOperatingSystemStore_GetAverageRating, "GetAverageRating" }, // 345532251
		{ &Z_Construct_UFunction_UOperatingSystemStore_SubmitRating, "SubmitRating" }, // 4076279624
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemStore_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOperatingSystemStore_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "OperatingSystemProgramStore" },
		{ "IncludePath", "Programs/OperatingSystemStore.h" },
		{ "ModuleRelativePath", "Public/Programs/OperatingSystemStore.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOperatingSystemStore_Statics::NewProp_StoreProgramsCollection_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OperatingSystemStore" },
		{ "ModuleRelativePath", "Public/Programs/OperatingSystemStore.h" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UOperatingSystemStore_Statics::NewProp_StoreProgramsCollection = { "StoreProgramsCollection", nullptr, (EPropertyFlags)0x0044000000010015, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOperatingSystemStore, StoreProgramsCollection), Z_Construct_UClass_UOperatingSystemStoreProgramsCollection_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemStore_Statics::NewProp_StoreProgramsCollection_MetaData), Z_Construct_UClass_UOperatingSystemStore_Statics::NewProp_StoreProgramsCollection_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOperatingSystemStore_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOperatingSystemStore_Statics::NewProp_StoreProgramsCollection,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOperatingSystemStore_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOperatingSystemStore>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOperatingSystemStore_Statics::ClassParams = {
		&UOperatingSystemStore::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UOperatingSystemStore_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemStore_Statics::PropPointers),
		0,
		0x008000A1u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemStore_Statics::Class_MetaDataParams), Z_Construct_UClass_UOperatingSystemStore_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemStore_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UOperatingSystemStore()
	{
		if (!Z_Registration_Info_UClass_UOperatingSystemStore.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOperatingSystemStore.OuterSingleton, Z_Construct_UClass_UOperatingSystemStore_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOperatingSystemStore.OuterSingleton;
	}
	template<> OPERATINGSYSTEMSIMULATOR_API UClass* StaticClass<UOperatingSystemStore>()
	{
		return UOperatingSystemStore::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOperatingSystemStore);
	UOperatingSystemStore::~UOperatingSystemStore() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Programs_OperatingSystemStore_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Programs_OperatingSystemStore_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOperatingSystemStore, UOperatingSystemStore::StaticClass, TEXT("UOperatingSystemStore"), &Z_Registration_Info_UClass_UOperatingSystemStore, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOperatingSystemStore), 4247415520U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Programs_OperatingSystemStore_h_644212717(TEXT("/Script/OperatingSystemSimulator"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Programs_OperatingSystemStore_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Programs_OperatingSystemStore_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
