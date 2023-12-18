// Copyright Epic Games, Inc. All Rights Reserved.
//
// #pragma once
//
// #include "CoreMinimal.h"
// #include "Components/InventoryComponent.h"
// #include "GameFramework/Character.h"
// #include "Interface/InteractionInterface.h"
// #include "Interface/InventoryHUD.h"
// #include "Logging/LogMacros.h"
// #include "TP_ThirdPersonCharacter.generated.h"
//
// class AInventoryHUD;
//
// USTRUCT()
// struct FInteractionData
// {
// 	GENERATED_BODY()
//
// 	FInteractionData() :CurrentInteractable(nullptr),LastInteractionCheckTime(0.0f)
// 	{
// 		
// 	};
// 	UPROPERTY()
// 	AActor* CurrentInteractable;
//
// 	UPROPERTY()
// 	float LastInteractionCheckTime;
//
// 	
// };
//
// class USpringArmComponent;
// class UCameraComponent;
// class UInputMappingContext;
// class UInputAction;
// struct FInputActionValue;
//
// DECLARE_LOG_CATEGORY_EXTERN(LogTemplateCharacter, Log, All);
//
// UCLASS(config=Game)
// class ATP_ThirdPersonCharacter : public ACharacter
// {
// 	GENERATED_BODY()
//
// 	/** Camera boom positioning the camera behind the character */
// 	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
// 	USpringArmComponent* CameraBoom;
//
// 	/** Follow camera */
// 	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
// 	UCameraComponent* FollowCamera;
// 	
// 	/** MappingContext */
// 	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
// 	UInputMappingContext* DefaultMappingContext;
//
// 	/** Jump Input Action */
// 	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
// 	UInputAction* JumpAction;
//
// 	/** Move Input Action */
// 	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
// 	UInputAction* MoveAction;
//
// 	/** Look Input Action */
// 	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
// 	UInputAction* LookAction;
//
// public:
// 	/////////////////////////////////////
// 	///Properties & variables
// 	////////////////////////////////////
//
//
//
// 	
// 	/////////////////////////////////////
// 	///Functions
// 	////////////////////////////////////
// 	ATP_ThirdPersonCharacter();
//
// 	/** Returns CameraBoom subobject **/
// 	FORCEINLINE class USpringArmComponent* GetCameraBoom() const { return CameraBoom; }
// 	/** Returns FollowCamera subobject **/
// 	FORCEINLINE class UCameraComponent* GetFollowCamera() const { return FollowCamera; }
//
// 	FORCEINLINE bool IsInteracting() const {return GetWorldTimerManager().IsTimerActive(TimerHandle_Interaction);};
//
// 	FORCEINLINE UInventoryComponent* GetInventory()const {return PlayerInventory;};
//
// 	void UpdateInteractionWidget() const ;
//
// 	void DropItem(UItemBase* ItemToDrop, const int32 QuantityToDrop);
// 	
//
// protected:
//
// 	/////////////////////////////////////
// 	///Properties & variables
// 	////////////////////////////////////
// 	UPROPERTY()
// 	AInventoryHUD* HUD;
// 		
// 	UPROPERTY(VisibleAnywhere,Category="Character | Interaction")
// 	TScriptInterface<IInteractionInterface>TargetInteractable;
//
// 	float InteractionCheckFrequency;
//
// 	float InteractionCheckDistance;
//
// 	FTimerHandle TimerHandle_Interaction;
//
// 	FInteractionData InteractionData;
//
// 	UPROPERTY(VisibleAnywhere,Category="Character | Inventory")
// 	UInventoryComponent* PlayerInventory;
// 	
// 	/////////////////////////////////////
// 	///Functions
// 	////////////////////////////////////
//
// 	void PerformInteractionCheck();
// 	void FoundInteractable(AActor* NewInteractable);
// 	void NoInteractableFound();
// 	void BeginInteract();
// 	void EndInteract();
// 	void Interact();
//
// 	void ToogleMenu();
//
//
//
//
//
//
//
//
// 	
// 	/** Called for movement input */
// 	void Move(const FInputActionValue& Value);
//
// 	/** Called for looking input */
// 	void Look(const FInputActionValue& Value);
// 			
// 	
// 	// APawn interface
// 	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
// 	
// 	// To add mapping context
// 	virtual void BeginPlay() override;
//
// public:
// 	virtual void Tick(float DeltaSeconds) override;
// };
