// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "MyObject.h"
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyActor2.generated.h"

/*
������ 
���� ���� �⺻������ ������ ����� ������ ������ ����Ͽ�
����� ���� �� �ִ� �� �̸����� �Ϸ��� ���� ������ ���� �� �� �ִ� ����� ����
*/

UENUM(BlueprintType) // Ŭ���� �����ڿ� ����
enum class ETestEnum : uint8 // 0~255
{
	Dance	UMETA(DisplayName = "Dance"),
	Rain	UMETA(DisplayName = "Rain"),
	Song	UMETA(DisplayName ="Song")
};

USTRUCT(BlueprintType)
struct FTestStruct	
{
	// ����ü �ȿ��� ������ ����Ҷ�
	// UPROPERTY() �� �ƴ� ����ü ������ �������� ����.
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Flower Struct")
		int32 NumPetals;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Flower Struct")
		FLinearColor Color;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Flower Struct")
		FVector Scale3D;
};


UCLASS()
class CTEST2_API AMyActor2 : public AActor, public IMyObject
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMyActor2();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Enum")
	ETestEnum TestEnum;
	// C++ �� �������Ʈ������ Ȱ�� �����ϰ� ������ �������̽�
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "MyObject")
		void Call_InerFace();
	virtual void Call_InerFace_Implementation() override;

};
