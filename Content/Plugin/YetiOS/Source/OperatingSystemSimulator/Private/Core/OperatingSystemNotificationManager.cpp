// Copyright 2023 - YetiTech Studios, Pvt Ltd. All Rights Reserved.

#include "Core/OperatingSystemNotificationManager.h"
#include "TimerManager.h"

FOperatingSystemNotificationManager::FOperatingSystemNotificationManager(UWorld* ParentWorld, const float& TimeToDisplay)
	: World(ParentWorld)
	, TimeToDisplay(TimeToDisplay)
{
	// Nothing ¯\_(ツ)_/¯
}

FOperatingSystemNotificationManager::~FOperatingSystemNotificationManager()
{
	OnShowNotification.Unbind();
	OnClearAllNotifications.Unbind();
	Notifications.Empty();
	if (World.IsValid())
	{
		World->GetTimerManager().ClearTimer(TimerHandle_Notifications);
	}
	World.Reset();
}

bool FOperatingSystemNotificationManager::LogNotification(const FOperatingSystemNotification& NewNotification)
{
	if (NewNotification.IsValid())
	{
		Notifications.Emplace(NewNotification);
		if (!World->GetTimerManager().IsTimerActive(TimerHandle_Notifications))
		{
			Internal_ShowNotification();
		}
		return true;
	}

	return false;
}

void FOperatingSystemNotificationManager::ClearAllNotifications()
{
	Notifications.Reset();
	World->GetTimerManager().ClearTimer(TimerHandle_Notifications);
	OnClearAllNotifications.Execute();
}

void FOperatingSystemNotificationManager::Internal_ScheduleNextNotification()
{
	Notifications.RemoveAt(0);
	if (Notifications.IsValidIndex(0))
	{
		Internal_ShowNotification();
	}
}

void FOperatingSystemNotificationManager::Internal_ShowNotification()
{
	OnShowNotification.Execute(Notifications[0]);
	const FTimerDelegate MyDelegate = FTimerDelegate::CreateSP(this, &FOperatingSystemNotificationManager::Internal_ScheduleNextNotification);
	World->GetTimerManager().SetTimer(TimerHandle_Notifications, MyDelegate, TimeToDisplay + 1.f, false);
}
