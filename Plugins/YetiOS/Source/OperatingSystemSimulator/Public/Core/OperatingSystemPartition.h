// Copyright 2023 - YetiTech Studios, Pvt Ltd. All Rights Reserved.

#pragma once

#include "GameplayTagContainer.h"
#include "OperatingSystemTypes.h"
#include "Interfaces/OperatingSystemExplorerInterface.h"
#include "OperatingSystemPartition.generated.h"

class UOperatingSystemHDD;
class UOperatingSystemDirectory;
class UOperatingSystem;
class UOperatingSystemFile;

/**
 * 
 */
UCLASS(NotBlueprintable, BlueprintType)
class UOperatingSystemPartition : public UObject, public IOperatingSystemExplorerInterface
{
	GENERATED_BODY()

	UPROPERTY()
	TArray<TObjectPtr<UOperatingSystemDirectory>> Directories;

protected:

	UPROPERTY(BlueprintReadOnly, Category = OperatingSystemPartition)
	FText DiskName;

	UPROPERTY(BlueprintReadOnly, Transient, Category = OperatingSystemPartition)
	FText DiskDisplayName;

	/** Total size of this partition */
	UPROPERTY(BlueprintReadOnly, Category = OperatingSystemPartition)
	double TotalSizeInBytes;

	/** Free space in this partition */
	UPROPERTY(BlueprintReadOnly, Category = OperatingSystemPartition)
	double FreeSpaceInBytes;

	UPROPERTY(BlueprintReadOnly, Category = OperatingSystemPartition)
	bool bIsSystemPartition;

	UPROPERTY(Transient, BlueprintReadOnly, Category = OperatingSystemPartition)
	FOperatingSystemUniqueId PartitionID;

	UPROPERTY(VisibleInstanceOnly, BlueprintReadOnly, Transient, Category = Debug)
	FName DiskLetter;

	UPROPERTY(VisibleInstanceOnly, BlueprintReadOnly, Transient, Category = Debug)
	TArray<TObjectPtr<UOperatingSystemFile>> Files;

	TWeakObjectPtr<UOperatingSystemHDD> ParentHDD;
	TWeakObjectPtr<UOperatingSystem> ParentOS;

public:

	UOperatingSystemPartition();

	static UOperatingSystemPartition* CreateNewPartition(UOperatingSystemHDD* OwningHDD, const double& SizeInBytes, FGenericError& OutError);
	static UOperatingSystemPartition* LoadNewPartition(UOperatingSystemHDD* OwningHDD, const FOperatingSystemPartitionSaveLoad& PartitionSaveLoad);

	void SetDiskName(const FString& NewDiskName);
	void SetSystemPartition(const bool bNewSystemPartition);
	void SetOwningOperatingSystem(UOperatingSystem* OwningOS);

	void AddDirectories(const TArray<UOperatingSystemDirectory*>& NewDirectories, const bool bAppend = false);
	void AddDirectory(UOperatingSystemDirectory* NewDirectory);

	void ConsumeSpace(const double& SizeInBytes, FGenericError& OutError);

	FText GetSizeAsText(const EOperatingSystemSizeMethod& SizeMethod) const;

	// IOperatingSystemExplorerInterface functions
	UFUNCTION()
	virtual TArray<UOperatingSystemDirectory*> GetChildDirectories() const override final { return Directories; }

	UFUNCTION()
	virtual void GetParentExplorerInterface(TScriptInterface<IOperatingSystemExplorerInterface>& OutInterface) const override final { OutInterface = nullptr; }

	UFUNCTION()
	virtual bool IsPartition() const override final { return true; }

	UFUNCTION()
	virtual FText GetInterfaceDisplayName() const override final { return DiskDisplayName; }

	UFUNCTION()
	virtual bool FindDirectoryByTag(const FGameplayTag DirectoryTag, const bool bRecursive, UOperatingSystemDirectory*& OutDirectory) const override final;

	UFUNCTION()
	virtual TScriptInterface<IOperatingSystemExplorerInterface> GetChildDirectory(const FString& TargetChildDirectoryName, const bool bRecursive = true) const override final;

	UFUNCTION()
	virtual TArray<UOperatingSystemFile*> GetAllFiles(const FString& WithExtension = "*") const override final;

	virtual bool CanCreateNewFile() const override final { return true; }
	virtual bool HasEnoughSpace(const FOperatingSystemSizeInMB& TestSpace) const override final;
	virtual UOperatingSystem* GetOperatingSystem() const override final;
	virtual TOptional<FString> GetFullPath() const override final { return GetPartitionPath(); }
	virtual TScriptInterface<IOperatingSystemExplorerInterface> GetInterfaceFromPath(const FString& NewPath) const override final;	
	// -------------------------------------------

	/** Sets the disk letter like C, D, E etc. Mostly used in Non-Unix Operating System */
	void SetDiskLetter(const FName& NewDiskLetter);

protected:

	UFUNCTION(BlueprintCallable, Category = OperatingSystemPartition)
	void SetDiskDisplayName(const FText& NewName);

public:
	
	FString GetPartitionPath() const;

	FORCEINLINE bool IsValidPartition() const { return TotalSizeInBytes > 0 && FreeSpaceInBytes >= 0; }
	FORCEINLINE bool HasEnoughSpace(const double& TestSpaceInBytes) const { return TestSpaceInBytes <= FreeSpaceInBytes; }
	FORCEINLINE float GetStoragePercentage() const { return (FreeSpaceInBytes / TotalSizeInBytes) * 100.f; }
	FORCEINLINE double GetTotalSizeBytes() const { return TotalSizeInBytes; }
	FORCEINLINE double GetFreeSizeBytes() const { return FreeSpaceInBytes; }
	FORCEINLINE bool IsSystemPartition() const { return bIsSystemPartition; }
	FORCEINLINE FOperatingSystemUniqueId GetPartitionID() const { return PartitionID; }
	FORCEINLINE FName GetDiskLetter() const { return DiskLetter; }
	FORCEINLINE FOperatingSystemPartitionSaveLoad GetNewPartitionSaveLoad() const
	{
		FOperatingSystemPartitionSaveLoad NewData;
		NewData.bSaveLoad_IsSystemPartition = bIsSystemPartition;
		NewData.SaveLoad_DiskName = DiskName.ToString();
		NewData.SaveLoad_DiskLetter = DiskLetter.ToString();
		NewData.SaveLoad_FreeSpaceInBytes = FreeSpaceInBytes;
		NewData.SaveLoad_TotalSizeInBytes = TotalSizeInBytes;
		NewData.SaveLoad_PartitionID = PartitionID.ToString();
		return NewData;
	}

	template<class T>
	T* GetChildDirectory(const FString& TargetChildDirectoryName, const bool bRecursive = true) const
	{
		return Cast<T>(GetChildDirectory(TargetChildDirectoryName, bRecursive).GetObject());
	}
};
