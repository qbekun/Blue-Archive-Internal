#pragma once
#include "../../../../unitysdk.h"

namespace MX::Logic::Skills { class EntitySpawnRule; }
namespace MX::Logic::Skills { class SkillToTargetDistributeType; }
namespace MemoryPack { class MemoryPackWriter&; }
namespace MX::GameData::DAO::Battle { class SkillEntitySpawnerDAO&; }
namespace MemoryPack { class MemoryPackReader&; }
namespace MX::Logic::Data { class SkillEntityValue; }
namespace MX::Logic::Skills { class SkillSpecification; }
namespace MX::Logic::Skills { class TargetCandidateRule; }
namespace MX::Logic::Skills { class TargetSortRule; }

#define MX_GAMEDATA_DAO_BATTLE_SKILLENTITYSPAWNERDAO_SHOULDSERIALIZEENTITYTIMELINE_OFFSET UNITYSDK_OFFSET(0x17C1F80)
#define MX_GAMEDATA_DAO_BATTLE_SKILLENTITYSPAWNERDAO_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x17C1FD0)
#define MX_GAMEDATA_DAO_BATTLE_SKILLENTITYSPAWNERDAO_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x17C27A0)
#define MX_GAMEDATA_DAO_BATTLE_SKILLENTITYSPAWNERDAO_.CTOR_OFFSET UNITYSDK_OFFSET(0x17C3930)
#define MX_GAMEDATA_DAO_BATTLE_SKILLENTITYSPAWNERDAO_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x17C3980)
#define MX_GAMEDATA_DAO_BATTLE_SKILLENTITYSPAWNERDAO_TOSKILLENTITYVALUE_OFFSET UNITYSDK_OFFSET(0x17C5F50)
#define MX_GAMEDATA_DAO_BATTLE_SKILLENTITYSPAWNERDAO_.CCTOR_OFFSET UNITYSDK_OFFSET(0x17C6060)

namespace MX::GameData::DAO::Battle
{
	inline static constexpr unsigned int SkillEntitySpawnerDAO_TypeDefinitionIndex = 15569;

	class SkillEntitySpawnerDAO : public Il2CppObject
	{
	public:
		::System::Int32 Duration; // 0x158
		::MX::Logic::Skills::EntitySpawnRule* SpawnRule; // 0x15C
		::System::Boolean RemoveEntityIfSkillCancel; // 0x160
		::System::Boolean OverrideSkillStartTimingWithSpawnerSpawn; // 0x161
		::MX::Logic::Skills::SkillToTargetDistributeType* DistributeType; // 0x164
		::System::Boolean FireToNextTargetWhenEachToEach; // 0x168
		Il2CppObject* EntityTimeline; // 0x170

		::System::Boolean ShouldSerializeEntityTimeline()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_SKILLENTITYSPAWNERDAO_SHOULDSERIALIZEENTITYTIMELINE_OFFSET))(nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_SKILLENTITYSPAWNERDAO_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::SkillEntitySpawnerDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::SkillEntitySpawnerDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_SKILLENTITYSPAWNERDAO_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_SKILLENTITYSPAWNERDAO_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::SkillEntitySpawnerDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::SkillEntitySpawnerDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_SKILLENTITYSPAWNERDAO_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::MX::Logic::Data::SkillEntityValue* ToSkillEntityValue(::MX::Logic::Skills::SkillSpecification* arg, ::System::Int32 arg, ::MX::Logic::Skills::TargetCandidateRule* arg, ::MX::Logic::Skills::TargetSortRule* arg)
		{
			return (return (::MX::Logic::Data::SkillEntityValue*(*)(::MX::Logic::Skills::SkillSpecification*, ::System::Int32, ::MX::Logic::Skills::TargetCandidateRule*, ::MX::Logic::Skills::TargetSortRule*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_SKILLENTITYSPAWNERDAO_TOSKILLENTITYVALUE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_SKILLENTITYSPAWNERDAO_.CCTOR_OFFSET))(nullptr);
		}

	};
}

