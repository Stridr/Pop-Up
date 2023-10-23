// Copyright PopUp


#include "QuestSystem/QuestGiverComponent.h"

#include "Character/PlayerCharacter.h"
#include "Kismet/GameplayStatics.h"
#include "QuestSystem/QuestLogComponent.h"

UQuestGiverComponent::UQuestGiverComponent()
{
	PrimaryComponentTick.bCanEverTick = true;
}


// Called when the game starts
void UQuestGiverComponent::BeginPlay()
{
	Super::BeginPlay();
}

void UQuestGiverComponent::LookAt()
{
	// UE_LOG(LogTemp, Warning, TEXT("Looking at Quest Giver"));
}


FString UQuestGiverComponent::InteractWith()
{
	ACharacter* Character = UGameplayStatics::GetPlayerCharacter(GetWorld(), 0);
	check(Character);

	const APlayerCharacter* PlayerCharacter = Cast<APlayerCharacter>(Character);
	check(PlayerCharacter);

	if (!PlayerCharacter->QuestLog->QueryActiveQuest(QuestData.RowName))
	{
		DisplayQuest(QuestData.RowName);
		PlayerCharacter->QuestLog->AddNewQuest(QuestData.RowName);
	}

	// TODO: probably there should be a bit more of a robust system here
	// I'm not sure if this will allow for multiple objectives with the same name
	// the objective ID should also be more descriptive than just the owner name
	return GetOwner()->GetName();
}

void UQuestGiverComponent::TickComponent(float DeltaTime, ELevelTick TickType,
                                         FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
}

void UQuestGiverComponent::DisplayQuest(const FName QuestId) const
{
	UE_LOG(LogTemp, Warning, TEXT("Displaying Quest: %s"), *QuestId.ToString());
}
