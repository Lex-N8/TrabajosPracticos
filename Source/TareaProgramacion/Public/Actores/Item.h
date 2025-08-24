// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Item.generated.h"

UCLASS()
class TAREAPROGRAMACION_API AItem : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AItem();

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY (EditAnywhere,BlueprintReadWrite, Category = "Props")
	int salud;

	UPROPERTY (EditAnywhere, BlueprintReadWrite, Category = "Props")
	int Armadura;

	/** Este valor es la distancia que tiene al saltar despues de usar gancho */

	UPROPERTY(EditAnywhere, meta = (ClampMin = "0.0", ClampMax = "2500.0", UIMin= "0.0", UIMax = "2500.0"))
	int Distancia;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;


	

};
