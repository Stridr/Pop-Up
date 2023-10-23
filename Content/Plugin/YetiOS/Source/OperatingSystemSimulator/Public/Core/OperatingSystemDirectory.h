// Copyright 2023 - YetiTech Studios, Pvt Ltd. All Rights Reserved.

#pragma once

#include "UObject/Object.h"
#include "GameplayTagContainer.h"
#include "OperatingSystemTypes.h"
#include "Interfaces/OperatingSystemExplorerInterface.h"
#include "OperatingSystemDirectory.generated.h"

class UOperatingSystemFile;
class UOperatingSystemPartition;
class UOperatingSystem;
class UOperatingSystemDirectoriesCollection;

UCLASS(Abstract, Blueprintable, BlueprintType)
class OPERATINGSYSTEMSIMULATOR_API UOperatingSystemDirectory : public UObject, public IOperatingSystemExplorerInterface
{
	GENERATED_BODY()

protected:

	UPROPERTY(EditDefaultsOnly, Category = OperatingSystemDirectory)
	FText Name;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = OperatingSystemDirectory, meta = (Categories = "OperatingSystem.Directory"))
	FGameplayTag Tag;

	UPROPERTY(EditDefaultsOnly, Category = OperatingSystemDirectory, AdvancedDisplay, meta = (DisplayThumbnail = true, AllowedClasses = "Texture, MaterialInterface"))
	TSoftObjectPtr<UObject> OverrideIcon;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = OperatingSystemDirectory)
	uint8 bCanCreateNewFolder : 1;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = OperatingSystemDirectory)
	uint8 bCanCreateNewFile : 1;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = OperatingSystemDirectory)
	uint8 bIsHidden : 1;

	UPROPERTY(EditDefaultsOnly, Category = OperatingSystemDirectory)
	TSet<TSoftClassPtr<UOperatingSystemFile>> FileClasses;

	UPROPERTY(EditDefaultsOnly, Category = OperatingSystemDirectory)
	TSoftObjectPtr<UOperatingSystemDirectoriesCollection> ChildDirectoryCollection;

	UPROPERTY(VisibleInstanceOnly, Category = Debug)
	TWeakObjectPtr<UOperatingSystemDirectory> ParentDirectory;

	UPROPERTY(VisibleInstanceOnly, BlueprintReadOnly, Category = Debug)
	TWeakObjectPtr<UOperatingSystemPartition> ParentPartition;

	UPROPERTY(VisibleInstanceOnly, BlueprintReadOnly, Category = Debug)
	TArray<TObjectPtr<UOperatingSystemFile>> Files;

	UPROPERTY(VisibleInstanceOnly, Category = Debug)
	TArray<TObjectPtr<UOperatingSystemDirectory>> ChildDirectories;

	UPROPERTY(VisibleInstanceOnly, Category = Debug)
	TWeakObjectPtr<UOperatingSystem> ParentOS;

public:

	UOperatingSystemDirectory();

	static UOperatingSystemDirectory* CreateDirectory(const TWeakObjectPtr<UOperatingSystemPartition> OwningPartition, 
		const TWeakObjectPtr<UOperatingSystemDirectory> OwningDirectory,
		const TWeakObjectPtr<UOperatingSystem> OwningOS,
		const TSoftClassPtr<UOperatingSystemDirectory>& DirectoryClass,
		const bool bIsFromSaveGame,
		FGenericError& OutError);

	template <class T>
	static T* CreateDirectory(const TWeakObjectPtr<UOperatingSystemPartition> OwningPartition, 
		const TWeakObjectPtr<UOperatingSystemDirectory> OwningDirectory,
		const TWeakObjectPtr<UOperatingSystem> OwningOS,
		const TSoftClassPtr<UOperatingSystemDirectory>& DirectoryClass,
		const bool bIsFromSaveGame,
		FGenericError& OutError)
	{
		static_assert(TIsDerivedFrom<T, UOperatingSystemDirectory>::Value, "T not derived from UOperatingSystemDirectory!");
		return Cast<T>(CreateDirectory(OwningPartition, OwningDirectory, OwningOS, DirectoryClass, bIsFromSaveGame, OutError));
	}
	
	UFUNCTION(BlueprintPure, Category = OperatingSystemDirectory)
	FText GetDirectoryName() const;

	UFUNCTION(BlueprintPure, Category = OperatingSystemDirectory)
	bool IsSystemDirectory() const;

	UFUNCTION(BlueprintPure, Category = OperatingSystemDirectory)
	UObject* GetDirectoryIconObject() const;

	// IOperatingSystemExplorerInterface functions
	UFUNCTION()
	virtual TArray<UOperatingSystemDirectory*> GetChildDirectories() const override final { return ChildDirectories; }
	
	UFUNCTION()
	virtual void GetParentExplorerInterface(TScriptInterface<IOperatingSystemExplorerInterface>& OutInterface) const override final;

	UFUNCTION()
	virtual bool IsPartition() const override final { return false; }

	UFUNCTION()
	virtual FText GetInterfaceDisplayName() const override final { return Name; }

	UFUNCTION()
	virtual bool FindDirectoryByTag(const FGameplayTag DirectoryTag, const bool bRecursive, UOperatingSystemDirectory*& OutDirectory) const override final;

	UFUNCTION()
	virtual TScriptInterface<IOperatingSystemExplorerInterface> GetChildDirectory(const FString& TargetChildDirectoryName, const bool bRecursive = true) const override final;

	UFUNCTION()
	virtual TArray<UOperatingSystemFile*> GetAllFiles(const FString& WithExtension = "*") const override final;

	virtual bool CanCreateNewFile() const override final { return bCanCreateNewFile; }
	virtual bool HasEnoughSpace(const FOperatingSystemSizeInMB& TestSpace) const override final;
	virtual UOperatingSystem* GetOperatingSystem() const override final;
	virtual TOptional<FString> GetFullPath() const override final;
	virtual TScriptInterface<IOperatingSystemExplorerInterface> GetInterfaceFromPath(const FString& NewPath) const override final;	
	// -------------------------------------------

	/** DO NOT MODIFY THIS! */
	virtual bool IsUnixRootDirectory() const { return false; }

private:

	void Internal_Validate(FGenericError& OutError);

	TScriptInterface<IOperatingSystemExplorerInterface> Internal_GetDirectoryFromPathUnix(const FString& NewPath) const;
	TScriptInterface<IOperatingSystemExplorerInterface> Internal_GetDirectoryFromPathNonUnix(const FString& NewPath) const;

protected:

	virtual void OnValidate(FGenericError& OutError) {}

public:

	void LoadFiles(const FOperatingSystemDirectoriesSaveLoad& DirectoriesSaveLoad);

	/** Same as GetFullPath except this removes the directory name from the path. */
	FString GetDirectoryPath() const;
	void GetSaveData(TArray<FOperatingSystemDirectoriesSaveLoad>& OutSaveData) const;
	bool CheckForDirectoryWithTag(const FGameplayTag& TestTag, const bool bRecursive) const;

	FORCEINLINE bool CanCreateNewFolder() const { return bCanCreateNewFolder; }
	FORCEINLINE bool CanRename() const { return !IsSystemDirectory(); }	
	FORCEINLINE FGameplayTag GetDirectoryTag() const { return Tag; }

	template<class T>
	FORCEINLINE T* GetAs() const
	{
		static_assert(TIsDerivedFrom<T, UOperatingSystemDirectory>::Value, "T not derived from UOperatingSystemDirectory!");
		return Cast<T>(this);
	}

	template<class T>
	FORCEINLINE const T* GetAsConst() const
	{
		static_assert(TIsDerivedFrom<T, UOperatingSystemDirectory>::Value, "T not derived from UOperatingSystemDirectory!");
		return Cast<T>(this);
	}

	template<class T>
	FORCEINLINE T* GetChildDirectory(const FString& TargetChildDirectoryName, const bool bRecursive = true) const
	{
		static_assert(TIsDerivedFrom<T, UOperatingSystemDirectory>::Value, "T not derived from UOperatingSystemDirectory!");
		return Cast<T>(GetChildDirectory(TargetChildDirectoryName, bRecursive).GetObject());
	}
};
