// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "/ResourcesCapture/Source/ResourcesCapture/Interact.h"

#include "ItemBase.generated.h"


UENUM(BlueprintType)
enum ObjectType
{
	Cube UMETA(DisplayName = "Cube"),
	Sphere UMETA(DisplayName = "Sphere"),
	Cylinder UMETA(DisplayName = "Cylinder")

};

UCLASS()
class RESOURCESCAPTURE_API AItemBase : public AActor, public IInteract
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AItemBase();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual void Interact() override;

	UPROPERTY()
	TEnumAsByte<ObjectType> ItemType;

	UFUNCTION(BlueprintImplementableEvent)
	void StartChildLogic();
	

};
