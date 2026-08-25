#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::BattleEntities { class BattleEntity; }
namespace MX::Logic::Skills::Passive { class PassiveSkill; }
namespace UnityEngine { class Vector2; }
namespace MX::Logic::Battles { class Battle; }
namespace MX::Logic::Data { class SkillEntityValue; }
namespace MX::Logic::BattleEntities { class EntityId; }

#define MX_LOGIC_BATTLEENTITIES_PASSIVESKILLSPAWNER_FINDSPAWNPOSITION_OFFSET UNITYSDK_OFFSET(0x11B02C0)
#define MX_LOGIC_BATTLEENTITIES_PASSIVESKILLSPAWNER_SPAWNSKILLENTITY_OFFSET UNITYSDK_OFFSET(0x11B0360)
#define MX_LOGIC_BATTLEENTITIES_PASSIVESKILLSPAWNER_SETSPAWNDIRECTION_OFFSET UNITYSDK_OFFSET(0x11B04A0)
#define MX_LOGIC_BATTLEENTITIES_PASSIVESKILLSPAWNER_SETENTITYTARGET_OFFSET UNITYSDK_OFFSET(0x11B0700)
#define MX_LOGIC_BATTLEENTITIES_PASSIVESKILLSPAWNER_GET_ENTITYTIMELINE_OFFSET UNITYSDK_OFFSET(0x11B0470)
#define MX_LOGIC_BATTLEENTITIES_PASSIVESKILLSPAWNER_ADDTARGETENTITIES_OFFSET UNITYSDK_OFFSET(0x11B0880)
#define MX_LOGIC_BATTLEENTITIES_PASSIVESKILLSPAWNER_.CTOR_OFFSET UNITYSDK_OFFSET(0x11B0F10)
#define MX_LOGIC_BATTLEENTITIES_PASSIVESKILLSPAWNER_UPDATE_OFFSET UNITYSDK_OFFSET(0x11B1040)
#define MX_LOGIC_BATTLEENTITIES_PASSIVESKILLSPAWNER_UNDO_OFFSET UNITYSDK_OFFSET(0x11B1390)
#define MX_LOGIC_BATTLEENTITIES_PASSIVESKILLSPAWNER_FINDTARGET_OFFSET UNITYSDK_OFFSET(0x11B1670)
#define MX_LOGIC_BATTLEENTITIES_PASSIVESKILLSPAWNER_APPLYPOSITIONTRANSFORMDIFFBYMOVINGAREA_OFFSET UNITYSDK_OFFSET(0x11B1750)
#define MX_LOGIC_BATTLEENTITIES_PASSIVESKILLSPAWNER_SETSPAWNPOSITION_OFFSET UNITYSDK_OFFSET(0x11B10B0)
#define MX_LOGIC_BATTLEENTITIES_PASSIVESKILLSPAWNER_FINDTARGETS_OFFSET UNITYSDK_OFFSET(0x11B1AF0)
#define MX_LOGIC_BATTLEENTITIES_PASSIVESKILLSPAWNER_GET_FORCEDTARGET_OFFSET UNITYSDK_OFFSET(0x11B1B60)
#define MX_LOGIC_BATTLEENTITIES_PASSIVESKILLSPAWNER_FINDSPAWNDIRECTION_OFFSET UNITYSDK_OFFSET(0x11B1B70)
#define MX_LOGIC_BATTLEENTITIES_PASSIVESKILLSPAWNER_INITTARGETTABLE_OFFSET UNITYSDK_OFFSET(0x11B0D90)
#define MX_LOGIC_BATTLEENTITIES_PASSIVESKILLSPAWNER_INIT_OFFSET UNITYSDK_OFFSET(0x11B1C10)
#define MX_LOGIC_BATTLEENTITIES_PASSIVESKILLSPAWNER_GET_SKILLCACHE_OFFSET UNITYSDK_OFFSET(0x11B1C60)

namespace MX::Logic::BattleEntities
{
	inline static constexpr unsigned int PassiveSkillSpawner_TypeDefinitionIndex = 13325;

	class PassiveSkillSpawner : public Il2CppObject
	{
	public:
		Il2CppObject* skillEntityTargetTable; // 0x68
		Il2CppObject* skillEntityPositionTable; // 0x70
		Il2CppObject* skillEntityDirectionTable; // 0x78
		::MX::Logic::BattleEntities::BattleEntity* _ForcedTarget_k__BackingField; // 0x80
		::MX::Logic::Skills::Passive::PassiveSkill* _skillCache_k__BackingField; // 0x88

		::UnityEngine::Vector2* FindSpawnPosition(::MX::Logic::Battles::Battle* arg, ::MX::Logic::Data::SkillEntityValue* arg2)
		{
			return ((::UnityEngine::Vector2*(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::Data::SkillEntityValue*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_PASSIVESKILLSPAWNER_FINDSPAWNPOSITION_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SpawnSkillEntity(::MX::Logic::Battles::Battle* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_PASSIVESKILLSPAWNER_SPAWNSKILLENTITY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SetSpawnDirection(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_PASSIVESKILLSPAWNER_SETSPAWNDIRECTION_OFFSET))(arg, nullptr);
		}

		::System::Void SetEntityTarget(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_PASSIVESKILLSPAWNER_SETENTITYTARGET_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_EntityTimeline()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_PASSIVESKILLSPAWNER_GET_ENTITYTIMELINE_OFFSET))(nullptr);
		}

		::System::Void AddTargetEntities(::MX::Logic::Battles::Battle* arg, ::MX::Logic::Data::SkillEntityValue* arg2)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::Data::SkillEntityValue*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_PASSIVESKILLSPAWNER_ADDTARGETENTITIES_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor(::MX::Logic::BattleEntities::EntityId* arg, ::MX::Logic::BattleEntities::BattleEntity* arg2, ::MX::Logic::BattleEntities::BattleEntity* arg3, ::MX::Logic::Skills::Passive::PassiveSkill* arg4)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::EntityId*, ::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::Skills::Passive::PassiveSkill*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_PASSIVESKILLSPAWNER_.CTOR_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void Update(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_PASSIVESKILLSPAWNER_UPDATE_OFFSET))(arg, nullptr);
		}

		::System::Void Undo()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_PASSIVESKILLSPAWNER_UNDO_OFFSET))(nullptr);
		}

		::MX::Logic::BattleEntities::BattleEntity* FindTarget(::MX::Logic::Data::SkillEntityValue* arg)
		{
			return ((::MX::Logic::BattleEntities::BattleEntity*(*)(::MX::Logic::Data::SkillEntityValue*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_PASSIVESKILLSPAWNER_FINDTARGET_OFFSET))(arg, nullptr);
		}

		::System::Void ApplyPositionTransformDiffByMovingArea(Il2CppObject* arg, ::UnityEngine::Vector2* arg2, ::UnityEngine::Vector2* arg3, ::UnityEngine::Vector2* arg4)
		{
			((::System::Void(*)(Il2CppObject*, ::UnityEngine::Vector2*, ::UnityEngine::Vector2*, ::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_PASSIVESKILLSPAWNER_APPLYPOSITIONTRANSFORMDIFFBYMOVINGAREA_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void SetSpawnPosition(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_PASSIVESKILLSPAWNER_SETSPAWNPOSITION_OFFSET))(arg, nullptr);
		}

		Il2CppObject* FindTargets(::MX::Logic::Data::SkillEntityValue* arg)
		{
			return ((Il2CppObject*(*)(::MX::Logic::Data::SkillEntityValue*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_PASSIVESKILLSPAWNER_FINDTARGETS_OFFSET))(arg, nullptr);
		}

		::MX::Logic::BattleEntities::BattleEntity* get_ForcedTarget()
		{
			return ((::MX::Logic::BattleEntities::BattleEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_PASSIVESKILLSPAWNER_GET_FORCEDTARGET_OFFSET))(nullptr);
		}

		::UnityEngine::Vector2* FindSpawnDirection(::MX::Logic::Battles::Battle* arg, ::MX::Logic::Data::SkillEntityValue* arg2)
		{
			return ((::UnityEngine::Vector2*(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::Data::SkillEntityValue*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_PASSIVESKILLSPAWNER_FINDSPAWNDIRECTION_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void InitTargetTable(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_PASSIVESKILLSPAWNER_INITTARGETTABLE_OFFSET))(str, nullptr);
		}

		::System::Void Init(::MX::Logic::Battles::Battle* arg, ::UnityEngine::Vector2* arg2, Il2CppObject* arg3)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::UnityEngine::Vector2*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_PASSIVESKILLSPAWNER_INIT_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::MX::Logic::Skills::Passive::PassiveSkill* get_skillCache()
		{
			return ((::MX::Logic::Skills::Passive::PassiveSkill*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_PASSIVESKILLSPAWNER_GET_SKILLCACHE_OFFSET))(nullptr);
		}

	};
}

