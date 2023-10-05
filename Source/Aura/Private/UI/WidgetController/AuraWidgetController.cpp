#include "UI/WidgetController/AuraWidgetController.h"

void UAuraWidgetController::SetWidgetControllerParams(const FWidgetControllerParams& WCParams)
{
	PlayerController = WCParams.PlayerController;
	PlayerState = WCParams.PlayerState;
	AbilitySystemComponent = WCParams.AbilitySystemComponent;
	AttributeSet = WCParams.AttruAttributeSet;
}

void UAuraWidgetController::BroadcastInitialValues()
{
}

void UAuraWidgetController::BindCallbacksToDependencies()
{
}
