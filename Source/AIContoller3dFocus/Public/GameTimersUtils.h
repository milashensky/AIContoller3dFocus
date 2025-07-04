// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GameTimersUtils.generated.h"

/**
 * 
 */
UCLASS()
class AICONTOLLER3DFOCUS_API UGameTimersUtils : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
    // Function to clear all timers for an object
    UFUNCTION(BlueprintCallable, Category = "Timer")
    static void ClearAllTimers(UObject* Object);

    // Blueprint function to safely destroy AIController
    UFUNCTION(BlueprintCallable, Category = "AI")
    static void DestroyAIController(AAIController* AIController);
};
