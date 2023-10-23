// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOperatingSystemSimulator_init() {}
	OPERATINGSYSTEMSIMULATOR_API UFunction* Z_Construct_UDelegateFunction_OperatingSystemSimulator_OnDeviceCreated__DelegateSignature();
	OPERATINGSYSTEMSIMULATOR_API UFunction* Z_Construct_UDelegateFunction_OperatingSystemSimulator_OnDeviceStateChanged__DelegateSignature();
	OPERATINGSYSTEMSIMULATOR_API UFunction* Z_Construct_UDelegateFunction_OperatingSystemSimulator_OnOperatingSystemProgramViewStateChanged__DelegateSignature();
	OPERATINGSYSTEMSIMULATOR_API UFunction* Z_Construct_UDelegateFunction_OperatingSystemSimulator_OperatingSystemDeviceMessageDelegate__DelegateSignature();
	OPERATINGSYSTEMSIMULATOR_API UFunction* Z_Construct_UDelegateFunction_OperatingSystemSimulator_OperatingSystemProgramDelegate__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_OperatingSystemSimulator;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_OperatingSystemSimulator()
	{
		if (!Z_Registration_Info_UPackage__Script_OperatingSystemSimulator.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_OperatingSystemSimulator_OnDeviceCreated__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_OperatingSystemSimulator_OnDeviceStateChanged__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_OperatingSystemSimulator_OnOperatingSystemProgramViewStateChanged__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_OperatingSystemSimulator_OperatingSystemDeviceMessageDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_OperatingSystemSimulator_OperatingSystemProgramDelegate__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/OperatingSystemSimulator",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x1E1D2FD9,
				0x0ECA9432,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_OperatingSystemSimulator.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_OperatingSystemSimulator.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_OperatingSystemSimulator(Z_Construct_UPackage__Script_OperatingSystemSimulator, TEXT("/Script/OperatingSystemSimulator"), Z_Registration_Info_UPackage__Script_OperatingSystemSimulator, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x1E1D2FD9, 0x0ECA9432));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
