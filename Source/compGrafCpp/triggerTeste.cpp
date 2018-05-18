// Fill out your copyright notice in the Description page of Project Settings.

#include "triggerTeste.h"


// Sets default values
AtriggerTeste::AtriggerTeste()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AtriggerTeste::BeginPlay()
{
	TArray <UActorComponent *> cone;
	Super::BeginPlay();
	OnActorBeginOverlap.AddDynamic(this, &AtriggerTeste::OnTriggerEnter);
	OnActorEndOverlap.AddDynamic(this, &AtriggerTeste::OnTriggerExit);
	cone = this->GetComponentsByTag(UActorComponent::StaticClass(), TEXT("cone"));
	GLog->Log(cone[0]->ComponentTags[0].ToString());

}

// Called every frame
void AtriggerTeste::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AtriggerTeste::OnTriggerEnter(AActor* OverlapedActor, AActor* OtherActor) {
	FRotator rotation(90, 0, 0);
	this->AddActorWorldRotation(rotation);
	GLog->Log("Begin overlap has fired");
}

void AtriggerTeste::OnTriggerExit(AActor * OverlapedActor, AActor * OtherActor){
	GLog->Log("End overlap has fired");
}
