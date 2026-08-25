#pragma once
#include "../../../../unitysdk.h"

namespace FlatData { class StatType; }
namespace MX::Logic::Data { class LogicEffectValue; }

#define MX_GAMEDATA_DAO_BATTLE_CONFRONTATIONGAUGERECOVEREFFECTDAO_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x14BE510)
#define MX_GAMEDATA_DAO_BATTLE_CONFRONTATIONGAUGERECOVEREFFECTDAO_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x14C06B0)
#define MX_GAMEDATA_DAO_BATTLE_CONFRONTATIONGAUGERECOVEREFFECTDAO_.CTOR_OFFSET UNITYSDK_OFFSET(0x14C0660)
#define MX_GAMEDATA_DAO_BATTLE_CONFRONTATIONGAUGERECOVEREFFECTDAO_.CCTOR_OFFSET UNITYSDK_OFFSET(0x14C0A20)
#define MX_GAMEDATA_DAO_BATTLE_CONFRONTATIONGAUGERECOVEREFFECTDAO_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x14C0A30)
#define MX_GAMEDATA_DAO_BATTLE_CONFRONTATIONGAUGERECOVEREFFECTDAO_TOLOGICEFFECTVALUE_OFFSET UNITYSDK_OFFSET(0x14C2050)

namespace MX::GameData::DAO::Battle
{
	inline static constexpr unsigned int ConfrontationGaugeRecoverEffectDAO_TypeDefinitionIndex = 15204;

	class ConfrontationGaugeRecoverEffectDAO : public Il2CppObject
	{
	public:
		::System::Int64 Amount; // 0x58
		::FlatData::StatType* BonusSource; // 0x60
		::System::Int64 BonusRate; // 0x68

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::ConfrontationGaugeRecoverEffectDAO&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::ConfrontationGaugeRecoverEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_CONFRONTATIONGAUGERECOVEREFFECTDAO_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_CONFRONTATIONGAUGERECOVEREFFECTDAO_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_CONFRONTATIONGAUGERECOVEREFFECTDAO_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_CONFRONTATIONGAUGERECOVEREFFECTDAO_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::ConfrontationGaugeRecoverEffectDAO&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::ConfrontationGaugeRecoverEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_CONFRONTATIONGAUGERECOVEREFFECTDAO_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::MX::Logic::Data::LogicEffectValue* ToLogicEffectValue()
		{
			return ((::MX::Logic::Data::LogicEffectValue*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_CONFRONTATIONGAUGERECOVEREFFECTDAO_TOLOGICEFFECTVALUE_OFFSET))(nullptr);
		}

	};
}

