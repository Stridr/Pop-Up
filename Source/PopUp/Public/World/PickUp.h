// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Character/PlayerCharacter.h"
#include "Interaction/InteractionInterface.h"
#include "GameFramework/Actor.h"
#include "PickUp.generated.h"

class UDataTable;
class UItemBase;

UCLASS()
class POPUP_API APickUp : public AActor, public IInteractionInterface
{
	GENERATED_BODY()

public:
	APickUp();

	void InitializePickup(const TSubclassOf<UItemBase> BaseClass, const int32 InQuantity);
	void InitializeDrop(UItemBase* ItemToDrop, const int32 InQuantity);

	FORCEINLINE UItemBase* GetItemData() { return ItemReference; };
	// virtual void BeginFocus() override;
	// virtual void EndFocus() override;

protected:
	UPROPERTY(VisibleAnywhere, Category= "Pickup | Components")
	UStaticMeshComponent* PickupMesh;

	UPROPERTY(EditInstanceOnly, Category= "Pickup | Item Initialization")
	UDataTable* ItemDataTable;

	UPROPERTY(EditInstanceOnly, Category= "Pickup | Item Initialization")
	FName DesiredItemID;

	UPROPERTY(VisibleAnywhere, Category= "Pickup | ItemReference")
	UItemBase* ItemReference;

	UPROPERTY(EditInstanceOnly, Category= "Pickup | Item Initialization")
	int32 ItemQuantity;

	UPROPERTY(VisibleInstanceOnly, Category= "Pickup | Interaction")
	FInteractableData InstanceInteractableData;

	virtual void BeginPlay() override;
	// virtual void Interact(APlayerCharacter* PlayerCharacter) override;
	virtual void LookAt() override;
	virtual FString InteractWith() override;
	void UpdateInteractableData();


	void TakePickup(const APlayerCharacter* Taker);
#if WITH_EDITOR
	virtual void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) override;
#endif

	//virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;
};
