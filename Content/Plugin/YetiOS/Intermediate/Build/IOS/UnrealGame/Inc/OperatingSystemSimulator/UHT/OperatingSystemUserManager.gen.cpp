// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OperatingSystemSimulator/Public/Core/OperatingSystemUserManager.h"
#include "OperatingSystemSimulator/Public/OperatingSystemTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOperatingSystemUserManager() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_USaveGame();
	OPERATINGSYSTEMSIMULATOR_API UClass* Z_Construct_UClass_UOperatingSystem_NoRegister();
	OPERATINGSYSTEMSIMULATOR_API UClass* Z_Construct_UClass_UOperatingSystemUserManager();
	OPERATINGSYSTEMSIMULATOR_API UClass* Z_Construct_UClass_UOperatingSystemUserManager_NoRegister();
	OPERATINGSYSTEMSIMULATOR_API UScriptStruct* Z_Construct_UScriptStruct_FOperatingSystemUser();
	OPERATINGSYSTEMSIMULATOR_API UScriptStruct* Z_Construct_UScriptStruct_FOperatingSystemUserManagerSaveData();
	UPackage* Z_Construct_UPackage__Script_OperatingSystemSimulator();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OperatingSystemUserManagerSaveData;
class UScriptStruct* FOperatingSystemUserManagerSaveData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OperatingSystemUserManagerSaveData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OperatingSystemUserManagerSaveData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOperatingSystemUserManagerSaveData, (UObject*)Z_Construct_UPackage__Script_OperatingSystemSimulator(), TEXT("OperatingSystemUserManagerSaveData"));
	}
	return Z_Registration_Info_UScriptStruct_OperatingSystemUserManagerSaveData.OuterSingleton;
}
template<> OPERATINGSYSTEMSIMULATOR_API UScriptStruct* StaticStruct<FOperatingSystemUserManagerSaveData>()
{
	return FOperatingSystemUserManagerSaveData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FOperatingSystemUserManagerSaveData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_Users_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Users_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_Users;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOperatingSystemUserManagerSaveData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/OperatingSystemUserManager.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOperatingSystemUserManagerSaveData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOperatingSystemUserManagerSaveData>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOperatingSystemUserManagerSaveData_Statics::NewProp_Users_ElementProp = { "Users", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FOperatingSystemUser, METADATA_PARAMS(0, nullptr) }; // 1295920940
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOperatingSystemUserManagerSaveData_Statics::NewProp_Users_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/OperatingSystemUserManager.h" },
	};
#endif
	static_assert(TModels_V<CGetTypeHashable, FOperatingSystemUser>, "The structure 'FOperatingSystemUser' is used in a TSet but does not have a GetValueTypeHash defined");
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UScriptStruct_FOperatingSystemUserManagerSaveData_Statics::NewProp_Users = { "Users", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOperatingSystemUserManagerSaveData, Users), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOperatingSystemUserManagerSaveData_Statics::NewProp_Users_MetaData), Z_Construct_UScriptStruct_FOperatingSystemUserManagerSaveData_Statics::NewProp_Users_MetaData) }; // 1295920940
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOperatingSystemUserManagerSaveData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOperatingSystemUserManagerSaveData_Statics::NewProp_Users_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOperatingSystemUserManagerSaveData_Statics::NewProp_Users,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOperatingSystemUserManagerSaveData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OperatingSystemSimulator,
		nullptr,
		&NewStructOps,
		"OperatingSystemUserManagerSaveData",
		Z_Construct_UScriptStruct_FOperatingSystemUserManagerSaveData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOperatingSystemUserManagerSaveData_Statics::PropPointers),
		sizeof(FOperatingSystemUserManagerSaveData),
		alignof(FOperatingSystemUserManagerSaveData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOperatingSystemUserManagerSaveData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOperatingSystemUserManagerSaveData_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOperatingSystemUserManagerSaveData_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FOperatingSystemUserManagerSaveData()
	{
		if (!Z_Registration_Info_UScriptStruct_OperatingSystemUserManagerSaveData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OperatingSystemUserManagerSaveData.InnerSingleton, Z_Construct_UScriptStruct_FOperatingSystemUserManagerSaveData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_OperatingSystemUserManagerSaveData.InnerSingleton;
	}
	DEFINE_FUNCTION(UOperatingSystemUserManager::execUpdateUserDetails)
	{
		P_GET_STRUCT_REF(FOperatingSystemUser,Z_Param_Out_TargetUser);
		P_GET_STRUCT_REF(FOperatingSystemUser,Z_Param_Out_UpdatedDetails);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->UpdateUserDetails(Z_Param_Out_TargetUser,Z_Param_Out_UpdatedDetails);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOperatingSystemUserManager::execCheckUserExist)
	{
		P_GET_STRUCT_REF(FOperatingSystemUser,Z_Param_Out_TestUser);
		P_GET_UBOOL(Z_Param_bCheckByUsernameOnly);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CheckUserExist(Z_Param_Out_TestUser,Z_Param_bCheckByUsernameOnly);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOperatingSystemUserManager::execCheckUserExistForOperatingSystem)
	{
		P_GET_OBJECT(UOperatingSystem,Z_Param_TargetOS);
		P_GET_STRUCT_REF(FOperatingSystemUser,Z_Param_Out_TestUser);
		P_GET_UBOOL(Z_Param_bCheckByUsernameOnly);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CheckUserExistForOperatingSystem(Z_Param_TargetOS,Z_Param_Out_TestUser,Z_Param_bCheckByUsernameOnly);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOperatingSystemUserManager::execFindUserByUsername)
	{
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_TestUsername);
		P_GET_STRUCT_REF(FOperatingSystemUser,Z_Param_Out_OutUser);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->FindUserByUsername(Z_Param_Out_TestUsername,Z_Param_Out_OutUser);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOperatingSystemUserManager::execFindUserByEmail)
	{
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_TestEmail);
		P_GET_STRUCT_REF(FOperatingSystemUser,Z_Param_Out_OutUser);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->FindUserByEmail(Z_Param_Out_TestEmail,Z_Param_Out_OutUser);
		P_NATIVE_END;
	}
	struct OperatingSystemUserManager_eventK2_OnUserCreated_Parms
	{
		FOperatingSystemUser CreatedUser;
	};
	struct OperatingSystemUserManager_eventK2_OnUserUpdated_Parms
	{
		FOperatingSystemUser TargetUser;
		FOperatingSystemUser UpdatedDetails;
	};
	static FName NAME_UOperatingSystemUserManager_K2_OnUserCreated = FName(TEXT("K2_OnUserCreated"));
	void UOperatingSystemUserManager::K2_OnUserCreated(FOperatingSystemUser const& CreatedUser)
	{
		OperatingSystemUserManager_eventK2_OnUserCreated_Parms Parms;
		Parms.CreatedUser=CreatedUser;
		ProcessEvent(FindFunctionChecked(NAME_UOperatingSystemUserManager_K2_OnUserCreated),&Parms);
	}
	static FName NAME_UOperatingSystemUserManager_K2_OnUserUpdated = FName(TEXT("K2_OnUserUpdated"));
	void UOperatingSystemUserManager::K2_OnUserUpdated(FOperatingSystemUser& TargetUser, FOperatingSystemUser const& UpdatedDetails)
	{
		OperatingSystemUserManager_eventK2_OnUserUpdated_Parms Parms;
		Parms.TargetUser=TargetUser;
		Parms.UpdatedDetails=UpdatedDetails;
		ProcessEvent(FindFunctionChecked(NAME_UOperatingSystemUserManager_K2_OnUserUpdated),&Parms);
		TargetUser=Parms.TargetUser;
	}
	void UOperatingSystemUserManager::StaticRegisterNativesUOperatingSystemUserManager()
	{
		UClass* Class = UOperatingSystemUserManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CheckUserExist", &UOperatingSystemUserManager::execCheckUserExist },
			{ "CheckUserExistForOperatingSystem", &UOperatingSystemUserManager::execCheckUserExistForOperatingSystem },
			{ "FindUserByEmail", &UOperatingSystemUserManager::execFindUserByEmail },
			{ "FindUserByUsername", &UOperatingSystemUserManager::execFindUserByUsername },
			{ "UpdateUserDetails", &UOperatingSystemUserManager::execUpdateUserDetails },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOperatingSystemUserManager_CheckUserExist_Statics
	{
		struct OperatingSystemUserManager_eventCheckUserExist_Parms
		{
			FOperatingSystemUser TestUser;
			bool bCheckByUsernameOnly;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TestUser_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TestUser;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCheckByUsernameOnly_MetaData[];
#endif
		static void NewProp_bCheckByUsernameOnly_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCheckByUsernameOnly;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemUserManager_CheckUserExist_Statics::NewProp_TestUser_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOperatingSystemUserManager_CheckUserExist_Statics::NewProp_TestUser = { "TestUser", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystemUserManager_eventCheckUserExist_Parms, TestUser), Z_Construct_UScriptStruct_FOperatingSystemUser, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemUserManager_CheckUserExist_Statics::NewProp_TestUser_MetaData), Z_Construct_UFunction_UOperatingSystemUserManager_CheckUserExist_Statics::NewProp_TestUser_MetaData) }; // 1295920940
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemUserManager_CheckUserExist_Statics::NewProp_bCheckByUsernameOnly_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UOperatingSystemUserManager_CheckUserExist_Statics::NewProp_bCheckByUsernameOnly_SetBit(void* Obj)
	{
		((OperatingSystemUserManager_eventCheckUserExist_Parms*)Obj)->bCheckByUsernameOnly = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOperatingSystemUserManager_CheckUserExist_Statics::NewProp_bCheckByUsernameOnly = { "bCheckByUsernameOnly", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OperatingSystemUserManager_eventCheckUserExist_Parms), &Z_Construct_UFunction_UOperatingSystemUserManager_CheckUserExist_Statics::NewProp_bCheckByUsernameOnly_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemUserManager_CheckUserExist_Statics::NewProp_bCheckByUsernameOnly_MetaData), Z_Construct_UFunction_UOperatingSystemUserManager_CheckUserExist_Statics::NewProp_bCheckByUsernameOnly_MetaData) };
	void Z_Construct_UFunction_UOperatingSystemUserManager_CheckUserExist_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OperatingSystemUserManager_eventCheckUserExist_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOperatingSystemUserManager_CheckUserExist_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OperatingSystemUserManager_eventCheckUserExist_Parms), &Z_Construct_UFunction_UOperatingSystemUserManager_CheckUserExist_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOperatingSystemUserManager_CheckUserExist_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemUserManager_CheckUserExist_Statics::NewProp_TestUser,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemUserManager_CheckUserExist_Statics::NewProp_bCheckByUsernameOnly,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemUserManager_CheckUserExist_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemUserManager_CheckUserExist_Statics::Function_MetaDataParams[] = {
		{ "Category", "OperatingSystemUserManager" },
		{ "Keywords", "has user, verify, does user exist" },
		{ "ModuleRelativePath", "Public/Core/OperatingSystemUserManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOperatingSystemUserManager_CheckUserExist_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOperatingSystemUserManager, nullptr, "CheckUserExist", nullptr, nullptr, Z_Construct_UFunction_UOperatingSystemUserManager_CheckUserExist_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemUserManager_CheckUserExist_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOperatingSystemUserManager_CheckUserExist_Statics::OperatingSystemUserManager_eventCheckUserExist_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemUserManager_CheckUserExist_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOperatingSystemUserManager_CheckUserExist_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemUserManager_CheckUserExist_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOperatingSystemUserManager_CheckUserExist_Statics::OperatingSystemUserManager_eventCheckUserExist_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOperatingSystemUserManager_CheckUserExist()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOperatingSystemUserManager_CheckUserExist_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOperatingSystemUserManager_CheckUserExistForOperatingSystem_Statics
	{
		struct OperatingSystemUserManager_eventCheckUserExistForOperatingSystem_Parms
		{
			const UOperatingSystem* TargetOS;
			FOperatingSystemUser TestUser;
			bool bCheckByUsernameOnly;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetOS_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetOS;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TestUser_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TestUser;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCheckByUsernameOnly_MetaData[];
#endif
		static void NewProp_bCheckByUsernameOnly_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCheckByUsernameOnly;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemUserManager_CheckUserExistForOperatingSystem_Statics::NewProp_TargetOS_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOperatingSystemUserManager_CheckUserExistForOperatingSystem_Statics::NewProp_TargetOS = { "TargetOS", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystemUserManager_eventCheckUserExistForOperatingSystem_Parms, TargetOS), Z_Construct_UClass_UOperatingSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemUserManager_CheckUserExistForOperatingSystem_Statics::NewProp_TargetOS_MetaData), Z_Construct_UFunction_UOperatingSystemUserManager_CheckUserExistForOperatingSystem_Statics::NewProp_TargetOS_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemUserManager_CheckUserExistForOperatingSystem_Statics::NewProp_TestUser_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOperatingSystemUserManager_CheckUserExistForOperatingSystem_Statics::NewProp_TestUser = { "TestUser", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystemUserManager_eventCheckUserExistForOperatingSystem_Parms, TestUser), Z_Construct_UScriptStruct_FOperatingSystemUser, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemUserManager_CheckUserExistForOperatingSystem_Statics::NewProp_TestUser_MetaData), Z_Construct_UFunction_UOperatingSystemUserManager_CheckUserExistForOperatingSystem_Statics::NewProp_TestUser_MetaData) }; // 1295920940
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemUserManager_CheckUserExistForOperatingSystem_Statics::NewProp_bCheckByUsernameOnly_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UOperatingSystemUserManager_CheckUserExistForOperatingSystem_Statics::NewProp_bCheckByUsernameOnly_SetBit(void* Obj)
	{
		((OperatingSystemUserManager_eventCheckUserExistForOperatingSystem_Parms*)Obj)->bCheckByUsernameOnly = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOperatingSystemUserManager_CheckUserExistForOperatingSystem_Statics::NewProp_bCheckByUsernameOnly = { "bCheckByUsernameOnly", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OperatingSystemUserManager_eventCheckUserExistForOperatingSystem_Parms), &Z_Construct_UFunction_UOperatingSystemUserManager_CheckUserExistForOperatingSystem_Statics::NewProp_bCheckByUsernameOnly_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemUserManager_CheckUserExistForOperatingSystem_Statics::NewProp_bCheckByUsernameOnly_MetaData), Z_Construct_UFunction_UOperatingSystemUserManager_CheckUserExistForOperatingSystem_Statics::NewProp_bCheckByUsernameOnly_MetaData) };
	void Z_Construct_UFunction_UOperatingSystemUserManager_CheckUserExistForOperatingSystem_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OperatingSystemUserManager_eventCheckUserExistForOperatingSystem_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOperatingSystemUserManager_CheckUserExistForOperatingSystem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OperatingSystemUserManager_eventCheckUserExistForOperatingSystem_Parms), &Z_Construct_UFunction_UOperatingSystemUserManager_CheckUserExistForOperatingSystem_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOperatingSystemUserManager_CheckUserExistForOperatingSystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemUserManager_CheckUserExistForOperatingSystem_Statics::NewProp_TargetOS,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemUserManager_CheckUserExistForOperatingSystem_Statics::NewProp_TestUser,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemUserManager_CheckUserExistForOperatingSystem_Statics::NewProp_bCheckByUsernameOnly,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemUserManager_CheckUserExistForOperatingSystem_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemUserManager_CheckUserExistForOperatingSystem_Statics::Function_MetaDataParams[] = {
		{ "Category", "OperatingSystemUserManager" },
		{ "Keywords", "has user, verify, does user exist" },
		{ "ModuleRelativePath", "Public/Core/OperatingSystemUserManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOperatingSystemUserManager_CheckUserExistForOperatingSystem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOperatingSystemUserManager, nullptr, "CheckUserExistForOperatingSystem", nullptr, nullptr, Z_Construct_UFunction_UOperatingSystemUserManager_CheckUserExistForOperatingSystem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemUserManager_CheckUserExistForOperatingSystem_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOperatingSystemUserManager_CheckUserExistForOperatingSystem_Statics::OperatingSystemUserManager_eventCheckUserExistForOperatingSystem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemUserManager_CheckUserExistForOperatingSystem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOperatingSystemUserManager_CheckUserExistForOperatingSystem_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemUserManager_CheckUserExistForOperatingSystem_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOperatingSystemUserManager_CheckUserExistForOperatingSystem_Statics::OperatingSystemUserManager_eventCheckUserExistForOperatingSystem_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOperatingSystemUserManager_CheckUserExistForOperatingSystem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOperatingSystemUserManager_CheckUserExistForOperatingSystem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOperatingSystemUserManager_FindUserByEmail_Statics
	{
		struct OperatingSystemUserManager_eventFindUserByEmail_Parms
		{
			FText TestEmail;
			FOperatingSystemUser OutUser;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TestEmail_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_TestEmail;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutUser;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemUserManager_FindUserByEmail_Statics::NewProp_TestEmail_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UOperatingSystemUserManager_FindUserByEmail_Statics::NewProp_TestEmail = { "TestEmail", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystemUserManager_eventFindUserByEmail_Parms, TestEmail), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemUserManager_FindUserByEmail_Statics::NewProp_TestEmail_MetaData), Z_Construct_UFunction_UOperatingSystemUserManager_FindUserByEmail_Statics::NewProp_TestEmail_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOperatingSystemUserManager_FindUserByEmail_Statics::NewProp_OutUser = { "OutUser", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystemUserManager_eventFindUserByEmail_Parms, OutUser), Z_Construct_UScriptStruct_FOperatingSystemUser, METADATA_PARAMS(0, nullptr) }; // 1295920940
	void Z_Construct_UFunction_UOperatingSystemUserManager_FindUserByEmail_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OperatingSystemUserManager_eventFindUserByEmail_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOperatingSystemUserManager_FindUserByEmail_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OperatingSystemUserManager_eventFindUserByEmail_Parms), &Z_Construct_UFunction_UOperatingSystemUserManager_FindUserByEmail_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOperatingSystemUserManager_FindUserByEmail_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemUserManager_FindUserByEmail_Statics::NewProp_TestEmail,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemUserManager_FindUserByEmail_Statics::NewProp_OutUser,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemUserManager_FindUserByEmail_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemUserManager_FindUserByEmail_Statics::Function_MetaDataParams[] = {
		{ "Category", "OperatingSystemUserManager" },
		{ "ModuleRelativePath", "Public/Core/OperatingSystemUserManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOperatingSystemUserManager_FindUserByEmail_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOperatingSystemUserManager, nullptr, "FindUserByEmail", nullptr, nullptr, Z_Construct_UFunction_UOperatingSystemUserManager_FindUserByEmail_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemUserManager_FindUserByEmail_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOperatingSystemUserManager_FindUserByEmail_Statics::OperatingSystemUserManager_eventFindUserByEmail_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemUserManager_FindUserByEmail_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOperatingSystemUserManager_FindUserByEmail_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemUserManager_FindUserByEmail_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOperatingSystemUserManager_FindUserByEmail_Statics::OperatingSystemUserManager_eventFindUserByEmail_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOperatingSystemUserManager_FindUserByEmail()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOperatingSystemUserManager_FindUserByEmail_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOperatingSystemUserManager_FindUserByUsername_Statics
	{
		struct OperatingSystemUserManager_eventFindUserByUsername_Parms
		{
			FText TestUsername;
			FOperatingSystemUser OutUser;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TestUsername_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_TestUsername;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutUser;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemUserManager_FindUserByUsername_Statics::NewProp_TestUsername_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UOperatingSystemUserManager_FindUserByUsername_Statics::NewProp_TestUsername = { "TestUsername", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystemUserManager_eventFindUserByUsername_Parms, TestUsername), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemUserManager_FindUserByUsername_Statics::NewProp_TestUsername_MetaData), Z_Construct_UFunction_UOperatingSystemUserManager_FindUserByUsername_Statics::NewProp_TestUsername_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOperatingSystemUserManager_FindUserByUsername_Statics::NewProp_OutUser = { "OutUser", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystemUserManager_eventFindUserByUsername_Parms, OutUser), Z_Construct_UScriptStruct_FOperatingSystemUser, METADATA_PARAMS(0, nullptr) }; // 1295920940
	void Z_Construct_UFunction_UOperatingSystemUserManager_FindUserByUsername_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OperatingSystemUserManager_eventFindUserByUsername_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOperatingSystemUserManager_FindUserByUsername_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OperatingSystemUserManager_eventFindUserByUsername_Parms), &Z_Construct_UFunction_UOperatingSystemUserManager_FindUserByUsername_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOperatingSystemUserManager_FindUserByUsername_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemUserManager_FindUserByUsername_Statics::NewProp_TestUsername,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemUserManager_FindUserByUsername_Statics::NewProp_OutUser,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemUserManager_FindUserByUsername_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemUserManager_FindUserByUsername_Statics::Function_MetaDataParams[] = {
		{ "Category", "OperatingSystemUserManager" },
		{ "ModuleRelativePath", "Public/Core/OperatingSystemUserManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOperatingSystemUserManager_FindUserByUsername_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOperatingSystemUserManager, nullptr, "FindUserByUsername", nullptr, nullptr, Z_Construct_UFunction_UOperatingSystemUserManager_FindUserByUsername_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemUserManager_FindUserByUsername_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOperatingSystemUserManager_FindUserByUsername_Statics::OperatingSystemUserManager_eventFindUserByUsername_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemUserManager_FindUserByUsername_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOperatingSystemUserManager_FindUserByUsername_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemUserManager_FindUserByUsername_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOperatingSystemUserManager_FindUserByUsername_Statics::OperatingSystemUserManager_eventFindUserByUsername_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOperatingSystemUserManager_FindUserByUsername()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOperatingSystemUserManager_FindUserByUsername_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOperatingSystemUserManager_K2_OnUserCreated_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CreatedUser_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CreatedUser;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemUserManager_K2_OnUserCreated_Statics::NewProp_CreatedUser_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOperatingSystemUserManager_K2_OnUserCreated_Statics::NewProp_CreatedUser = { "CreatedUser", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystemUserManager_eventK2_OnUserCreated_Parms, CreatedUser), Z_Construct_UScriptStruct_FOperatingSystemUser, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemUserManager_K2_OnUserCreated_Statics::NewProp_CreatedUser_MetaData), Z_Construct_UFunction_UOperatingSystemUserManager_K2_OnUserCreated_Statics::NewProp_CreatedUser_MetaData) }; // 1295920940
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOperatingSystemUserManager_K2_OnUserCreated_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemUserManager_K2_OnUserCreated_Statics::NewProp_CreatedUser,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemUserManager_K2_OnUserCreated_Statics::Function_MetaDataParams[] = {
		{ "Category", "OperatingSystemUserManager" },
		{ "DisplayName", "On User Created" },
		{ "ModuleRelativePath", "Public/Core/OperatingSystemUserManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOperatingSystemUserManager_K2_OnUserCreated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOperatingSystemUserManager, nullptr, "K2_OnUserCreated", nullptr, nullptr, Z_Construct_UFunction_UOperatingSystemUserManager_K2_OnUserCreated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemUserManager_K2_OnUserCreated_Statics::PropPointers), sizeof(OperatingSystemUserManager_eventK2_OnUserCreated_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08480800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemUserManager_K2_OnUserCreated_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOperatingSystemUserManager_K2_OnUserCreated_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemUserManager_K2_OnUserCreated_Statics::PropPointers) < 2048);
	static_assert(sizeof(OperatingSystemUserManager_eventK2_OnUserCreated_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOperatingSystemUserManager_K2_OnUserCreated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOperatingSystemUserManager_K2_OnUserCreated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOperatingSystemUserManager_K2_OnUserUpdated_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_TargetUser;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UpdatedDetails_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_UpdatedDetails;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOperatingSystemUserManager_K2_OnUserUpdated_Statics::NewProp_TargetUser = { "TargetUser", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystemUserManager_eventK2_OnUserUpdated_Parms, TargetUser), Z_Construct_UScriptStruct_FOperatingSystemUser, METADATA_PARAMS(0, nullptr) }; // 1295920940
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemUserManager_K2_OnUserUpdated_Statics::NewProp_UpdatedDetails_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOperatingSystemUserManager_K2_OnUserUpdated_Statics::NewProp_UpdatedDetails = { "UpdatedDetails", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystemUserManager_eventK2_OnUserUpdated_Parms, UpdatedDetails), Z_Construct_UScriptStruct_FOperatingSystemUser, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemUserManager_K2_OnUserUpdated_Statics::NewProp_UpdatedDetails_MetaData), Z_Construct_UFunction_UOperatingSystemUserManager_K2_OnUserUpdated_Statics::NewProp_UpdatedDetails_MetaData) }; // 1295920940
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOperatingSystemUserManager_K2_OnUserUpdated_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemUserManager_K2_OnUserUpdated_Statics::NewProp_TargetUser,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemUserManager_K2_OnUserUpdated_Statics::NewProp_UpdatedDetails,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemUserManager_K2_OnUserUpdated_Statics::Function_MetaDataParams[] = {
		{ "Category", "OperatingSystemUserManager" },
		{ "DisplayName", "On User Updated" },
		{ "ModuleRelativePath", "Public/Core/OperatingSystemUserManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOperatingSystemUserManager_K2_OnUserUpdated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOperatingSystemUserManager, nullptr, "K2_OnUserUpdated", nullptr, nullptr, Z_Construct_UFunction_UOperatingSystemUserManager_K2_OnUserUpdated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemUserManager_K2_OnUserUpdated_Statics::PropPointers), sizeof(OperatingSystemUserManager_eventK2_OnUserUpdated_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08480800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemUserManager_K2_OnUserUpdated_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOperatingSystemUserManager_K2_OnUserUpdated_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemUserManager_K2_OnUserUpdated_Statics::PropPointers) < 2048);
	static_assert(sizeof(OperatingSystemUserManager_eventK2_OnUserUpdated_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOperatingSystemUserManager_K2_OnUserUpdated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOperatingSystemUserManager_K2_OnUserUpdated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOperatingSystemUserManager_UpdateUserDetails_Statics
	{
		struct OperatingSystemUserManager_eventUpdateUserDetails_Parms
		{
			FOperatingSystemUser TargetUser;
			FOperatingSystemUser UpdatedDetails;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_TargetUser;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UpdatedDetails_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_UpdatedDetails;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOperatingSystemUserManager_UpdateUserDetails_Statics::NewProp_TargetUser = { "TargetUser", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystemUserManager_eventUpdateUserDetails_Parms, TargetUser), Z_Construct_UScriptStruct_FOperatingSystemUser, METADATA_PARAMS(0, nullptr) }; // 1295920940
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemUserManager_UpdateUserDetails_Statics::NewProp_UpdatedDetails_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOperatingSystemUserManager_UpdateUserDetails_Statics::NewProp_UpdatedDetails = { "UpdatedDetails", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystemUserManager_eventUpdateUserDetails_Parms, UpdatedDetails), Z_Construct_UScriptStruct_FOperatingSystemUser, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemUserManager_UpdateUserDetails_Statics::NewProp_UpdatedDetails_MetaData), Z_Construct_UFunction_UOperatingSystemUserManager_UpdateUserDetails_Statics::NewProp_UpdatedDetails_MetaData) }; // 1295920940
	void Z_Construct_UFunction_UOperatingSystemUserManager_UpdateUserDetails_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OperatingSystemUserManager_eventUpdateUserDetails_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOperatingSystemUserManager_UpdateUserDetails_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OperatingSystemUserManager_eventUpdateUserDetails_Parms), &Z_Construct_UFunction_UOperatingSystemUserManager_UpdateUserDetails_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOperatingSystemUserManager_UpdateUserDetails_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemUserManager_UpdateUserDetails_Statics::NewProp_TargetUser,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemUserManager_UpdateUserDetails_Statics::NewProp_UpdatedDetails,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemUserManager_UpdateUserDetails_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemUserManager_UpdateUserDetails_Statics::Function_MetaDataParams[] = {
		{ "Category", "OperatingSystemUserManager" },
		{ "Comment", "/**\n\x09 * public\n\x09 * UOperatingSystemUserManager::UpdateUserDetails\n\x09 * Updates the details for the given user. If you don't want specific data to change, simply leave them empty or null.\n\x09 * @param TargetUser User to update\n\x09 * @param UpdatedDetails Details to update. If a setting is null or empty, it is not updated\n\x09 * @return True if the details were updated. False otherwise.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Core/OperatingSystemUserManager.h" },
		{ "ToolTip", "public\nUOperatingSystemUserManager::UpdateUserDetails\nUpdates the details for the given user. If you don't want specific data to change, simply leave them empty or null.\n@param TargetUser User to update\n@param UpdatedDetails Details to update. If a setting is null or empty, it is not updated\n@return True if the details were updated. False otherwise." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOperatingSystemUserManager_UpdateUserDetails_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOperatingSystemUserManager, nullptr, "UpdateUserDetails", nullptr, nullptr, Z_Construct_UFunction_UOperatingSystemUserManager_UpdateUserDetails_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemUserManager_UpdateUserDetails_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOperatingSystemUserManager_UpdateUserDetails_Statics::OperatingSystemUserManager_eventUpdateUserDetails_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemUserManager_UpdateUserDetails_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOperatingSystemUserManager_UpdateUserDetails_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemUserManager_UpdateUserDetails_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOperatingSystemUserManager_UpdateUserDetails_Statics::OperatingSystemUserManager_eventUpdateUserDetails_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOperatingSystemUserManager_UpdateUserDetails()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOperatingSystemUserManager_UpdateUserDetails_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOperatingSystemUserManager);
	UClass* Z_Construct_UClass_UOperatingSystemUserManager_NoRegister()
	{
		return UOperatingSystemUserManager::StaticClass();
	}
	struct Z_Construct_UClass_UOperatingSystemUserManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Users_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Users_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Users_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_Users;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOperatingSystemUserManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USaveGame,
		(UObject* (*)())Z_Construct_UPackage__Script_OperatingSystemSimulator,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemUserManager_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UOperatingSystemUserManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOperatingSystemUserManager_CheckUserExist, "CheckUserExist" }, // 242004518
		{ &Z_Construct_UFunction_UOperatingSystemUserManager_CheckUserExistForOperatingSystem, "CheckUserExistForOperatingSystem" }, // 3304308805
		{ &Z_Construct_UFunction_UOperatingSystemUserManager_FindUserByEmail, "FindUserByEmail" }, // 930529508
		{ &Z_Construct_UFunction_UOperatingSystemUserManager_FindUserByUsername, "FindUserByUsername" }, // 2504118771
		{ &Z_Construct_UFunction_UOperatingSystemUserManager_K2_OnUserCreated, "K2_OnUserCreated" }, // 4107322095
		{ &Z_Construct_UFunction_UOperatingSystemUserManager_K2_OnUserUpdated, "K2_OnUserUpdated" }, // 2075553914
		{ &Z_Construct_UFunction_UOperatingSystemUserManager_UpdateUserDetails, "UpdateUserDetails" }, // 864100770
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemUserManager_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOperatingSystemUserManager_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Core/OperatingSystemUserManager.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Core/OperatingSystemUserManager.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOperatingSystemUserManager_Statics::NewProp_Users_ValueProp = { "Users", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FOperatingSystemUserManagerSaveData, METADATA_PARAMS(0, nullptr) }; // 1053399308
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UOperatingSystemUserManager_Statics::NewProp_Users_Key_KeyProp = { "Users_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOperatingSystemUserManager_Statics::NewProp_Users_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/OperatingSystemUserManager.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UOperatingSystemUserManager_Statics::NewProp_Users = { "Users", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOperatingSystemUserManager, Users), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemUserManager_Statics::NewProp_Users_MetaData), Z_Construct_UClass_UOperatingSystemUserManager_Statics::NewProp_Users_MetaData) }; // 1053399308
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOperatingSystemUserManager_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOperatingSystemUserManager_Statics::NewProp_Users_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOperatingSystemUserManager_Statics::NewProp_Users_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOperatingSystemUserManager_Statics::NewProp_Users,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOperatingSystemUserManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOperatingSystemUserManager>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOperatingSystemUserManager_Statics::ClassParams = {
		&UOperatingSystemUserManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UOperatingSystemUserManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemUserManager_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemUserManager_Statics::Class_MetaDataParams), Z_Construct_UClass_UOperatingSystemUserManager_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemUserManager_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UOperatingSystemUserManager()
	{
		if (!Z_Registration_Info_UClass_UOperatingSystemUserManager.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOperatingSystemUserManager.OuterSingleton, Z_Construct_UClass_UOperatingSystemUserManager_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOperatingSystemUserManager.OuterSingleton;
	}
	template<> OPERATINGSYSTEMSIMULATOR_API UClass* StaticClass<UOperatingSystemUserManager>()
	{
		return UOperatingSystemUserManager::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOperatingSystemUserManager);
	UOperatingSystemUserManager::~UOperatingSystemUserManager() {}
	struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Core_OperatingSystemUserManager_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Core_OperatingSystemUserManager_h_Statics::ScriptStructInfo[] = {
		{ FOperatingSystemUserManagerSaveData::StaticStruct, Z_Construct_UScriptStruct_FOperatingSystemUserManagerSaveData_Statics::NewStructOps, TEXT("OperatingSystemUserManagerSaveData"), &Z_Registration_Info_UScriptStruct_OperatingSystemUserManagerSaveData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOperatingSystemUserManagerSaveData), 1053399308U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Core_OperatingSystemUserManager_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOperatingSystemUserManager, UOperatingSystemUserManager::StaticClass, TEXT("UOperatingSystemUserManager"), &Z_Registration_Info_UClass_UOperatingSystemUserManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOperatingSystemUserManager), 3240535957U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Core_OperatingSystemUserManager_h_3168905756(TEXT("/Script/OperatingSystemSimulator"),
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Core_OperatingSystemUserManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Core_OperatingSystemUserManager_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Core_OperatingSystemUserManager_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OperatingSystemSimulator_Source_OperatingSystemSimulator_Public_Core_OperatingSystemUserManager_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
