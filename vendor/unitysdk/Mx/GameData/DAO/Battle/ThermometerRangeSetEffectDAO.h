#pragma once
#include "../../../../unitysdk.h"

namespace FlatData { class EndCondition; }
namespace MemoryPack { class MemoryPackWriter&; }
namespace MX::GameData::DAO::Battle { class ThermometerRangeSetEffectDAO&; }
namespace MemoryPack { class MemoryPackReader&; }
namespace MX::Logic::Data { class LogicEffectValue; }

#define MX_GAMEDATA_DAO_BATTLE_THERMOMETERRANGESETEFFECTDAO_.CTOR_OFFSET UNITYSDK_OFFSET(0x1667670)
#define MX_GAMEDATA_DAO_BATTLE_THERMOMETERRANGESETEFFECTDAO_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x16676C0)
#define MX_GAMEDATA_DAO_BATTLE_THERMOMETERRANGESETEFFECTDAO_.CCTOR_OFFSET UNITYSDK_OFFSET(0x1668D10)
#define MX_GAMEDATA_DAO_BATTLE_THERMOMETERRANGESETEFFECTDAO_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1669050)
#define MX_GAMEDATA_DAO_BATTLE_THERMOMETERRANGESETEFFECTDAO_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x1668D20)
#define MX_GAMEDATA_DAO_BATTLE_THERMOMETERRANGESETEFFECTDAO_TOLOGICEFFECTVALUE_OFFSET UNITYSDK_OFFSET(0x166B410)

namespace MX::GameData::DAO::Battle
{
	inline static constexpr unsigned int ThermometerRangeSetEffectDAO_TypeDefinitionIndex = 15350;

	class ThermometerRangeSetEffectDAO : public Il2CppObject
	{
	public:
		::System::Int32 ThermometerUIIndex; // 0x58
		::System::Int32 MinHPRatioBoundary; // 0x5C
		::System::Int32 MaxHPRatioBoundary; // 0x60
		::FlatData::EndCondition* EndCondition; // 0x64
		::System::Int32 EndConditionArgument; // 0x68
		::System::Boolean Dispellable; // 0x6C

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_THERMOMETERRANGESETEFFECTDAO_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::ThermometerRangeSetEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::ThermometerRangeSetEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_THERMOMETERRANGESETEFFECTDAO_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_THERMOMETERRANGESETEFFECTDAO_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::ThermometerRangeSetEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::ThermometerRangeSetEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_THERMOMETERRANGESETEFFECTDAO_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_THERMOMETERRANGESETEFFECTDAO_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::MX::Logic::Data::LogicEffectValue* ToLogicEffectValue()
		{
			return (return (::MX::Logic::Data::LogicEffectValue*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_THERMOMETERRANGESETEFFECTDAO_TOLOGICEFFECTVALUE_OFFSET))(nullptr);
		}

	};
}

