#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Data { class AreaSpawnerValue; }
namespace UnityEngine { class Vector2; }
namespace MX::Logic::BattleEntities { class EntityId; }
namespace MX::Logic::BattleEntities { class BattleEntity; }
namespace MX::Logic::Skills { class SkillSpecification; }
namespace MX::Logic::Data { class SkillEntityValue; }
namespace MX::Logic::Battles { class Battle; }

#define MX_LOGIC_BATTLEENTITIES_AREASPAWNER_GET_SPAWNERVALUE_OFFSET UNITYSDK_OFFSET(0x118FC00)
#define MX_LOGIC_BATTLEENTITIES_AREASPAWNER_GET_ENTITYTIMELINE_OFFSET UNITYSDK_OFFSET(0x118FC10)
#define MX_LOGIC_BATTLEENTITIES_AREASPAWNER_GET_SKILLENTITYTARGETTABLE_OFFSET UNITYSDK_OFFSET(0x118FC30)
#define MX_LOGIC_BATTLEENTITIES_AREASPAWNER_SET_SKILLENTITYTARGETTABLE_OFFSET UNITYSDK_OFFSET(0x118FC40)
#define MX_LOGIC_BATTLEENTITIES_AREASPAWNER_.CTOR_OFFSET UNITYSDK_OFFSET(0x118FC60)
#define MX_LOGIC_BATTLEENTITIES_AREASPAWNER_FINDTARGET_OFFSET UNITYSDK_OFFSET(0x118FCF0)
#define MX_LOGIC_BATTLEENTITIES_AREASPAWNER_FINDTARGETS_OFFSET UNITYSDK_OFFSET(0x118FDD0)
#define MX_LOGIC_BATTLEENTITIES_AREASPAWNER_SETPRIMARYTARGETS_OFFSET UNITYSDK_OFFSET(0x118FE50)
#define MX_LOGIC_BATTLEENTITIES_AREASPAWNER_INIT_OFFSET UNITYSDK_OFFSET(0x11901E0)
#define MX_LOGIC_BATTLEENTITIES_AREASPAWNER_UPDATE_OFFSET UNITYSDK_OFFSET(0x1191B10)
#define MX_LOGIC_BATTLEENTITIES_AREASPAWNER_APPLYPOSITIONTRANSFORMDIFFBYMOVINGAREA_OFFSET UNITYSDK_OFFSET(0x1192EB0)
#define MX_LOGIC_BATTLEENTITIES_AREASPAWNER_FINDSPAWNPOSITION_OFFSET UNITYSDK_OFFSET(0x1193250)
#define MX_LOGIC_BATTLEENTITIES_AREASPAWNER_FINDSPAWNDIRECTION_OFFSET UNITYSDK_OFFSET(0x11932F0)
#define MX_LOGIC_BATTLEENTITIES_AREASPAWNER_SETENTITYTARGET_OFFSET UNITYSDK_OFFSET(0x1190480)
#define MX_LOGIC_BATTLEENTITIES_AREASPAWNER_SETENTITYTARGET_OFFSET UNITYSDK_OFFSET(0x11921B0)
#define MX_LOGIC_BATTLEENTITIES_AREASPAWNER_INITTARGETTABLE_OFFSET UNITYSDK_OFFSET(0x1193390)
#define MX_LOGIC_BATTLEENTITIES_AREASPAWNER_SETSPAWNPOSITION_OFFSET UNITYSDK_OFFSET(0x11914A0)
#define MX_LOGIC_BATTLEENTITIES_AREASPAWNER_SETSPAWNDIRECTION_OFFSET UNITYSDK_OFFSET(0x11917B0)
#define MX_LOGIC_BATTLEENTITIES_AREASPAWNER__UPDATE_B__22_0_OFFSET UNITYSDK_OFFSET(0x11934C0)

namespace MX::Logic::BattleEntities
{
	inline static constexpr unsigned int AreaSpawner_TypeDefinitionIndex = 13296;

	class AreaSpawner : public Il2CppObject
	{
	public:
		::MX::Logic::Data::AreaSpawnerValue* _spawnerValue_k__BackingField; // 0x68
		::System::Boolean isDirectionSet; // 0x70
		Il2CppObject* Direction; // 0x74
		Il2CppObject* primaryTargets; // 0x80
		::UnityEngine::Vector2* position; // 0x88
		::UnityEngine::Vector2* randomPosition; // 0x90
		::System::Int64 ownerSkillRange; // 0x98
		Il2CppObject* skillEntityPositionTable; // 0xA0
		Il2CppObject* skillEntityDirectionTable; // 0xA8
		Il2CppObject* _skillEntityTargetTable_k__BackingField; // 0xB0

		::MX::Logic::Data::AreaSpawnerValue* get_spawnerValue()
		{
			return ((::MX::Logic::Data::AreaSpawnerValue*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_AREASPAWNER_GET_SPAWNERVALUE_OFFSET))(nullptr);
		}

		Il2CppObject* get_EntityTimeline()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_AREASPAWNER_GET_ENTITYTIMELINE_OFFSET))(nullptr);
		}

		Il2CppObject* get_skillEntityTargetTable()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_AREASPAWNER_GET_SKILLENTITYTARGETTABLE_OFFSET))(nullptr);
		}

		::System::Void set_skillEntityTargetTable(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_AREASPAWNER_SET_SKILLENTITYTARGETTABLE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::Logic::BattleEntities::EntityId* arg, ::MX::Logic::BattleEntities::BattleEntity* arg2, ::MX::Logic::Skills::SkillSpecification* arg3, ::System::Int32 arg4, ::MX::Logic::Data::AreaSpawnerValue* arg5, ::System::Int64 arg6, ::MX::Logic::BattleEntities::BattleEntity* arg7, ::UnityEngine::Vector2* arg8)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::EntityId*, ::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::Skills::SkillSpecification*, ::System::Int32, ::MX::Logic::Data::AreaSpawnerValue*, ::System::Int64, ::MX::Logic::BattleEntities::BattleEntity*, ::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_AREASPAWNER_.CTOR_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, arg7, arg8, nullptr);
		}

		::MX::Logic::BattleEntities::BattleEntity* FindTarget(::MX::Logic::Data::SkillEntityValue* arg)
		{
			return ((::MX::Logic::BattleEntities::BattleEntity*(*)(::MX::Logic::Data::SkillEntityValue*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_AREASPAWNER_FINDTARGET_OFFSET))(arg, nullptr);
		}

		Il2CppObject* FindTargets(::MX::Logic::Data::SkillEntityValue* arg)
		{
			return ((Il2CppObject*(*)(::MX::Logic::Data::SkillEntityValue*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_AREASPAWNER_FINDTARGETS_OFFSET))(arg, nullptr);
		}

		::System::Void SetPrimaryTargets(::MX::Logic::Battles::Battle* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_AREASPAWNER_SETPRIMARYTARGETS_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Init(::MX::Logic::Battles::Battle* arg, ::UnityEngine::Vector2* arg2, Il2CppObject* arg3)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::UnityEngine::Vector2*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_AREASPAWNER_INIT_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void Update(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_AREASPAWNER_UPDATE_OFFSET))(arg, nullptr);
		}

		::System::Void ApplyPositionTransformDiffByMovingArea(Il2CppObject* arg, ::UnityEngine::Vector2* arg2, ::UnityEngine::Vector2* arg3, ::UnityEngine::Vector2* arg4)
		{
			((::System::Void(*)(Il2CppObject*, ::UnityEngine::Vector2*, ::UnityEngine::Vector2*, ::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_AREASPAWNER_APPLYPOSITIONTRANSFORMDIFFBYMOVINGAREA_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::UnityEngine::Vector2* FindSpawnPosition(::MX::Logic::Battles::Battle* arg, ::MX::Logic::Data::SkillEntityValue* arg2)
		{
			return ((::UnityEngine::Vector2*(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::Data::SkillEntityValue*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_AREASPAWNER_FINDSPAWNPOSITION_OFFSET))(arg, arg2, nullptr);
		}

		::UnityEngine::Vector2* FindSpawnDirection(::MX::Logic::Battles::Battle* arg, ::MX::Logic::Data::SkillEntityValue* arg2)
		{
			return ((::UnityEngine::Vector2*(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::Data::SkillEntityValue*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_AREASPAWNER_FINDSPAWNDIRECTION_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SetEntityTarget(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_AREASPAWNER_SETENTITYTARGET_OFFSET))(arg, nullptr);
		}

		::System::Void SetEntityTarget(::MX::Logic::Battles::Battle* arg, ::MX::Logic::Data::SkillEntityValue* arg2, ::System::Int64 arg3)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::Data::SkillEntityValue*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_AREASPAWNER_SETENTITYTARGET_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void InitTargetTable(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_AREASPAWNER_INITTARGETTABLE_OFFSET))(str, nullptr);
		}

		::System::Void SetSpawnPosition(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_AREASPAWNER_SETSPAWNPOSITION_OFFSET))(arg, nullptr);
		}

		::System::Void SetSpawnDirection(::MX::Logic::Battles::Battle* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_AREASPAWNER_SETSPAWNDIRECTION_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean _Update_b__22_0(Il2CppObject* arg)
		{
			return ((::System::Boolean(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_AREASPAWNER__UPDATE_B__22_0_OFFSET))(arg, nullptr);
		}

	};
}

