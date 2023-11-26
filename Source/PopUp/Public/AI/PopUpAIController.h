// Copyright PopUp

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "Perception/AIPerceptionComponent.h"
#include "PopUpAIController.generated.h"

class UBlackboardComponent;
class UBehaviorTreeComponent;
/**
 * 
 */
UCLASS()
class POPUP_API APopUpAIController : public AAIController
{
	GENERATED_BODY()

public:

	APopUpAIController();

	

protected:

	UPROPERTY()
	TObjectPtr<UBehaviorTreeComponent> BehaviorTreeComponent;
	
	
	
};
