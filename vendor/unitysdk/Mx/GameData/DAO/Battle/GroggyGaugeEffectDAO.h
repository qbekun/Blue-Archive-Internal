#pragma once
#include "../../../../unitysdk.h"

namespace MX::Logic::Data { class LogicEffectValue; }
namespace MemoryPack { class MemoryPackWriter&; }
namespace MX::GameData::DAO::Battle { class GroggyGaugeEffectDAO&; }
namespace MemoryPack { class MemoryPackReader&; }

#define MX_GAMEDATA_DAO_BATTLE_GROGGYGAUGEEFFECTDAO_TOLOGICEFFECTVALUE_OFFSET UNITYSDK_OFFSET(0x154BD90)
#define MX_GAMEDATA_DAO_BATTLE_GROGGYGAUGEEFFECTDAO_.CCTOR_OFFSET UNITYSDK_OFFSET(0x154BDF0)
#define MX_GAMEDATA_DAO_BATTLE_GROGGYGAUGEEFFECTDAO_.CTOR_OFFSET UNITYSDK_OFFSET(0x154C080)
#define MX_GAMEDATA_DAO_BATTLE_GROGGYGAUGEEFFECTDAO_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x154BE00)
#define MX_GAMEDATA_DAO_BATTLE_GROGGYGAUGEEFFECTDAO_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x154C110)
#define MX_GAMEDATA_DAO_BATTLE_GROGGYGAUGEEFFECTDAO_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x154D730)

namespace MX::GameData::DAO::Battle
{
	inline static constexpr unsigned int GroggyGaugeEffectDAO_TypeDefinitionIndex = 15258;

	class GroggyGaugeEffectDAO : public Il2CppObject
	{
	public:
		::System::Int64 Amount; // 0x58
		::System::Int64 TargetCoefficientAmount; // 0x60
		::System::Int64 CasterCoefficientAmount; // 0x68

		::MX::Logic::Data::LogicEffectValue* ToLogicEffectValue()
		{
			return (return (::MX::Logic::Data::LogicEffectValue*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_GROGGYGAUGEEFFECTDAO_TOLOGICEFFECTVALUE_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_GROGGYGAUGEEFFECTDAO_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_GROGGYGAUGEEFFECTDAO_.CTOR_OFFSET))(nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_GROGGYGAUGEEFFECTDAO_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::GroggyGaugeEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::GroggyGaugeEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_GROGGYGAUGEEFFECTDAO_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::GroggyGaugeEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::GroggyGaugeEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_GROGGYGAUGEEFFECTDAO_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

	};
}

