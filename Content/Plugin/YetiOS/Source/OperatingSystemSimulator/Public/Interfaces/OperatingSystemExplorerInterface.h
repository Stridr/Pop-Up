// Copyright 2023 - YetiTech Studios, Pvt Ltd. All Rights Reserved.

#pragma once

#include "UObject/Interface.h"
#include "OperatingSystemTypes.h"
#include "OperatingSystemExplorerInterface.generated.h"

class UOperatingSystemDirectory;
class UOperatingSystemFile;
class UOperatingSystem;

// This class does not need to be modified.
UINTERFACE(MinimalAPI, NotBlueprintable, BlueprintType)
class UOperatingSystemExplorerInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class OPERATINGSYSTEMSIMULATOR_API IOperatingSystemExplorerInterface
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:

	UFUNCTION(BlueprintCallable, Category = OperatingSystemExplorerInterface)
	virtual TArray<UOperatingSystemDirectory*> GetChildDirectories() const = 0;

	UFUNCTION(BlueprintCallable, Category = OperatingSystemExplorerInterface)
	virtual void GetParentExplorerInterface(TScriptInterface<IOperatingSystemExplorerInterface>& OutInterface) const = 0;

	UFUNCTION(BlueprintCallable, Category = OperatingSystemExplorerInterface)
	virtual bool IsPartition() const = 0;

	UFUNCTION(BlueprintCallable, Category = OperatingSystemExplorerInterface)
	virtual FText GetInterfaceDisplayName() const = 0;

	UFUNCTION(BlueprintCallable, Category = OperatingSystemExplorerInterface)
	virtual bool FindDirectoryByTag(const FGameplayTag DirectoryTag, const bool bRecursive, UOperatingSystemDirectory*& OutDirectory) const = 0;

	UFUNCTION(BlueprintCallable, Category = OperatingSystemExplorerInterface)
	virtual TScriptInterface<IOperatingSystemExplorerInterface> GetChildDirectory(const FString& TargetChildDirectoryName, const bool bRecursive = true) const = 0;

	UFUNCTION(BlueprintCallable, Category = OperatingSystemExplorerInterface)
	virtual TArray<UOperatingSystemFile*> GetAllFiles(const FString& WithExtension = "*") const = 0;

	virtual bool CanCreateNewFile() const = 0;
	virtual bool HasEnoughSpace(const FOperatingSystemSizeInMB& TestSpace) const = 0;
	virtual UOperatingSystem* GetOperatingSystem() const = 0;
	virtual TOptional<FString> GetFullPath() const = 0;
	virtual TScriptInterface<IOperatingSystemExplorerInterface> GetInterfaceFromPath(const FString& NewPath) const = 0;
};
