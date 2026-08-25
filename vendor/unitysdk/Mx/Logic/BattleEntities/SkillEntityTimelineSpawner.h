#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Skills { class IEntitySpawnable; }
namespace MX::Logic::Data { class SkillEntitySpawnerValue; }
namespace UnityEngine { class Vector2; }
namespace MX::Logic::Skills { class EntitySpawnRule; }
namespace MX::Logic::BattleEntities { class EntityId; }
namespace MX::Logic::BattleEntities { class BattleEntity; }
namespace MX::Logic::Skills { class SkillSpecification; }
namespace MX::Logic::BattleEntities { class ActionChangedEventArgs; }
namespace MX::Logic::Battles { class Battle; }
namespace MX::Logic::Data { class SkillEntityValue; }
class SpawnCondition;

#define MX_LOGIC_BATTLEENTITIES_SKILLENTITYTIMELINESPAWNER_GET_SPAWNERVALUE_OFFSET UNITYSDK_OFFSET(0x11B5290)
#define MX_LOGIC_BATTLEENTITIES_SKILLENTITYTIMELINESPAWNER_GET_ENTITYSPAWNRULE_OFFSET UNITYSDK_OFFSET(0x11B52A0)
#define MX_LOGIC_BATTLEENTITIES_SKILLENTITYTIMELINESPAWNER_GET_ENTITYTIMELINE_OFFSET UNITYSDK_OFFSET(0x11B52C0)
#define MX_LOGIC_BATTLEENTITIES_SKILLENTITYTIMELINESPAWNER_GET_SKILLENTITYTARGETTABLE_OFFSET UNITYSDK_OFFSET(0x11B52E0)
#define MX_LOGIC_BATTLEENTITIES_SKILLENTITYTIMELINESPAWNER_SET_SKILLENTITYTARGETTABLE_OFFSET UNITYSDK_OFFSET(0x11B52F0)
#define MX_LOGIC_BATTLEENTITIES_SKILLENTITYTIMELINESPAWNER_.CTOR_OFFSET UNITYSDK_OFFSET(0x11B5310)
#define MX_LOGIC_BATTLEENTITIES_SKILLENTITYTIMELINESPAWNER_SKILLENTITYTIMELINESPAWNER_EXPIRED_OFFSET UNITYSDK_OFFSET(0x11B5510)
#define MX_LOGIC_BATTLEENTITIES_SKILLENTITYTIMELINESPAWNER_CHARACTER_ACTIONINTERRUPTED_OFFSET UNITYSDK_OFFSET(0x11B5650)
#define MX_LOGIC_BATTLEENTITIES_SKILLENTITYTIMELINESPAWNER_INTERRUPTENTITYTIMELINESPAWNER_OFFSET UNITYSDK_OFFSET(0x11B5660)
#define MX_LOGIC_BATTLEENTITIES_SKILLENTITYTIMELINESPAWNER_SETPRIMARYTARGETS_OFFSET UNITYSDK_OFFSET(0x11B3110)
#define MX_LOGIC_BATTLEENTITIES_SKILLENTITYTIMELINESPAWNER_INIT_OFFSET UNITYSDK_OFFSET(0x11B5670)
#define MX_LOGIC_BATTLEENTITIES_SKILLENTITYTIMELINESPAWNER_GETINITIALTARGETPOSITION_OFFSET UNITYSDK_OFFSET(0x11B7460)
#define MX_LOGIC_BATTLEENTITIES_SKILLENTITYTIMELINESPAWNER_UPDATE_OFFSET UNITYSDK_OFFSET(0x11B7470)
#define MX_LOGIC_BATTLEENTITIES_SKILLENTITYTIMELINESPAWNER_APPLYPOSITIONTRANSFORMDIFFBYMOVINGAREA_OFFSET UNITYSDK_OFFSET(0x11B9040)
#define MX_LOGIC_BATTLEENTITIES_SKILLENTITYTIMELINESPAWNER_FINDSPAWNPOSITION_OFFSET UNITYSDK_OFFSET(0x11B93F0)
#define MX_LOGIC_BATTLEENTITIES_SKILLENTITYTIMELINESPAWNER_FINDSPAWNDIRECTION_OFFSET UNITYSDK_OFFSET(0x11B9490)
#define MX_LOGIC_BATTLEENTITIES_SKILLENTITYTIMELINESPAWNER_SETENTITYTARGET_OFFSET UNITYSDK_OFFSET(0x11B5A10)
#define MX_LOGIC_BATTLEENTITIES_SKILLENTITYTIMELINESPAWNER_CHANGENEXTTARGETSPAWNCONDITION_OFFSET UNITYSDK_OFFSET(0x11B8A30)
#define MX_LOGIC_BATTLEENTITIES_SKILLENTITYTIMELINESPAWNER_CHECKSPAWNCONDITION_OFFSET UNITYSDK_OFFSET(0x11B8800)
#define MX_LOGIC_BATTLEENTITIES_SKILLENTITYTIMELINESPAWNER_CHECKSPAWNCONDITIONOFTARGET_OFFSET UNITYSDK_OFFSET(0x11B9660)
#define MX_LOGIC_BATTLEENTITIES_SKILLENTITYTIMELINESPAWNER_SETENTITYTARGET_OFFSET UNITYSDK_OFFSET(0x11B7B00)
#define MX_LOGIC_BATTLEENTITIES_SKILLENTITYTIMELINESPAWNER_INITTARGETTABLE_OFFSET UNITYSDK_OFFSET(0x11B9530)
#define MX_LOGIC_BATTLEENTITIES_SKILLENTITYTIMELINESPAWNER_FINDTARGET_OFFSET UNITYSDK_OFFSET(0x11BA340)
#define MX_LOGIC_BATTLEENTITIES_SKILLENTITYTIMELINESPAWNER_FINDTARGETS_OFFSET UNITYSDK_OFFSET(0x11BA420)
#define MX_LOGIC_BATTLEENTITIES_SKILLENTITYTIMELINESPAWNER_SETSPAWNPOSITION_OFFSET UNITYSDK_OFFSET(0x11B6DF0)
#define MX_LOGIC_BATTLEENTITIES_SKILLENTITYTIMELINESPAWNER_SETSPAWNDIRECTION_OFFSET UNITYSDK_OFFSET(0x11B7100)
#define MX_LOGIC_BATTLEENTITIES_SKILLENTITYTIMELINESPAWNER__UPDATE_B__29_0_OFFSET UNITYSDK_OFFSET(0x11BA4A0)

namespace MX::Logic::BattleEntities
{
	inline static constexpr unsigned int SkillEntityTimelineSpawner_TypeDefinitionIndex = 13332;

	class SkillEntityTimelineSpawner : public Il2CppObject
	{
	public:
		::MX::Logic::Skills::IEntitySpawnable* spawnable; // 0x68
		::MX::Logic::Data::SkillEntitySpawnerValue* _spawnerValue_k__BackingField; // 0x70
		::System::Boolean isDirectionSet; // 0x78
		Il2CppObject* Direction; // 0x7C
		Il2CppObject* primaryTargets; // 0x88
		::System::Boolean useTargetContainerForPrimary; // 0x90
		::UnityEngine::Vector2* position; // 0x94
		::UnityEngine::Vector2* randomPosition; // 0x9C
		::System::Int64 ownerSkillRange; // 0xA8
		Il2CppObject* skillEntityPositionTable; // 0xB0
		Il2CppObject* skillEntityDirectionTable; // 0xB8
		Il2CppObject* _skillEntityTargetTable_k__BackingField; // 0xC0
		Il2CppObject* eachToEachTargetList; // 0xC8

		::MX::Logic::Data::SkillEntitySpawnerValue* get_spawnerValue()
		{
			return ((::MX::Logic::Data::SkillEntitySpawnerValue*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SKILLENTITYTIMELINESPAWNER_GET_SPAWNERVALUE_OFFSET))(nullptr);
		}

		::MX::Logic::Skills::EntitySpawnRule* get_EntitySpawnRule()
		{
			return ((::MX::Logic::Skills::EntitySpawnRule*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SKILLENTITYTIMELINESPAWNER_GET_ENTITYSPAWNRULE_OFFSET))(nullptr);
		}

		Il2CppObject* get_EntityTimeline()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SKILLENTITYTIMELINESPAWNER_GET_ENTITYTIMELINE_OFFSET))(nullptr);
		}

		Il2CppObject* get_skillEntityTargetTable()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SKILLENTITYTIMELINESPAWNER_GET_SKILLENTITYTARGETTABLE_OFFSET))(nullptr);
		}

		::System::Void set_skillEntityTargetTable(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SKILLENTITYTIMELINESPAWNER_SET_SKILLENTITYTARGETTABLE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::Logic::BattleEntities::EntityId* arg, ::MX::Logic::BattleEntities::BattleEntity* arg2, ::MX::Logic::Skills::SkillSpecification* arg3, ::MX::Logic::Data::SkillEntitySpawnerValue* arg4, ::MX::Logic::Skills::IEntitySpawnable* arg5, ::System::Int64 arg6, ::System::Int32 arg7, ::MX::Logic::BattleEntities::BattleEntity* arg8, ::UnityEngine::Vector2* arg9)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::EntityId*, ::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::Skills::SkillSpecification*, ::MX::Logic::Data::SkillEntitySpawnerValue*, ::MX::Logic::Skills::IEntitySpawnable*, ::System::Int64, ::System::Int32, ::MX::Logic::BattleEntities::BattleEntity*, ::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SKILLENTITYTIMELINESPAWNER_.CTOR_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, nullptr);
		}

		::System::Void SkillEntityTimelineSpawner_Expired(::System::Object* arg, ::System::EventArgs* arg2)
		{
			((::System::Void(*)(::System::Object*, ::System::EventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SKILLENTITYTIMELINESPAWNER_SKILLENTITYTIMELINESPAWNER_EXPIRED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Character_ActionInterrupted(::System::Object* arg, ::MX::Logic::BattleEntities::ActionChangedEventArgs* arg2)
		{
			((::System::Void(*)(::System::Object*, ::MX::Logic::BattleEntities::ActionChangedEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SKILLENTITYTIMELINESPAWNER_CHARACTER_ACTIONINTERRUPTED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void InterruptEntityTimelineSpawner()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SKILLENTITYTIMELINESPAWNER_INTERRUPTENTITYTIMELINESPAWNER_OFFSET))(nullptr);
		}

		::System::Void SetPrimaryTargets(::MX::Logic::Battles::Battle* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SKILLENTITYTIMELINESPAWNER_SETPRIMARYTARGETS_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Init(::MX::Logic::Battles::Battle* arg, ::UnityEngine::Vector2* arg2, Il2CppObject* arg3)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::UnityEngine::Vector2*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SKILLENTITYTIMELINESPAWNER_INIT_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::UnityEngine::Vector2* GetInitialTargetPosition(::MX::Logic::Data::SkillEntityValue* arg)
		{
			return ((::UnityEngine::Vector2*(*)(::MX::Logic::Data::SkillEntityValue*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SKILLENTITYTIMELINESPAWNER_GETINITIALTARGETPOSITION_OFFSET))(arg, nullptr);
		}

		::System::Void Update(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SKILLENTITYTIMELINESPAWNER_UPDATE_OFFSET))(arg, nullptr);
		}

		::System::Void ApplyPositionTransformDiffByMovingArea(Il2CppObject* arg, ::UnityEngine::Vector2* arg2, ::UnityEngine::Vector2* arg3, ::UnityEngine::Vector2* arg4)
		{
			((::System::Void(*)(Il2CppObject*, ::UnityEngine::Vector2*, ::UnityEngine::Vector2*, ::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SKILLENTITYTIMELINESPAWNER_APPLYPOSITIONTRANSFORMDIFFBYMOVINGAREA_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::UnityEngine::Vector2* FindSpawnPosition(::MX::Logic::Battles::Battle* arg, ::MX::Logic::Data::SkillEntityValue* arg2)
		{
			return ((::UnityEngine::Vector2*(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::Data::SkillEntityValue*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SKILLENTITYTIMELINESPAWNER_FINDSPAWNPOSITION_OFFSET))(arg, arg2, nullptr);
		}

		::UnityEngine::Vector2* FindSpawnDirection(::MX::Logic::Battles::Battle* arg, ::MX::Logic::Data::SkillEntityValue* arg2)
		{
			return ((::UnityEngine::Vector2*(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::Data::SkillEntityValue*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SKILLENTITYTIMELINESPAWNER_FINDSPAWNDIRECTION_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SetEntityTarget(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SKILLENTITYTIMELINESPAWNER_SETENTITYTARGET_OFFSET))(arg, nullptr);
		}

		::System::Boolean ChangeNextTargetSpawnCondition(::MX::Logic::Data::SkillEntityValue* arg, SpawnCondition* arg2, ::MX::Logic::Battles::Battle* arg3)
		{
			return ((::System::Boolean(*)(::MX::Logic::Data::SkillEntityValue*, SpawnCondition*, ::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SKILLENTITYTIMELINESPAWNER_CHANGENEXTTARGETSPAWNCONDITION_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Boolean CheckSpawnCondition(::MX::Logic::Data::SkillEntityValue* arg, SpawnCondition* arg2, ::MX::Logic::Battles::Battle* arg3)
		{
			return ((::System::Boolean(*)(::MX::Logic::Data::SkillEntityValue*, SpawnCondition*, ::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SKILLENTITYTIMELINESPAWNER_CHECKSPAWNCONDITION_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Boolean CheckSpawnConditionOfTarget(::MX::Logic::BattleEntities::BattleEntity* arg, SpawnCondition* arg2, ::MX::Logic::Battles::Battle* arg3)
		{
			return ((::System::Boolean(*)(::MX::Logic::BattleEntities::BattleEntity*, SpawnCondition*, ::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SKILLENTITYTIMELINESPAWNER_CHECKSPAWNCONDITIONOFTARGET_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void SetEntityTarget(::MX::Logic::Battles::Battle* arg, ::MX::Logic::Data::SkillEntityValue* arg2, ::System::Int64 arg3)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::Data::SkillEntityValue*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SKILLENTITYTIMELINESPAWNER_SETENTITYTARGET_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void InitTargetTable(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SKILLENTITYTIMELINESPAWNER_INITTARGETTABLE_OFFSET))(str, nullptr);
		}

		::MX::Logic::BattleEntities::BattleEntity* FindTarget(::MX::Logic::Data::SkillEntityValue* arg)
		{
			return ((::MX::Logic::BattleEntities::BattleEntity*(*)(::MX::Logic::Data::SkillEntityValue*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SKILLENTITYTIMELINESPAWNER_FINDTARGET_OFFSET))(arg, nullptr);
		}

		Il2CppObject* FindTargets(::MX::Logic::Data::SkillEntityValue* arg)
		{
			return ((Il2CppObject*(*)(::MX::Logic::Data::SkillEntityValue*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SKILLENTITYTIMELINESPAWNER_FINDTARGETS_OFFSET))(arg, nullptr);
		}

		::System::Void SetSpawnPosition(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SKILLENTITYTIMELINESPAWNER_SETSPAWNPOSITION_OFFSET))(arg, nullptr);
		}

		::System::Void SetSpawnDirection(::MX::Logic::Battles::Battle* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SKILLENTITYTIMELINESPAWNER_SETSPAWNDIRECTION_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean _Update_b__29_0(Il2CppObject* arg)
		{
			return ((::System::Boolean(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SKILLENTITYTIMELINESPAWNER__UPDATE_B__29_0_OFFSET))(arg, nullptr);
		}

	};
}

