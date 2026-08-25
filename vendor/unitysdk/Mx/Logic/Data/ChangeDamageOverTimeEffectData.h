#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class StatType; }
namespace MX::Logic::Skills { class DamageRatioApplyType; }
namespace MX::Logic::Data { class DamageOverTimeRemoveCondition; }
namespace MX::Logic::Skills { class ExtraStatType; }
namespace MX::Logic::Data { class BlackboardKeyType; }
namespace MX::Logic::Skills { class SkillType; }
namespace FlatData { class BulletType; }

#define MX_LOGIC_DATA_CHANGEDAMAGEOVERTIMEEFFECTDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x11F3E80)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int ChangeDamageOverTimeEffectData_TypeDefinitionIndex = 13561;

	class ChangeDamageOverTimeEffectData : public Il2CppObject
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
		::System::Int64 ChangeDamageRate; // 0xC8
		::System::Int64 MaxChangeDamageRate; // 0xD0
		::System::Int64 MinChangeDamageRate; // 0xD8
		::System::Boolean IgnoreShield; // 0xE0
		::System::Boolean DoNotKillTarget; // 0xE1
		::System::Boolean ApplyStability; // 0xE2
		::System::Boolean ApplyTerrainAdaptationDamage; // 0xE3
		::System::Boolean ApplyExDamagedRatio; // 0xE4
		::System::Boolean ForceFloaterHide; // 0xE5
		::System::Boolean ApplyEnhanceExDamageRate; // 0xE6
		::System::Boolean ApplyEnhanceBasicsDamageRate; // 0xE7
		::MX::Logic::Skills::SkillType* OverrideSkillType; // 0xE8
		::MX::Logic::Skills::SkillType* OverrideSkillDamageType; // 0xEC
		::System::Boolean ApplyEnhanceBulletType; // 0xF0
		::System::Boolean OverrideBulletType; // 0xF1
		::FlatData::BulletType* BulletTypeToOverride; // 0xF4
		::System::Boolean ApplyEnhanceWeakDamageRate; // 0xF8
		::System::Boolean ApplyWeakDamagedRatio; // 0xF9
		::System::Boolean ApplyEffectiveDamagedRatio; // 0xFA
		::System::Boolean ApplyNormalDamagedRatio; // 0xFB
		::System::Boolean ApplyResistDamagedRatio; // 0xFC

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_CHANGEDAMAGEOVERTIMEEFFECTDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

