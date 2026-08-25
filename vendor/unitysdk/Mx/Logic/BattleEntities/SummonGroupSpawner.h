#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Data { class SummonGroupSpawnerValue; }
namespace UnityEngine { class Vector2; }
namespace MX::Logic::Battles { class Battle; }
namespace MX::Logic::Data { class SkillEntityValue; }
namespace MX::Logic::Data { class SummonEntityValue; }
namespace MX::Logic::BattleEntities { class EntityId; }
namespace MX::Logic::BattleEntities { class BattleEntity; }
namespace MX::Logic::Skills { class SkillSpecification; }
namespace MX::Logic::BattleEntities { class SkillSlot; }
namespace MX::Core::Math { class IPseudoRandomService; }

#define MX_LOGIC_BATTLEENTITIES_SUMMONGROUPSPAWNER_FINDSPAWNDIRECTION_OFFSET UNITYSDK_OFFSET(0x11BAE10)
#define MX_LOGIC_BATTLEENTITIES_SUMMONGROUPSPAWNER_UPDATE_OFFSET UNITYSDK_OFFSET(0x11BAE30)
#define MX_LOGIC_BATTLEENTITIES_SUMMONGROUPSPAWNER_FINDSPAWNPOSITION_OFFSET UNITYSDK_OFFSET(0x11BB1E0)
#define MX_LOGIC_BATTLEENTITIES_SUMMONGROUPSPAWNER_SPAWNSUMMONED_OFFSET UNITYSDK_OFFSET(0x11BB270)
#define MX_LOGIC_BATTLEENTITIES_SUMMONGROUPSPAWNER_GET_SPAWNERVALUE_OFFSET UNITYSDK_OFFSET(0x11BB390)
#define MX_LOGIC_BATTLEENTITIES_SUMMONGROUPSPAWNER_.CTOR_OFFSET UNITYSDK_OFFSET(0x11BB3A0)
#define MX_LOGIC_BATTLEENTITIES_SUMMONGROUPSPAWNER_INIT_OFFSET UNITYSDK_OFFSET(0x11BB450)
#define MX_LOGIC_BATTLEENTITIES_SUMMONGROUPSPAWNER_TAKE_OFFSET UNITYSDK_OFFSET(0x11BB460)
#define MX_LOGIC_BATTLEENTITIES_SUMMONGROUPSPAWNER_SPAWNGROUP_OFFSET UNITYSDK_OFFSET(0x11BAEF0)

namespace MX::Logic::BattleEntities
{
	inline static constexpr unsigned int SummonGroupSpawner_TypeDefinitionIndex = 13336;

	class SummonGroupSpawner : public Il2CppObject
	{
	public:
		::MX::Logic::Data::SummonGroupSpawnerValue* _spawnerValue_k__BackingField; // 0x68

		::UnityEngine::Vector2* FindSpawnDirection(::MX::Logic::Battles::Battle* arg, ::MX::Logic::Data::SkillEntityValue* arg2)
		{
			return ((::UnityEngine::Vector2*(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::Data::SkillEntityValue*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SUMMONGROUPSPAWNER_FINDSPAWNDIRECTION_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Update(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SUMMONGROUPSPAWNER_UPDATE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector2* FindSpawnPosition(::MX::Logic::Battles::Battle* arg, ::MX::Logic::Data::SkillEntityValue* arg2)
		{
			return ((::UnityEngine::Vector2*(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::Data::SkillEntityValue*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SUMMONGROUPSPAWNER_FINDSPAWNPOSITION_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SpawnSummoned(::MX::Logic::Battles::Battle* arg, ::MX::Logic::Data::SummonEntityValue* arg2)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::Data::SummonEntityValue*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SUMMONGROUPSPAWNER_SPAWNSUMMONED_OFFSET))(arg, arg2, nullptr);
		}

		::MX::Logic::Data::SummonGroupSpawnerValue* get_spawnerValue()
		{
			return ((::MX::Logic::Data::SummonGroupSpawnerValue*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SUMMONGROUPSPAWNER_GET_SPAWNERVALUE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Logic::BattleEntities::EntityId* arg, ::MX::Logic::BattleEntities::BattleEntity* arg2, ::MX::Logic::Skills::SkillSpecification* arg3, ::MX::Logic::BattleEntities::SkillSlot* arg4, ::System::Int32 arg5, ::MX::Logic::Data::SummonGroupSpawnerValue* arg6, ::MX::Logic::BattleEntities::BattleEntity* arg7, ::UnityEngine::Vector2* arg8)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::EntityId*, ::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::Skills::SkillSpecification*, ::MX::Logic::BattleEntities::SkillSlot*, ::System::Int32, ::MX::Logic::Data::SummonGroupSpawnerValue*, ::MX::Logic::BattleEntities::BattleEntity*, ::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SUMMONGROUPSPAWNER_.CTOR_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, arg7, arg8, nullptr);
		}

		::System::Void Init(::MX::Logic::Battles::Battle* arg, ::UnityEngine::Vector2* arg2, Il2CppObject* arg3)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::UnityEngine::Vector2*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SUMMONGROUPSPAWNER_INIT_OFFSET))(arg, arg2, arg3, nullptr);
		}

		Il2CppObject* Take(::MX::Core::Math::IPseudoRandomService* arg)
		{
			return ((Il2CppObject*(*)(::MX::Core::Math::IPseudoRandomService*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SUMMONGROUPSPAWNER_TAKE_OFFSET))(arg, nullptr);
		}

		::System::Void SpawnGroup(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SUMMONGROUPSPAWNER_SPAWNGROUP_OFFSET))(arg, nullptr);
		}

	};
}

