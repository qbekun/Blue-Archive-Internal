#pragma once
#include "../../../../unitysdk.h"

namespace FlatData { class StatType; }
namespace MX::Logic::Skills { class ExtraStatType; }
namespace MemoryPack { class MemoryPackWriter&; }
namespace MX::GameData::DAO::Battle { class MaxHpOverHealEffectDAO&; }
namespace MX::Logic::Data { class LogicEffectValue; }
namespace MemoryPack { class MemoryPackReader&; }

#define MX_GAMEDATA_DAO_BATTLE_MAXHPOVERHEALEFFECTDAO_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1657A40)
#define MX_GAMEDATA_DAO_BATTLE_MAXHPOVERHEALEFFECTDAO_.CTOR_OFFSET UNITYSDK_OFFSET(0x1659850)
#define MX_GAMEDATA_DAO_BATTLE_MAXHPOVERHEALEFFECTDAO_.CCTOR_OFFSET UNITYSDK_OFFSET(0x16598A0)
#define MX_GAMEDATA_DAO_BATTLE_MAXHPOVERHEALEFFECTDAO_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x16598B0)
#define MX_GAMEDATA_DAO_BATTLE_MAXHPOVERHEALEFFECTDAO_TOLOGICEFFECTVALUE_OFFSET UNITYSDK_OFFSET(0x1659CE0)
#define MX_GAMEDATA_DAO_BATTLE_MAXHPOVERHEALEFFECTDAO_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1659D40)

namespace MX::GameData::DAO::Battle
{
	inline static constexpr unsigned int MaxHpOverHealEffectDAO_TypeDefinitionIndex = 15344;

	class MaxHpOverHealEffectDAO : public Il2CppObject
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
		::System::Int32 TemporaryHpDuration; // 0x8C
		::System::Boolean TemporaryHpDispellable; // 0x90
		::System::Int64 TemporaryHpLimitRateByTargetMaxHp; // 0x98
		::System::Int32 TemporaryHpBaseAmount; // 0xA0
		::System::Int64 TemporaryHpByOverHealRate; // 0xA8
		::System::Int32 TemporaryHpReducePeriod; // 0xB0
		::System::Int32 TemporaryHpReduceBaseAmount; // 0xB4
		::System::Int64 TemporaryHpReduceByHealAmountRate; // 0xB8

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::MaxHpOverHealEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::MaxHpOverHealEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_MAXHPOVERHEALEFFECTDAO_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_MAXHPOVERHEALEFFECTDAO_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_MAXHPOVERHEALEFFECTDAO_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_MAXHPOVERHEALEFFECTDAO_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::MX::Logic::Data::LogicEffectValue* ToLogicEffectValue()
		{
			return (return (::MX::Logic::Data::LogicEffectValue*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_MAXHPOVERHEALEFFECTDAO_TOLOGICEFFECTVALUE_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::MaxHpOverHealEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::MaxHpOverHealEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_MAXHPOVERHEALEFFECTDAO_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

	};
}

