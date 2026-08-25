#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class StatType; }
namespace MX::Logic::Skills { class DamageRatioApplyType; }
namespace MX::Logic::Data { class DamageOverTimeRemoveCondition; }
namespace MX::Logic::Skills { class ExtraStatType; }
namespace MX::Logic::Data { class BlackboardKeyType; }
namespace MX::Logic::Skills { class SkillType; }
namespace FlatData { class BulletType; }

#define MX_LOGIC_DATA_DAMAGEOVERTIMEEFFECTDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x11F3FA0)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int DamageOverTimeEffectData_TypeDefinitionIndex = 13579;

	class DamageOverTimeEffectData : public Il2CppObject
	{
	public:
		::System::Int64 Amount; // 0x58
		::FlatData::StatType* BonusSourceFirst; // 0x60
		::System::Int64 BonusRateFirst; // 0x68
		::System::Int32 Duration; // 0x70
		::System::Int32 Period; // 0x74
		::System::Boolean IsDispellable; // 0x78
		::System::Boolean ApplyBulletType; // 0x79
		::System::Boolean ApplyDefense; // 0x7A
		::MX::Logic::Skills::DamageRatioApplyType* ApplyDamageRatio; // 0x7C
		::MX::Logic::Skills::DamageRatioApplyType* ApplyDamageRatio2; // 0x80
		::MX::Logic::Data::DamageOverTimeRemoveCondition* RemoveCondition; // 0x84
		::System::Int32 RemoveConditionArgument; // 0x88
		::MX::Logic::Skills::ExtraStatType* AddSource; // 0x8C
		::System::Int64 AddRate; // 0x90
		::System::Int64 MaxDamageRate; // 0x98
		::System::String* BonusSourceBlackboardKeyString; // 0xA0
		::MX::Logic::Data::BlackboardKeyType* BonusSourceBlackboardKeyType; // 0xA8
		::System::Int64 BonusRateBlackboard; // 0xB0
		::System::Boolean IgnoreMaxDamageForBlackboardBonus; // 0xB8
		::System::Int64 DefensePenetrationRate; // 0xC0
		::System::String* ChangeRateByCost; // 0xC8
		::System::Boolean IgnoreShield; // 0xD0
		::System::Boolean DoNotKillTarget; // 0xD1
		::System::Boolean ApplyStability; // 0xD2
		::System::Boolean ApplyTerrainAdaptationDamage; // 0xD3
		::System::Boolean ApplyExDamagedRatio; // 0xD4
		::System::Boolean ForceFloaterHide; // 0xD5
		::System::Boolean ApplyEnhanceExDamageRate; // 0xD6
		::System::Boolean ApplyEnhanceBasicsDamageRate; // 0xD7
		::MX::Logic::Skills::SkillType* OverrideSkillType; // 0xD8
		::MX::Logic::Skills::SkillType* OverrideSkillDamageType; // 0xDC
		::System::Boolean ApplyEnhanceBulletType; // 0xE0
		::System::Boolean OverrideBulletType; // 0xE1
		::FlatData::BulletType* BulletTypeToOverride; // 0xE4
		::System::Boolean ApplyEnhanceWeakDamageRate; // 0xE8
		::System::Boolean ApplyWeakDamagedRatio; // 0xE9
		::System::Boolean ApplyEffectiveDamagedRatio; // 0xEA
		::System::Boolean ApplyNormalDamagedRatio; // 0xEB
		::System::Boolean ApplyResistDamagedRatio; // 0xEC

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_DAMAGEOVERTIMEEFFECTDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

