// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "C_Platform.generated.h"

UCLASS()
class SPARTA_FEATURE_API AC_Platform : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AC_Platform();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintImplementableEvent, Category="Platform|Event")
	void MoveEvent();

	UFUNCTION(BlueprintCallable, Category="Platform|Event")
	void LinearMovement(const FVector& StartLocation, const FVector& Direction, float Speed, float Amplitude);

	UFUNCTION(BlueprintCallable, Category="Platform|Event")
	void AngularMovement(const FRotator& RotateAxis, float Speed);
	
	USceneComponent* SceneRoot;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category="Platform|Components")
	UStaticMeshComponent* PlatformMesh;
private:
	
};
