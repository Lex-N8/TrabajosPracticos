// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "AActor.generated.h"

UCLASS()
class TAREAPROGRAMACION_API AAActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AAActor();

	// Called every frame
	virtual void Tick(float DeltaTime) override;


	/** Este valor es el nivel de defensa de armadura */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Props 2", meta = (ClampMin = "0", ClampMax = "100", UIMin = "0", UIMax = "100"))
	int NivelArmadura;


	/** Velocidad actual (NO EDITABLE) */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Personaje")
	int Velocidad;

	/** Este valor es la vida maxima del personaje */

	UPROPERTY(EditDefaultsOnly,BlueprintReadOnly, Category = "Personaje", meta = (ClampMin = "0", ClampMax = "1500", UIMin = "0", UIMax = "1500"))
	int VidaMaxima;


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;



};
