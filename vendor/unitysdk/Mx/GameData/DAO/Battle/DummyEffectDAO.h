#pragma once
#include "../../../../unitysdk.h"

namespace FlatData { class EndCondition; }
namespace MX::Logic::Data { class LogicEffectValue; }
namespace MemoryPack { class MemoryPackWriter&; }
namespace MX::GameData::DAO::Battle { class DummyEffectDAO&; }
namespace MemoryPack { class MemoryPackReader&; }

#define MX_GAMEDATA_DAO_BATTLE_DUMMYEFFECTDAO_.CCTOR_OFFSET UNITYSDK_OFFSET(0x1520DB0)
#define MX_GAMEDATA_DAO_BATTLE_DUMMYEFFECTDAO_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x1520DC0)
#define MX_GAMEDATA_DAO_BATTLE_DUMMYEFFECTDAO_.CTOR_OFFSET UNITYSDK_OFFSET(0x1521130)
#define MX_GAMEDATA_DAO_BATTLE_DUMMYEFFECTDAO_TOLOGICEFFECTVALUE_OFFSET UNITYSDK_OFFSET(0x1521180)
#define MX_GAMEDATA_DAO_BATTLE_DUMMYEFFECTDAO_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x15211E0)
#define MX_GAMEDATA_DAO_BATTLE_DUMMYEFFECTDAO_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1522830)

namespace MX::GameData::DAO::Battle
{
	inline static constexpr unsigned int DummyEffectDAO_TypeDefinitionIndex = 15242;

	class DummyEffectDAO : public Il2CppObject
	{
	public:
		::FlatData::EndCondition* EndCondition; // 0x58
		::System::Int32 EndConditionArgument; // 0x5C
		::System::Boolean StackSameEffectApplied; // 0x60
		::System::Int32 StackSameEffectCount; // 0x64
		::System::Boolean ExpireOldIfStackCountOver; // 0x68
		::System::Boolean IsDispellable; // 0x69

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_DUMMYEFFECTDAO_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_DUMMYEFFECTDAO_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_DUMMYEFFECTDAO_.CTOR_OFFSET))(nullptr);
		}

		::MX::Logic::Data::LogicEffectValue* ToLogicEffectValue()
		{
			return (return (::MX::Logic::Data::LogicEffectValue*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_DUMMYEFFECTDAO_TOLOGICEFFECTVALUE_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::DummyEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::DummyEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_DUMMYEFFECTDAO_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::DummyEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::DummyEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_DUMMYEFFECTDAO_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

	};
}

