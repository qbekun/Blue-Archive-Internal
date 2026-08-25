#pragma once
#include "../../../../unitysdk.h"

namespace FlatData { class EndCondition; }
namespace MemoryPack { class MemoryPackWriter&; }
namespace MX::GameData::DAO::Battle { class CostOverloadEnableEffectDAO&; }
namespace MemoryPack { class MemoryPackReader&; }
namespace MX::Logic::Data { class LogicEffectValue; }

#define MX_GAMEDATA_DAO_BATTLE_COSTOVERLOADENABLEEFFECTDAO_.CTOR_OFFSET UNITYSDK_OFFSET(0x16072A0)
#define MX_GAMEDATA_DAO_BATTLE_COSTOVERLOADENABLEEFFECTDAO_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x16072F0)
#define MX_GAMEDATA_DAO_BATTLE_COSTOVERLOADENABLEEFFECTDAO_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1607660)
#define MX_GAMEDATA_DAO_BATTLE_COSTOVERLOADENABLEEFFECTDAO_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1608C80)
#define MX_GAMEDATA_DAO_BATTLE_COSTOVERLOADENABLEEFFECTDAO_.CCTOR_OFFSET UNITYSDK_OFFSET(0x160AE00)
#define MX_GAMEDATA_DAO_BATTLE_COSTOVERLOADENABLEEFFECTDAO_TOLOGICEFFECTVALUE_OFFSET UNITYSDK_OFFSET(0x160AE10)

namespace MX::GameData::DAO::Battle
{
	inline static constexpr unsigned int CostOverloadEnableEffectDAO_TypeDefinitionIndex = 15314;

	class CostOverloadEnableEffectDAO : public Il2CppObject
	{
	public:
		::FlatData::EndCondition* EndCondition; // 0x58
		::System::Int32 EndConditionArgument; // 0x5C
		::System::Boolean Dispellable; // 0x60

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_COSTOVERLOADENABLEEFFECTDAO_.CTOR_OFFSET))(nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_COSTOVERLOADENABLEEFFECTDAO_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::CostOverloadEnableEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::CostOverloadEnableEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_COSTOVERLOADENABLEEFFECTDAO_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::CostOverloadEnableEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::CostOverloadEnableEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_COSTOVERLOADENABLEEFFECTDAO_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_COSTOVERLOADENABLEEFFECTDAO_.CCTOR_OFFSET))(nullptr);
		}

		::MX::Logic::Data::LogicEffectValue* ToLogicEffectValue()
		{
			return (return (::MX::Logic::Data::LogicEffectValue*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_COSTOVERLOADENABLEEFFECTDAO_TOLOGICEFFECTVALUE_OFFSET))(nullptr);
		}

	};
}

