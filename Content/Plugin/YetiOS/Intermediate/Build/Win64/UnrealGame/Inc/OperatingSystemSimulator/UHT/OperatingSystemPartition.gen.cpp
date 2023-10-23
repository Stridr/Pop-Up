// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OperatingSystemSimulator/Public/Core/OperatingSystemPartition.h"
#include "GameplayTagContainer.h"
#include "OperatingSystemSimulator/Public/OperatingSystemTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOperatingSystemPartition() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	OPERATINGSYSTEMSIMULATOR_API UClass* Z_Construct_UClass_UOperatingSystemDirectory_NoRegister();
	OPERATINGSYSTEMSIMULATOR_API UClass* Z_Construct_UClass_UOperatingSystemExplorerInterface_NoRegister();
	OPERATINGSYSTEMSIMULATOR_API UClass* Z_Construct_UClass_UOperatingSystemFile_NoRegister();
	OPERATINGSYSTEMSIMULATOR_API UClass* Z_Construct_UClass_UOperatingSystemPartition();
	OPERATINGSYSTEMSIMULATOR_API UClass* Z_Construct_UClass_UOperatingSystemPartition_NoRegister();
	OPERATINGSYSTEMSIMULATOR_API UScriptStruct* Z_Construct_UScriptStruct_FOperatingSystemUniqueId();
	UPackage* Z_Construct_UPackage__Script_OperatingSystemSimulator();
// End Cross Module References
	DEFINE_FUNCTION(UOperatingSystemPartition::execSetDiskDisplayName)
	{
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_NewName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDiskDisplayName(Z_Param_Out_NewName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOperatingSystemPartition::execGetAllFiles)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_WithExtension);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UOperatingSystemFile*>*)Z_Param__Result=P_THIS->GetAllFiles(Z_Param_WithExtension);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOperatingSystemPartition::execGetChildDirectory)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_TargetChildDirectoryName);
		P_GET_UBOOL(Z_Param_bRecursive);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TScriptInterface<IOperatingSystemExplorerInterface>*)Z_Param__Result=P_THIS->GetChildDirectory(Z_Param_TargetChildDirectoryName,Z_Param_bRecursive);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOperatingSystemPartition::execFindDirectoryByTag)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_DirectoryTag);
		P_GET_UBOOL(Z_Param_bRecursive);
		P_GET_OBJECT_REF(UOperatingSystemDirectory,Z_Param_Out_OutDirectory);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->FindDirectoryByTag(Z_Param_DirectoryTag,Z_Param_bRecursive,Z_Param_Out_OutDirectory);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOperatingSystemPartition::execGetInterfaceDisplayName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=P_THIS->GetInterfaceDisplayName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOperatingSystemPartition::execIsPartition)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsPartition();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOperatingSystemPartition::execGetParentExplorerInterface)
	{
		P_GET_TINTERFACE_REF(IOperatingSystemExplorerInterface,Z_Param_Out_OutInterface);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetParentExplorerInterface(Z_Param_Out_OutInterface);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOperatingSystemPartition::execGetChildDirectories)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UOperatingSystemDirectory*>*)Z_Param__Result=P_THIS->GetChildDirectories();
		P_NATIVE_END;
	}
	void UOperatingSystemPartition::StaticRegisterNativesUOperatingSystemPartition()
	{
		UClass* Class = UOperatingSystemPartition::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FindDirectoryByTag", &UOperatingSystemPartition::execFindDirectoryByTag },
			{ "GetAllFiles", &UOperatingSystemPartition::execGetAllFiles },
			{ "GetChildDirectories", &UOperatingSystemPartition::execGetChildDirectories },
			{ "GetChildDirectory", &UOperatingSystemPartition::execGetChildDirectory },
			{ "GetInterfaceDisplayName", &UOperatingSystemPartition::execGetInterfaceDisplayName },
			{ "GetParentExplorerInterface", &UOperatingSystemPartition::execGetParentExplorerInterface },
			{ "IsPartition", &UOperatingSystemPartition::execIsPartition },
			{ "SetDiskDisplayName", &UOperatingSystemPartition::execSetDiskDisplayName },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOperatingSystemPartition_FindDirectoryByTag_Statics
	{
		struct OperatingSystemPartition_eventFindDirectoryByTag_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemPartition_FindDirectoryByTag_Statics::NewProp_DirectoryTag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOperatingSystemPartition_FindDirectoryByTag_Statics::NewProp_DirectoryTag = { "DirectoryTag", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystemPartition_eventFindDirectoryByTag_Parms, DirectoryTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemPartition_FindDirectoryByTag_Statics::NewProp_DirectoryTag_MetaData), Z_Construct_UFunction_UOperatingSystemPartition_FindDirectoryByTag_Statics::NewProp_DirectoryTag_MetaData) }; // 2083603574
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemPartition_FindDirectoryByTag_Statics::NewProp_bRecursive_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UOperatingSystemPartition_FindDirectoryByTag_Statics::NewProp_bRecursive_SetBit(void* Obj)
	{
		((OperatingSystemPartition_eventFindDirectoryByTag_Parms*)Obj)->bRecursive = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOperatingSystemPartition_FindDirectoryByTag_Statics::NewProp_bRecursive = { "bRecursive", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OperatingSystemPartition_eventFindDirectoryByTag_Parms), &Z_Construct_UFunction_UOperatingSystemPartition_FindDirectoryByTag_Statics::NewProp_bRecursive_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemPartition_FindDirectoryByTag_Statics::NewProp_bRecursive_MetaData), Z_Construct_UFunction_UOperatingSystemPartition_FindDirectoryByTag_Statics::NewProp_bRecursive_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOperatingSystemPartition_FindDirectoryByTag_Statics::NewProp_OutDirectory = { "OutDirectory", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystemPartition_eventFindDirectoryByTag_Parms, OutDirectory), Z_Construct_UClass_UOperatingSystemDirectory_NoRegister, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UOperatingSystemPartition_FindDirectoryByTag_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OperatingSystemPartition_eventFindDirectoryByTag_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOperatingSystemPartition_FindDirectoryByTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OperatingSystemPartition_eventFindDirectoryByTag_Parms), &Z_Construct_UFunction_UOperatingSystemPartition_FindDirectoryByTag_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOperatingSystemPartition_FindDirectoryByTag_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemPartition_FindDirectoryByTag_Statics::NewProp_DirectoryTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemPartition_FindDirectoryByTag_Statics::NewProp_bRecursive,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemPartition_FindDirectoryByTag_Statics::NewProp_OutDirectory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemPartition_FindDirectoryByTag_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemPartition_FindDirectoryByTag_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/OperatingSystemPartition.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOperatingSystemPartition_FindDirectoryByTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOperatingSystemPartition, nullptr, "FindDirectoryByTag", nullptr, nullptr, Z_Construct_UFunction_UOperatingSystemPartition_FindDirectoryByTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemPartition_FindDirectoryByTag_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOperatingSystemPartition_FindDirectoryByTag_Statics::OperatingSystemPartition_eventFindDirectoryByTag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemPartition_FindDirectoryByTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOperatingSystemPartition_FindDirectoryByTag_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemPartition_FindDirectoryByTag_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOperatingSystemPartition_FindDirectoryByTag_Statics::OperatingSystemPartition_eventFindDirectoryByTag_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOperatingSystemPartition_FindDirectoryByTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOperatingSystemPartition_FindDirectoryByTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOperatingSystemPartition_GetAllFiles_Statics
	{
		struct OperatingSystemPartition_eventGetAllFiles_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemPartition_GetAllFiles_Statics::NewProp_WithExtension_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOperatingSystemPartition_GetAllFiles_Statics::NewProp_WithExtension = { "WithExtension", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystemPartition_eventGetAllFiles_Parms, WithExtension), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemPartition_GetAllFiles_Statics::NewProp_WithExtension_MetaData), Z_Construct_UFunction_UOperatingSystemPartition_GetAllFiles_Statics::NewProp_WithExtension_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOperatingSystemPartition_GetAllFiles_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UOperatingSystemFile_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOperatingSystemPartition_GetAllFiles_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystemPartition_eventGetAllFiles_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOperatingSystemPartition_GetAllFiles_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemPartition_GetAllFiles_Statics::NewProp_WithExtension,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemPartition_GetAllFiles_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemPartition_GetAllFiles_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemPartition_GetAllFiles_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/OperatingSystemPartition.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOperatingSystemPartition_GetAllFiles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOperatingSystemPartition, nullptr, "GetAllFiles", nullptr, nullptr, Z_Construct_UFunction_UOperatingSystemPartition_GetAllFiles_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemPartition_GetAllFiles_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOperatingSystemPartition_GetAllFiles_Statics::OperatingSystemPartition_eventGetAllFiles_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemPartition_GetAllFiles_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOperatingSystemPartition_GetAllFiles_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemPartition_GetAllFiles_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOperatingSystemPartition_GetAllFiles_Statics::OperatingSystemPartition_eventGetAllFiles_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOperatingSystemPartition_GetAllFiles()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOperatingSystemPartition_GetAllFiles_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOperatingSystemPartition_GetChildDirectories_Statics
	{
		struct OperatingSystemPartition_eventGetChildDirectories_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOperatingSystemPartition_GetChildDirectories_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UOperatingSystemDirectory_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOperatingSystemPartition_GetChildDirectories_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystemPartition_eventGetChildDirectories_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOperatingSystemPartition_GetChildDirectories_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemPartition_GetChildDirectories_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemPartition_GetChildDirectories_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemPartition_GetChildDirectories_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// IOperatingSystemExplorerInterface functions\n" },
		{ "ModuleRelativePath", "Public/Core/OperatingSystemPartition.h" },
		{ "ToolTip", "IOperatingSystemExplorerInterface functions" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOperatingSystemPartition_GetChildDirectories_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOperatingSystemPartition, nullptr, "GetChildDirectories", nullptr, nullptr, Z_Construct_UFunction_UOperatingSystemPartition_GetChildDirectories_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemPartition_GetChildDirectories_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOperatingSystemPartition_GetChildDirectories_Statics::OperatingSystemPartition_eventGetChildDirectories_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemPartition_GetChildDirectories_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOperatingSystemPartition_GetChildDirectories_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemPartition_GetChildDirectories_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOperatingSystemPartition_GetChildDirectories_Statics::OperatingSystemPartition_eventGetChildDirectories_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOperatingSystemPartition_GetChildDirectories()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOperatingSystemPartition_GetChildDirectories_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOperatingSystemPartition_GetChildDirectory_Statics
	{
		struct OperatingSystemPartition_eventGetChildDirectory_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemPartition_GetChildDirectory_Statics::NewProp_TargetChildDirectoryName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOperatingSystemPartition_GetChildDirectory_Statics::NewProp_TargetChildDirectoryName = { "TargetChildDirectoryName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystemPartition_eventGetChildDirectory_Parms, TargetChildDirectoryName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemPartition_GetChildDirectory_Statics::NewProp_TargetChildDirectoryName_MetaData), Z_Construct_UFunction_UOperatingSystemPartition_GetChildDirectory_Statics::NewProp_TargetChildDirectoryName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemPartition_GetChildDirectory_Statics::NewProp_bRecursive_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UOperatingSystemPartition_GetChildDirectory_Statics::NewProp_bRecursive_SetBit(void* Obj)
	{
		((OperatingSystemPartition_eventGetChildDirectory_Parms*)Obj)->bRecursive = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOperatingSystemPartition_GetChildDirectory_Statics::NewProp_bRecursive = { "bRecursive", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OperatingSystemPartition_eventGetChildDirectory_Parms), &Z_Construct_UFunction_UOperatingSystemPartition_GetChildDirectory_Statics::NewProp_bRecursive_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemPartition_GetChildDirectory_Statics::NewProp_bRecursive_MetaData), Z_Construct_UFunction_UOperatingSystemPartition_GetChildDirectory_Statics::NewProp_bRecursive_MetaData) };
	const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UOperatingSystemPartition_GetChildDirectory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystemPartition_eventGetChildDirectory_Parms, ReturnValue), Z_Construct_UClass_UOperatingSystemExplorerInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOperatingSystemPartition_GetChildDirectory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemPartition_GetChildDirectory_Statics::NewProp_TargetChildDirectoryName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemPartition_GetChildDirectory_Statics::NewProp_bRecursive,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemPartition_GetChildDirectory_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemPartition_GetChildDirectory_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/OperatingSystemPartition.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOperatingSystemPartition_GetChildDirectory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOperatingSystemPartition, nullptr, "GetChildDirectory", nullptr, nullptr, Z_Construct_UFunction_UOperatingSystemPartition_GetChildDirectory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemPartition_GetChildDirectory_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOperatingSystemPartition_GetChildDirectory_Statics::OperatingSystemPartition_eventGetChildDirectory_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemPartition_GetChildDirectory_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOperatingSystemPartition_GetChildDirectory_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemPartition_GetChildDirectory_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOperatingSystemPartition_GetChildDirectory_Statics::OperatingSystemPartition_eventGetChildDirectory_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOperatingSystemPartition_GetChildDirectory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOperatingSystemPartition_GetChildDirectory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOperatingSystemPartition_GetInterfaceDisplayName_Statics
	{
		struct OperatingSystemPartition_eventGetInterfaceDisplayName_Parms
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
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UOperatingSystemPartition_GetInterfaceDisplayName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystemPartition_eventGetInterfaceDisplayName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOperatingSystemPartition_GetInterfaceDisplayName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemPartition_GetInterfaceDisplayName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemPartition_GetInterfaceDisplayName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/OperatingSystemPartition.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOperatingSystemPartition_GetInterfaceDisplayName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOperatingSystemPartition, nullptr, "GetInterfaceDisplayName", nullptr, nullptr, Z_Construct_UFunction_UOperatingSystemPartition_GetInterfaceDisplayName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemPartition_GetInterfaceDisplayName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOperatingSystemPartition_GetInterfaceDisplayName_Statics::OperatingSystemPartition_eventGetInterfaceDisplayName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemPartition_GetInterfaceDisplayName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOperatingSystemPartition_GetInterfaceDisplayName_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemPartition_GetInterfaceDisplayName_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOperatingSystemPartition_GetInterfaceDisplayName_Statics::OperatingSystemPartition_eventGetInterfaceDisplayName_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOperatingSystemPartition_GetInterfaceDisplayName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOperatingSystemPartition_GetInterfaceDisplayName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOperatingSystemPartition_GetParentExplorerInterface_Statics
	{
		struct OperatingSystemPartition_eventGetParentExplorerInterface_Parms
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
	const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UOperatingSystemPartition_GetParentExplorerInterface_Statics::NewProp_OutInterface = { "OutInterface", nullptr, (EPropertyFlags)0x0014000000000180, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystemPartition_eventGetParentExplorerInterface_Parms, OutInterface), Z_Construct_UClass_UOperatingSystemExplorerInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOperatingSystemPartition_GetParentExplorerInterface_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemPartition_GetParentExplorerInterface_Statics::NewProp_OutInterface,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemPartition_GetParentExplorerInterface_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/OperatingSystemPartition.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOperatingSystemPartition_GetParentExplorerInterface_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOperatingSystemPartition, nullptr, "GetParentExplorerInterface", nullptr, nullptr, Z_Construct_UFunction_UOperatingSystemPartition_GetParentExplorerInterface_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemPartition_GetParentExplorerInterface_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOperatingSystemPartition_GetParentExplorerInterface_Statics::OperatingSystemPartition_eventGetParentExplorerInterface_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemPartition_GetParentExplorerInterface_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOperatingSystemPartition_GetParentExplorerInterface_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemPartition_GetParentExplorerInterface_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOperatingSystemPartition_GetParentExplorerInterface_Statics::OperatingSystemPartition_eventGetParentExplorerInterface_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOperatingSystemPartition_GetParentExplorerInterface()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOperatingSystemPartition_GetParentExplorerInterface_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOperatingSystemPartition_IsPartition_Statics
	{
		struct OperatingSystemPartition_eventIsPartition_Parms
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
	void Z_Construct_UFunction_UOperatingSystemPartition_IsPartition_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OperatingSystemPartition_eventIsPartition_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOperatingSystemPartition_IsPartition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OperatingSystemPartition_eventIsPartition_Parms), &Z_Construct_UFunction_UOperatingSystemPartition_IsPartition_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOperatingSystemPartition_IsPartition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemPartition_IsPartition_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemPartition_IsPartition_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/OperatingSystemPartition.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOperatingSystemPartition_IsPartition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOperatingSystemPartition, nullptr, "IsPartition", nullptr, nullptr, Z_Construct_UFunction_UOperatingSystemPartition_IsPartition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemPartition_IsPartition_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOperatingSystemPartition_IsPartition_Statics::OperatingSystemPartition_eventIsPartition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemPartition_IsPartition_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOperatingSystemPartition_IsPartition_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemPartition_IsPartition_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOperatingSystemPartition_IsPartition_Statics::OperatingSystemPartition_eventIsPartition_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOperatingSystemPartition_IsPartition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOperatingSystemPartition_IsPartition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOperatingSystemPartition_SetDiskDisplayName_Statics
	{
		struct OperatingSystemPartition_eventSetDiskDisplayName_Parms
		{
			FText NewName;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewName_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_NewName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemPartition_SetDiskDisplayName_Statics::NewProp_NewName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UOperatingSystemPartition_SetDiskDisplayName_Statics::NewProp_NewName = { "NewName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystemPartition_eventSetDiskDisplayName_Parms, NewName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemPartition_SetDiskDisplayName_Statics::NewProp_NewName_MetaData), Z_Construct_UFunction_UOperatingSystemPartition_SetDiskDisplayName_Statics::NewProp_NewName_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOperatingSystemPartition_SetDiskDisplayName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemPartition_SetDiskDisplayName_Statics::NewProp_NewName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemPartition_SetDiskDisplayName_Statics::Function_MetaDataParams[] = {
		{ "Category", "OperatingSystemPartition" },
		{ "ModuleRelativePath", "Public/Core/OperatingSystemPartition.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOperatingSystemPartition_SetDiskDisplayName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOperatingSystemPartition, nullptr, "SetDiskDisplayName", nullptr, nullptr, Z_Construct_UFunction_UOperatingSystemPartition_SetDiskDisplayName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemPartition_SetDiskDisplayName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOperatingSystemPartition_SetDiskDisplayName_Statics::OperatingSystemPartition_eventSetDiskDisplayName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemPartition_SetDiskDisplayName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOperatingSystemPartition_SetDiskDisplayName_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemPartition_SetDiskDisplayName_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOperatingSystemPartition_SetDiskDisplayName_Statics::OperatingSystemPartition_eventSetDiskDisplayName_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOperatingSystemPartition_SetDiskDisplayName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOperatingSystemPartition_SetDiskDisplayName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOperatingSystemPartition);
	UClass* Z_Construct_UClass_UOperatingSystemPartition_NoRegister()
	{
		return UOperatingSystemPartition::StaticClass();
	}
	struct Z_Construct_UClass_UOperatingSystemPartition_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Directories_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Directories_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Directories;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DiskName_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_DiskName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DiskDisplayName_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_DiskDisplayName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TotalSizeInBytes_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_TotalSizeInBytes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FreeSpaceInBytes_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_FreeSpaceInBytes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsSystemPartition_MetaData[];
#endif
		static void NewProp_bIsSystemPartition_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsSystemPartition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PartitionID_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PartitionID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DiskLetter_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_DiskLetter;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Files_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Files_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Files;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOperatingSystemPartition_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_OperatingSystemSimulator,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemPartition_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UOperatingSystemPartition_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOperatingSystemPartition_FindDirectoryByTag, "FindDirectoryByTag" }, // 2061652405
		{ &Z_Construct_UFunction_UOperatingSystemPartition_GetAllFiles, "GetAllFiles" }, // 2155871022
		{ &Z_Construct_UFunction_UOperatingSystemPartition_GetChildDirectories, "GetChildDirectories" }, // 2580890668
		{ &Z_Construct_UFunction_UOperatingSystemPartition_GetChildDirectory, "GetChildDirectory" }, // 83670347
		{ &Z_Construct_UFunction_UOperatingSystemPartition_GetInterfaceDisplayName, "GetInterfaceDisplayName" }, // 2264365084
		{ &Z_Construct_UFunction_UOperatingSystemPartition_GetParentExplorerInterface, "GetParentExplorerInterface" }, // 53909248
		{ &Z_Construct_UFunction_UOperatingSystemPartition_IsPartition, "IsPartition" }, // 1488113125
		{ &Z_Construct_UFunction_UOperatingSystemPartition_SetDiskDisplayName, "SetDiskDisplayName" }, // 131084790
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemPartition_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOperatingSystemPartition_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Core/OperatingSystemPartition.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/Core/OperatingSystemPartition.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UOperatingSystemPartition_Statics::NewProp_Directories_Inner = { "Directories", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UOperatingSystemDirectory_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOperatingSystemPartition_Statics::NewProp_Directories_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/OperatingSystemPartition.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UOperatingSystemPartition_Statics::NewProp_Directories = { "Directories", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOperatingSystemPartition, Directories), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemPartition_Statics::NewProp_Directories_MetaData), Z_Construct_UClass_UOperatingSystemPartition_Statics::NewProp_Directories_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOperatingSystemPartition_Statics::NewProp_DiskName_MetaData[] = {
		{ "Category", "OperatingSystemPartition" },
		{ "ModuleRelativePath", "Public/Core/OperatingSystemPartition.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UOperatingSystemPartition_Statics::NewProp_DiskName = { "DiskName", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOperatingSystemPartition, DiskName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemPartition_Statics::NewProp_DiskName_MetaData), Z_Construct_UClass_UOperatingSystemPartition_Statics::NewProp_DiskName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOperatingSystemPartition_Statics::NewProp_DiskDisplayName_MetaData[] = {
		{ "Category", "OperatingSystemPartition" },
		{ "ModuleRelativePath", "Public/Core/OperatingSystemPartition.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UOperatingSystemPartition_Statics::NewProp_DiskDisplayName = { "DiskDisplayName", nullptr, (EPropertyFlags)0x0020080000002014, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOperatingSystemPartition, DiskDisplayName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemPartition_Statics::NewProp_DiskDisplayName_MetaData), Z_Construct_UClass_UOperatingSystemPartition_Statics::NewProp_DiskDisplayName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOperatingSystemPartition_Statics::NewProp_TotalSizeInBytes_MetaData[] = {
		{ "Category", "OperatingSystemPartition" },
		{ "Comment", "/** Total size of this partition */" },
		{ "ModuleRelativePath", "Public/Core/OperatingSystemPartition.h" },
		{ "ToolTip", "Total size of this partition" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UOperatingSystemPartition_Statics::NewProp_TotalSizeInBytes = { "TotalSizeInBytes", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOperatingSystemPartition, TotalSizeInBytes), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemPartition_Statics::NewProp_TotalSizeInBytes_MetaData), Z_Construct_UClass_UOperatingSystemPartition_Statics::NewProp_TotalSizeInBytes_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOperatingSystemPartition_Statics::NewProp_FreeSpaceInBytes_MetaData[] = {
		{ "Category", "OperatingSystemPartition" },
		{ "Comment", "/** Free space in this partition */" },
		{ "ModuleRelativePath", "Public/Core/OperatingSystemPartition.h" },
		{ "ToolTip", "Free space in this partition" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UOperatingSystemPartition_Statics::NewProp_FreeSpaceInBytes = { "FreeSpaceInBytes", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOperatingSystemPartition, FreeSpaceInBytes), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemPartition_Statics::NewProp_FreeSpaceInBytes_MetaData), Z_Construct_UClass_UOperatingSystemPartition_Statics::NewProp_FreeSpaceInBytes_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOperatingSystemPartition_Statics::NewProp_bIsSystemPartition_MetaData[] = {
		{ "Category", "OperatingSystemPartition" },
		{ "ModuleRelativePath", "Public/Core/OperatingSystemPartition.h" },
	};
#endif
	void Z_Construct_UClass_UOperatingSystemPartition_Statics::NewProp_bIsSystemPartition_SetBit(void* Obj)
	{
		((UOperatingSystemPartition*)Obj)->bIsSystemPartition = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOperatingSystemPartition_Statics::NewProp_bIsSystemPartition = { "bIsSystemPartition", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOperatingSystemPartition), &Z_Construct_UClass_UOperatingSystemPartition_Statics::NewProp_bIsSystemPartition_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemPartition_Statics::NewProp_bIsSystemPartition_MetaData), Z_Construct_UClass_UOperatingSystemPartition_Statics::NewProp_bIsSystemPartition_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOperatingSystemPartition_Statics::NewProp_PartitionID_MetaData[] = {
		{ "Category", "OperatingSystemPartition" },
		{ "ModuleRelativePath", "Public/Core/OperatingSystemPartition.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOperatingSystemPartition_Statics::NewProp_PartitionID = { "PartitionID", nullptr, (EPropertyFlags)0x0020080000002014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOperatingSystemPartition, PartitionID), Z_Construct_UScriptStruct_FOperatingSystemUniqueId, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemPartition_Statics::NewProp_PartitionID_MetaData), Z_Construct_UClass_UOperatingSystemPartition_Statics::NewProp_PartitionID_MetaData) }; // 2242450855
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOperatingSystemPartition_Statics::NewProp_DiskLetter_MetaData[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Public/Core/OperatingSystemPartition.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UOperatingSystemPartition_Statics::NewProp_DiskLetter = { "DiskLetter", nullptr, (EPropertyFlags)0x0020080000022815, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOperatingSystemPartition, DiskLetter), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemPartition_Statics::NewProp_DiskLetter_MetaData), Z_Construct_UClass_UOperatingSystemPartition_Statics::NewProp_DiskLetter_MetaData) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UOperatingSystemPartition_Statics::NewProp_Files_Inner = { "Files", nullptr, (EPropertyFlags)0x0004000000020000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UOperatingSystemFile_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOperatingSystemPartition_Statics::NewProp_Files_MetaData[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Public/Core/OperatingSystemPartition.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UOperatingSystemPartition_Statics::NewProp_Files = { "Files", nullptr, (EPropertyFlags)0x0024080000022815, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOperatingSystemPartition, Files), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemPartition_Statics::NewProp_Files_MetaData), Z_Construct_UClass_UOperatingSystemPartition_Statics::NewProp_Files_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOperatingSystemPartition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOperatingSystemPartition_Statics::NewProp_Directories_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOperatingSystemPartition_Statics::NewProp_Directories,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOperatingSystemPartition_Statics::NewProp_DiskName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOperatingSystemPartition_Statics::NewProp_DiskDisplayName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOperatingSystemPartition_Statics::NewProp_TotalSizeInBytes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOperatingSystemPartition_Statics::NewProp_FreeSpaceInBytes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOperatingSystemPartition_Statics::NewProp_bIsSystemPartition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOperatingSystemPartition_Statics::NewProp_PartitionID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOperatingSystemPartition_Statics::NewProp_DiskLetter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOperatingSystemPartition_Statics::NewProp_Files_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOperatingSystemPartition_Statics::NewProp_Files,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UOperatingSystemPartition_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UOperatingSystemExplorerInterface_NoRegister, (int32)VTABLE_OFFSET(UOperatingSystemPartition, IOperatingSystemExplorerInterface), false },  // 4262244150
		};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemPartition_Statics::InterfaceParams) < 64);
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOperatingSystemPartition_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOperatingSystemPartition>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOperatingSystemPartition_Statics::ClassParams = {
		&UOperatingSystemPartition::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UOperatingSystemPartition_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemPartition_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x000000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemPartition_Statics::Class_MetaDataParams), Z_Construct_UClass_UOperatingSystemPartition_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemPartition_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UOperatingSystemPartition()
	{
		if (!Z_Registration_Info_UClass_UOperatingSystemPartition.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOperatingSystemPartition.OuterSingleton, Z_Construct_UClass_UOperatingSystemPartition_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOperatingSystemPartition.OuterSingleton;
	}
	template<> OPERATINGSYSTEMSIMULATOR_API UClass* StaticClass<UOperatingSystemPartition>()
	{
		return UOperatingSystemPartition::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOperatingSystemPartition);
	UOperatingSystemPartition::~UOperatingSystemPartition() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Core_OperatingSystemPartition_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Core_OperatingSystemPartition_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOperatingSystemPartition, UOperatingSystemPartition::StaticClass, TEXT("UOperatingSystemPartition"), &Z_Registration_Info_UClass_UOperatingSystemPartition, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOperatingSystemPartition), 298368603U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Core_OperatingSystemPartition_h_813275931(TEXT("/Script/OperatingSystemSimulator"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Core_OperatingSystemPartition_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Core_OperatingSystemPartition_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
