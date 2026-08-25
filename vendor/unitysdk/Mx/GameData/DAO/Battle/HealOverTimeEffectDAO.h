#pragma once
#include "../../../../unitysdk.h"

namespace FlatData { class StatType; }
namespace MX::Logic::Skills { class ExtraStatType; }
namespace MX::Logic::Data { class LogicEffectValue; }
namespace MemoryPack { class MemoryPackWriter&; }
namespace MX::GameData::DAO::Battle { class HealOverTimeEffectDAO&; }
namespace MemoryPack { class MemoryPackReader&; }

#define MX_GAMEDATA_DAO_BATTLE_HEALOVERTIMEEFFECTDAO_TOLOGICEFFECTVALUE_OFFSET UNITYSDK_OFFSET(0x1565A00)
#define MX_GAMEDATA_DAO_BATTLE_HEALOVERTIMEEFFECTDAO_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1565A60)
#define MX_GAMEDATA_DAO_BATTLE_HEALOVERTIMEEFFECTDAO_.CCTOR_OFFSET UNITYSDK_OFFSET(0x1567860)
#define MX_GAMEDATA_DAO_BATTLE_HEALOVERTIMEEFFECTDAO_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1567C60)
#define MX_GAMEDATA_DAO_BATTLE_HEALOVERTIMEEFFECTDAO_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x1567870)
#define MX_GAMEDATA_DAO_BATTLE_HEALOVERTIMEEFFECTDAO_.CTOR_OFFSET UNITYSDK_OFFSET(0x156ADF0)

namespace MX::GameData::DAO::Battle
{
	inline static constexpr unsigned int HealOverTimeEffectDAO_TypeDefinitionIndex = 15268;

	class HealOverTimeEffectDAO : public Il2CppObject
	{
	public:
		::System::Int64 Amount; // 0x58
		::FlatData::StatType* BonusSource; // 0x60
		::System::Int64 BonusRate; // 0x68
		::MX::Logic::Skills::ExtraStatType* ExtraStatSource; // 0x70
		::System::Int64 ExtraStatRate; // 0x78
		::System::Int32 Duration; // 0x80
		::System::Int32 Period; // 0x84
		::System::Boolean IsDispellable; // 0x88
		::System::String* ChangeRateByCost; // 0x90
		::System::Int64 ApplyPeriodRate; // 0x98
		::System::Int64 PeriodMaxHealRate; // 0xA0
		::System::Int64 PeriodMinHealRate; // 0xA8
		::System::Boolean ForceFloaterHide; // 0xB0
		::System::Boolean ApplyHealRate; // 0xB1
		::System::Boolean ApplyHealRateByArmorType; // 0xB2
		::System::Boolean ApplyHealRateByBulletType; // 0xB3

		::MX::Logic::Data::LogicEffectValue* ToLogicEffectValue()
		{
			return (return (::MX::Logic::Data::LogicEffectValue*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_HEALOVERTIMEEFFECTDAO_TOLOGICEFFECTVALUE_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::HealOverTimeEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::HealOverTimeEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_HEALOVERTIMEEFFECTDAO_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_HEALOVERTIMEEFFECTDAO_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::HealOverTimeEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::HealOverTimeEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_HEALOVERTIMEEFFECTDAO_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_HEALOVERTIMEEFFECTDAO_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_HEALOVERTIMEEFFECTDAO_.CTOR_OFFSET))(nullptr);
		}

	};
}

