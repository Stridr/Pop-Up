// Copyright 2023 - YetiTech Studios, Pvt Ltd. All Rights Reserved.

#include "Core/OperatingSystemNonUnix.h"
#include "UObject/ConstructorHelpers.h"
#include "Blueprint/UserWidget.h"
#include "OperatingSystemMacros.h"
#include "Core/OperatingSystemDirectory.h"
#include "Devices/OperatingSystemBaseDevice.h"
#include "Widgets/OperatingSystemWidget.h"
#include "Core/OperatingSystemPartition.h"
#include "Global/OperatingSystemStatics.h"
#include "Hardware/OperatingSystemHDD.h"
#include "TimerManager.h"

UOperatingSystemNonUnix::UOperatingSystemNonUnix()
	: DiskLetters({ "C","D","E","F","G","H","I","J","K","L","M","N","O","P","Q","R","S","T","U","V","W","X","Y","Z" })
{
	const ConstructorHelpers::FClassFinder<UUserWidget> BsodWidgetClassFinder(TEXT("/OperatingSystemSimulator/OperatingSystemContent/NonUnix/Blueprints/Widgets/WBP_NonUnix_BSOD"));
	BsodWidgetClass = BsodWidgetClassFinder.Class;

	const ConstructorHelpers::FClassFinder<UUserWidget> OsWidgetClassFinder(TEXT("/OperatingSystemSimulator/OperatingSystemContent/NonUnix/Blueprints/Widgets/WBP_NonUnix_OperatingSystem"));
	WidgetClass = OsWidgetClassFinder.Class;

	InstallationSpace = 10.f;
	OperatingSystemTag = NonUnixOsTag;
}

UOperatingSystemDirectory* UOperatingSystemNonUnix::CreateDirectoryInPath(const FString& TargetPath,
	const FString& DirectoryName, TSoftClassPtr<UOperatingSystemDirectory> DirectoryClass,
	UOperatingSystemPartition* TargetPartition,
	const bool bIsFromSaveGame,
	FGenericError& OutError)
{
	TArray<FString> OutPathArray;
	TargetPath.ParseIntoArray(OutPathArray, *UOperatingSystemStatics::GetPathDelimiter(this));

	// There will be only one entry if we are at the partition level.
	if (OutPathArray.Num() == 1)
	{
		const auto CreatedDir = UOperatingSystemDirectory::CreateDirectory(TargetPartition, nullptr, this, DirectoryClass, bIsFromSaveGame, OutError);
		TargetPartition->AddDirectory(CreatedDir);
		return CreatedDir;
	}

	const auto PartitionLetter = OutPathArray[0].Replace(TEXT(":"), TEXT(""));
	TScriptInterface<IOperatingSystemExplorerInterface> CurrentInterface = FindPartitionFromLetter(*PartitionLetter);
	check(CurrentInterface.GetObject());
	check(TargetPartition == CurrentInterface.GetObject());
	
	for (int i = OutPathArray.Num() - 1; i >= 0; --i)
	{
		const auto NewDir = Cast<UOperatingSystemDirectory>(CurrentInterface->GetChildDirectory(OutPathArray[i], false).GetObject());
		if (NewDir == nullptr)
		{
			const auto ParentDir = Cast<UOperatingSystemDirectory>(CurrentInterface.GetObject());
			return UOperatingSystemDirectory::CreateDirectory(TargetPartition, ParentDir, this, DirectoryClass, bIsFromSaveGame, OutError);
		}

		if (NewDir->GetDirectoryName().ToString() == DirectoryName)
		{
			return NewDir;
		}
		
		CurrentInterface = NewDir;
	}

	return nullptr;
}

void UOperatingSystemNonUnix::FinalizePreInstallation(FGenericError& OutError)
{
	const auto HardDisk = ParentDevice->GetHardwareByTag<UOperatingSystemHDD>(HddTag);
	const auto NewPartition = AllocatePartition(HardDisk->GetHardDiskSize(EOperatingSystemSizeMethod::Bytes), OutError);
	BeginInstallation(NewPartition, OutError);

	// Clear the installation timer right now.
	GetWorld()->GetTimerManager().ClearTimer(TimerHandle_OperatingSystemInstallation);
		
	FinishInstallation();
}

void UOperatingSystemNonUnix::PrepareOperatingSystemInstallImpl(FGenericError& OutError)
{
	AddNotification(NOTIFICATION_OS("Installation started...", Info));
	OperatingSystemWidget->PrepareToInstall();
}

bool UOperatingSystemNonUnix::StartOperatingSystemImpl(FGenericError& OutError)
{
	const auto& DiskPartitions = GetDiskPartitions();
	for (uint8 i = 0; i < DiskPartitions.Num(); i++)
	{
		DiskPartitions[i]->SetDiskLetter(FindDiskLetterAtIndex(i));
	}

	return true;
}

void UOperatingSystemNonUnix::PostLoadOperatingSystemImpl(FGenericError& OutError)
{
	if (IsStartingForTheFirstTime())
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

void UOperatingSystemNonUnix::OnPartitionLoaded(UOperatingSystemPartition& LoadedPartition,
	const FOperatingSystemPartitionSaveLoad& SaveLoadData)
{
	LoadedPartition.SetDiskLetter(SaveLoadData.SaveLoad_DiskLetter.IsEmpty() ? FindDiskLetterAtIndex(0) : *SaveLoadData.SaveLoad_DiskLetter);
}

UOperatingSystemPartition* UOperatingSystemNonUnix::FindPartitionFromLetter(const FName& TargetDiskLetter) const
{
	const auto& DiskPartitions = GetDiskPartitions();
	for (const auto& It : DiskPartitions)
	{
		if (It->GetDiskLetter() == TargetDiskLetter)
		{
			return It;
		}
	}

	return nullptr;
}

FName UOperatingSystemNonUnix::FindDiskLetterAtIndex(const int32& AtIndex) const
{
	if (DiskLetters.IsValidIndex(AtIndex))
	{
		return DiskLetters[AtIndex];
	}

	return NAME_None;
}
