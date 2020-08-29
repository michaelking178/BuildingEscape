// Fill out your copyright notice in the Description page of Project Settings.

#include "WorldPosition.h"
#include "GameFramework/Actor.h"

// Sets default values for this component's properties
UWorldPosition::UWorldPosition()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UWorldPosition::BeginPlay()
{
	Super::BeginPlay();

	FString ObjectName = GetOwner()->GetName();
	FString ObjectPosition = GetOwner()->GetActorLocation().ToString();
	UE_LOG(LogTemp, Warning, TEXT("%s is at location %s"), *ObjectName, *ObjectPosition);


	//FString Log = TEXT("Hello");
	//Log.Append(" World!");

	// A pointer is ALWAYS secretly just an int that holds a memory address.
	//FString* PtrLog = &Log;
	
	// To use the original object's functions you need to dereference the pointer.
	//(*PtrLog).Append(" Wow!");
	
	// A cleaner way to dereference is to use the arrow function.
	//PtrLog->Append(" The arrow really works!");

	//// Using UE's log printing to print a pointer, you need to both dereference the pointer AND use the overloaded operator.
	//UE_LOG(LogTemp, Warning, TEXT("%s"), **PtrLog);
}


// Called every frame
void UWorldPosition::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

