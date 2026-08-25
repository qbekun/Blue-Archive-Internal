#pragma once
#include "../../../../unitysdk.h"

namespace FlatData { class StatType; }
namespace FlatData { class EndCondition; }
namespace MemoryPack { class MemoryPackReader&; }
namespace MX::GameData::DAO::Battle { class StatChangeByFavorRankEffectDAO&; }
namespace MemoryPack { class MemoryPackWriter&; }
namespace MX::Logic::Data { class LogicEffectValue; }

#define MX_GAMEDATA_DAO_BATTLE_STATCHANGEBYFAVORRANKEFFECTDAO_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x161B470)
#define MX_GAMEDATA_DAO_BATTLE_STATCHANGEBYFAVORRANKEFFECTDAO_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x161FD70)
#define MX_GAMEDATA_DAO_BATTLE_STATCHANGEBYFAVORRANKEFFECTDAO_.CTOR_OFFSET UNITYSDK_OFFSET(0x161FD20)
#define MX_GAMEDATA_DAO_BATTLE_STATCHANGEBYFAVORRANKEFFECTDAO_.CCTOR_OFFSET UNITYSDK_OFFSET(0x1622EF0)
#define MX_GAMEDATA_DAO_BATTLE_STATCHANGEBYFAVORRANKEFFECTDAO_TOLOGICEFFECTVALUE_OFFSET UNITYSDK_OFFSET(0x16232F0)
#define MX_GAMEDATA_DAO_BATTLE_STATCHANGEBYFAVORRANKEFFECTDAO_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x1622F00)

namespace MX::GameData::DAO::Battle
{
	inline static constexpr unsigned int StatChangeByFavorRankEffectDAO_TypeDefinitionIndex = 15320;

	class StatChangeByFavorRankEffectDAO : public Il2CppObject
	{
	public:
		::FlatData::StatType* StatType; // 0x58
		::FlatData::EndCondition* EndCondition; // 0x5C
		::System::String* EndConditionArgumentFirst; // 0x60
		::System::String* EndConditionArgumentSecond; // 0x68
		::FlatData::EndCondition* RemoveCondition; // 0x70
		::System::String* RemoveConditionArgumentFirst; // 0x78
		::System::String* RemoveConditionArgumentSecond; // 0x80
		::System::Int64 BaseAmount; // 0x88
		::System::Int64 CasterCoefficientAmount; // 0x90
		::FlatData::StatType* CasterStatType; // 0x98
		::System::Int64 TargetCoefficientAmount; // 0xA0
		::System::Boolean Dispellable; // 0xA8
		::System::Boolean StackSameEffectApplied; // 0xA9
		::System::Int32 StackSameEffectCount; // 0xAC
		::System::Boolean ExpireOldIfStackCountOver; // 0xB0
		::System::Int64 RatePerFavorRank; // 0xB8

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::StatChangeByFavorRankEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::StatChangeByFavorRankEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_STATCHANGEBYFAVORRANKEFFECTDAO_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::StatChangeByFavorRankEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::StatChangeByFavorRankEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_STATCHANGEBYFAVORRANKEFFECTDAO_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_STATCHANGEBYFAVORRANKEFFECTDAO_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_STATCHANGEBYFAVORRANKEFFECTDAO_.CCTOR_OFFSET))(nullptr);
		}

		::MX::Logic::Data::LogicEffectValue* ToLogicEffectValue()
		{
			return (return (::MX::Logic::Data::LogicEffectValue*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_STATCHANGEBYFAVORRANKEFFECTDAO_TOLOGICEFFECTVALUE_OFFSET))(nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_STATCHANGEBYFAVORRANKEFFECTDAO_REGISTERFORMATTER_OFFSET))(nullptr);
		}

	};
}

