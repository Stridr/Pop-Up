// Copyright 2023 - YetiTech Studios, Pvt Ltd. All Rights Reserved.

#include "GlobalMessenger.h"

DEFINE_LOG_CATEGORY_STATIC(LogGlobalMessenger, All, All)

FGlobalMessenger::~FGlobalMessenger()
{
	UE_LOG(LogGlobalMessenger, VeryVerbose, TEXT("Destroyed FGlobalMessenger."));
	ClearMappedDelegates();
}

void FGlobalMessenger::BroadcastMessage(const FGameplayTag& FilterTag, UObject* Payload)
{
	TArray<FGlobalMessageReceiveDelegate> Callbacks;
	Callbacks.Reserve(MappedDelegates.Num());
	for (auto& It : MappedDelegates)
	{
		if (FilterTag.IsValid())
		{
			if (It.Key.FilterTag == FilterTag)
			{
				Callbacks.Emplace(It.Value);
				It.Key.TotalExecutions++;
			}
		}
		else
		{
			Callbacks.Emplace(It.Value);
			It.Key.TotalExecutions++;
		}
	}

	UE_CLOG(!Callbacks.IsEmpty(), LogGlobalMessenger, Verbose, TEXT("Executing global message on %i callbacks."), Callbacks.Num());
	for (const auto& Callback : Callbacks)
	{
		if (!Callback.IsBound())
		{
			UE_LOG(LogGlobalMessenger, Warning, TEXT("Unbound function '%s' detected. This means the owning object could be destroyed. To prevent this, make sure to call 'Remove Listener' on the object before destroying it."), *Callback.GetFunctionName().ToString());
			continue;
		}
		
		Callback.Execute(Payload);
	}
}

void FGlobalMessenger::AddListener(const UObject* NewListener, const FGameplayTag& FilterTag, const FGlobalMessageReceiveDelegate& Callback)
{
	if (!IsValid(NewListener))
	{
		return;
	}
	
	MappedDelegates.Add(FGlobalMessageListener(NewListener, FilterTag), Callback);
	UE_LOG(LogGlobalMessenger, Display, TEXT("'%s' added to global message system. Total: %i"), *NewListener->GetName(), MappedDelegates.Num());
}

bool FGlobalMessenger::RemoveListener(const UObject* TestObject)
{
	bool bSuccess = false;
	for (const auto& It : MappedDelegates)
	{
		if (It.Key.IsObject(TestObject))
		{
			bSuccess = true;
			MappedDelegates.Remove(It.Key);
			MappedDelegates.CompactStable();
			MappedDelegates.Shrink();
			UE_LOG(LogGlobalMessenger, Display, TEXT("'%s' removed from global message system. Remaining: %i"), *TestObject->GetName(), MappedDelegates.Num());
			break;
		}
	}

	return bSuccess;
}

void FGlobalMessenger::ClearMappedDelegates()
{
	UE_CLOG(!MappedDelegates.IsEmpty(), LogGlobalMessenger, VeryVerbose, TEXT("Cleared %i global delegates."), MappedDelegates.Num());
	MappedDelegates.Empty();
}

#if WITH_GAMEPLAY_DEBUGGER
TArray<FString> FGlobalMessenger::GetBoundObjectNames(int32& OutTotal, int32& OutValid, int32& OutInValid) const
{
	OutTotal = OutValid = OutInValid = 0;
	TArray<FString> ReturnResult;
	for (const auto& It : MappedDelegates)
	{
		OutTotal++;
		if (const auto MyObj = It.Key.ObjectKey.ResolveObjectPtr())
		{
			OutValid++;
			if (It.Key.FilterTag.IsValid())
			{
				ReturnResult.Emplace(FString::Printf(TEXT("%s is listening to %s. (Ran %u times)"), *MyObj->GetName(), *It.Key.FilterTag.ToString(), It.Key.TotalExecutions));
			}
			else
			{
				ReturnResult.Emplace(FString::Printf(TEXT("%s is listening for all messages. (Ran %u times)"), *MyObj->GetName(), It.Key.TotalExecutions));
			}
		}
		else
		{
			OutInValid++;
		}
	}
	
	return ReturnResult;
}
#endif
