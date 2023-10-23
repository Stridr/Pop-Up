// Copyright 2023 - YetiTech Studios, Pvt Ltd. All Rights Reserved.


#include "Core/OperatingSystemDirectory.h"
#include "OperatingSystemTags.h"
#include "OperatingSystemMacros.h"
#include "Global/OperatingSystemStatics.h"
#include "Core/OperatingSystem.h"
#include "Core/OperatingSystemPartition.h"
#include "Misc/OperatingSystemDirectoriesCollection.h"
#include "OperatingSystemLogs.h"
#include "Files/OperatingSystemFile.h"
#include "Core/OperatingSystemRootDirectory.h"

DEFINE_OS_LOG(Directory)

UOperatingSystemDirectory::UOperatingSystemDirectory()
	: Name(FText())
	, Tag(DirOther_Tag)
	, OverrideIcon(nullptr)
	, bCanCreateNewFolder(true)
	, bCanCreateNewFile(true)
	, bIsHidden(false)
	, FileClasses({})
	, ChildDirectoryCollection(nullptr)
	, ParentDirectory(nullptr)
	, ParentPartition(nullptr)
	, Files({})
	, ChildDirectories({})
	, ParentOS(nullptr)
{
}

UOperatingSystemDirectory* UOperatingSystemDirectory::CreateDirectory(
	const TWeakObjectPtr<UOperatingSystemPartition> OwningPartition, 
	const TWeakObjectPtr<UOperatingSystemDirectory> OwningDirectory,
	const TWeakObjectPtr<UOperatingSystem> OwningOS,
	const TSoftClassPtr<UOperatingSystemDirectory>& DirectoryClass,
	const bool bIsFromSaveGame,
	FGenericError& OutError)
{
	if (!OwningPartition.IsValid())
	{
		ensureMsgf(false, TEXT("Partition was null. This should never happen so something is wrong."));		
		return nullptr;
	}

	const auto TargetDir = Cast<UOperatingSystemDirectory>(DirectoryClass.LoadSynchronous()->ClassDefaultObject);
	UOperatingSystemDirectory* ProxyDirectory;
	if (OwningDirectory.IsValid())
	{
		if (OwningDirectory->GetChildDirectory(TargetDir->GetDirectoryName().ToString(), false))
		{
			return nullptr;
		}
		ProxyDirectory = NEW_SOFT_OBJ(UOperatingSystemDirectory, OwningDirectory.Get(), DirectoryClass, Directory);
	}
	else
	{
		if (OwningPartition->GetChildDirectory(TargetDir->GetDirectoryName().ToString(), false))
		{
			return nullptr;
		}
		ProxyDirectory = NEW_SOFT_OBJ(UOperatingSystemDirectory, OwningPartition.Get(), DirectoryClass, Directory);
	}

	ProxyDirectory->ParentPartition = OwningPartition;
	ProxyDirectory->ParentDirectory = OwningDirectory;
	ProxyDirectory->ParentOS = OwningOS;
	ProxyDirectory->Internal_Validate(OutError);
	if (OutError.IsValid())
	{
		ProxyDirectory->MarkAsGarbage();
		ProxyDirectory = nullptr;
		return nullptr;
	}

	if (!bIsFromSaveGame)
	{
		for (const auto& FileClass : ProxyDirectory->FileClasses)
		{
			auto CreatedFile = UOperatingSystemFile::CreateFile(ProxyDirectory, FileClass, OutError);
			if (OutError.IsValid())
			{
				OwningOS->AddNotification(OutError, EOperatingSystemNotificationCategory::OperatingSystem);
				OutError.Reset();
			}
			else
			{
				ProxyDirectory->Files.Emplace(CreatedFile);
			}
		}

		const auto ChildCollectionSoftPtr = ProxyDirectory->ChildDirectoryCollection;
		if (!ChildCollectionSoftPtr.IsNull())
		{
			const auto& ChildDirs = ChildCollectionSoftPtr.LoadSynchronous()->GetDirectories();
			ProxyDirectory->ChildDirectories.Reserve(ChildDirs.Num());

			OS_CLOG_WARN(Directory, ChildDirs.IsEmpty(), FString::Printf(TEXT("%s assigned in %s directory is empty."), *ChildCollectionSoftPtr->GetName(), *ProxyDirectory->Name.ToString()));

			for (const auto& It : ChildDirs)
			{
				if (It.IsNull())
				{
					OS_LOG_WARN(Directory, FString::Printf(TEXT("%s in %s directory has null entry. Please remove it or assign a valid class."), *ChildCollectionSoftPtr->GetName(), *ProxyDirectory->Name.ToString()));
					continue;
				}

				if (auto NewChildDirectory = CreateDirectory(OwningPartition, ProxyDirectory, OwningOS, It, false, OutError))
				{
					ProxyDirectory->ChildDirectories.Emplace(NewChildDirectory);
				}

				if (OutError.IsValid())
				{
					break;
				}
			}
		}
	}
	else if (OwningDirectory.IsValid())
	{
		OwningDirectory->ChildDirectories.Emplace(ProxyDirectory);
	}

	OS_LOG_VERY_VERBOSE(Directory, FString::Printf(TEXT("Directory created: %s"), *ProxyDirectory->GetFullPath().GetValue()));
	return ProxyDirectory;
}

FText UOperatingSystemDirectory::GetDirectoryName() const
{
	FText OutName;
	if (UOperatingSystemStatics::GetSpecialDirectoryName(Tag, OutName))
	{
		return OutName;
	}

	return Name;
}

bool UOperatingSystemDirectory::IsSystemDirectory() const
{
	return Tag != DirOther_Tag;
}

UObject* UOperatingSystemDirectory::GetDirectoryIconObject() const
{
	return OverrideIcon.IsNull() ? ParentOS->GetDirectoryIconObject(Tag) : OverrideIcon.LoadSynchronous();
}

void UOperatingSystemDirectory::GetParentExplorerInterface(TScriptInterface<IOperatingSystemExplorerInterface>& OutInterface) const
{
	if (ParentDirectory.IsValid())
	{
		OutInterface = ParentDirectory.Get();
		return;
	}

	OutInterface = ParentPartition.Get();
}

bool UOperatingSystemDirectory::FindDirectoryByTag(const FGameplayTag DirectoryTag, const bool bRecursive, UOperatingSystemDirectory*& OutDirectory) const
{
	OutDirectory = nullptr;
	if (!UOperatingSystemStatics::IsOperatingSystemTagValid(DirectoryTag))
	{
		return false;
	}

	if (Tag == DirectoryTag)
	{
		OutDirectory = const_cast<UOperatingSystemDirectory*>(this);
		return true;
	}

	for (const auto& It : ChildDirectories)
	{
		if (It->Tag == DirectoryTag)
		{
			OutDirectory = It;
			break;
		}
		else if (bRecursive)
		{
			const auto& ChildDirs = It->GetChildDirectories();
			for (const auto& ChildDir : ChildDirs)
			{
				if (ChildDir->FindDirectoryByTag(DirectoryTag, bRecursive, OutDirectory))
				{
					return true;
				}
			}
		}
	}

	return IsValid(OutDirectory);
}

TScriptInterface<IOperatingSystemExplorerInterface> UOperatingSystemDirectory::Internal_GetDirectoryFromPathUnix(const FString& NewPath) const
{
	unimplemented();
	return nullptr;
}

TScriptInterface<IOperatingSystemExplorerInterface> UOperatingSystemDirectory::Internal_GetDirectoryFromPathNonUnix(const FString& NewPath) const
{
	if (!NewPath.IsEmpty())
	{
		if (NewPath == ParentPartition->GetPartitionPath())
		{
			return ParentPartition.Get();
		}

		if (NewPath == "..")
		{
			if (ParentDirectory.IsValid())
			{
				return ParentDirectory.Get();
			}

			return ParentPartition.Get();
		}

		TArray<FString> OutPaths;
		NewPath.ParseIntoArray(OutPaths, *UOperatingSystemStatics::GetPathDelimiter(ParentOS.Get()));
		if (OutPaths.IsEmpty())
		{
			return nullptr;
		}

		if (OutPaths[0].EndsWith(":"))
		{
			const auto DiskLetter = OutPaths[0].Replace(TEXT(":"), TEXT(""));
			const auto TargetPartition = ParentOS->FindPartitionFromLetter(*DiskLetter);
			if (ensureMsgf(IsValid(TargetPartition), TEXT("Target Partition is null. This should never happen.")))
			{
				OutPaths.RemoveAt(0);
				if (OutPaths.IsEmpty())
				{
					return TargetPartition;
				}

				if (OutPaths.Num() == 1)
				{
					return TargetPartition->GetChildDirectory(OutPaths[0], false);
				}

				const int32 ArrayLength = OutPaths.Num() - 1;
				TScriptInterface<IOperatingSystemExplorerInterface> CurrentInterface = TargetPartition;
				for (int32 i = 0; i < ArrayLength; ++i)
				{
					CurrentInterface = CurrentInterface->GetChildDirectory(OutPaths[i], false);
					if (CurrentInterface.GetObject() == nullptr)
					{
						return nullptr;
					}
				}

				return CurrentInterface->GetChildDirectory(OutPaths.Last(), false);
			}
		}
		else
		{
			TScriptInterface<IOperatingSystemExplorerInterface> CurrentInterface = const_cast<UOperatingSystemDirectory*>(this);
			if (OutPaths.Num() == 1)
			{
				return CurrentInterface->GetChildDirectory(OutPaths[0], false);
			}

			const int32 ArrayLength = OutPaths.Num() - 1;
			for (int32 i = 0; i < ArrayLength; ++i)
			{
				CurrentInterface = CurrentInterface->GetChildDirectory(OutPaths[i], false);
				if (CurrentInterface.GetObject() == nullptr)
				{
					return nullptr;
				}
			}

			return CurrentInterface->GetChildDirectory(OutPaths.Last(), false);
		}
	}

	return nullptr;
}

TScriptInterface<IOperatingSystemExplorerInterface> UOperatingSystemDirectory::GetChildDirectory(const FString& TargetChildDirectoryName, const bool bRecursive /*= true*/) const
{
	if (TargetChildDirectoryName.IsEmpty())
	{
		return nullptr;
	}

	// First check child directories instead of iterating their child if recursive is true.
	for (const auto& ChildDir : ChildDirectories)
	{
		if (ChildDir->Name.ToString() == TargetChildDirectoryName)
		{
			return ChildDir.Get();
		}
	}

	if (bRecursive)
	{
		for (const auto& ChildDir : ChildDirectories)
		{
			auto GrandChildDir = ChildDir->GetChildDirectory(TargetChildDirectoryName, true);
			if (GrandChildDir)
			{
				return GrandChildDir;
			}
		}
	}

	return nullptr;
}

TArray<UOperatingSystemFile*> UOperatingSystemDirectory::GetAllFiles(const FString& WithExtension /*= "*"*/) const
{
	if (WithExtension == "*" || WithExtension.IsEmpty() || WithExtension == ".")
	{
		return Files;
	}

	TArray<UOperatingSystemFile*> FilteredFiles;
	for (const auto& It : Files)
	{
		if (It->GetExtension().ToString() == WithExtension)
		{
			FilteredFiles.Emplace(It);
		}
	}

	return FilteredFiles;
}

bool UOperatingSystemDirectory::HasEnoughSpace(const FOperatingSystemSizeInMB& TestSpace) const
{
	return ParentOS->HasEnoughSpace(TestSpace.SizeInBytes, ParentPartition.Get());
}

UOperatingSystem* UOperatingSystemDirectory::GetOperatingSystem() const
{
	return ParentOS.Get();
}

TOptional<FString> UOperatingSystemDirectory::GetFullPath() const
{
	struct FLocal_DirectoryPath
	{
		const bool bIsPartition;
		const FString Name;

		FLocal_DirectoryPath()
			: bIsPartition(false)
			, Name("")
		{
		}

		FLocal_DirectoryPath(const bool bIsPartition, const FString& Name)
			: bIsPartition(bIsPartition)
			, Name(Name)
		{
		}
	};

	const auto PathDelimiter = UOperatingSystemStatics::GetPathDelimiter(ParentOS.Get());

	FString FullPath = "";
	TArray<FLocal_DirectoryPath> Paths;

	if (ParentOS->IsUnix())
	{
		auto CurrentDirectory = const_cast<UOperatingSystemDirectory*>(this);

		if (CurrentDirectory->IsUnixRootDirectory())
		{
			return PathDelimiter;
		}
		
		bool bReachedRootDirectory = false;
		while (!bReachedRootDirectory)
		{
			CurrentDirectory = CurrentDirectory->ParentDirectory.Get();
			Paths.Emplace(false, CurrentDirectory->GetDirectoryName().ToString());
			if (CurrentDirectory->IsUnixRootDirectory())
			{
				bReachedRootDirectory = true;
			}
		}
	}
	else
	{
		TWeakObjectPtr<const UOperatingSystemDirectory> LastParentDirectory = ParentDirectory;
		bool bReachedPartition = false;
		while (!bReachedPartition)
		{
			if (LastParentDirectory.IsValid())
			{
				Paths.Emplace(FLocal_DirectoryPath(false, LastParentDirectory->GetDirectoryName().ToString()));
				LastParentDirectory = LastParentDirectory->ParentDirectory;			
			}
			else
			{
				Paths.Emplace(FLocal_DirectoryPath(true, ParentPartition->GetDiskLetter().ToString()));
				bReachedPartition = true;
			}
		}
	}

	Algo::Reverse(Paths);
	if (Paths.IsEmpty())
	{
		ensureMsgf(false, TEXT("Paths was empty for %s directory. This might result in undefined behavior."), *Name.ToString());
		return {};
	}
	
	if (!ParentOS->IsUnix() && !Paths[0].bIsPartition)
	{
		ensureMsgf(false, TEXT("First entry of path in Non-Unix Operating System must start with Disk Letter instead of %s. Something is wrong for directory %s"), *Paths[0].Name, *Name.ToString());
		return {};
	}

	for (const auto& It : Paths)
	{
		if (It.bIsPartition)
		{
			FullPath = FString::Printf(TEXT("%s:%s"), *It.Name, *PathDelimiter);
		}
		else
		{
			if (FullPath.IsEmpty())
			{
				FullPath = Paths[0].Name;
			}
			else
			{
				FullPath += FString::Printf(TEXT("%s%s"), *It.Name, *PathDelimiter);
			}
		}
	}

	return FString::Printf(TEXT("%s%s"), *FullPath, *Name.ToString());
}

TScriptInterface<IOperatingSystemExplorerInterface> UOperatingSystemDirectory::GetInterfaceFromPath(const FString& NewPath) const
{
	return ParentOS->IsUnix() ? Internal_GetDirectoryFromPathUnix(NewPath) : Internal_GetDirectoryFromPathNonUnix(NewPath);
}

void UOperatingSystemDirectory::LoadFiles(const FOperatingSystemDirectoriesSaveLoad& DirectoriesSaveLoad)
{
	for (const auto& File : DirectoriesSaveLoad.SaveLoad_Files)
	{
		FGenericError OutError;
		auto CreatedFile = UOperatingSystemFile::CreateFile(this, TSoftClassPtr<UOperatingSystemFile>(FSoftClassPath(File.ClassPath)), OutError);
		if (IsValid(CreatedFile))
		{
			Files.Emplace(CreatedFile);
		}
	}
}

FString UOperatingSystemDirectory::GetDirectoryPath() const
{
	const auto DirFullPath = GetFullPath().GetValue();

	if (ParentOS->IsUnix())
	{
		if (IsUnixRootDirectory())
		{
			return DirFullPath;
		}
		
		const auto RegexString = UOperatingSystemStatics::RegexExpression(DirFullPath, "");
		return DirFullPath.Replace(*RegexString, TEXT(""));
	}

	static const FString DirectoryReplace = "|";
	static const FString RegexPattern = FString::Printf(TEXT("([^%s]*$)"), *DirectoryReplace);
	
	const auto FormattedPath = DirFullPath.Replace(TEXT("\\"), *DirectoryReplace);
	const auto RegexString = UOperatingSystemStatics::RegexExpression(FormattedPath, RegexPattern);
	
	return FormattedPath.Replace(*RegexString, TEXT("")).Replace(*DirectoryReplace, TEXT("\\"));
}

void UOperatingSystemDirectory::GetSaveData(TArray<FOperatingSystemDirectoriesSaveLoad>& OutSaveData) const
{
	auto& SaveData = OutSaveData.Emplace_GetRef();
	SaveData.SaveLoad_Path = GetDirectoryPath();
	SaveData.SaveLoad_Name = GetDirectoryName().ToString();
	SaveData.SaveLoad_DirectoryClass = TSoftClassPtr<UOperatingSystemDirectory>(GetClass()).ToString();

	for (const auto& ChildFile : Files)
    {
    	auto& SaveFileData = SaveData.SaveLoad_Files.Emplace_GetRef();
		SaveFileData.Extension = ChildFile->GetExtension().ToString();
		SaveFileData.Name = ChildFile->GetFileName(false).ToString();
		SaveFileData.ClassPath = TSoftClassPtr<UOperatingSystemFile>(ChildFile.GetClass()).ToString();
    }

	for (const auto& ChildDir : ChildDirectories)
	{
		ChildDir->GetSaveData(OutSaveData);
	}
}

bool UOperatingSystemDirectory::CheckForDirectoryWithTag(const FGameplayTag& TestTag, const bool bRecursive) const
{
	if (Tag == TestTag)
	{
		return true;
	}

	if (bRecursive && !ChildDirectoryCollection.IsNull())
	{
		return ChildDirectoryCollection.LoadSynchronous()->HasDirectoryWithTag(TestTag, bRecursive);
	}

	return false;
}

void UOperatingSystemDirectory::Internal_Validate(FGenericError& OutError)
{
	if (!UOperatingSystemStatics::IsOperatingSystemTagValid(Tag))
	{
		OutError = MAKE_ERROR("ERR_DIR", FString::Printf(TEXT("%s tag is not set."), *GetName()));
		return;
	}

	if (Tag == DirOther_Tag && Name.IsEmptyOrWhitespace())
	{
		OutError = MAKE_ERROR("ERR_DIR", FString::Printf(TEXT("%s has no name set. Custom directories requires valid name."), *GetName()));
		return;
	}

	const auto IconValuePtr = ParentOS->GetDirectoryIcons().Find(Tag);
	if (IconValuePtr == nullptr)
	{
		OutError = MAKE_ERROR("ERR_DIR", FString::Printf(TEXT("%s icon tag %s not set."), *GetDirectoryName().ToString(), *Tag.ToString()));
		return;
	}

	const auto IconValue = *IconValuePtr;
	if (IconValue.IsNull())
	{
		OutError = MAKE_ERROR("ERR_DIR", FString::Printf(TEXT("%s icon null for tag %s."), *GetDirectoryName().ToString(), *Tag.ToString()));
		return;
	}

	OnValidate(OutError);
}
