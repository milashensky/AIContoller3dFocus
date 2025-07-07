#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "AIController3dFocus.generated.h"

/**
 *
 */
UCLASS()
class BASEGAMEUTILS_API AAIController3dFocus : public AAIController
{
	GENERATED_BODY()

public:
	virtual void UpdateControlRotation(float DeltaTime, bool bUpdatePawn = true) override;
};
