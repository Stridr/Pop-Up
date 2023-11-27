// Copyright PopUp


#include "Pawn/NPCBase.h"

#include "Components/CapsuleComponent.h"
#include "QuestSystem/QuestGiverComponent.h"
#include "Components/SkeletalMeshComponent.h"

// Sets default values
ANPCBase::ANPCBase()
{
	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	CapsuleComponent = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Capsule Collider"));
	RootComponent = CapsuleComponent;

	Mesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Base Mesh"));
	Mesh->SetupAttachment(CapsuleComponent);

	QuestGiverComponent = CreateDefaultSubobject<UQuestGiverComponent>(TEXT("QuestGiverComponent"));
	QuestGiverComponent->Activate();

	InteractableData.Name = FText::FromString(GetName());
	InteractableData.Action = FText::FromString("Talk");
	InteractableData.InteractableType = EInteractableType::NonPlayerCharacter;
}

// Called when the game starts or when spawned
void ANPCBase::BeginPlay()
{
	Super::BeginPlay();

	check(QuestGiverComponent)

	if (!QuestGiverComponent)
	{
		UE_LOG(LogTemp, Error, TEXT("QuestGiverComponent is not set!"));
	}
}

// Called every frame
void ANPCBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ANPCBase::LookAt()
{
}

FString ANPCBase::InteractWith()
{
	UE_LOG(LogTemp, Warning, TEXT("Interacting with NPCBase"));
	QuestGiverComponent->InteractWith();
	return InteractableData.Name.ToString();
}
