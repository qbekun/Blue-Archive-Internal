#pragma once
#include "../../../../unitysdk.h"

namespace FlatData { class BulletType; }
namespace MX::Logic::Skills { class DamageCriticalType; }
namespace MX::Logic::Skills { class DamageRatioApplyType; }
namespace MX::Logic::Skills { class SkillType; }
namespace MX::Logic::Data { class LogicEffectValue; }

#define MX_GAMEDATA_DAO_BATTLE_ACCUMULATEDAMAGEEFFECTDAO_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1486410)
#define MX_GAMEDATA_DAO_BATTLE_ACCUMULATEDAMAGEEFFECTDAO_.CTOR_OFFSET UNITYSDK_OFFSET(0x1487C90)
#define MX_GAMEDATA_DAO_BATTLE_ACCUMULATEDAMAGEEFFECTDAO_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x1487CE0)
#define MX_GAMEDATA_DAO_BATTLE_ACCUMULATEDAMAGEEFFECTDAO_.CCTOR_OFFSET UNITYSDK_OFFSET(0x1488280)
#define MX_GAMEDATA_DAO_BATTLE_ACCUMULATEDAMAGEEFFECTDAO_TOLOGICEFFECTVALUE_OFFSET UNITYSDK_OFFSET(0x1488290)
#define MX_GAMEDATA_DAO_BATTLE_ACCUMULATEDAMAGEEFFECTDAO_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x14882F0)

namespace MX::GameData::DAO::Battle
{
	inline static constexpr unsigned int AccumulateDamageEffectDAO_TypeDefinitionIndex = 15184;

	class AccumulateDamageEffectDAO : public Il2CppObject
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

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::AccumulateDamageEffectDAO&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::AccumulateDamageEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_ACCUMULATEDAMAGEEFFECTDAO_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_ACCUMULATEDAMAGEEFFECTDAO_.CTOR_OFFSET))(nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_ACCUMULATEDAMAGEEFFECTDAO_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_ACCUMULATEDAMAGEEFFECTDAO_.CCTOR_OFFSET))(nullptr);
		}

		::MX::Logic::Data::LogicEffectValue* ToLogicEffectValue()
		{
			return ((::MX::Logic::Data::LogicEffectValue*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_ACCUMULATEDAMAGEEFFECTDAO_TOLOGICEFFECTVALUE_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::AccumulateDamageEffectDAO&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::AccumulateDamageEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_ACCUMULATEDAMAGEEFFECTDAO_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

	};
}

