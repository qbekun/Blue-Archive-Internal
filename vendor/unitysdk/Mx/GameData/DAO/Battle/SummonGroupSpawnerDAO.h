#pragma once
#include "../../../../unitysdk.h"

namespace MemoryPack { class MemoryPackWriter&; }
namespace MX::GameData::DAO::Battle { class SummonGroupSpawnerDAO&; }
namespace MemoryPack { class MemoryPackReader&; }
namespace MX::Logic::Data { class SkillEntityValue; }
namespace MX::Logic::Skills { class SkillSpecification; }
namespace MX::Logic::Skills { class TargetCandidateRule; }
namespace MX::Logic::Skills { class TargetSortRule; }

#define MX_GAMEDATA_DAO_BATTLE_SUMMONGROUPSPAWNERDAO_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x17CA4B0)
#define MX_GAMEDATA_DAO_BATTLE_SUMMONGROUPSPAWNERDAO_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x17CAB10)
#define MX_GAMEDATA_DAO_BATTLE_SUMMONGROUPSPAWNERDAO_SHOULDSERIALIZEENTITYTIMELINE_OFFSET UNITYSDK_OFFSET(0x17CBC60)
#define MX_GAMEDATA_DAO_BATTLE_SUMMONGROUPSPAWNERDAO_.CTOR_OFFSET UNITYSDK_OFFSET(0x17CBCB0)
#define MX_GAMEDATA_DAO_BATTLE_SUMMONGROUPSPAWNERDAO_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x17CBD00)
#define MX_GAMEDATA_DAO_BATTLE_SUMMONGROUPSPAWNERDAO_.CCTOR_OFFSET UNITYSDK_OFFSET(0x17CDF50)
#define MX_GAMEDATA_DAO_BATTLE_SUMMONGROUPSPAWNERDAO_TOSKILLENTITYVALUE_OFFSET UNITYSDK_OFFSET(0x17CDF60)

namespace MX::GameData::DAO::Battle
{
	inline static constexpr unsigned int SummonGroupSpawnerDAO_TypeDefinitionIndex = 15575;

	class SummonGroupSpawnerDAO : public Il2CppObject
	{
	public:
		Il2CppObject* SummonGroups; // 0x158

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_SUMMONGROUPSPAWNERDAO_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::SummonGroupSpawnerDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::SummonGroupSpawnerDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_SUMMONGROUPSPAWNERDAO_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean ShouldSerializeEntityTimeline()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_SUMMONGROUPSPAWNERDAO_SHOULDSERIALIZEENTITYTIMELINE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_SUMMONGROUPSPAWNERDAO_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::SummonGroupSpawnerDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::SummonGroupSpawnerDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_SUMMONGROUPSPAWNERDAO_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_SUMMONGROUPSPAWNERDAO_.CCTOR_OFFSET))(nullptr);
		}

		::MX::Logic::Data::SkillEntityValue* ToSkillEntityValue(::MX::Logic::Skills::SkillSpecification* arg, ::System::Int32 arg, ::MX::Logic::Skills::TargetCandidateRule* arg, ::MX::Logic::Skills::TargetSortRule* arg)
		{
			return (return (::MX::Logic::Data::SkillEntityValue*(*)(::MX::Logic::Skills::SkillSpecification*, ::System::Int32, ::MX::Logic::Skills::TargetCandidateRule*, ::MX::Logic::Skills::TargetSortRule*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_SUMMONGROUPSPAWNERDAO_TOSKILLENTITYVALUE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

	};
}

