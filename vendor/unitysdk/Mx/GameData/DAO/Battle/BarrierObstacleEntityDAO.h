#pragma once
#include "../../../../unitysdk.h"

namespace MX::GameData::DAO::Battle { class SkillEntitySpawnerDAO; }
namespace MX::Logic::Data { class BarrierShape; }
namespace FlatData { class ArmorType; }
namespace FlatData { class EntityMaterialType; }
namespace MemoryPack { class MemoryPackWriter&; }
namespace MX::GameData::DAO::Battle { class BarrierObstacleEntityDAO&; }
namespace MX::Logic::Data { class SkillEntityValue; }
namespace MX::Logic::Skills { class SkillSpecification; }
namespace MX::Logic::Skills { class TargetCandidateRule; }
namespace MX::Logic::Skills { class TargetSortRule; }
namespace MemoryPack { class MemoryPackReader&; }

#define MX_GAMEDATA_DAO_BATTLE_BARRIEROBSTACLEENTITYDAO_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x17B49D0)
#define MX_GAMEDATA_DAO_BATTLE_BARRIEROBSTACLEENTITYDAO_TOSKILLENTITYVALUE_OFFSET UNITYSDK_OFFSET(0x17B63E0)
#define MX_GAMEDATA_DAO_BATTLE_BARRIEROBSTACLEENTITYDAO_.CCTOR_OFFSET UNITYSDK_OFFSET(0x17B64F0)
#define MX_GAMEDATA_DAO_BATTLE_BARRIEROBSTACLEENTITYDAO_.CTOR_OFFSET UNITYSDK_OFFSET(0x17B6EA0)
#define MX_GAMEDATA_DAO_BATTLE_BARRIEROBSTACLEENTITYDAO_GETSKILLABILITY_OFFSET UNITYSDK_OFFSET(0x17B6F50)
#define MX_GAMEDATA_DAO_BATTLE_BARRIEROBSTACLEENTITYDAO_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x17B6500)
#define MX_GAMEDATA_DAO_BATTLE_BARRIEROBSTACLEENTITYDAO_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x17B6FA0)

namespace MX::GameData::DAO::Battle
{
	inline static constexpr unsigned int BarrierObstacleEntityDAO_TypeDefinitionIndex = 15563;

	class BarrierObstacleEntityDAO : public Il2CppObject
	{
	public:
		Il2CppObject* InitialAbilities; // 0x188
		::MX::GameData::DAO::Battle::SkillEntitySpawnerDAO* InitialSkillEntitySpawnerData; // 0x190
		::MX::Logic::Data::BarrierShape* BarrierShape; // 0x198
		::Il2CppArray<::System::Object*>* ShapeParameters; // 0x1A0
		::FlatData::ArmorType* ArmorType; // 0x1A8
		::FlatData::EntityMaterialType* MaterialType; // 0x1AC
		Il2CppObject* ApplyLogicEffectToTarget; // 0x1B0
		::System::Boolean FixDirection; // 0x1B8

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::BarrierObstacleEntityDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::BarrierObstacleEntityDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_BARRIEROBSTACLEENTITYDAO_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::MX::Logic::Data::SkillEntityValue* ToSkillEntityValue(::MX::Logic::Skills::SkillSpecification* arg, ::System::Int32 arg, ::MX::Logic::Skills::TargetCandidateRule* arg, ::MX::Logic::Skills::TargetSortRule* arg)
		{
			return (return (::MX::Logic::Data::SkillEntityValue*(*)(::MX::Logic::Skills::SkillSpecification*, ::System::Int32, ::MX::Logic::Skills::TargetCandidateRule*, ::MX::Logic::Skills::TargetSortRule*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_BARRIEROBSTACLEENTITYDAO_TOSKILLENTITYVALUE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_BARRIEROBSTACLEENTITYDAO_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_BARRIEROBSTACLEENTITYDAO_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* GetSkillAbility()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_BARRIEROBSTACLEENTITYDAO_GETSKILLABILITY_OFFSET))(nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_BARRIEROBSTACLEENTITYDAO_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::BarrierObstacleEntityDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::BarrierObstacleEntityDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_BARRIEROBSTACLEENTITYDAO_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

	};
}

