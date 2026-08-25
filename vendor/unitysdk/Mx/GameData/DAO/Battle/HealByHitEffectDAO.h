#pragma once
#include "../../../../unitysdk.h"

namespace FlatData { class StatType; }
namespace MX::Logic::Data { class HealByHitTriggerType; }
namespace MX::Logic::Skills { class ExtraStatType; }
namespace MX::Logic::Data { class HealByHitRemoveCondition; }
namespace MemoryPack { class MemoryPackReader&; }
namespace MX::GameData::DAO::Battle { class HealByHitEffectDAO&; }
namespace MX::Logic::Data { class LogicEffectValue; }
namespace MemoryPack { class MemoryPackWriter&; }

#define MX_GAMEDATA_DAO_BATTLE_HEALBYHITEFFECTDAO_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x154F970)
#define MX_GAMEDATA_DAO_BATTLE_HEALBYHITEFFECTDAO_.CTOR_OFFSET UNITYSDK_OFFSET(0x1552BF0)
#define MX_GAMEDATA_DAO_BATTLE_HEALBYHITEFFECTDAO_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x1552C40)
#define MX_GAMEDATA_DAO_BATTLE_HEALBYHITEFFECTDAO_.CCTOR_OFFSET UNITYSDK_OFFSET(0x15531E0)
#define MX_GAMEDATA_DAO_BATTLE_HEALBYHITEFFECTDAO_TOLOGICEFFECTVALUE_OFFSET UNITYSDK_OFFSET(0x15531F0)
#define MX_GAMEDATA_DAO_BATTLE_HEALBYHITEFFECTDAO_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1553250)

namespace MX::GameData::DAO::Battle
{
	inline static constexpr unsigned int HealByHitEffectDAO_TypeDefinitionIndex = 15260;

	class HealByHitEffectDAO : public Il2CppObject
	{
	public:
		::System::Int64 Amount; // 0x58
		::FlatData::StatType* BonusSource; // 0x60
		::System::Int64 BonusRate; // 0x68
		::System::Int32 Duration; // 0x70
		::MX::Logic::Data::HealByHitTriggerType* TriggerType; // 0x74
		::MX::Logic::Skills::ExtraStatType* ExtraStatSource; // 0x78
		::System::Int64 ExtraStatRate; // 0x80
		::System::Boolean IsDispellable; // 0x88
		::MX::Logic::Data::HealByHitRemoveCondition* RemoveCondition; // 0x8C
		::System::Int32 RemoveConditionArgument; // 0x90
		::System::String* TriggerArgument; // 0x98
		::System::Int64 AddTriggerValueRate; // 0xA0
		::System::Boolean ForceFloaterHide; // 0xA8
		::System::Boolean ApplyHealRate; // 0xA9
		::System::Boolean ApplyHealRateByArmorType; // 0xAA
		::System::Boolean ApplyHealRateByBulletType; // 0xAB

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::HealByHitEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::HealByHitEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_HEALBYHITEFFECTDAO_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_HEALBYHITEFFECTDAO_.CTOR_OFFSET))(nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_HEALBYHITEFFECTDAO_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_HEALBYHITEFFECTDAO_.CCTOR_OFFSET))(nullptr);
		}

		::MX::Logic::Data::LogicEffectValue* ToLogicEffectValue()
		{
			return (return (::MX::Logic::Data::LogicEffectValue*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_HEALBYHITEFFECTDAO_TOLOGICEFFECTVALUE_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::HealByHitEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::HealByHitEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_HEALBYHITEFFECTDAO_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

	};
}

