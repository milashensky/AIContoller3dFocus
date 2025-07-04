// Fill out your copyright notice in the Description page of Project Settings.


#include "GameTimersUtils.h"
#include "Engine/World.h"
#include "TimerManager.h"
#include "AIController.h"


void UGameTimersUtils::ClearAllTimers(UObject* Object)
{
    if (Object && Object->GetWorld())
    {
        Object->GetWorld()->GetTimerManager().ClearAllTimersForObject(Object);
    }
}

void UGameTimersUtils::DestroyAIController(AAIController* AIController)
{
    if (!AIController)
    {
        UE_LOG(LogTemp, Warning, TEXT("DestroyAIController: AIController is nullptr!"));
        return;
    }

    // Ensure it's on the server (important for multiplayer)
    if (!AIController->HasAuthority())
    {
        UE_LOG(LogTemp, Warning, TEXT("DestroyAIController: Cannot destroy AIController on client!"));
        return;
    }

    // Unpossess the pawn to detach from it
    if (AIController->GetPawn())
    {
        AIController->UnPossess();
        AIController->GetPawn()->Controller = nullptr;
    }

    // Clear all timers to avoid lingering references
    AIController->GetWorld()->GetTimerManager().ClearAllTimersForObject(AIController);

    AIController->Destroy();

    UE_LOG(LogTemp, Warning, TEXT("DestroyAIController: AIController destroyed successfully!"));
}