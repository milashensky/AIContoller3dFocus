#include "GameControlUtils.h"

void UGameControlUtils::ToggleThumbstickUiNavigation(bool bEnableThumbstickNavigation)
{
    if (FSlateApplication::IsInitialized())
    {
        // Get the current navigation configuration
        TSharedRef<FNavigationConfig> CurrentNavConfig = FSlateApplication::Get().GetNavigationConfig();

        // Set the bAnalogNavigation flag to enable or disable thumbstick navigation
        CurrentNavConfig->bAnalogNavigation = bEnableThumbstickNavigation;

        // Apply the updated navigation configuration
        FSlateApplication::Get().SetNavigationConfig(CurrentNavConfig);
    }
}