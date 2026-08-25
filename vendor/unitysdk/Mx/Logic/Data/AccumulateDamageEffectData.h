#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class BulletType; }
namespace MX::Logic::Skills { class DamageCriticalType; }
namespace MX::Logic::Skills { class DamageRatioApplyType; }
namespace MX::Logic::Skills { class SkillType; }

#define MX_LOGIC_DATA_ACCUMULATEDAMAGEEFFECTDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x11F3D20)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int AccumulateDamageEffectData_TypeDefinitionIndex = 13540;

	class AccumulateDamageEffectData : public Il2CppObject
	{
	public:
		::System::Boolean IsOverrideBulletType; // 0x58
		::FlatData::BulletType* BulletType; // 0x5C
		::MX::Logic::Skills::DamageCriticalType* CriticalCheck; // 0x60
		::System::Boolean CanEvade; // 0x64
		::System::Boolean ApplyBulletType; // 0x65
		::System::Boolean ApplyDefense; // 0x66
		::MX::Logic::Skills::DamageRatioApplyType* ApplyDamageRatio; // 0x68
		::MX::Logic::Skills::DamageRatioApplyType* ApplyDamageRatio2; // 0x6C
		::System::Int64 DefensePenetrationRate; // 0x70
		::System::Boolean IgnoreShield; // 0x78
		::System::Boolean DoNotKillTarget; // 0x79
		::System::Boolean ApplyStability; // 0x7A
		::System::Boolean ApplyTerrainAdaptationDamage; // 0x7B
		::System::Boolean ApplyExDamagedRatio; // 0x7C
		::System::Boolean ForceFloaterHide; // 0x7D
		::System::Boolean ApplyEnhanceExDamageRate; // 0x7E
		::System::Boolean ApplyEnhanceBasicsDamageRate; // 0x7F
		::MX::Logic::Skills::SkillType* OverrideSkillType; // 0x80
		::MX::Logic::Skills::SkillType* OverrideSkillDamageType; // 0x84
		::System::Boolean ApplyEnhanceWeakDamageRate; // 0x88
		::System::Boolean ApplyWeakDamagedRatio; // 0x89
		::System::Boolean ApplyEffectiveDamagedRatio; // 0x8A
		::System::Boolean ApplyNormalDamagedRatio; // 0x8B
		::System::Boolean ApplyResistDamagedRatio; // 0x8C

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_ACCUMULATEDAMAGEEFFECTDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

