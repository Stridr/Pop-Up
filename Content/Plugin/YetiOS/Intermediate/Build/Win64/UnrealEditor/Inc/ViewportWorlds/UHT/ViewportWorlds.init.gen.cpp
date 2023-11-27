// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeViewportWorlds_init() {}
	VIEWPORTWORLDS_API UFunction* Z_Construct_UDelegateFunction_ViewportWorlds_OnWorldUnloaded__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_ViewportWorlds;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_ViewportWorlds()
	{
		if (!Z_Registration_Info_UPackage__Script_ViewportWorlds.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_ViewportWorlds_OnWorldUnloaded__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/ViewportWorlds",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x56CEDE19,
				0x49406E90,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_ViewportWorlds.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_ViewportWorlds.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_ViewportWorlds(Z_Construct_UPackage__Script_ViewportWorlds, TEXT("/Script/ViewportWorlds"), Z_Registration_Info_UPackage__Script_ViewportWorlds, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x56CEDE19, 0x49406E90));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
