// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "MyObject.h"
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyActor2.generated.h"

/*
열거형 
열거 형은 기본적으로 저렴한 비용의 데이터 유형을 사용하여
사람이 읽을 수 있는 긴 이름으로 일련의 관련 유형을 정의 할 수 있는 기능을 제공
*/

UENUM(BlueprintType) // 클래스 지정자와 유사
enum class ETestEnum : uint8 // 0~255
{
	Dance	UMETA(DisplayName = "Dance"),
	Rain	UMETA(DisplayName = "Rain"),
	Song	UMETA(DisplayName ="Song")
};

USTRUCT(BlueprintType)
struct FTestStruct	
{
	// 구조체 안에서 변수를 사용할때
	// UPROPERTY() 가 아닌 구조체 변수는 복제되지 않음.
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
	// C++ 및 블루프린트에서도 활용 가능하게 변경한 인터페이스
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "MyObject")
		void Call_InerFace();
	virtual void Call_InerFace_Implementation() override;

};
