#pragma once
#include "../../../../unitysdk.h"

namespace FlatData { class EndCondition; }
namespace MemoryPack { class MemoryPackWriter&; }
namespace MX::GameData::DAO::Battle { class HPRatioBoundaryGaugeEffectDAO&; }
namespace MemoryPack { class MemoryPackReader&; }
namespace MX::Logic::Data { class LogicEffectValue; }

#define MX_GAMEDATA_DAO_BATTLE_HPRATIOBOUNDARYGAUGEEFFECTDAO_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x1661C10)
#define MX_GAMEDATA_DAO_BATTLE_HPRATIOBOUNDARYGAUGEEFFECTDAO_.CTOR_OFFSET UNITYSDK_OFFSET(0x1661F80)
#define MX_GAMEDATA_DAO_BATTLE_HPRATIOBOUNDARYGAUGEEFFECTDAO_.CCTOR_OFFSET UNITYSDK_OFFSET(0x1661FD0)
#define MX_GAMEDATA_DAO_BATTLE_HPRATIOBOUNDARYGAUGEEFFECTDAO_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1661FE0)
#define MX_GAMEDATA_DAO_BATTLE_HPRATIOBOUNDARYGAUGEEFFECTDAO_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1664390)
#define MX_GAMEDATA_DAO_BATTLE_HPRATIOBOUNDARYGAUGEEFFECTDAO_TOLOGICEFFECTVALUE_OFFSET UNITYSDK_OFFSET(0x1667570)

namespace MX::GameData::DAO::Battle
{
	inline static constexpr unsigned int HPRatioBoundaryGaugeEffectDAO_TypeDefinitionIndex = 15348;

	class HPRatioBoundaryGaugeEffectDAO : public Il2CppObject
	{
	public:
		::System::String* HPRatioBoundary; // 0x58
		::System::Int32 UISeparateBoundaryIndex; // 0x60
		::System::String* UIPath; // 0x68
		::FlatData::EndCondition* EndCondition; // 0x70
		::System::Int32 EndConditionArgument; // 0x74
		::System::Boolean Dispellable; // 0x78

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_HPRATIOBOUNDARYGAUGEEFFECTDAO_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_HPRATIOBOUNDARYGAUGEEFFECTDAO_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_HPRATIOBOUNDARYGAUGEEFFECTDAO_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::HPRatioBoundaryGaugeEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::HPRatioBoundaryGaugeEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_HPRATIOBOUNDARYGAUGEEFFECTDAO_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::HPRatioBoundaryGaugeEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::HPRatioBoundaryGaugeEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_HPRATIOBOUNDARYGAUGEEFFECTDAO_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::MX::Logic::Data::LogicEffectValue* ToLogicEffectValue()
		{
			return (return (::MX::Logic::Data::LogicEffectValue*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_HPRATIOBOUNDARYGAUGEEFFECTDAO_TOLOGICEFFECTVALUE_OFFSET))(nullptr);
		}

	};
}

