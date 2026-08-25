#pragma once
#include "../../../../unitysdk.h"

namespace FlatData { class StatType; }
namespace MX::Logic::Data { class DamageByHitTriggerType; }
namespace MX::Logic::Skills { class DamageRatioApplyType; }
namespace MX::Logic::Data { class DamageByHitRemoveCondition; }
namespace MX::Logic::Skills { class ExtraStatType; }
namespace MX::Logic::Data { class BlackboardKeyType; }
namespace MX::Logic::Skills { class SkillType; }
namespace FlatData { class BulletType; }
namespace MX::Logic::Data { class LogicEffectValue; }

#define MX_GAMEDATA_DAO_BATTLE_DAMAGEBYHITEFFECTDAO_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x14E15F0)
#define MX_GAMEDATA_DAO_BATTLE_DAMAGEBYHITEFFECTDAO_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x14E1E20)
#define MX_GAMEDATA_DAO_BATTLE_DAMAGEBYHITEFFECTDAO_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x14E69C0)
#define MX_GAMEDATA_DAO_BATTLE_DAMAGEBYHITEFFECTDAO_TOLOGICEFFECTVALUE_OFFSET UNITYSDK_OFFSET(0x14E9190)
#define MX_GAMEDATA_DAO_BATTLE_DAMAGEBYHITEFFECTDAO_.CCTOR_OFFSET UNITYSDK_OFFSET(0x14E91F0)
#define MX_GAMEDATA_DAO_BATTLE_DAMAGEBYHITEFFECTDAO_.CTOR_OFFSET UNITYSDK_OFFSET(0x14E6970)

namespace MX::GameData::DAO::Battle
{
	inline static constexpr unsigned int DamageByHitEffectDAO_TypeDefinitionIndex = 15218;

	class DamageByHitEffectDAO : public Il2CppObject
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

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_DAMAGEBYHITEFFECTDAO_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::DamageByHitEffectDAO&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::DamageByHitEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_DAMAGEBYHITEFFECTDAO_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::DamageByHitEffectDAO&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::DamageByHitEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_DAMAGEBYHITEFFECTDAO_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::MX::Logic::Data::LogicEffectValue* ToLogicEffectValue()
		{
			return ((::MX::Logic::Data::LogicEffectValue*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_DAMAGEBYHITEFFECTDAO_TOLOGICEFFECTVALUE_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_DAMAGEBYHITEFFECTDAO_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_DAMAGEBYHITEFFECTDAO_.CTOR_OFFSET))(nullptr);
		}

	};
}

