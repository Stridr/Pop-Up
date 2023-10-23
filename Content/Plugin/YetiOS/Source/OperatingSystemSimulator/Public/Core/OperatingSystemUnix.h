// Copyright 2023 - YetiTech Studios, Pvt Ltd. All Rights Reserved.

#pragma once

#include "OperatingSystem.h"
#include "OperatingSystemUnix.generated.h"

class UOperatingSystemRootDirectory;
class UOperatingSystemSaveGame;

/**
 * 
 */
UCLASS(Within=OperatingSystemBaseDevice, Abstract, Blueprintable, BlueprintType)
class OPERATINGSYSTEMSIMULATOR_API UOperatingSystemUnix : public UOperatingSystem
{
	GENERATED_BODY()

protected:

	/** Root user for this Operating System. */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = OperatingSystemUnix)
	FOperatingSystemUser RootUser;

	/** Root command name. Defaults to sudo. */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = OperatingSystemUnix, AdvancedDisplay)
	FText RootCommand;

	/** Simulates the effect of sudo apt-get stuff. You can add as many classes you want and even let users add their own repository via terminal. */
	UPROPERTY(EditDefaultsOnly, Category = OperatingSystemUnix)
	TSet<TSoftObjectPtr<UOperatingSystemProgramsCollection>> RepositoryClasses;

private:

	UPROPERTY(VisibleInstanceOnly, Category = Debug)
	TObjectPtr<UOperatingSystemRootDirectory> RootDirectory;

public:

	UOperatingSystemUnix();

	virtual UOperatingSystemDirectory* CreateDirectoryInPath(const FString& TargetPath, const FString& DirectoryName,
		TSoftClassPtr<UOperatingSystemDirectory> DirectoryClass,
		UOperatingSystemPartition* TargetPartition,
		const bool bIsFromSaveGame,
		FGenericError& OutError) override;

protected:

	virtual void OnValidate(FGenericError& OutError) const override;
	virtual void FinalizePreInstallation(FGenericError& OutError) override;
	virtual void PrepareOperatingSystemInstallImpl(FGenericError& OutError) override;
	virtual bool StartOperatingSystemImpl(FGenericError& OutError) override;
	virtual void PostLoadOperatingSystemImpl(FGenericError& OutError) override;
	virtual TOptional<FText> GetRootCommand() const override final;
	virtual TOptional<FOperatingSystemUser> GetRootUser() const override final;

	virtual TSoftClassPtr<UOperatingSystemBaseProgram> FindProgramFromPackage(const FName& ProgramIdentifier) override;

	bool CreateRootDirectory(const bool bIsFromSaveGame);

public:

	FORCEINLINE const TSet<TSoftObjectPtr<UOperatingSystemProgramsCollection>>& GetRepositoryClasses() const { return RepositoryClasses; }
};
