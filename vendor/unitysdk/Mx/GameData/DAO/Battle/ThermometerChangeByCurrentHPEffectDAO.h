#pragma once
#include "../../../../unitysdk.h"

namespace FlatData { class EndCondition; }
namespace MemoryPack { class MemoryPackReader&; }
namespace MX::GameData::DAO::Battle { class ThermometerChangeByCurrentHPEffectDAO&; }
namespace MX::Logic::Data { class LogicEffectValue; }
namespace MemoryPack { class MemoryPackWriter&; }

#define MX_GAMEDATA_DAO_BATTLE_THERMOMETERCHANGEBYCURRENTHPEFFECTDAO_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x166B510)
#define MX_GAMEDATA_DAO_BATTLE_THERMOMETERCHANGEBYCURRENTHPEFFECTDAO_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x166B880)
#define MX_GAMEDATA_DAO_BATTLE_THERMOMETERCHANGEBYCURRENTHPEFFECTDAO_TOLOGICEFFECTVALUE_OFFSET UNITYSDK_OFFSET(0x166EB30)
#define MX_GAMEDATA_DAO_BATTLE_THERMOMETERCHANGEBYCURRENTHPEFFECTDAO_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x166EB90)
#define MX_GAMEDATA_DAO_BATTLE_THERMOMETERCHANGEBYCURRENTHPEFFECTDAO_.CCTOR_OFFSET UNITYSDK_OFFSET(0x1670F10)
#define MX_GAMEDATA_DAO_BATTLE_THERMOMETERCHANGEBYCURRENTHPEFFECTDAO_.CTOR_OFFSET UNITYSDK_OFFSET(0x166EAE0)

namespace MX::GameData::DAO::Battle
{
	inline static constexpr unsigned int ThermometerChangeByCurrentHPEffectDAO_TypeDefinitionIndex = 15352;

	class ThermometerChangeByCurrentHPEffectDAO : public Il2CppObject
	{
	public:
		::System::String* ThermometerRangeSet; // 0x58
		::System::String* UIPath; // 0x60
		::FlatData::EndCondition* EndCondition; // 0x68
		::System::Int32 EndConditionArgument; // 0x6C
		::System::Boolean Dispellable; // 0x70

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_THERMOMETERCHANGEBYCURRENTHPEFFECTDAO_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::ThermometerChangeByCurrentHPEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::ThermometerChangeByCurrentHPEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_THERMOMETERCHANGEBYCURRENTHPEFFECTDAO_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::MX::Logic::Data::LogicEffectValue* ToLogicEffectValue()
		{
			return (return (::MX::Logic::Data::LogicEffectValue*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_THERMOMETERCHANGEBYCURRENTHPEFFECTDAO_TOLOGICEFFECTVALUE_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::ThermometerChangeByCurrentHPEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::ThermometerChangeByCurrentHPEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_THERMOMETERCHANGEBYCURRENTHPEFFECTDAO_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_THERMOMETERCHANGEBYCURRENTHPEFFECTDAO_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_THERMOMETERCHANGEBYCURRENTHPEFFECTDAO_.CTOR_OFFSET))(nullptr);
		}

	};
}

