// Copyright PopUp

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_BlueprintBase.h"
#include "BTT_Chase.generated.h"

/**
 * 
 */
UCLASS()
class POPUP_API UBTT_Chase : public UBTTask_BlueprintBase
{
	GENERATED_BODY()

	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;
	
};
