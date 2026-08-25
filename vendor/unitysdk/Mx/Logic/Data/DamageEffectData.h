#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Skills { class DamageCriticalType; }
namespace FlatData { class StatType; }
namespace MX::Logic::Skills { class DamageRatioApplyType; }
namespace MX::Logic::Skills { class SkillType; }

#define MX_LOGIC_DATA_DAMAGEEFFECTDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x11F3F90)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int DamageEffectData_TypeDefinitionIndex = 13578;

	class DamageEffectData : public Il2CppObject
	{
	public:
		::MX::Logic::Skills::DamageCriticalType* CriticalCheck; // 0x58
		::System::Boolean CanEvade; // 0x5C
		::System::Int64 Amount; // 0x60
		::FlatData::StatType* BonusSourceFirst; // 0x68
		::System::Int64 BonusRateFirst; // 0x70
		::System::Int64 LifeRecover; // 0x78
		::System::Boolean ApplyBulletType; // 0x80
		::System::Boolean ApplyDefense; // 0x81
		::MX::Logic::Skills::DamageRatioApplyType* ApplyDamageRatio; // 0x84
		::MX::Logic::Skills::DamageRatioApplyType* ApplyDamageRatio2; // 0x88
		::System::Int64 DefensePenetrationRate; // 0x90
		::System::String* ChangeRateByCost; // 0x98
		::System::Boolean IgnoreShield; // 0xA0
		::System::Boolean DoNotKillTarget; // 0xA1
		::System::Boolean ApplyStability; // 0xA2
		::System::Boolean ApplyTerrainAdaptationDamage; // 0xA3
		::System::Boolean ApplyExDamagedRatio; // 0xA4
		::System::Boolean ForceFloaterHide; // 0xA5
		::System::Boolean ApplyEnhanceExDamageRate; // 0xA6
		::System::Boolean ApplyEnhanceBasicsDamageRate; // 0xA7
		::MX::Logic::Skills::SkillType* OverrideSkillType; // 0xA8
		::MX::Logic::Skills::SkillType* OverrideSkillDamageType; // 0xAC
		::System::Boolean ApplyEnhanceWeakDamageRate; // 0xB0
		::System::Boolean ApplyWeakDamagedRatio; // 0xB1
		::System::Boolean ApplyEffectiveDamagedRatio; // 0xB2
		::System::Boolean ApplyNormalDamagedRatio; // 0xB3
		::System::Boolean ApplyResistDamagedRatio; // 0xB4

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_DAMAGEEFFECTDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

