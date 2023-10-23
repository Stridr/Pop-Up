// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OperatingSystemSimulator/Public/Interfaces/OperatingSystemExplorerInterface.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOperatingSystemExplorerInterface() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	OPERATINGSYSTEMSIMULATOR_API UClass* Z_Construct_UClass_UOperatingSystemDirectory_NoRegister();
	OPERATINGSYSTEMSIMULATOR_API UClass* Z_Construct_UClass_UOperatingSystemExplorerInterface();
	OPERATINGSYSTEMSIMULATOR_API UClass* Z_Construct_UClass_UOperatingSystemExplorerInterface_NoRegister();
	OPERATINGSYSTEMSIMULATOR_API UClass* Z_Construct_UClass_UOperatingSystemFile_NoRegister();
	UPackage* Z_Construct_UPackage__Script_OperatingSystemSimulator();
// End Cross Module References
	DEFINE_FUNCTION(IOperatingSystemExplorerInterface::execGetAllFiles)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_WithExtension);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UOperatingSystemFile*>*)Z_Param__Result=P_THIS->GetAllFiles(Z_Param_WithExtension);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IOperatingSystemExplorerInterface::execGetChildDirectory)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_TargetChildDirectoryName);
		P_GET_UBOOL(Z_Param_bRecursive);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TScriptInterface<IOperatingSystemExplorerInterface>*)Z_Param__Result=P_THIS->GetChildDirectory(Z_Param_TargetChildDirectoryName,Z_Param_bRecursive);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IOperatingSystemExplorerInterface::execFindDirectoryByTag)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_DirectoryTag);
		P_GET_UBOOL(Z_Param_bRecursive);
		P_GET_OBJECT_REF(UOperatingSystemDirectory,Z_Param_Out_OutDirectory);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->FindDirectoryByTag(Z_Param_DirectoryTag,Z_Param_bRecursive,Z_Param_Out_OutDirectory);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IOperatingSystemExplorerInterface::execGetInterfaceDisplayName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=P_THIS->GetInterfaceDisplayName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IOperatingSystemExplorerInterface::execIsPartition)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsPartition();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IOperatingSystemExplorerInterface::execGetParentExplorerInterface)
	{
		P_GET_TINTERFACE_REF(IOperatingSystemExplorerInterface,Z_Param_Out_OutInterface);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetParentExplorerInterface(Z_Param_Out_OutInterface);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IOperatingSystemExplorerInterface::execGetChildDirectories)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UOperatingSystemDirectory*>*)Z_Param__Result=P_THIS->GetChildDirectories();
		P_NATIVE_END;
	}
	void UOperatingSystemExplorerInterface::StaticRegisterNativesUOperatingSystemExplorerInterface()
	{
		UClass* Class = UOperatingSystemExplorerInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FindDirectoryByTag", &IOperatingSystemExplorerInterface::execFindDirectoryByTag },
			{ "GetAllFiles", &IOperatingSystemExplorerInterface::execGetAllFiles },
			{ "GetChildDirectories", &IOperatingSystemExplorerInterface::execGetChildDirectories },
			{ "GetChildDirectory", &IOperatingSystemExplorerInterface::execGetChildDirectory },
			{ "GetInterfaceDisplayName", &IOperatingSystemExplorerInterface::execGetInterfaceDisplayName },
			{ "GetParentExplorerInterface", &IOperatingSystemExplorerInterface::execGetParentExplorerInterface },
			{ "IsPartition", &IOperatingSystemExplorerInterface::execIsPartition },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOperatingSystemExplorerInterface_FindDirectoryByTag_Statics
	{
		struct OperatingSystemExplorerInterface_eventFindDirectoryByTag_Parms
		{
			FGameplayTag DirectoryTag;
			bool bRecursive;
			UOperatingSystemDirectory* OutDirectory;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DirectoryTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DirectoryTag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRecursive_MetaData[];
#endif
		static void NewProp_bRecursive_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRecursive;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OutDirectory;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemExplorerInterface_FindDirectoryByTag_Statics::NewProp_DirectoryTag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOperatingSystemExplorerInterface_FindDirectoryByTag_Statics::NewProp_DirectoryTag = { "DirectoryTag", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystemExplorerInterface_eventFindDirectoryByTag_Parms, DirectoryTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemExplorerInterface_FindDirectoryByTag_Statics::NewProp_DirectoryTag_MetaData), Z_Construct_UFunction_UOperatingSystemExplorerInterface_FindDirectoryByTag_Statics::NewProp_DirectoryTag_MetaData) }; // 2083603574
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemExplorerInterface_FindDirectoryByTag_Statics::NewProp_bRecursive_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UOperatingSystemExplorerInterface_FindDirectoryByTag_Statics::NewProp_bRecursive_SetBit(void* Obj)
	{
		((OperatingSystemExplorerInterface_eventFindDirectoryByTag_Parms*)Obj)->bRecursive = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOperatingSystemExplorerInterface_FindDirectoryByTag_Statics::NewProp_bRecursive = { "bRecursive", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OperatingSystemExplorerInterface_eventFindDirectoryByTag_Parms), &Z_Construct_UFunction_UOperatingSystemExplorerInterface_FindDirectoryByTag_Statics::NewProp_bRecursive_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemExplorerInterface_FindDirectoryByTag_Statics::NewProp_bRecursive_MetaData), Z_Construct_UFunction_UOperatingSystemExplorerInterface_FindDirectoryByTag_Statics::NewProp_bRecursive_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOperatingSystemExplorerInterface_FindDirectoryByTag_Statics::NewProp_OutDirectory = { "OutDirectory", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystemExplorerInterface_eventFindDirectoryByTag_Parms, OutDirectory), Z_Construct_UClass_UOperatingSystemDirectory_NoRegister, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UOperatingSystemExplorerInterface_FindDirectoryByTag_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OperatingSystemExplorerInterface_eventFindDirectoryByTag_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOperatingSystemExplorerInterface_FindDirectoryByTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OperatingSystemExplorerInterface_eventFindDirectoryByTag_Parms), &Z_Construct_UFunction_UOperatingSystemExplorerInterface_FindDirectoryByTag_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOperatingSystemExplorerInterface_FindDirectoryByTag_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemExplorerInterface_FindDirectoryByTag_Statics::NewProp_DirectoryTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemExplorerInterface_FindDirectoryByTag_Statics::NewProp_bRecursive,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemExplorerInterface_FindDirectoryByTag_Statics::NewProp_OutDirectory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemExplorerInterface_FindDirectoryByTag_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemExplorerInterface_FindDirectoryByTag_Statics::Function_MetaDataParams[] = {
		{ "Category", "OperatingSystemExplorerInterface" },
		{ "ModuleRelativePath", "Public/Interfaces/OperatingSystemExplorerInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOperatingSystemExplorerInterface_FindDirectoryByTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOperatingSystemExplorerInterface, nullptr, "FindDirectoryByTag", nullptr, nullptr, Z_Construct_UFunction_UOperatingSystemExplorerInterface_FindDirectoryByTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemExplorerInterface_FindDirectoryByTag_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOperatingSystemExplorerInterface_FindDirectoryByTag_Statics::OperatingSystemExplorerInterface_eventFindDirectoryByTag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemExplorerInterface_FindDirectoryByTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOperatingSystemExplorerInterface_FindDirectoryByTag_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemExplorerInterface_FindDirectoryByTag_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOperatingSystemExplorerInterface_FindDirectoryByTag_Statics::OperatingSystemExplorerInterface_eventFindDirectoryByTag_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOperatingSystemExplorerInterface_FindDirectoryByTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOperatingSystemExplorerInterface_FindDirectoryByTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOperatingSystemExplorerInterface_GetAllFiles_Statics
	{
		struct OperatingSystemExplorerInterface_eventGetAllFiles_Parms
		{
			FString WithExtension;
			TArray<UOperatingSystemFile*> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WithExtension_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_WithExtension;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemExplorerInterface_GetAllFiles_Statics::NewProp_WithExtension_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOperatingSystemExplorerInterface_GetAllFiles_Statics::NewProp_WithExtension = { "WithExtension", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystemExplorerInterface_eventGetAllFiles_Parms, WithExtension), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemExplorerInterface_GetAllFiles_Statics::NewProp_WithExtension_MetaData), Z_Construct_UFunction_UOperatingSystemExplorerInterface_GetAllFiles_Statics::NewProp_WithExtension_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOperatingSystemExplorerInterface_GetAllFiles_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UOperatingSystemFile_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOperatingSystemExplorerInterface_GetAllFiles_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystemExplorerInterface_eventGetAllFiles_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOperatingSystemExplorerInterface_GetAllFiles_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemExplorerInterface_GetAllFiles_Statics::NewProp_WithExtension,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemExplorerInterface_GetAllFiles_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemExplorerInterface_GetAllFiles_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemExplorerInterface_GetAllFiles_Statics::Function_MetaDataParams[] = {
		{ "Category", "OperatingSystemExplorerInterface" },
		{ "CPP_Default_WithExtension", "*" },
		{ "ModuleRelativePath", "Public/Interfaces/OperatingSystemExplorerInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOperatingSystemExplorerInterface_GetAllFiles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOperatingSystemExplorerInterface, nullptr, "GetAllFiles", nullptr, nullptr, Z_Construct_UFunction_UOperatingSystemExplorerInterface_GetAllFiles_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemExplorerInterface_GetAllFiles_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOperatingSystemExplorerInterface_GetAllFiles_Statics::OperatingSystemExplorerInterface_eventGetAllFiles_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemExplorerInterface_GetAllFiles_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOperatingSystemExplorerInterface_GetAllFiles_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemExplorerInterface_GetAllFiles_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOperatingSystemExplorerInterface_GetAllFiles_Statics::OperatingSystemExplorerInterface_eventGetAllFiles_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOperatingSystemExplorerInterface_GetAllFiles()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOperatingSystemExplorerInterface_GetAllFiles_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOperatingSystemExplorerInterface_GetChildDirectories_Statics
	{
		struct OperatingSystemExplorerInterface_eventGetChildDirectories_Parms
		{
			TArray<UOperatingSystemDirectory*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOperatingSystemExplorerInterface_GetChildDirectories_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UOperatingSystemDirectory_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOperatingSystemExplorerInterface_GetChildDirectories_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystemExplorerInterface_eventGetChildDirectories_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOperatingSystemExplorerInterface_GetChildDirectories_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemExplorerInterface_GetChildDirectories_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemExplorerInterface_GetChildDirectories_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemExplorerInterface_GetChildDirectories_Statics::Function_MetaDataParams[] = {
		{ "Category", "OperatingSystemExplorerInterface" },
		{ "ModuleRelativePath", "Public/Interfaces/OperatingSystemExplorerInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOperatingSystemExplorerInterface_GetChildDirectories_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOperatingSystemExplorerInterface, nullptr, "GetChildDirectories", nullptr, nullptr, Z_Construct_UFunction_UOperatingSystemExplorerInterface_GetChildDirectories_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemExplorerInterface_GetChildDirectories_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOperatingSystemExplorerInterface_GetChildDirectories_Statics::OperatingSystemExplorerInterface_eventGetChildDirectories_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemExplorerInterface_GetChildDirectories_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOperatingSystemExplorerInterface_GetChildDirectories_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemExplorerInterface_GetChildDirectories_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOperatingSystemExplorerInterface_GetChildDirectories_Statics::OperatingSystemExplorerInterface_eventGetChildDirectories_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOperatingSystemExplorerInterface_GetChildDirectories()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOperatingSystemExplorerInterface_GetChildDirectories_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOperatingSystemExplorerInterface_GetChildDirectory_Statics
	{
		struct OperatingSystemExplorerInterface_eventGetChildDirectory_Parms
		{
			FString TargetChildDirectoryName;
			bool bRecursive;
			TScriptInterface<IOperatingSystemExplorerInterface> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetChildDirectoryName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_TargetChildDirectoryName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRecursive_MetaData[];
#endif
		static void NewProp_bRecursive_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRecursive;
		static const UECodeGen_Private::FInterfacePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemExplorerInterface_GetChildDirectory_Statics::NewProp_TargetChildDirectoryName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOperatingSystemExplorerInterface_GetChildDirectory_Statics::NewProp_TargetChildDirectoryName = { "TargetChildDirectoryName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystemExplorerInterface_eventGetChildDirectory_Parms, TargetChildDirectoryName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemExplorerInterface_GetChildDirectory_Statics::NewProp_TargetChildDirectoryName_MetaData), Z_Construct_UFunction_UOperatingSystemExplorerInterface_GetChildDirectory_Statics::NewProp_TargetChildDirectoryName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemExplorerInterface_GetChildDirectory_Statics::NewProp_bRecursive_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UOperatingSystemExplorerInterface_GetChildDirectory_Statics::NewProp_bRecursive_SetBit(void* Obj)
	{
		((OperatingSystemExplorerInterface_eventGetChildDirectory_Parms*)Obj)->bRecursive = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOperatingSystemExplorerInterface_GetChildDirectory_Statics::NewProp_bRecursive = { "bRecursive", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OperatingSystemExplorerInterface_eventGetChildDirectory_Parms), &Z_Construct_UFunction_UOperatingSystemExplorerInterface_GetChildDirectory_Statics::NewProp_bRecursive_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemExplorerInterface_GetChildDirectory_Statics::NewProp_bRecursive_MetaData), Z_Construct_UFunction_UOperatingSystemExplorerInterface_GetChildDirectory_Statics::NewProp_bRecursive_MetaData) };
	const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UOperatingSystemExplorerInterface_GetChildDirectory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystemExplorerInterface_eventGetChildDirectory_Parms, ReturnValue), Z_Construct_UClass_UOperatingSystemExplorerInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOperatingSystemExplorerInterface_GetChildDirectory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemExplorerInterface_GetChildDirectory_Statics::NewProp_TargetChildDirectoryName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemExplorerInterface_GetChildDirectory_Statics::NewProp_bRecursive,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemExplorerInterface_GetChildDirectory_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemExplorerInterface_GetChildDirectory_Statics::Function_MetaDataParams[] = {
		{ "Category", "OperatingSystemExplorerInterface" },
		{ "CPP_Default_bRecursive", "true" },
		{ "ModuleRelativePath", "Public/Interfaces/OperatingSystemExplorerInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOperatingSystemExplorerInterface_GetChildDirectory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOperatingSystemExplorerInterface, nullptr, "GetChildDirectory", nullptr, nullptr, Z_Construct_UFunction_UOperatingSystemExplorerInterface_GetChildDirectory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemExplorerInterface_GetChildDirectory_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOperatingSystemExplorerInterface_GetChildDirectory_Statics::OperatingSystemExplorerInterface_eventGetChildDirectory_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemExplorerInterface_GetChildDirectory_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOperatingSystemExplorerInterface_GetChildDirectory_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemExplorerInterface_GetChildDirectory_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOperatingSystemExplorerInterface_GetChildDirectory_Statics::OperatingSystemExplorerInterface_eventGetChildDirectory_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOperatingSystemExplorerInterface_GetChildDirectory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOperatingSystemExplorerInterface_GetChildDirectory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOperatingSystemExplorerInterface_GetInterfaceDisplayName_Statics
	{
		struct OperatingSystemExplorerInterface_eventGetInterfaceDisplayName_Parms
		{
			FText ReturnValue;
		};
		static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UOperatingSystemExplorerInterface_GetInterfaceDisplayName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystemExplorerInterface_eventGetInterfaceDisplayName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOperatingSystemExplorerInterface_GetInterfaceDisplayName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemExplorerInterface_GetInterfaceDisplayName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemExplorerInterface_GetInterfaceDisplayName_Statics::Function_MetaDataParams[] = {
		{ "Category", "OperatingSystemExplorerInterface" },
		{ "ModuleRelativePath", "Public/Interfaces/OperatingSystemExplorerInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOperatingSystemExplorerInterface_GetInterfaceDisplayName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOperatingSystemExplorerInterface, nullptr, "GetInterfaceDisplayName", nullptr, nullptr, Z_Construct_UFunction_UOperatingSystemExplorerInterface_GetInterfaceDisplayName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemExplorerInterface_GetInterfaceDisplayName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOperatingSystemExplorerInterface_GetInterfaceDisplayName_Statics::OperatingSystemExplorerInterface_eventGetInterfaceDisplayName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemExplorerInterface_GetInterfaceDisplayName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOperatingSystemExplorerInterface_GetInterfaceDisplayName_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemExplorerInterface_GetInterfaceDisplayName_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOperatingSystemExplorerInterface_GetInterfaceDisplayName_Statics::OperatingSystemExplorerInterface_eventGetInterfaceDisplayName_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOperatingSystemExplorerInterface_GetInterfaceDisplayName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOperatingSystemExplorerInterface_GetInterfaceDisplayName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOperatingSystemExplorerInterface_GetParentExplorerInterface_Statics
	{
		struct OperatingSystemExplorerInterface_eventGetParentExplorerInterface_Parms
		{
			TScriptInterface<IOperatingSystemExplorerInterface> OutInterface;
		};
		static const UECodeGen_Private::FInterfacePropertyParams NewProp_OutInterface;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UOperatingSystemExplorerInterface_GetParentExplorerInterface_Statics::NewProp_OutInterface = { "OutInterface", nullptr, (EPropertyFlags)0x0014000000000180, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystemExplorerInterface_eventGetParentExplorerInterface_Parms, OutInterface), Z_Construct_UClass_UOperatingSystemExplorerInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOperatingSystemExplorerInterface_GetParentExplorerInterface_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemExplorerInterface_GetParentExplorerInterface_Statics::NewProp_OutInterface,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemExplorerInterface_GetParentExplorerInterface_Statics::Function_MetaDataParams[] = {
		{ "Category", "OperatingSystemExplorerInterface" },
		{ "ModuleRelativePath", "Public/Interfaces/OperatingSystemExplorerInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOperatingSystemExplorerInterface_GetParentExplorerInterface_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOperatingSystemExplorerInterface, nullptr, "GetParentExplorerInterface", nullptr, nullptr, Z_Construct_UFunction_UOperatingSystemExplorerInterface_GetParentExplorerInterface_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemExplorerInterface_GetParentExplorerInterface_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOperatingSystemExplorerInterface_GetParentExplorerInterface_Statics::OperatingSystemExplorerInterface_eventGetParentExplorerInterface_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemExplorerInterface_GetParentExplorerInterface_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOperatingSystemExplorerInterface_GetParentExplorerInterface_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemExplorerInterface_GetParentExplorerInterface_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOperatingSystemExplorerInterface_GetParentExplorerInterface_Statics::OperatingSystemExplorerInterface_eventGetParentExplorerInterface_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOperatingSystemExplorerInterface_GetParentExplorerInterface()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOperatingSystemExplorerInterface_GetParentExplorerInterface_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOperatingSystemExplorerInterface_IsPartition_Statics
	{
		struct OperatingSystemExplorerInterface_eventIsPartition_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UOperatingSystemExplorerInterface_IsPartition_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OperatingSystemExplorerInterface_eventIsPartition_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOperatingSystemExplorerInterface_IsPartition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OperatingSystemExplorerInterface_eventIsPartition_Parms), &Z_Construct_UFunction_UOperatingSystemExplorerInterface_IsPartition_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOperatingSystemExplorerInterface_IsPartition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemExplorerInterface_IsPartition_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemExplorerInterface_IsPartition_Statics::Function_MetaDataParams[] = {
		{ "Category", "OperatingSystemExplorerInterface" },
		{ "ModuleRelativePath", "Public/Interfaces/OperatingSystemExplorerInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOperatingSystemExplorerInterface_IsPartition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOperatingSystemExplorerInterface, nullptr, "IsPartition", nullptr, nullptr, Z_Construct_UFunction_UOperatingSystemExplorerInterface_IsPartition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemExplorerInterface_IsPartition_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOperatingSystemExplorerInterface_IsPartition_Statics::OperatingSystemExplorerInterface_eventIsPartition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemExplorerInterface_IsPartition_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOperatingSystemExplorerInterface_IsPartition_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemExplorerInterface_IsPartition_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOperatingSystemExplorerInterface_IsPartition_Statics::OperatingSystemExplorerInterface_eventIsPartition_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOperatingSystemExplorerInterface_IsPartition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOperatingSystemExplorerInterface_IsPartition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOperatingSystemExplorerInterface);
	UClass* Z_Construct_UClass_UOperatingSystemExplorerInterface_NoRegister()
	{
		return UOperatingSystemExplorerInterface::StaticClass();
	}
	struct Z_Construct_UClass_UOperatingSystemExplorerInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOperatingSystemExplorerInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_OperatingSystemSimulator,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemExplorerInterface_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UOperatingSystemExplorerInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOperatingSystemExplorerInterface_FindDirectoryByTag, "FindDirectoryByTag" }, // 3417498179
		{ &Z_Construct_UFunction_UOperatingSystemExplorerInterface_GetAllFiles, "GetAllFiles" }, // 2551702906
		{ &Z_Construct_UFunction_UOperatingSystemExplorerInterface_GetChildDirectories, "GetChildDirectories" }, // 2710738045
		{ &Z_Construct_UFunction_UOperatingSystemExplorerInterface_GetChildDirectory, "GetChildDirectory" }, // 1896852543
		{ &Z_Construct_UFunction_UOperatingSystemExplorerInterface_GetInterfaceDisplayName, "GetInterfaceDisplayName" }, // 2289771730
		{ &Z_Construct_UFunction_UOperatingSystemExplorerInterface_GetParentExplorerInterface, "GetParentExplorerInterface" }, // 196133051
		{ &Z_Construct_UFunction_UOperatingSystemExplorerInterface_IsPartition, "IsPartition" }, // 1752982959
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemExplorerInterface_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOperatingSystemExplorerInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/Interfaces/OperatingSystemExplorerInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOperatingSystemExplorerInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IOperatingSystemExplorerInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOperatingSystemExplorerInterface_Statics::ClassParams = {
		&UOperatingSystemExplorerInterface::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemExplorerInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UOperatingSystemExplorerInterface_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UOperatingSystemExplorerInterface()
	{
		if (!Z_Registration_Info_UClass_UOperatingSystemExplorerInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOperatingSystemExplorerInterface.OuterSingleton, Z_Construct_UClass_UOperatingSystemExplorerInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOperatingSystemExplorerInterface.OuterSingleton;
	}
	template<> OPERATINGSYSTEMSIMULATOR_API UClass* StaticClass<UOperatingSystemExplorerInterface>()
	{
		return UOperatingSystemExplorerInterface::StaticClass();
	}
	UOperatingSystemExplorerInterface::UOperatingSystemExplorerInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOperatingSystemExplorerInterface);
	UOperatingSystemExplorerInterface::~UOperatingSystemExplorerInterface() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Interfaces_OperatingSystemExplorerInterface_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Interfaces_OperatingSystemExplorerInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOperatingSystemExplorerInterface, UOperatingSystemExplorerInterface::StaticClass, TEXT("UOperatingSystemExplorerInterface"), &Z_Registration_Info_UClass_UOperatingSystemExplorerInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOperatingSystemExplorerInterface), 4262244150U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Interfaces_OperatingSystemExplorerInterface_h_231223061(TEXT("/Script/OperatingSystemSimulator"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Interfaces_OperatingSystemExplorerInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Interfaces_OperatingSystemExplorerInterface_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
