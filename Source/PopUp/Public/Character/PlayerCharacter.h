// Copyright PopUp

#pragma once

#include "CoreMinimal.h"
#include "Character/CharacterBase.h"
#include "Components/InventoryComponent.h"
#include "Interface/InteractionInterface.h"
#include "Interface/InventoryHUD.h"
#include "PopUp/TP_ThirdPerson/TP_ThirdPersonCharacter.h"
#include "PlayerCharacter.generated.h"

class UQuestLogComponent;
class USpringArmComponent;
class UCameraComponent;

USTRUCT()
struct FInteractionData
{
	GENERATED_BODY()

	FInteractionData() :CurrentInteractable(nullptr),LastInteractionCheckTime(0.0f)
	{
		
	};
	UPROPERTY()
	AActor* CurrentInteractable;

	UPROPERTY()
	float LastInteractionCheckTime;

	
};

UCLASS()
class POPUP_API APlayerCharacter : public ACharacterBase
{
	GENERATED_BODY()

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera", meta = (AllowPrivateAccess = "true"))
	UCameraComponent* PlayerCamera;

	

public:
	APlayerCharacter();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Quest Log")
	UQuestLogComponent* QuestLog;

	FORCEINLINE bool IsInteracting() const {return GetWorldTimerManager().IsTimerActive(TimerHandle_Interaction);};

	FORCEINLINE UInventoryComponent* GetInventory()const {return PlayerInventory;};

	void UpdateInteractionWidget() const ;

	void DropItem(UItemBase* ItemToDrop, const int32 QuantityToDrop);

	virtual void Tick(float DeltaSeconds) override;

protected:
	UPROPERTY()
	AInventoryHUD* HUD;
		
	UPROPERTY(VisibleAnywhere,Category="Character | Interaction")
	TScriptInterface<IInteractionInterface>TargetInteractable;

	float InteractionCheckFrequency;

	float InteractionCheckDistance;

	FTimerHandle TimerHandle_Interaction;

	FInteractionData InteractionData;

	UPROPERTY(VisibleAnywhere,Category="Character | Inventory")
	UInventoryComponent* PlayerInventory;

	void PerformInteractionCheck();
	void FoundInteractable(AActor* NewInteractable);
	void NoInteractableFound();
	void BeginInteract();
	void EndInteract();
	void Interact();
	void ToogleMenu();
	virtual void BeginPlay() override;

	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
};
