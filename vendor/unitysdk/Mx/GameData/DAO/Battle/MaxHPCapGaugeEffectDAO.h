#pragma once
#include "../../../../unitysdk.h"

namespace FlatData { class EndCondition; }
namespace MemoryPack { class MemoryPackWriter&; }
namespace MX::GameData::DAO::Battle { class MaxHPCapGaugeEffectDAO&; }
namespace MemoryPack { class MemoryPackReader&; }
namespace MX::Logic::Data { class LogicEffectValue; }

#define MX_GAMEDATA_DAO_BATTLE_MAXHPCAPGAUGEEFFECTDAO_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x15CBEB0)
#define MX_GAMEDATA_DAO_BATTLE_MAXHPCAPGAUGEEFFECTDAO_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x15CDB80)
#define MX_GAMEDATA_DAO_BATTLE_MAXHPCAPGAUGEEFFECTDAO_.CTOR_OFFSET UNITYSDK_OFFSET(0x15CDEF0)
#define MX_GAMEDATA_DAO_BATTLE_MAXHPCAPGAUGEEFFECTDAO_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x15CDF40)
#define MX_GAMEDATA_DAO_BATTLE_MAXHPCAPGAUGEEFFECTDAO_.CCTOR_OFFSET UNITYSDK_OFFSET(0x15D0A90)
#define MX_GAMEDATA_DAO_BATTLE_MAXHPCAPGAUGEEFFECTDAO_TOLOGICEFFECTVALUE_OFFSET UNITYSDK_OFFSET(0x15D0AA0)

namespace MX::GameData::DAO::Battle
{
	inline static constexpr unsigned int MaxHPCapGaugeEffectDAO_TypeDefinitionIndex = 15288;

	class MaxHPCapGaugeEffectDAO : public Il2CppObject
	{
	public:
		::FlatData::EndCondition* EndCondition; // 0x58
		::System::Int32 EndConditionArgument; // 0x5C
		::System::Boolean Dispellable; // 0x60
		::System::Int32 MaxValue; // 0x64
		::System::Int32 ReduceValuePerHealPoint; // 0x68
		::System::String* CapOverDeadlyAttackGroupId; // 0x70

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::MaxHPCapGaugeEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::MaxHPCapGaugeEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_MAXHPCAPGAUGEEFFECTDAO_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_MAXHPCAPGAUGEEFFECTDAO_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_MAXHPCAPGAUGEEFFECTDAO_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::MaxHPCapGaugeEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::MaxHPCapGaugeEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_MAXHPCAPGAUGEEFFECTDAO_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_MAXHPCAPGAUGEEFFECTDAO_.CCTOR_OFFSET))(nullptr);
		}

		::MX::Logic::Data::LogicEffectValue* ToLogicEffectValue()
		{
			return (return (::MX::Logic::Data::LogicEffectValue*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_MAXHPCAPGAUGEEFFECTDAO_TOLOGICEFFECTVALUE_OFFSET))(nullptr);
		}

	};
}

