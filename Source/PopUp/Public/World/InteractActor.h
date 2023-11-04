// Copyright PopUp

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Interface/InteractionInterface.h"
#include "InteractActor.generated.h"

class UDataTable;
class UItemBase;

UCLASS()
class POPUP_API AInteractActor : public AActor,public  IInteractionInterface 
{
	GENERATED_BODY()
	
public:	

	AInteractActor();

	void InitializeInteract(const TSubclassOf<UItemBase> BaseClass);

	FORCEINLINE UItemBase* GetItemData() {return  ItemReference;};
	virtual void BeginFocus() override;
	virtual void EndFocus() override;
	
protected:

	//Properties&Variables

	UPROPERTY(VisibleAnywhere,Category= "Pickup | Components")
	UStaticMeshComponent* PickupMesh;

	UPROPERTY(EditInstanceOnly,Category= "Pickup | Item Initialization")
	UDataTable* ItemDataTable;

	UPROPERTY(EditInstanceOnly,Category= "Pickup | Item Initialization")
	FName DesiredItemID;

	UPROPERTY(VisibleAnywhere,Category= "Pickup | ItemReference")
	UItemBase* ItemReference;

	UPROPERTY(EditInstanceOnly,Category= "Pickup | Item Initialization")
	int32 ItemQuantity;
	
	UPROPERTY(VisibleInstanceOnly,Category= "Pickup | Interaction")
	FInteractableData InstanceInteractableData;

	//Functions
	
	virtual void BeginPlay() override;
	virtual void Interact(APlayerCharacter* PlayerCharacter) override;
	

	

};
