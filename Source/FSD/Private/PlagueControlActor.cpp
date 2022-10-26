#include "PlagueControlActor.h"
#include "Net/UnrealNetwork.h"
#include "NiagaraComponent.h"
#include "PlagueUsable.h"

class APlayerCharacter;

void APlagueControlActor::SpawnPodHack(APlayerCharacter* Player) const {
}

void APlagueControlActor::SetCanUseWeaponPod(bool Value) {
}

void APlagueControlActor::PushDebrisLights() {
}

void APlagueControlActor::EquipPlaguePod(APlayerCharacter* Player) {
}

bool APlagueControlActor::CanDropWeaponPod(float& timeLeft) {
    return false;
}

void APlagueControlActor::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(APlagueControlActor, Obstructions);
    DOREPLIFETIME(APlagueControlActor, MinTimeBetweenWeaponPods);
}

APlagueControlActor::APlagueControlActor() {
    this->DebrisLightSystem = CreateDefaultSubobject<UNiagaraComponent>(TEXT("DebrisLight"));
    this->CallWeaponPodUsable = CreateDefaultSubobject<UPlagueUsable>(TEXT("Usable"));
    this->TargetPlagueMaterial = NULL;
    this->CleanupPodItem = NULL;
    this->MinTimeBetweenWeaponPods = 180.00f;
    this->MinDistBetweenPods = 1500.00f;
    this->MaxDistFromCenter = 1500.00f;
    this->CanCallPodDistance = 800.00f;
    this->IgnoreDebrisLightSphere = 100.00f;
    this->DebrisLightDistanceFromGround = 30.00f;
    this->DebugDrawDebrisLight = false;
}

