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
	QuestGiverComponent->InteractWith();
	return GetName();
}

// Called to bind functionality to input
// void ANPCBase::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
// {
// 	Super::SetupPlayerInputComponent(PlayerInputComponent);
//
// }
