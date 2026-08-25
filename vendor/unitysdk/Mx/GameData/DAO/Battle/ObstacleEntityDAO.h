#pragma once
#include "../../../../unitysdk.h"

namespace MX::GameData::DAO::Battle { class SkillEntitySpawnerDAO; }
namespace MemoryPack { class MemoryPackWriter&; }
namespace MX::GameData::DAO::Battle { class ObstacleEntityDAO&; }
namespace MemoryPack { class MemoryPackReader&; }
namespace MX::Logic::Data { class SkillEntityValue; }
namespace MX::Logic::Skills { class SkillSpecification; }
namespace MX::Logic::Skills { class TargetCandidateRule; }
namespace MX::Logic::Skills { class TargetSortRule; }

#define MX_GAMEDATA_DAO_BATTLE_OBSTACLEENTITYDAO_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x17A9B00)
#define MX_GAMEDATA_DAO_BATTLE_OBSTACLEENTITYDAO_.CCTOR_OFFSET UNITYSDK_OFFSET(0x17AA220)
#define MX_GAMEDATA_DAO_BATTLE_OBSTACLEENTITYDAO_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x17AA230)
#define MX_GAMEDATA_DAO_BATTLE_OBSTACLEENTITYDAO_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x17ABB60)
#define MX_GAMEDATA_DAO_BATTLE_OBSTACLEENTITYDAO_TOSKILLENTITYVALUE_OFFSET UNITYSDK_OFFSET(0x17AEF10)
#define MX_GAMEDATA_DAO_BATTLE_OBSTACLEENTITYDAO_GETSKILLABILITY_OFFSET UNITYSDK_OFFSET(0x17AF020)
#define MX_GAMEDATA_DAO_BATTLE_OBSTACLEENTITYDAO_.CTOR_OFFSET UNITYSDK_OFFSET(0x17AEE60)

namespace MX::GameData::DAO::Battle
{
	inline static constexpr unsigned int ObstacleEntityDAO_TypeDefinitionIndex = 15559;

	class ObstacleEntityDAO : public Il2CppObject
	{
	public:
		Il2CppObject* InitialAbilities; // 0x188
		::MX::GameData::DAO::Battle::SkillEntitySpawnerDAO* InitialSkillEntitySpawnerData; // 0x190

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_OBSTACLEENTITYDAO_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_OBSTACLEENTITYDAO_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::ObstacleEntityDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::ObstacleEntityDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_OBSTACLEENTITYDAO_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::ObstacleEntityDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::ObstacleEntityDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_OBSTACLEENTITYDAO_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::MX::Logic::Data::SkillEntityValue* ToSkillEntityValue(::MX::Logic::Skills::SkillSpecification* arg, ::System::Int32 arg, ::MX::Logic::Skills::TargetCandidateRule* arg, ::MX::Logic::Skills::TargetSortRule* arg)
		{
			return (return (::MX::Logic::Data::SkillEntityValue*(*)(::MX::Logic::Skills::SkillSpecification*, ::System::Int32, ::MX::Logic::Skills::TargetCandidateRule*, ::MX::Logic::Skills::TargetSortRule*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_OBSTACLEENTITYDAO_TOSKILLENTITYVALUE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		Il2CppObject* GetSkillAbility()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_OBSTACLEENTITYDAO_GETSKILLABILITY_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_OBSTACLEENTITYDAO_.CTOR_OFFSET))(nullptr);
		}

	};
}

