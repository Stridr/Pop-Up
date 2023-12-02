// Copyright PopUp

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "LocationObjective.generated.h"

class UObjectiveBroadcasterComponent;
class USphereComponent;

UCLASS()
class POPUP_API ALocationObjective : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ALocationObjective();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere, Category="Collider")
	USphereComponent* Collider;

private:
	UPROPERTY(EditAnywhere, Category="Objective")
	float SphereRadius = 100.f;

	// this component should be set up via the blueprint class
	UPROPERTY(EditAnywhere, Category="Objective")
	UObjectiveBroadcasterComponent* ObjectiveBroadcasterComponent;

	UPROPERTY(EditAnywhere, Category="Collider", meta = (AllowPrivateAccess="true"))
	float LocationInteractionRadius = 100.f;

	UFUNCTION(Category="Overlap")
	void OverlapStarted(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
	                    UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep,
	                    const FHitResult& SweepResult);
};
