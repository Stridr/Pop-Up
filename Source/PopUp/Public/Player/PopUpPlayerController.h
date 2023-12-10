// Copyright PopUp

#pragma once

#include "CoreMinimal.h"
#include "InputActionValue.h"
#include "GameFramework/PlayerController.h"
#include "PopUpPlayerController.generated.h"

class UItemBase;
class UInventoryComponent;
class IInteractionInterface;
class AInventoryHUD;
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

	
public:

	APopUpPlayerController();
	
	UPROPERTY(BlueprintReadOnly, Category="CharacterTurning")
	bool IsTurningRight = false;

	UPROPERTY(BlueprintReadOnly, Category="CharacterTurning")
	bool IsTurningLeft = false;
	
	FORCEINLINE bool IsInteracting() const {return GetWorldTimerManager().IsTimerActive(TimerHandle_Interaction);};

	FORCEINLINE UInventoryComponent* GetInventory()const {return PlayerInventory;};

	void UpdateInteractionWidget() const ;

	void DropItem(UItemBase* ItemToDrop, const int32 QuantityToDrop);

	virtual void Tick(float DeltaSeconds) override;

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

	void PerformInteractionCheck();
	void FoundInteractable(AActor* NewInteractable);
	void NoInteractableFound();
	void BeginInteract();
	void EndInteract();
	void Interact();
	void ToogleMenu();


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
	TObjectPtr<UInputAction> ToogleInventory;

	void Move(const FInputActionValue& Value);
	void Look(const FInputActionValue& Value);
	void Jump(const FInputActionValue& Value);
	void StopJumping(const FInputActionValue& Value);
	void Crouch(const FInputActionValue& Value);
	/*void Interact(const FInputActionValue& Value);*/
};
