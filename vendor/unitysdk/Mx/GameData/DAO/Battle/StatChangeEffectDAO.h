#pragma once
#include "../../../../unitysdk.h"

namespace FlatData { class StatType; }
namespace FlatData { class EndCondition; }
namespace MX::Logic::Skills { class SkillType; }
namespace MemoryPack { class MemoryPackWriter&; }
namespace MX::GameData::DAO::Battle { class StatChangeEffectDAO&; }
namespace MX::Logic::Data { class LogicEffectValue; }
namespace MemoryPack { class MemoryPackReader&; }

#define MX_GAMEDATA_DAO_BATTLE_STATCHANGEEFFECTDAO_.CTOR_OFFSET UNITYSDK_OFFSET(0x1623430)
#define MX_GAMEDATA_DAO_BATTLE_STATCHANGEEFFECTDAO_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1623480)
#define MX_GAMEDATA_DAO_BATTLE_STATCHANGEEFFECTDAO_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x1626CA0)
#define MX_GAMEDATA_DAO_BATTLE_STATCHANGEEFFECTDAO_.CCTOR_OFFSET UNITYSDK_OFFSET(0x1627190)
#define MX_GAMEDATA_DAO_BATTLE_STATCHANGEEFFECTDAO_TOLOGICEFFECTVALUE_OFFSET UNITYSDK_OFFSET(0x16271A0)
#define MX_GAMEDATA_DAO_BATTLE_STATCHANGEEFFECTDAO_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1627200)

namespace MX::GameData::DAO::Battle
{
	inline static constexpr unsigned int StatChangeEffectDAO_TypeDefinitionIndex = 15322;

	class StatChangeEffectDAO : public Il2CppObject
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
		::System::String* ChangeRateByCost; // 0xB8
		::MX::Logic::Skills::SkillType* OverrideSkillType; // 0xC0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_STATCHANGEEFFECTDAO_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::StatChangeEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::StatChangeEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_STATCHANGEEFFECTDAO_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_STATCHANGEEFFECTDAO_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_STATCHANGEEFFECTDAO_.CCTOR_OFFSET))(nullptr);
		}

		::MX::Logic::Data::LogicEffectValue* ToLogicEffectValue()
		{
			return (return (::MX::Logic::Data::LogicEffectValue*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_STATCHANGEEFFECTDAO_TOLOGICEFFECTVALUE_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::StatChangeEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::StatChangeEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_STATCHANGEEFFECTDAO_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

	};
}

