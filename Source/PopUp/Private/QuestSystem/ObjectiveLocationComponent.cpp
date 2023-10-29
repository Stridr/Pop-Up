// Copyright PopUp


#include "QuestSystem/ObjectiveLocationComponent.h"
#include "Character/PlayerCharacter.h"
#include "Player/PopUpPlayerController.h"
#include "QuestSystem/QuestLogComponent.h"

UObjectiveLocationComponent::UObjectiveLocationComponent()
{
	PrimaryComponentTick.bCanEverTick = true;

	// OnComponentBeginOverlap.AddDynamic(this, &UObjectiveLocationComponent::OnOverlapBegin);
}

// void UObjectiveLocationComponent::OnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
//                                                  UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep,
//                                                  const FHitResult& SweepResult)
// {
// 	const APlayerCharacter* PlayerCharacter = Cast<APlayerCharacter>(GetWorld()->GetFirstPlayerController()->GetPawn());
// 	check(PlayerCharacter)
//
// 	APlayerController* WorldController = GetWorld()->GetFirstPlayerController();
// 	check(WorldController);
//
// 	APopUpPlayerController* PlayerController = Cast<APopUpPlayerController>(WorldController);
// 	check(PlayerController);
//
// 	if (OtherActor && OtherActor == PlayerCharacter)
// 	{
// 		UE_LOG(LogTemp, Warning, TEXT("Overlap with player Begin"));
// 		// PlayerController->OnInteractionCalled.Broadcast(ObjectiveId);
// 	}
// }
