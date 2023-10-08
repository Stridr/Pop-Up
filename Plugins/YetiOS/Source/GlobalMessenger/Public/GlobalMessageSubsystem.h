// Copyright 2023 - YetiTech Studios, Pvt Ltd. All Rights Reserved.

#pragma once

#include "GameplayTagContainer.h"
#include "Subsystems/WorldSubsystem.h"
#include "GlobalMessageSubsystem.generated.h"

DECLARE_DYNAMIC_DELEGATE_OneParam(FGlobalMessageReceiveDelegate, UObject*, Payload);

UCLASS()
class GLOBALMESSENGER_API UGlobalMessageSubsystem : public UWorldSubsystem
{
	GENERATED_BODY()

protected:
	
	virtual void Deinitialize() override;

public:
	
	static UGlobalMessageSubsystem* Get(const UWorld& TargetWorld);

	UFUNCTION(BlueprintCallable, Category = GlobalMessageSubsystem)
	void BroadcastMessage(const FGameplayTag FilterTag, UObject* Payload);

	UFUNCTION(BlueprintCallable, Category = GlobalMessageSubsystem, meta = (WorldContext = "WorldContextObject", Keywords = "add, event, global"))
	void ListenToMessage(const UObject* WorldContextObject, const FGameplayTag FilterTag, const FGlobalMessageReceiveDelegate& Callback);

	UFUNCTION(BlueprintCallable, Category = GlobalMessageSubsystem, meta = (Keywords = "message, delete, object"))
	bool RemoveListener(const UObject* ListenerObject);
};
