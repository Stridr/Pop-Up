// Copyright 2023 - YetiTech Studios, Pvt Ltd. All Rights Reserved.

#include "Core/OperatingSystemUserManager.h"
#include "OperatingSystemLogs.h"
#include "OperatingSystemMacros.h"
#include "Global/OperatingSystemPluginSettings.h"
#include "Kismet/GameplayStatics.h"
#include "Runtime/CoreUObject/Public/UObject/Package.h"

DEFINE_OS_LOG(UserManager)

static constexpr const uint8 UserIndex = 0;

UOperatingSystemUserManager::UOperatingSystemUserManager()
	: Users({})
{
	IMPLEMENTED_IN_BP_LAMBDA();

	CHECK_IN_BP(UOperatingSystemUserManager, OnUserCreated);
	CHECK_IN_BP(UOperatingSystemUserManager, OnUserUpdated);
}

UOperatingSystemUserManager* UOperatingSystemUserManager::CreateUserManager()
{
	const auto PluginSettings = UOperatingSystemPluginSettings::Get();
	const auto SaveSlotName = PluginSettings->GetUserManagerSaveSlotName();
	if (UGameplayStatics::DoesSaveGameExist(SaveSlotName, UserIndex))
	{
		auto ProxySaveGame = Cast<UOperatingSystemUserManager>(UGameplayStatics::LoadGameFromSlot(SaveSlotName, UserIndex));
		check(ProxySaveGame);
		OS_LOG(UserManager, "User manager loaded from save game.");
		return ProxySaveGame;
	}
	
	OS_LOG(UserManager, "New user manager created.");
	return NEW_SOFT_OBJ(UOperatingSystemUserManager, GetTransientPackage(), PluginSettings->GetUserManagerClass(), UserManager);
}

FString UOperatingSystemUserManager::GetUserKey(const UOperatingSystem* TargetOS)
{
	return UOperatingSystem::GetOperatingSystemUniqueID(TargetOS);
}

bool UOperatingSystemUserManager::FindUserByEmail(const FText& TestEmail, FOperatingSystemUser& OutUser)
{
	OutUser.Reset();
	
	ForEachUser([TestEmail, &OutUser](const FOperatingSystemUser& ItUser)
	{
		if (ItUser.Email.EqualToCaseIgnored(TestEmail))
		{
			OutUser = ItUser;
			return true;
		}
		
		return false;
	});

	return OutUser.IsValid();
}

bool UOperatingSystemUserManager::FindUserByUsername(const FText& TestUsername,	FOperatingSystemUser& OutUser)
{
	OutUser.Reset();
	
	ForEachUser([TestUsername, &OutUser](const FOperatingSystemUser& ItUser)
	{
		if (ItUser.Username.EqualToCaseIgnored(TestUsername))
		{
			OutUser = ItUser;
			return true;
		}
		
		return false;
	});

	return OutUser.IsValid();
}

bool UOperatingSystemUserManager::CheckUserExistForOperatingSystem(const UOperatingSystem* TargetOS,
	const FOperatingSystemUser& TestUser, const bool bCheckByUsernameOnly) const
{
	bool bSuccess = false;
	ForEachUserInOS(TargetOS, [=, &bSuccess](const FOperatingSystemUser& ItUser)
	{
		if (bCheckByUsernameOnly && ItUser.Username.EqualToCaseIgnored(TestUser.Username))
		{
			bSuccess = true;
			return true;
		}

		if (ItUser == TestUser)
		{
			bSuccess = true;
			return true;
		}

		return false;
	});

	return bSuccess;
}

bool UOperatingSystemUserManager::CheckUserExist(const FOperatingSystemUser& TestUser, const bool bCheckByUsernameOnly) const
{
	bool bSuccess = false;
	ForEachUser([=, &bSuccess](const FOperatingSystemUser& ItUser)
	{
		if (bCheckByUsernameOnly && ItUser.Username.EqualToCaseIgnored(TestUser.Username))
		{
			bSuccess = true;
			return true;
		}

		if (ItUser == TestUser)
		{
			bSuccess = true;
			return true;
		}

		return false;
	});

	return bSuccess;
}

bool UOperatingSystemUserManager::CreateNewUser(UOperatingSystem* TargetOS, const FOperatingSystemUser& NewUser)
{
	if (!IsValid(TargetOS))
	{
		OS_LOG_ERROR(UserManager, "Failed to create new user. Target OS invalid.");
		return false;
	}
	
	if (!NewUser.IsValid())
	{
		TargetOS->AddNotification(MAKE_ERROR("ERR_NEW_USER", "Failed to create new user. Not valid."), EOperatingSystemNotificationCategory::OperatingSystem);
		OS_LOG_ERROR(UserManager, "Failed to create new user. Not valid.");
		return false;
	}

	auto& UsersSet = Users.FindOrAdd(GetUserKey(TargetOS)).Users;
	if (UsersSet.Contains(NewUser))
	{
		OS_LOG_VERBOSE(UserManager, FString::Printf(TEXT("User '%s' already existed."), *NewUser.Username.ToString()));
		return true;
	}

	UsersSet.Add(NewUser);
	OS_LOG_VERBOSE(UserManager, FString::Printf(TEXT("User '%s' added."), *NewUser.Username.ToString()));

	if (bHasBlueprintOnUserCreated)
	{
		K2_OnUserCreated(NewUser);
	}
	
	Internal_Save();
	
	return true;
}

TSet<FOperatingSystemUser> UOperatingSystemUserManager::GetAllUsersForOS(const UOperatingSystem* TargetOS) const
{
	return Users.FindRef(GetUserKey(TargetOS)).Users;
}

bool UOperatingSystemUserManager::UpdateUserDetails(FOperatingSystemUser& TargetUser,
	const FOperatingSystemUser& UpdatedDetails)
{
	bool bSuccess = false;
	ForEachUser([&TargetUser, UpdatedDetails, &bSuccess](FOperatingSystemUser& ItUser)
	{
		if (ItUser == TargetUser)
		{
			ItUser.UpdateDetails(UpdatedDetails);
			TargetUser.UpdateDetails(UpdatedDetails);
			bSuccess = true;
			return true;
		}
		
		return false;
	});

	if (bSuccess)
	{
		if (bHasBlueprintOnUserUpdated)
		{
			K2_OnUserUpdated(TargetUser, UpdatedDetails);
		}
		
		Internal_Save();
	}

	return bSuccess;
}

void UOperatingSystemUserManager::ForEachUserInOS(const UOperatingSystem* TargetOS,
	const TFunctionRef<bool(const FOperatingSystemUser&)> Func) const
{
	if (!IsValid(TargetOS))
	{
		return;
	}

	const auto UsersPtr = Users.Find(GetUserKey(TargetOS));
	if (UsersPtr == nullptr)
	{
		return;
	}

	const auto UsersSet = UsersPtr->Users;
	for (const auto& It : UsersSet)
	{
		if (Func(It))
		{
			return;
		}
	}
}

void UOperatingSystemUserManager::ForEachUserInOS(const UOperatingSystem* TargetOS,
	const TFunctionRef<bool(FOperatingSystemUser&)> Func)
{
	if (!IsValid(TargetOS))
	{
		return;
	}

	const auto UsersPtr = Users.Find(GetUserKey(TargetOS));
	if (UsersPtr == nullptr)
	{
		return;
	}

	auto& UsersSet = UsersPtr->Users;
	for (auto& It : UsersSet)
	{
		if (Func(It))
		{
			return;
		}
	}
}

void UOperatingSystemUserManager::ForEachUser(const TFunctionRef<bool(const FOperatingSystemUser&)>& Func) const
{
	for (const auto& Pair : Users)
	{
		for (const auto& User : Pair.Value.Users)
		{
			if (Func(User))
			{
				return;
			}
		}
	}
}

void UOperatingSystemUserManager::ForEachUser(const TFunctionRef<bool(FOperatingSystemUser&)>& Func)
{
	for (auto& Pair : Users)
	{
		for (auto& User : Pair.Value.Users)
		{
			if (Func(User))
			{
				return;
			}
		}
	}
}

void UOperatingSystemUserManager::Internal_Save()
{
	const auto PluginSettings = UOperatingSystemPluginSettings::Get();
	const auto SaveSlotName = PluginSettings->GetUserManagerSaveSlotName();
	if (UGameplayStatics::SaveGameToSlot(this, SaveSlotName, UserIndex))
	{
		OS_LOG_VERBOSE(UserManager, "User manager data saved.");
	}
	else
	{
		OS_LOG_ERROR(UserManager, "User manager failed to save data.");
	}
}
