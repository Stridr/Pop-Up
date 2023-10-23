// Copyright 2023 - YetiTech Studios, Pvt Ltd. All Rights Reserved.

#include "Programs/OperatingSystemStore.h"
#include "OperatingSystemJsonStatics.h"
#include "OperatingSystemMacros.h"
#include "Core/OperatingSystem.h"
#include "Misc/OperatingSystemStoreProgramsCollection.h"
#include "Programs/OperatingSystemProgramData.h"
#include "Programs/OperatingSystemProgramSettings.h"

UOperatingSystemStore::UOperatingSystemStore()
{
	Identifier = FName("store");
	SpaceRequiredInMB = 10.f;
	bRequiresData = true;

	CTOR_LOAD_OBJ(UTexture2D, IconObject, "/OperatingSystemSimulator/OperatingSystemContent/Shared/Textures/Programs/T_UI_Shop_A");
	
	CTOR_LOAD_CLASS(UOperatingSystemProgramSettings, SettingsClass, "/OperatingSystemSimulator/OperatingSystemContent/Shared/Blueprints/Programs/Store/BP_Prog_StoreSettings");
	CTOR_LOAD_CLASS(UOperatingSystemProgramData, DataClass, "/OperatingSystemSimulator/OperatingSystemContent/Shared/Blueprints/Programs/Store/BP_Prog_StoreData");

	CTOR_LOAD_OBJ(UOperatingSystemStoreProgramsCollection, StoreProgramsCollection, "/OperatingSystemSimulator/OperatingSystemContent/Shared/Blueprints/Programs/Store/DA_Store_Programs");
}

FString UOperatingSystemStore::GetSaveSlotName() const
{
	return Identifier.ToString();
}

bool UOperatingSystemStore::SubmitRating(const TSoftClassPtr<UOperatingSystemBaseProgram>& TargetProgram,
	const FOperatingSystemStoreReviewUser& ReviewingUser)
{
	if (TargetProgram.IsNull())
	{
		const FGenericError Error(MAKE_ERROR("ERR_RATING", "Submit Rating failed. Null program."));
		GetOperatingSystem()->AddNotification(Error, EOperatingSystemNotificationCategory::Application);
		return false;
	}
	
	if (!ReviewingUser.IsValid())
	{
		const FGenericError Error(MAKE_ERROR("ERR_RATING", "Submit Rating failed. Reviewing user is not valid."));
		GetOperatingSystem()->AddNotification(Error, EOperatingSystemNotificationCategory::Application);
		return false;
	}
	
	FOperatingSystemStoreApps StoreApps;
	if (!Internal_GetSaveFile(StoreApps))
	{
		const FGenericError Error(MAKE_ERROR("ERR_RATING", "Submit Rating failed. Couldn't fetch save game."));
		GetOperatingSystem()->AddNotification(Error, EOperatingSystemNotificationCategory::Application);
		return false;
	}

	int32 TargetIdx = 0;
	FOperatingSystemStoreProgramData* TargetProgramData = nullptr;
	for (int i = 0; i < StoreApps.StoreProgram.Num(); ++i)
	{
		if (StoreApps.StoreProgram[i].Program == TargetProgram)
		{
			TargetProgramData = &StoreApps.StoreProgram[i];
			TargetIdx = i;
			break;
		}
	}

	if (TargetProgramData)
	{
		TargetProgramData->ReviewUsers.Emplace(ReviewingUser);
		StoreApps.AverageRatings[TargetIdx] = Internal_GetCurrentAverageRating(TargetProgramData->ReviewUsers);
	}
	else
	{
		StoreApps.StoreProgram.Emplace(FOperatingSystemStoreProgramData(TargetProgram, ReviewingUser));
		StoreApps.AverageRatings.Emplace(Internal_GetCurrentAverageRating(StoreApps.StoreProgram[0].ReviewUsers));
	}

	return UOperatingSystemJsonStatics::WriteStructToJson(GetSaveSlotName(), StoreApps);
}

float UOperatingSystemStore::GetAverageRating(const FOperatingSystemStoreProgramData& StoreProgramData)
{
	return Internal_GetCurrentAverageRating(StoreProgramData.ReviewUsers);
}

void UOperatingSystemStore::OnValidate(FGenericError& OutError) const
{
	if (StoreProgramsCollection.IsNull())
	{
		OutError = MAKE_ERROR("ERR_STORE_PROGRAM", FString::Printf(TEXT("%s validation error: Store programs collection missing"), *GetClass()->GetName()));
		return;		
	}

	const auto StorePrograms = StoreProgramsCollection.LoadSynchronous();
	StorePrograms->Validate(OutError);
}

void UOperatingSystemStore::OnStart(FGenericError& OutError)
{
	Internal_TryCreateSaveFile();
}

void UOperatingSystemStore::Internal_TryCreateSaveFile() const
{
	if (!UOperatingSystemJsonStatics::DoesFileExists(GetSaveSlotName()))
	{
		const auto StorePrograms = StoreProgramsCollection.LoadSynchronous();
		const auto& MyPrograms = StorePrograms->GetStorePrograms();

		FOperatingSystemStoreApps AppStruct;
		for (const auto& It : MyPrograms)
		{
			TSet<FOperatingSystemStoreReviewUser> ValidReviewUsers;
			for (const auto& ReviewUser : It.ReviewUsers)
			{
				if (!ReviewUser.IsValid())
				{
					continue;
				}

				ValidReviewUsers.Emplace(ReviewUser);
			}

			AppStruct.StoreProgram.Emplace(FOperatingSystemStoreProgramData(It.Program, ValidReviewUsers));
			AppStruct.AverageRatings.Emplace(Internal_GetCurrentAverageRating(ValidReviewUsers));
		}

		UOperatingSystemJsonStatics::WriteStructToJson(GetSaveSlotName(), AppStruct);
	}
}

bool UOperatingSystemStore::Internal_GetSaveFile(FOperatingSystemStoreApps& OutStoreApps) const
{
	Internal_TryCreateSaveFile();
	return UOperatingSystemJsonStatics::ReadStructFromJson(GetSaveSlotName(), OutStoreApps);
}

float UOperatingSystemStore::Internal_GetCurrentAverageRating(
	const TSet<FOperatingSystemStoreReviewUser>& ReviewUsers)
{
	if (ReviewUsers.IsEmpty())
	{
		return 0.f;
	}
	
	float TotalOneStars = 0.f;
	float TotalTwoStars = 0.f;
	float TotalThreeStars = 0.f;
	float TotalFourStars = 0.f;
	float TotalFiveStars = 0.f;

	for (const auto& It : ReviewUsers)
	{
		if (!It.IsValid())
		{
			continue;
		}
		
		switch (It.SubmittedRating)
		{
			case 1:
				TotalOneStars++;
				break;
			case 2:
				TotalTwoStars++;
				break;
			case 3:
				TotalThreeStars++;
				break;
			case 4:
				TotalFourStars++;
				break;
			case 5:
				TotalFiveStars++;
				break;
			default:
				checkNoEntry(); // This code block should never reach!
		}
	}

	const float TotalScore = 1 * TotalOneStars + 2 * TotalTwoStars + 3 * TotalThreeStars + 4 * TotalFourStars + 5 * TotalFiveStars;
	if (TotalScore <= UE_KINDA_SMALL_NUMBER)
	{
		return 0.f;
	}
	
	const float AverageRating = TotalScore / ReviewUsers.Num();
	return AverageRating;
}
