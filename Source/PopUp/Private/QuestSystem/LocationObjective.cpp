// Copyright PopUp


#include "QuestSystem/LocationObjective.h"

#include "Character/PlayerCharacter.h"
#include "Components/SphereComponent.h"
#include "QuestSystem/ObjectiveBroadcasterComponent.h"

ALocationObjective::ALocationObjective()
{
	PrimaryActorTick.bCanEverTick = true;

	Collider = CreateDefaultSubobject<USphereComponent>(TEXT("Collider"));
	RootComponent = Collider;
	Collider->InitSphereRadius(SphereRadius);
	Collider->OnComponentBeginOverlap.AddDynamic(this, &ALocationObjective::OverlapStarted);

	ObjectiveBroadcasterComponent = CreateDefaultSubobject<
		UObjectiveBroadcasterComponent>(TEXT("ObjectiveBroadcaster"));;
	ObjectiveBroadcasterComponent->Activate();
}

void ALocationObjective::BeginPlay()
{
	Super::BeginPlay();

	check(Collider)
	Collider->InitializeComponent();

	check(ObjectiveBroadcasterComponent)
}


void ALocationObjective::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ALocationObjective::OverlapStarted(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
                                        UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep,
                                        const FHitResult& SweepResult)
{
	APlayerCharacter* PlayerCharacter = Cast<APlayerCharacter>(OtherActor);
	if (PlayerCharacter)
	{
		ObjectiveBroadcasterComponent->BroadcastToSubscriber();
	}
}
