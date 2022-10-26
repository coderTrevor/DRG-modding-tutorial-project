#include "ProjectileUpgrade.h"
#include "Templates/SubclassOf.h"

class AFSDPlayerState;
class AActor;

FUpgradeValues UProjectileUpgrade::GetUpgradedValue(TSubclassOf<AActor> Item, TSubclassOf<AActor> upgradedItem, AFSDPlayerState* Player, EProjectileUpgrade NewUpgradeType) {
    return FUpgradeValues{};
}

UProjectileUpgrade::UProjectileUpgrade() {
    this->upgradeType = EProjectileUpgrade::Velocity;
    this->ProjectileClass = NULL;
    this->Condition = NULL;
}

