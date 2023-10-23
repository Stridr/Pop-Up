// Copyright 2023 - YetiTech Studios, Pvt Ltd. All Rights Reserved.

#pragma once

#include "OperatingSystem.h"
#include "OperatingSystemTypes.h"
#include "GameFramework/SaveGame.h"
#include "OperatingSystemUserManager.generated.h"

class AOperatingSystemDeviceActor;
class UOperatingSystem;

USTRUCT()
struct FOperatingSystemUserManagerSaveData
{
	GENERATED_BODY()

	UPROPERTY()
	TSet<FOperatingSystemUser> Users;

	FOperatingSystemUserManagerSaveData() : Users({})
	{
	}
};

UCLASS(Blueprintable)
class UOperatingSystemUserManager : public USaveGame
{
	GENERATED_BODY()

	uint8 bHasBlueprintOnUserCreated : 1;
	uint8 bHasBlueprintOnUserUpdated : 1;

protected:

	UPROPERTY()
	TMap<FString, FOperatingSystemUserManagerSaveData> Users;

public:

	UOperatingSystemUserManager();

	static UOperatingSystemUserManager* CreateUserManager();
	static FString GetUserKey(const UOperatingSystem* TargetOS);

	UFUNCTION(BlueprintCallable, Category = OperatingSystemUserManager)
	bool FindUserByEmail(const FText& TestEmail, FOperatingSystemUser& OutUser);

	UFUNCTION(BlueprintCallable, Category = OperatingSystemUserManager)
	bool FindUserByUsername(const FText& TestUsername, FOperatingSystemUser& OutUser);

	UFUNCTION(BlueprintPure, Category = OperatingSystemUserManager, meta = (Keywords = "has user, verify, does user exist"))
	bool CheckUserExistForOperatingSystem(const UOperatingSystem* TargetOS, const FOperatingSystemUser& TestUser, const bool bCheckByUsernameOnly) const;

	UFUNCTION(BlueprintPure, Category = OperatingSystemUserManager, meta = (Keywords = "has user, verify, does user exist"))
	bool CheckUserExist(const FOperatingSystemUser& TestUser, const bool bCheckByUsernameOnly) const;

	bool CreateNewUser(UOperatingSystem* TargetOS, const FOperatingSystemUser& NewUser);	
	TSet<FOperatingSystemUser> GetAllUsersForOS(const UOperatingSystem* TargetOS) const;

	/**
	 * public
	 * UOperatingSystemUserManager::UpdateUserDetails
	 * Updates the details for the given user. If you don't want specific data to change, simply leave them empty or null.
	 * @param TargetUser User to update
	 * @param UpdatedDetails Details to update. If a setting is null or empty, it is not updated
	 * @return True if the details were updated. False otherwise.
	 */
	UFUNCTION(BlueprintCallable, Category = OperatingSystemUserManager)
	bool UpdateUserDetails(UPARAM(ref) FOperatingSystemUser& TargetUser, const FOperatingSystemUser& UpdatedDetails);

	void ForEachUserInOS(const UOperatingSystem* TargetOS, const TFunctionRef<bool(const FOperatingSystemUser&)> Func) const;
	void ForEachUserInOS(const UOperatingSystem* TargetOS, const TFunctionRef<bool(FOperatingSystemUser&)> Func);

	void ForEachUser(const TFunctionRef<bool(const FOperatingSystemUser&)>& Func) const;
	void ForEachUser(const TFunctionRef<bool(FOperatingSystemUser&)>& Func);

private:
	
	void Internal_Save();

protected:

	UFUNCTION(BlueprintImplementableEvent, Category = OperatingSystemUserManager, DisplayName = "On User Created")
	void K2_OnUserCreated(const FOperatingSystemUser& CreatedUser);

	UFUNCTION(BlueprintImplementableEvent, Category = OperatingSystemUserManager, DisplayName = "On User Updated")
	void K2_OnUserUpdated(UPARAM(ref) FOperatingSystemUser& TargetUser, const FOperatingSystemUser& UpdatedDetails);
};
