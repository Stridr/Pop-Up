// Copyright 2023 - YetiTech Studios, Pvt Ltd. All Rights Reserved.

#include "GlobalMessageSubsystem.h"
#include "GlobalMessengerModule.h"
#include "Engine/World.h"

void UGlobalMessageSubsystem::Deinitialize()
{
	GMessenger->ClearMappedDelegates();
	Super::Deinitialize();
}

UGlobalMessageSubsystem* UGlobalMessageSubsystem::Get(const UWorld& TargetWorld)
{
	return TargetWorld.GetSubsystem<UGlobalMessageSubsystem>();
}

void UGlobalMessageSubsystem::BroadcastMessage(const FGameplayTag FilterTag, UObject* Payload)
{
	GMessenger->BroadcastMessage(FilterTag, Payload);
}

void UGlobalMessageSubsystem::ListenToMessage(const UObject* WorldContextObject, const FGameplayTag FilterTag, const FGlobalMessageReceiveDelegate& Callback)
{
	GMessenger->AddListener(WorldContextObject, FilterTag, Callback);
}

bool UGlobalMessageSubsystem::RemoveListener(const UObject* ListenerObject)
{
	return GMessenger->RemoveListener(ListenerObject);
}
