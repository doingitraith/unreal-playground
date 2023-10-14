// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "RotatingActor.generated.h"

UCLASS()
class UNREALPLAYGROUND_API ARotatingActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ARotatingActor();

	void SetbCanRotate(bool value);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	void RotateActor();
	bool bCanRotate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UStaticMeshComponent* MeshComp;

	// Rotation Rate for Actor
	const FQuat ActorRotationRate = FQuat(FRotator(0,2,0));

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
