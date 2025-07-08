#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"
#include "Framework/Application/SlateApplication.h"
#include "Framework/Application/NavigationConfig.h"
#include "GameControlUtils.generated.h"

/**
 *
 */
UCLASS()
class BASEGAMEUTILS_API UGameControlUtils : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
    UFUNCTION(BlueprintCallable, Category = "UI")
    static void ToggleThumbstickUiNavigation(bool bEnableThumbstickNavigation);
};
