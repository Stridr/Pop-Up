// Copyright PopUp

#pragma once

#include "CoreMinimal.h"
#include "InputActionValue.h"
#include "GameFramework/PlayerController.h"
#include "Items/ItemBase.h"
#include "PopUpPlayerController.generated.h"

class AInventoryHUD;
class IInteractionInterface;
class UInventoryComponent;
class UInputAction;
class UInputMappingContext;
struct FInputActionValue;

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

UCLASS(Blueprintable)
class POPUP_API APopUpPlayerController : public APlayerController
{
	GENERATED_BODY()

protected:
	virtual void BeginPlay() override;
	virtual void SetupInputComponent() override;

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

	APopUpPlayerController();
	
	void PerformInteractionCheck();
	void FoundInteractable(AActor* NewInteractable);
	void NoInteractableFound();
	void BeginInteract();
	void EndInteract();
	void Interact();
	

public:
	UPROPERTY(BlueprintReadOnly, Category="CharacterTurning")
	bool IsTurningRight = false;

	UPROPERTY(BlueprintReadOnly, Category="CharacterTurning")
	bool IsTurningLeft = false;

	virtual void Tick(float DeltaSeconds) override;

	FORCEINLINE bool IsInteracting() const {return GetWorldTimerManager().IsTimerActive(TimerHandle_Interaction);};
	FORCEINLINE UInventoryComponent* GetInventory()const {return PlayerInventory;};
	void DropItem(UItemBase* ItemToDrop, const int32 QuantityToDrop);
	

	void UpdateInteractionWidget() const ;

	

	//virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent);

private:
	UPROPERTY(EditAnywhere, Category="Input")
	TObjectPtr<UInputMappingContext> PlayerContext;

	UPROPERTY(EditAnywhere, Category="Input")
	TObjectPtr<UInputAction> MoveAction;

	UPROPERTY(EditAnywhere, Category="Input")
	TObjectPtr<UInputAction> LookAction;

	UPROPERTY(EditAnywhere, Category="Input")
	TObjectPtr<UInputAction> JumpAction;

	UPROPERTY(EditAnywhere, Category="Input")
	TObjectPtr<UInputAction> CrouchAction;

	UPROPERTY(EditAnywhere, Category="Input")
	TObjectPtr<UInputAction> InteractAction;

	UPROPERTY(EditAnywhere, Category="Input")
	TObjectPtr<UInputAction> InventoryAction;

	void Move(const FInputActionValue& Value);
	void Look(const FInputActionValue& Value);
	void Jump(const FInputActionValue& Value);
	void StopJumping(const FInputActionValue& Value);
	void Crouch(const FInputActionValue& Value);
	void ToogleMenu(const FInputActionValue& Value);
	//void Interact(const FInputActionValue& Value);
};
