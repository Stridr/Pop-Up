// Copyright PopUp

#pragma once

#include "CoreMinimal.h"
#include "Character/CharacterBase.h"
#include "Interface/EnemyInterface.h"
#include "EnemyCharacter.generated.h"

class APopUpAIController;
class UBehaviorTree;
/**
 * 
 */
UCLASS()
class POPUP_API AEnemyCharacter : public ACharacterBase ,public IEnemyInterface
{
	GENERATED_BODY()

public:

	AEnemyCharacter();

	virtual void PossessedBy(AController* NewController) override;

	UPROPERTY(EditAnywhere,BlueprintReadOnly,Category="Combat")
	float BaseWalkSpeed = 250.f;


protected:

	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere,BlueprintReadOnly,Category="Combat")
	TObjectPtr<USkeletalMeshComponent> Weapon;

	UPROPERTY(EditAnywhere,Category= " AI ")
	TObjectPtr<UBehaviorTree> BehaviorTree;


	TObjectPtr<APopUpAIController> AIController;
	
};
