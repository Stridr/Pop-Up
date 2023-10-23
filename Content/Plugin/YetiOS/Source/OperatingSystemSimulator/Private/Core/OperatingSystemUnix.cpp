// Copyright 2023 - YetiTech Studios, Pvt Ltd. All Rights Reserved.

#include "Core/OperatingSystemUnix.h"
#include "OperatingSystemLogs.h"
#include "OperatingSystemMacros.h"
#include "Core/OperatingSystemPartition.h"
#include "Core/OperatingSystemRootDirectory.h"
#include "Devices/OperatingSystemBaseDevice.h"
#include "Global/OperatingSystemStatics.h"
#include "Hardware/OperatingSystemHDD.h"
#include "Misc/OperatingSystemDirectoriesCollection.h"
#include "Misc/OperatingSystemProgramsCollection.h"
#include "Programs/OperatingSystemBaseProgram.h"
#include "Widgets/OperatingSystemWidget.h"

DEFINE_OS_LOG(Unix);

UOperatingSystemUnix::UOperatingSystemUnix()
	: RootUser(FOperatingSystemUser("root", "toor"))
	, RootCommand(INVTEXT("sudo"))
	, RepositoryClasses({})
	, RootDirectory(nullptr)
{
	const ConstructorHelpers::FClassFinder<UUserWidget> BsodWidgetClassFinder(TEXT("/OperatingSystemSimulator/OperatingSystemContent/Unix/Blueprints/Widgets/WBP_Unix_BSOD"));
	BsodWidgetClass = BsodWidgetClassFinder.Class;

	const ConstructorHelpers::FClassFinder<UUserWidget> OsWidgetClassFinder(TEXT("/OperatingSystemSimulator/OperatingSystemContent/Unix/Blueprints/Widgets/WBP_Unix_OperatingSystem"));
	WidgetClass = OsWidgetClassFinder.Class;
	
	InstallationSpace = 8.f;
	OperatingSystemTag = UnixOsTag;
}

UOperatingSystemDirectory* UOperatingSystemUnix::CreateDirectoryInPath(const FString& TargetPath, const FString& DirectoryName,
	TSoftClassPtr<UOperatingSystemDirectory> DirectoryClass, UOperatingSystemPartition* TargetPartition,
	const bool bIsFromSaveGame,
	FGenericError& OutError)
{
	TArray<FString> OutPathArray;
    TargetPath.ParseIntoArray(OutPathArray, *UOperatingSystemStatics::GetPathDelimiter(this));

	FText OutDirName;
	UOperatingSystemStatics::GetSpecialDirectoryName(DirRoot_Tag, OutDirName);
	if (DirectoryName == OutDirName.ToString())
	{
		CreateRootDirectory(bIsFromSaveGame);
		TargetPartition->AddDirectory(RootDirectory);
		return RootDirectory;
	}

    UOperatingSystemDirectory* CurrentDirectory = RootDirectory;
    
	for (int i = OutPathArray.Num() - 1; i >= 0; --i)
    {
		const auto NewDir = CurrentDirectory->GetChildDirectory<UOperatingSystemDirectory>(OutPathArray[i], false);
	    if (NewDir == nullptr)
    	{
		    return UOperatingSystemDirectory::CreateDirectory(TargetPartition, CurrentDirectory, this, DirectoryClass, bIsFromSaveGame, OutError);
    	}

		if (NewDir->GetDirectoryName().ToString() == DirectoryName)
		{
			return NewDir;
		}
		
		CurrentDirectory = NewDir;
    }

	return nullptr;
}

void UOperatingSystemUnix::OnValidate(FGenericError& OutError) const
{
	if (RootCommand.IsEmptyOrWhitespace())
	{
		OutError = MAKE_ERROR("ERR_OS", "Root command must be valid. It cannot be empty.");
		return;
	}

	if (RepositoryClasses.IsEmpty())
	{
		OutError = MAKE_ERROR("ERR_OS", FString::Printf(TEXT("%s should provide atleast one Repository Class."), *Name.ToString()));
		return;
	}

	bool bNonNullRepoFound = false;
	for (const auto& It : RepositoryClasses)
	{
		if (!It.IsNull())
		{
			bNonNullRepoFound = true;
			break;
		}
	}

	if (!bNonNullRepoFound)
	{
		OutError = MAKE_ERROR("ERR_OS", FString::Printf(TEXT("%s repository classes were all null."), *Name.ToString()));
		return;
	}

	const auto DirCollection = DefaultDirectories.LoadSynchronous();
	if (!DirCollection->HasDirectoryWithTag(DirRoot_Tag, false))
	{
		OutError = MAKE_ERROR("ERR_OS", FString::Printf(TEXT("Root directory not set for %s"), *Name.ToString()));
	}
}

void UOperatingSystemUnix::FinalizePreInstallation(FGenericError& OutError)
{
	const auto HardDisk = ParentDevice->GetHardwareByTag<UOperatingSystemHDD>(HddTag);
	const auto NewPartition = AllocatePartition(HardDisk->GetHardDiskSize(EOperatingSystemSizeMethod::Bytes), OutError);
	BeginInstallation(NewPartition, OutError);

	// Clear the installation timer right now.
	GetWorld()->GetTimerManager().ClearTimer(TimerHandle_OperatingSystemInstallation);
	FinishInstallation();
}

void UOperatingSystemUnix::PrepareOperatingSystemInstallImpl(FGenericError& OutError)
{
	AddNotification(NOTIFICATION_OS("Installation started...", Info));
	OperatingSystemWidget->PrepareToInstall();
}

bool UOperatingSystemUnix::StartOperatingSystemImpl(FGenericError& OutError)
{
	if (!CreateRootDirectory(false))
	{
		OutError = MAKE_ERROR("ROOT_NULL", "Root directory was not found.");
		return false;
	}

	if (!RootDirectory->CheckForDirectoryWithTag(DirDesktop_Tag, true))
	{
		OutError = MAKE_ERROR("DESKTOP_NULL", "Desktop directory was not found.");
		return false;
	}

	const auto& DiskPartitions = GetDiskPartitions();
	ensureMsgf(DiskPartitions.Num() == 1, TEXT("In this plugin, unix operating system is designed to have only 1 parition. You have %i partitions"), DiskPartitions.Num());
	DiskPartitions[0]->SetDiskLetter(*UOperatingSystemStatics::GetPathDelimiter(this));

	return true;
}

void UOperatingSystemUnix::PostLoadOperatingSystemImpl(FGenericError& OutError)
{
	if (IsStartingForTheFirstTime() || !GetCurrentUser().IsValid())
	{
		OperatingSystemWidget->ShowInitialStartupScreen();
	}	
	else if (GetCurrentUser().Password.IsEmpty())
	{
		OperatingSystemWidget->SwitchTab(OSWidget_Desktop_Tag);
	}
	else
	{
		OperatingSystemWidget->ShowLogonScreen();
	}
}

TOptional<FText> UOperatingSystemUnix::GetRootCommand() const
{
	if (RootCommand.IsEmptyOrWhitespace())
	{
		return TOptional<FText>();
	}

	return RootCommand;
}

TOptional<FOperatingSystemUser> UOperatingSystemUnix::GetRootUser() const
{
	if (RootUser.IsValid())
	{
		return RootUser;
	}

	return FOperatingSystemUser("root", "toor");
}

TSoftClassPtr<UOperatingSystemBaseProgram> UOperatingSystemUnix::FindProgramFromPackage(const FName& ProgramIdentifier)
{
	if (ProgramIdentifier.IsNone())
	{
		return nullptr;
	}

	OS_LOG(Unix, FString::Printf(TEXT("Finding program identifier '%s' from %i %s"), *ProgramIdentifier.ToString(), RepositoryClasses.Num(), RepositoryClasses.Num() > 1 ? *FString("repositories") : *FString("repository")));
	for (const auto& It : RepositoryClasses)
	{
		if (It.IsNull())
		{
			continue;
		}

		const auto& ProgramClasses = It.LoadSynchronous()->GetProgramClasses();
		for (const auto& ProgramClass : ProgramClasses)
		{
			if (ProgramClass.IsNull())
			{
				continue;
			}

			const auto Program = ProgramClass.LoadSynchronous()->GetDefaultObject<UOperatingSystemBaseProgram>();
			if (Program->GetIdentifier() == ProgramIdentifier)
			{
				return ProgramClass;
			}
		}
	}

	return nullptr;
}

bool UOperatingSystemUnix::CreateRootDirectory(const bool bIsFromSaveGame)
{
	if (!IsValid(RootDirectory))
	{
		const auto SysPartition = GetOperatingSystemPartition();
		
		TOptional<FString> RootDirectoryName;
		const auto& AllDirectories = DefaultDirectories.LoadSynchronous()->GetDirectories();
		for (const auto& It : AllDirectories)
		{
			const auto Dir = Cast<UOperatingSystemDirectory>(It.LoadSynchronous()->ClassDefaultObject);
			if (Dir->IsUnixRootDirectory())
			{
				RootDirectoryName = Dir->GetDirectoryName().ToString();
				break;
			}
		}
		
		RootDirectory = SysPartition->GetChildDirectory<UOperatingSystemRootDirectory>(RootDirectoryName.GetValue(), false);
		if (IsValid(RootDirectory))
		{
			return true;
		}
		
		for (const auto& It : AllDirectories)
		{
			const auto Dir = Cast<UOperatingSystemDirectory>(It.LoadSynchronous()->ClassDefaultObject);
			if (Dir->GetDirectoryTag() == DirRoot_Tag)
			{
				FGenericError OutError;
				RootDirectory = UOperatingSystemDirectory::CreateDirectory<UOperatingSystemRootDirectory>(SysPartition, nullptr, this, It, bIsFromSaveGame, OutError);
			}
		}
	}

	return IsValid(RootDirectory);
}
