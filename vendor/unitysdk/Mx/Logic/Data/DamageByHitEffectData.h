#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class StatType; }
namespace MX::Logic::Data { class DamageByHitTriggerType; }
namespace MX::Logic::Skills { class DamageRatioApplyType; }
namespace MX::Logic::Data { class DamageByHitRemoveCondition; }
namespace MX::Logic::Skills { class ExtraStatType; }
namespace MX::Logic::Data { class BlackboardKeyType; }
namespace MX::Logic::Skills { class SkillType; }
namespace FlatData { class BulletType; }

#define MX_LOGIC_DATA_DAMAGEBYHITEFFECTDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x11F3F50)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int DamageByHitEffectData_TypeDefinitionIndex = 13574;

	class DamageByHitEffectData : public Il2CppObject
	{
	public:
		::System::Int64 Amount; // 0x58
		::FlatData::StatType* BonusSourceFirst; // 0x60
		::System::Int64 BonusRateFirst; // 0x68
		::System::Int32 Duration; // 0x70
		::MX::Logic::Data::DamageByHitTriggerType* TriggerType; // 0x74
		::System::Boolean IsDispellable; // 0x78
		::System::Boolean ApplyBulletType; // 0x79
		::System::Boolean ApplyDefense; // 0x7A
		::MX::Logic::Skills::DamageRatioApplyType* ApplyDamageRatio; // 0x7C
		::MX::Logic::Skills::DamageRatioApplyType* ApplyDamageRatio2; // 0x80
		::MX::Logic::Data::DamageByHitRemoveCondition* RemoveCondition; // 0x84
		::System::Int32 RemoveConditionArgument; // 0x88
		::MX::Logic::Skills::ExtraStatType* AddSource; // 0x8C
		::System::Int64 AddRate; // 0x90
		::System::Int64 MaxDamageRate; // 0x98
		::System::String* BonusSourceBlackboardKeyString; // 0xA0
		::MX::Logic::Data::BlackboardKeyType* BonusSourceBlackboardKeyType; // 0xA8
		::System::Int64 BonusRateBlackboard; // 0xB0
		::System::Boolean IgnoreMaxDamageForBlackboardBonus; // 0xB8
		::System::Int64 DefensePenetrationRate; // 0xC0
		::System::String* TriggerArgument; // 0xC8
		::System::Int64 AddTriggerValueRate; // 0xD0
		::System::Boolean IgnoreShield; // 0xD8
		::System::Boolean DoNotKillTarget; // 0xD9
		::System::Boolean ApplyStability; // 0xDA
		::System::Boolean ApplyTerrainAdaptationDamage; // 0xDB
		::System::Boolean ApplyExDamagedRatio; // 0xDC
		::System::Boolean ForceFloaterHide; // 0xDD
		::System::Boolean ApplyEnhanceExDamageRate; // 0xDE
		::System::Boolean ApplyEnhanceBasicsDamageRate; // 0xDF
		::MX::Logic::Skills::SkillType* OverrideSkillType; // 0xE0
		::MX::Logic::Skills::SkillType* OverrideSkillDamageType; // 0xE4
		::System::Boolean ApplyEnhanceBulletType; // 0xE8
		::System::Boolean OverrideBulletType; // 0xE9
		::FlatData::BulletType* BulletTypeToOverride; // 0xEC
		::System::Boolean ApplyEnhanceWeakDamageRate; // 0xF0
		::System::Boolean ApplyWeakDamagedRatio; // 0xF1
		::System::Boolean ApplyEffectiveDamagedRatio; // 0xF2
		::System::Boolean ApplyNormalDamagedRatio; // 0xF3
		::System::Boolean ApplyResistDamagedRatio; // 0xF4

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_DAMAGEBYHITEFFECTDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

