#pragma once
#include "CoreMinimal.h"
#include "OnEnemyDamagedDelegateDelegate.generated.h"

class UPrimitiveComponent;
class UHealthComponentBase;
class UFSDPhysicalMaterial;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FOnEnemyDamagedDelegate, UHealthComponentBase*, Health, float, Amount, UPrimitiveComponent*, Component, UFSDPhysicalMaterial*, PhysicalMaterial);

