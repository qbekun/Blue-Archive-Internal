#pragma once
#include "../unitysdk.h"

namespace FlatData { class StatType; }

namespace FlatData
{
	inline static constexpr unsigned int StatType_TypeDefinitionIndex = 9428;

	class StatType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::FlatData::StatType* None; // 0x0
		::FlatData::StatType* MaxHP; // 0x0
		::FlatData::StatType* AttackPower; // 0x0
		::FlatData::StatType* DefensePower; // 0x0
		::FlatData::StatType* HealPower; // 0x0
		::FlatData::StatType* AccuracyPoint; // 0x0
		::FlatData::StatType* AccuracyRate; // 0x0
		::FlatData::StatType* DodgePoint; // 0x0
		::FlatData::StatType* DodgeRate; // 0x0
		::FlatData::StatType* CriticalPoint; // 0x0
		::FlatData::StatType* CriticalChanceRate; // 0x0
		::FlatData::StatType* CriticalResistChanceRate; // 0x0
		::FlatData::StatType* CriticalDamageRate; // 0x0
		::FlatData::StatType* MoveSpeed; // 0x0
		::FlatData::StatType* SightRange; // 0x0
		::FlatData::StatType* ActiveGauge; // 0x0
		::FlatData::StatType* StabilityPoint; // 0x0
		::FlatData::StatType* StabilityRate; // 0x0
		::FlatData::StatType* ReloadTime; // 0x0
		::FlatData::StatType* MaxBulletCount; // 0x0
		::FlatData::StatType* IgnoreDelayCount; // 0x0
		::FlatData::StatType* WeaponRange; // 0x0
		::FlatData::StatType* BlockRate; // 0x0
		::FlatData::StatType* BodyRadius; // 0x0
		::FlatData::StatType* ActionCount; // 0x0
		::FlatData::StatType* StrategyMobility; // 0x0
		::FlatData::StatType* StrategySightRange; // 0x0
		::FlatData::StatType* StreetBattleAdaptation; // 0x0
		::FlatData::StatType* OutdoorBattleAdaptation; // 0x0
		::FlatData::StatType* IndoorBattleAdaptation; // 0x0
		::FlatData::StatType* HealEffectivenessRate; // 0x0
		::FlatData::StatType* CriticalChanceResistPoint; // 0x0
		::FlatData::StatType* CriticalDamageResistRate; // 0x0
		::FlatData::StatType* LifeRecoverOnHit; // 0x0
		::FlatData::StatType* NormalAttackSpeed; // 0x0
		::FlatData::StatType* AmmoCost; // 0x0
		::FlatData::StatType* GroggyGauge; // 0x0
		::FlatData::StatType* GroggyTime; // 0x0
		::FlatData::StatType* DamageRatio; // 0x0
		::FlatData::StatType* DamagedRatio; // 0x0
		::FlatData::StatType* OppressionPower; // 0x0
		::FlatData::StatType* OppressionResist; // 0x0
		::FlatData::StatType* RegenCost; // 0x0
		::FlatData::StatType* InitialWeaponRangeRate; // 0x0
		::FlatData::StatType* DefensePenetration; // 0x0
		::FlatData::StatType* DefensePenetrationResisit; // 0x0
		::FlatData::StatType* ExtendBuffDuration; // 0x0
		::FlatData::StatType* ExtendDebuffDuration; // 0x0
		::FlatData::StatType* ExtendCrowdControlDuration; // 0x0
		::FlatData::StatType* EnhanceExplosionRate; // 0x0
		::FlatData::StatType* EnhancePierceRate; // 0x0
		::FlatData::StatType* EnhanceMysticRate; // 0x0
		::FlatData::StatType* EnhanceLightArmorRate; // 0x0
		::FlatData::StatType* EnhanceHeavyArmorRate; // 0x0
		::FlatData::StatType* EnhanceUnarmedRate; // 0x0
		::FlatData::StatType* EnhanceSiegeRate; // 0x0
		::FlatData::StatType* EnhanceNormalRate; // 0x0
		::FlatData::StatType* EnhanceStructureRate; // 0x0
		::FlatData::StatType* EnhanceNormalArmorRate; // 0x0
		::FlatData::StatType* DamageRatio2Increase; // 0x0
		::FlatData::StatType* DamageRatio2Decrease; // 0x0
		::FlatData::StatType* DamagedRatio2Increase; // 0x0
		::FlatData::StatType* DamagedRatio2Decrease; // 0x0
		::FlatData::StatType* EnhanceSonicRate; // 0x0
		::FlatData::StatType* EnhanceElasticArmorRate; // 0x0
		::FlatData::StatType* ExDamagedRatioIncrease; // 0x0
		::FlatData::StatType* ExDamagedRatioDecrease; // 0x0
		::FlatData::StatType* EnhanceExDamageRate; // 0x0
		::FlatData::StatType* ReduceExDamagedRate; // 0x0
		::FlatData::StatType* EnhanceBasicsDamageRate; // 0x0
		::FlatData::StatType* ReduceBasicsDamagedRate; // 0x0
		::FlatData::StatType* HealRate; // 0x0
		::FlatData::StatType* HealLightArmorRate; // 0x0
		::FlatData::StatType* HealHeavyArmorRate; // 0x0
		::FlatData::StatType* HealUnarmedRate; // 0x0
		::FlatData::StatType* HealElasticArmorRate; // 0x0
		::FlatData::StatType* HealNormalArmorRate; // 0x0
		::FlatData::StatType* HealedExplosionRate; // 0x0
		::FlatData::StatType* HealedPierceRate; // 0x0
		::FlatData::StatType* HealedMysticRate; // 0x0
		::FlatData::StatType* HealedSonicRate; // 0x0
		::FlatData::StatType* HealedNormalRate; // 0x0
		::FlatData::StatType* GrowthScore; // 0x0
		::FlatData::StatType* CharacterBulletTypeEnhanceRate; // 0x0
		::FlatData::StatType* MaxCostIncrease; // 0x0
		::FlatData::StatType* EnhanceChemicalRate; // 0x0
		::FlatData::StatType* EnhanceCompositeArmorRate; // 0x0
		::FlatData::StatType* EnhanceWeakDamageRate; // 0x0
		::FlatData::StatType* ReduceWeakDamagedRate; // 0x0
		::FlatData::StatType* WeakDamagedRatio; // 0x0
		::FlatData::StatType* EffectiveDamagedRatio; // 0x0
		::FlatData::StatType* NormalDamagedRatio; // 0x0
		::FlatData::StatType* ResistDamagedRatio; // 0x0
		::FlatData::StatType* Max; // 0x0

	};
}

