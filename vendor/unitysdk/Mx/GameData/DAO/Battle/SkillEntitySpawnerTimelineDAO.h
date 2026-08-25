#pragma once
#include "../../../../unitysdk.h"

namespace MX::Logic::Skills { class EntitySpawnCondition; }
namespace MX::Logic::Skills { class EntitySpawnConditionCheckTarget; }
namespace MX::GameData::DAO::Battle { class PlayTrachBranchDAO; }
namespace MemoryPack { class MemoryPackReader&; }
namespace MX::GameData::DAO::Battle { class SkillEntitySpawnerTimelineDAO&; }
namespace MemoryPack { class MemoryPackWriter&; }

#define MX_GAMEDATA_DAO_BATTLE_SKILLENTITYSPAWNERTIMELINEDAO_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x17D82D0)
#define MX_GAMEDATA_DAO_BATTLE_SKILLENTITYSPAWNERTIMELINEDAO_.CTOR_OFFSET UNITYSDK_OFFSET(0x17D8640)
#define MX_GAMEDATA_DAO_BATTLE_SKILLENTITYSPAWNERTIMELINEDAO_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x17D8690)
#define MX_GAMEDATA_DAO_BATTLE_SKILLENTITYSPAWNERTIMELINEDAO_.CCTOR_OFFSET UNITYSDK_OFFSET(0x17D9D70)
#define MX_GAMEDATA_DAO_BATTLE_SKILLENTITYSPAWNERTIMELINEDAO_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x17D9D80)

namespace MX::GameData::DAO::Battle
{
	inline static constexpr unsigned int SkillEntitySpawnerTimelineDAO_TypeDefinitionIndex = 15592;

	class SkillEntitySpawnerTimelineDAO : public Il2CppObject
	{
	public:
		::MX::Logic::Skills::EntitySpawnCondition* SpawnCondition; // 0x28
		::System::String* SpawnConditionParameter; // 0x30
		::System::String* SpawnConditionParameterForTag; // 0x38
		::MX::Logic::Skills::EntitySpawnConditionCheckTarget* SpawnConditionCheckTarget; // 0x40
		::System::Boolean UsePlayTrackBranch; // 0x44
		::MX::GameData::DAO::Battle::PlayTrachBranchDAO* PlayTrackBranch; // 0x48

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_SKILLENTITYSPAWNERTIMELINEDAO_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_SKILLENTITYSPAWNERTIMELINEDAO_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::SkillEntitySpawnerTimelineDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::SkillEntitySpawnerTimelineDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_SKILLENTITYSPAWNERTIMELINEDAO_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_SKILLENTITYSPAWNERTIMELINEDAO_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::SkillEntitySpawnerTimelineDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::SkillEntitySpawnerTimelineDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_SKILLENTITYSPAWNERTIMELINEDAO_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

	};
}

