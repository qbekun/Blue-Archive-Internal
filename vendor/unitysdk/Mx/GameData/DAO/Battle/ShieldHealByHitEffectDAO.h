#pragma once
#include "../../../../unitysdk.h"

namespace FlatData { class StatType; }
namespace MX::Logic::Data { class HealByHitTriggerType; }
namespace MX::Logic::Data { class HealByHitRemoveCondition; }
namespace MemoryPack { class MemoryPackReader&; }
namespace MX::GameData::DAO::Battle { class ShieldHealByHitEffectDAO&; }
namespace MX::Logic::Data { class LogicEffectValue; }
namespace MemoryPack { class MemoryPackWriter&; }

#define MX_GAMEDATA_DAO_BATTLE_SHIELDHEALBYHITEFFECTDAO_.CTOR_OFFSET UNITYSDK_OFFSET(0x16D5DA0)
#define MX_GAMEDATA_DAO_BATTLE_SHIELDHEALBYHITEFFECTDAO_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x16D5DF0)
#define MX_GAMEDATA_DAO_BATTLE_SHIELDHEALBYHITEFFECTDAO_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x16D62E0)
#define MX_GAMEDATA_DAO_BATTLE_SHIELDHEALBYHITEFFECTDAO_TOLOGICEFFECTVALUE_OFFSET UNITYSDK_OFFSET(0x16D9A90)
#define MX_GAMEDATA_DAO_BATTLE_SHIELDHEALBYHITEFFECTDAO_.CCTOR_OFFSET UNITYSDK_OFFSET(0x16D9AF0)
#define MX_GAMEDATA_DAO_BATTLE_SHIELDHEALBYHITEFFECTDAO_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x16D9B00)

namespace MX::GameData::DAO::Battle
{
	inline static constexpr unsigned int ShieldHealByHitEffectDAO_TypeDefinitionIndex = 15390;

	class ShieldHealByHitEffectDAO : public Il2CppObject
	{
	public:
		::System::Int64 Amount; // 0x58
		::FlatData::StatType* BonusSource; // 0x60
		::System::Int64 BonusRate; // 0x68
		::System::Int32 Duration; // 0x70
		::MX::Logic::Data::HealByHitTriggerType* TriggerType; // 0x74
		::System::Boolean IsDispellable; // 0x78
		::MX::Logic::Data::HealByHitRemoveCondition* RemoveCondition; // 0x7C
		::System::Int32 RemoveConditionArgument; // 0x80
		::System::String* TriggerArgument; // 0x88
		::System::Int64 AddTriggerValueRate; // 0x90
		::System::String* ShieldId; // 0x98
		::System::Boolean ForceFloaterHide; // 0xA0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_SHIELDHEALBYHITEFFECTDAO_.CTOR_OFFSET))(nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_SHIELDHEALBYHITEFFECTDAO_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::ShieldHealByHitEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::ShieldHealByHitEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_SHIELDHEALBYHITEFFECTDAO_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::MX::Logic::Data::LogicEffectValue* ToLogicEffectValue()
		{
			return (return (::MX::Logic::Data::LogicEffectValue*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_SHIELDHEALBYHITEFFECTDAO_TOLOGICEFFECTVALUE_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_SHIELDHEALBYHITEFFECTDAO_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::ShieldHealByHitEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::ShieldHealByHitEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_SHIELDHEALBYHITEFFECTDAO_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

	};
}

