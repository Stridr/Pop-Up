// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGlobalMessenger_init() {}
	GLOBALMESSENGER_API UFunction* Z_Construct_UDelegateFunction_GlobalMessenger_GlobalMessageReceiveDelegate__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_GlobalMessenger;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_GlobalMessenger()
	{
		if (!Z_Registration_Info_UPackage__Script_GlobalMessenger.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_GlobalMessenger_GlobalMessageReceiveDelegate__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/GlobalMessenger",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x7D933A80,
				0x977D7437,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_GlobalMessenger.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_GlobalMessenger.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_GlobalMessenger(Z_Construct_UPackage__Script_GlobalMessenger, TEXT("/Script/GlobalMessenger"), Z_Registration_Info_UPackage__Script_GlobalMessenger, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x7D933A80, 0x977D7437));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
