#pragma once
#include "../../../../unitysdk.h"

namespace FlatData { class StatType; }
namespace MX::Logic::Skills { class ExtraStatType; }
namespace MX::Logic::Data { class LogicEffectValue; }
namespace MemoryPack { class MemoryPackWriter&; }
namespace MX::GameData::DAO::Battle { class HealEffectDAO&; }
namespace MemoryPack { class MemoryPackReader&; }

#define MX_GAMEDATA_DAO_BATTLE_HEALEFFECTDAO_TOLOGICEFFECTVALUE_OFFSET UNITYSDK_OFFSET(0x15608F0)
#define MX_GAMEDATA_DAO_BATTLE_HEALEFFECTDAO_.CCTOR_OFFSET UNITYSDK_OFFSET(0x1560950)
#define MX_GAMEDATA_DAO_BATTLE_HEALEFFECTDAO_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1560D50)
#define MX_GAMEDATA_DAO_BATTLE_HEALEFFECTDAO_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1562A80)
#define MX_GAMEDATA_DAO_BATTLE_HEALEFFECTDAO_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x1560960)
#define MX_GAMEDATA_DAO_BATTLE_HEALEFFECTDAO_.CTOR_OFFSET UNITYSDK_OFFSET(0x15658D0)

namespace MX::GameData::DAO::Battle
{
	inline static constexpr unsigned int HealEffectDAO_TypeDefinitionIndex = 15266;

	class HealEffectDAO : public Il2CppObject
	{
	public:
		::System::Int64 Amount; // 0x58
		::FlatData::StatType* BonusSource; // 0x60
		::System::Int64 BonusRate; // 0x68
		::MX::Logic::Skills::ExtraStatType* ExtraStatSource; // 0x70
		::System::Int64 ExtraStatRate; // 0x78
		::System::String* ChangeRateByCost; // 0x80
		::System::Boolean ForceFloaterHide; // 0x88
		::System::Boolean ApplyHealRate; // 0x89
		::System::Boolean ApplyHealRateByArmorType; // 0x8A
		::System::Boolean ApplyHealRateByBulletType; // 0x8B

		::MX::Logic::Data::LogicEffectValue* ToLogicEffectValue()
		{
			return (return (::MX::Logic::Data::LogicEffectValue*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_HEALEFFECTDAO_TOLOGICEFFECTVALUE_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_HEALEFFECTDAO_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::HealEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::HealEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_HEALEFFECTDAO_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::HealEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::HealEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_HEALEFFECTDAO_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_HEALEFFECTDAO_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_HEALEFFECTDAO_.CTOR_OFFSET))(nullptr);
		}

	};
}

