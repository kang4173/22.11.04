// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "MyObject.h"
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyActor.generated.h"

UCLASS()
class CTEST2_API AMyActor : public AActor, public IMyObject
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMyActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// C++ �� �������Ʈ������ Ȱ�� �����ϰ� ������ �������̽�
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "MyObject")
		void Call_InerFace();
	virtual void Call_InerFace_Implementation() override;
	
};
