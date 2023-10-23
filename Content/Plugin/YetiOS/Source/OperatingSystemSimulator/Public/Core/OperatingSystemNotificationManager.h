// Copyright 2023 - YetiTech Studios, Pvt Ltd. All Rights Reserved.

#pragma once

#include "OperatingSystemTypes.h"
#include "Engine/TimerHandle.h"

class FOperatingSystemNotificationManager;

typedef TSharedPtr<FOperatingSystemNotificationManager, ESPMode::NotThreadSafe> FOperatingSystemNotificationManagerPtr;
typedef TSharedRef<FOperatingSystemNotificationManager, ESPMode::NotThreadSafe> FOperatingSystemNotificationManagerRef;

using FOnShowNotification = TDelegate<void(const FOperatingSystemNotification&)>;
using FOnClearAllNotifications = TDelegate<void()>;

class FOperatingSystemNotificationManager : public TSharedFromThis<FOperatingSystemNotificationManager, ESPMode::NotThreadSafe>
{
	TArray<FOperatingSystemNotification> Notifications;
	FTimerHandle TimerHandle_Notifications;
	TWeakObjectPtr<UWorld> World;
	float TimeToDisplay;

public:

	FOperatingSystemNotificationManager(UWorld* ParentWorld, const float& TimeToDisplay);
	~FOperatingSystemNotificationManager();

	FOnShowNotification OnShowNotification;
	FOnClearAllNotifications OnClearAllNotifications;

	static FORCEINLINE FOperatingSystemNotificationManagerRef CreateNotificationManager(UWorld* ParentWorld, const float& TimeToDisplay)
	{
		return MakeShared<FOperatingSystemNotificationManager, ESPMode::NotThreadSafe>(ParentWorld, TimeToDisplay);
	}

	bool LogNotification(const FOperatingSystemNotification& NewNotification);
	void ClearAllNotifications();

private:

	void Internal_ScheduleNextNotification();
	void Internal_ShowNotification();

public:
	
	FORCEINLINE const TArray<FOperatingSystemNotification>& GetNotificationsRef() const { return Notifications; }
};
