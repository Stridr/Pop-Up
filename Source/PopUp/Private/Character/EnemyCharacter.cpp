// Copyright PopUp


#include "Character/EnemyCharacter.h"

#include "AI/PopUpAIController.h"
#include "BehaviorTree/BehaviorTree.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "GameFramework/CharacterMovementComponent.h"

AEnemyCharacter::AEnemyCharacter()
{

	GetMesh()->SetCollisionResponseToChannel(ECC_Visibility,ECR_Block);

	/*Character Movement*/
	bUseControllerRotationPitch = false;
	bUseControllerRotationRoll = false;
	bUseControllerRotationYaw = false;
	GetCharacterMovement()->bUseControllerDesiredRotation = true;

	Weapon = CreateDefaultSubobject<USkeletalMeshComponent>("Weapon");
	Weapon->SetupAttachment(GetMesh(),FName("WeaponHandSocket"));
	Weapon->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	
}

void AEnemyCharacter::PossessedBy(AController* NewController)
{
	Super::PossessedBy(NewController);

	if(!HasAuthority()) return;

	AIController = Cast<APopUpAIController>(NewController);
	AIController->GetBlackboardComponent()->InitializeBlackboard(*BehaviorTree->BlackboardAsset);
	AIController->RunBehaviorTree(BehaviorTree);
	AIController->GetBlackboardComponent()->SetValueAsBool(FName("HitReacting"),false);

	
	
}

void AEnemyCharacter::BeginPlay()
{
	Super::BeginPlay();
}
