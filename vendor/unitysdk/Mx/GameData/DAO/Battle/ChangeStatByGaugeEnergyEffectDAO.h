#pragma once
#include "../../../../unitysdk.h"

namespace FlatData { class StatType; }
namespace MX::Logic::Data { class LogicEffectValue; }
namespace MemoryPack { class MemoryPackWriter&; }
namespace MX::GameData::DAO::Battle { class ChangeStatByGaugeEnergyEffectDAO&; }
namespace MemoryPack { class MemoryPackReader&; }

#define MX_GAMEDATA_DAO_BATTLE_CHANGESTATBYGAUGEENERGYEFFECTDAO_.CCTOR_OFFSET UNITYSDK_OFFSET(0x1641210)
#define MX_GAMEDATA_DAO_BATTLE_CHANGESTATBYGAUGEENERGYEFFECTDAO_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x1641220)
#define MX_GAMEDATA_DAO_BATTLE_CHANGESTATBYGAUGEENERGYEFFECTDAO_TOLOGICEFFECTVALUE_OFFSET UNITYSDK_OFFSET(0x1641590)
#define MX_GAMEDATA_DAO_BATTLE_CHANGESTATBYGAUGEENERGYEFFECTDAO_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x16415F0)
#define MX_GAMEDATA_DAO_BATTLE_CHANGESTATBYGAUGEENERGYEFFECTDAO_.CTOR_OFFSET UNITYSDK_OFFSET(0x1642CC0)
#define MX_GAMEDATA_DAO_BATTLE_CHANGESTATBYGAUGEENERGYEFFECTDAO_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1642D10)

namespace MX::GameData::DAO::Battle
{
	inline static constexpr unsigned int ChangeStatByGaugeEnergyEffectDAO_TypeDefinitionIndex = 15334;

	class ChangeStatByGaugeEnergyEffectDAO : public Il2CppObject
	{
	public:
		::System::Int64 CheckStartGaugeEnergyRatio; // 0x58
		::System::Int64 CheckEndGaugeEnergyRatio; // 0x60
		::FlatData::StatType* StatType; // 0x68
		::System::Int64 StartChangeStatBaseAmount; // 0x70
		::System::Int64 EndChangeStatBaseAmount; // 0x78
		::System::Int64 StartChangeStatCoefficient; // 0x80
		::System::Int64 EndChangeStatCoefficient; // 0x88
		::System::Boolean Dispellable; // 0x90
		::System::Int64 duration; // 0x98

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_CHANGESTATBYGAUGEENERGYEFFECTDAO_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_CHANGESTATBYGAUGEENERGYEFFECTDAO_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::MX::Logic::Data::LogicEffectValue* ToLogicEffectValue()
		{
			return (return (::MX::Logic::Data::LogicEffectValue*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_CHANGESTATBYGAUGEENERGYEFFECTDAO_TOLOGICEFFECTVALUE_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::ChangeStatByGaugeEnergyEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::ChangeStatByGaugeEnergyEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_CHANGESTATBYGAUGEENERGYEFFECTDAO_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_CHANGESTATBYGAUGEENERGYEFFECTDAO_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::ChangeStatByGaugeEnergyEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::ChangeStatByGaugeEnergyEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_CHANGESTATBYGAUGEENERGYEFFECTDAO_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

	};
}

