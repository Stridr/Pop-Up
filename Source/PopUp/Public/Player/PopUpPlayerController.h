// Copyright PopUp

#pragma once

#include "CoreMinimal.h"
#include "InputActionValue.h"
#include "GameFramework/PlayerController.h"
#include "Interaction/InteractionInterface.h"
#include "PopUpPlayerController.generated.h"

class IInteractionInterface;
class UInputAction;
class UInputMappingContext;
struct FInputActionValue;

// DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FObjectiveIDCalled, FString, ObjectiveId);

UCLASS(Blueprintable)
class POPUP_API APopUpPlayerController : public APlayerController
{
	GENERATED_BODY()

protected:
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaSeconds) override;
	virtual void SetupInputComponent() override;

public:
	UPROPERTY(BlueprintReadOnly, Category="CharacterTurning")
	bool IsTurningRight = false;

	UPROPERTY(BlueprintReadOnly, Category="CharacterTurning")
	bool IsTurningLeft = false;

	// UPROPERTY(BlueprintAssignable)
	// FObjectiveIDCalled OnObjectiveIDCalled;

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

	void Move(const FInputActionValue& Value);
	void Look(const FInputActionValue& Value);
	void Jump(const FInputActionValue& Value);
	void StopJumping(const FInputActionValue& Value);
	void Crouch(const FInputActionValue& Value);
	void Interact(const FInputActionValue& Value);

	UFUNCTION()
	void InteractTrace();

	UPROPERTY()
	AActor* LookAtActor = nullptr;
};
