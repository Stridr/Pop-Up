// Copyright 2023 - YetiTech Studios, Pvt Ltd. All Rights Reserved.

#pragma once

#include "GameplayTagContainer.h"
#include "UObject/ObjectKey.h"
#include "GlobalMessageSubsystem.h"

struct FGlobalMessageListener
{
	const FObjectKey ObjectKey;
	const FGameplayTag FilterTag;
	uint32 TotalExecutions;

	FORCEINLINE bool IsObject(const UObject* TestObj) const { return ObjectKey.ResolveObjectPtr() == TestObj; }
	FORCEINLINE bool operator==(const FGlobalMessageListener& Other) const { return ObjectKey == Other.ObjectKey && FilterTag == Other.FilterTag; }
	FORCEINLINE friend uint32 GetTypeHash(const FGlobalMessageListener& Other)
	{
		return GetTypeHash(Other.ObjectKey) ^ GetTypeHash(Other.FilterTag);
	}

	FGlobalMessageListener() = delete;
	FGlobalMessageListener(const UObject* Object, const FGameplayTag& FilterTag)
		: ObjectKey(Object), FilterTag(FilterTag), TotalExecutions(0)
	{
	}
};

class FGlobalMessenger : public TSharedFromThis<FGlobalMessenger>
{
	TMap<FGlobalMessageListener, FGlobalMessageReceiveDelegate> MappedDelegates;
	
public:

	~FGlobalMessenger();

	void BroadcastMessage(const FGameplayTag& FilterTag, UObject* Payload);
	void AddListener(const UObject* NewListener, const FGameplayTag& FilterTag, const FGlobalMessageReceiveDelegate& Callback);
	bool RemoveListener(const UObject* TestObject);

	void ClearMappedDelegates();

#if WITH_GAMEPLAY_DEBUGGER
	GLOBALMESSENGER_API TArray<FString> GetBoundObjectNames(int32& OutTotal, int32& OutValid, int32& OutInValid) const;
#endif
};
