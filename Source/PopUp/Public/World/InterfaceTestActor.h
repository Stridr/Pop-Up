// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Interface/InteractionInterface.h"
#include "GameFramework/Actor.h"
#include "InterfaceTestActor.generated.h"

UCLASS()
class POPUP_API AInterfaceTestActor : public AActor,public IInteractionInterface
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AInterfaceTestActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	UPROPERTY(EditAnywhere,Category="test actor")
	UStaticMeshComponent* Mesh;

	UPROPERTY(EditInstanceOnly,Category="test actor")
	FInteractableData InstanceInteractableData;
	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	
	virtual void BeginFocus() override;
	virtual void EndFocus() override;
	virtual void BeginInteract() override;
	virtual void EndInteract() override;
	virtual void Interact(ATP_ThirdPersonCharacter* PlayerCharacter) override;
};
