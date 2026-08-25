#pragma once
#include "../../../../unitysdk.h"

namespace MX::Logic::Actions { class IActiveSkill; }
namespace MX::Logic::Skills { class TargetCandidateRule; }
namespace MX::Logic::Skills { class TargetSortRule; }
namespace MX::GameData::DAO::Battle { class SkillEntityDAO; }
namespace UnityEngine { class Vector3; }
namespace MX::Logic::Battles { class Battle; }
namespace MX::Logic::BattleEntities { class BattleEntity; }
namespace MX::Logic::BattleEntities { class SkillSlot; }
namespace MX::Logic::Skills { class SpawnDirectionTypes; }
namespace UnityEngine { class Vector2&; }
namespace MX::Visual::Battles::SkillRange { class SkillGuide; }
namespace MX::Visual::Battles::SkillRange { class SkillGuideState; }
namespace MX::Logic::Skills { class SpawnPositionTypes; }
namespace MX::Visual::Battles::SkillRange { class SkillGuideTransformInfo; }
namespace UnityEngine { class Vector2; }
namespace MX::Core::Physics2D::Bodies { class Body2D; }
namespace MX::Visual::Battles::SkillRange { class ISkillGuide; }

#define MX_VISUAL_BATTLES_SKILLRANGE_SKILLGUIDEPROCESS_GET_SPAWNDIRECTIONTYPE_OFFSET UNITYSDK_OFFSET(0x1DA0080)
#define MX_VISUAL_BATTLES_SKILLRANGE_SKILLGUIDEPROCESS__GETSKILLENTITYSPAWNERBODY2D_B__55_3_OFFSET UNITYSDK_OFFSET(0x1DA00A0)
#define MX_VISUAL_BATTLES_SKILLRANGE_SKILLGUIDEPROCESS_SET_VALIDINPUT_OFFSET UNITYSDK_OFFSET(0x1DA00D0)
#define MX_VISUAL_BATTLES_SKILLRANGE_SKILLGUIDEPROCESS_GET_ENTITYSKILLANGLE_OFFSET UNITYSDK_OFFSET(0x1DA00F0)
#define MX_VISUAL_BATTLES_SKILLRANGE_SKILLGUIDEPROCESS__GETSKILLENTITYSPAWNERBODY2D_B__55_0_OFFSET UNITYSDK_OFFSET(0x1DA0110)
#define MX_VISUAL_BATTLES_SKILLRANGE_SKILLGUIDEPROCESS_GET_SKILLACTION_OFFSET UNITYSDK_OFFSET(0x1DA0140)
#define MX_VISUAL_BATTLES_SKILLRANGE_SKILLGUIDEPROCESS_VALIDSPAWNPOSITIONMOVABLE_OFFSET UNITYSDK_OFFSET(0x1DA0150)
#define MX_VISUAL_BATTLES_SKILLRANGE_SKILLGUIDEPROCESS_GET_OFFSETDIRECTIONTYPE_OFFSET UNITYSDK_OFFSET(0x1DA0750)
#define MX_VISUAL_BATTLES_SKILLRANGE_SKILLGUIDEPROCESS_CHECKORIGINALNODETYPE_OFFSET UNITYSDK_OFFSET(0x1DA0770)
#define MX_VISUAL_BATTLES_SKILLRANGE_SKILLGUIDEPROCESS_FINDTARGETPOSITION_OFFSET UNITYSDK_OFFSET(0x1DA0850)
#define MX_VISUAL_BATTLES_SKILLRANGE_SKILLGUIDEPROCESS_.CTOR_OFFSET UNITYSDK_OFFSET(0x1DA0E60)
#define MX_VISUAL_BATTLES_SKILLRANGE_SKILLGUIDEPROCESS_SET_INPUT_OFFSET UNITYSDK_OFFSET(0x1DA1280)
#define MX_VISUAL_BATTLES_SKILLRANGE_SKILLGUIDEPROCESS_SET_TARGETSORTRULE_OFFSET UNITYSDK_OFFSET(0x1DA12A0)
#define MX_VISUAL_BATTLES_SKILLRANGE_SKILLGUIDEPROCESS_GETTARGETLIST_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_VISUAL_BATTLES_SKILLRANGE_SKILLGUIDEPROCESS_GET_NOVALIDTARGET_OFFSET UNITYSDK_OFFSET(0x1DA12D0)
#define MX_VISUAL_BATTLES_SKILLRANGE_SKILLGUIDEPROCESS_GET_LEVELSKILLENTITYDATA_OFFSET UNITYSDK_OFFSET(0x1DA12E0)
#define MX_VISUAL_BATTLES_SKILLRANGE_SKILLGUIDEPROCESS_GET_VALIDINPUT_OFFSET UNITYSDK_OFFSET(0x1DA12F0)
#define MX_VISUAL_BATTLES_SKILLRANGE_SKILLGUIDEPROCESS_GET_SPAWNPOSITIONTYPE_OFFSET UNITYSDK_OFFSET(0x1DA1310)
#define MX_VISUAL_BATTLES_SKILLRANGE_SKILLGUIDEPROCESS_NEEDCHECKORIGINALNODETYPE_OFFSET UNITYSDK_OFFSET(0x1DA1330)
#define MX_VISUAL_BATTLES_SKILLRANGE_SKILLGUIDEPROCESS_FINDBATTLEENTITY_OFFSET UNITYSDK_OFFSET(0x1DA0910)
#define MX_VISUAL_BATTLES_SKILLRANGE_SKILLGUIDEPROCESS__GETSKILLENTITYSPAWNERBODY2D_B__55_4_OFFSET UNITYSDK_OFFSET(0x1DA1380)
#define MX_VISUAL_BATTLES_SKILLRANGE_SKILLGUIDEPROCESS__GETSKILLENTITYSPAWNERBODY2D_B__55_2_OFFSET UNITYSDK_OFFSET(0x1DA13B0)
#define MX_VISUAL_BATTLES_SKILLRANGE_SKILLGUIDEPROCESS__GETSKILLENTITYSPAWNERBODY2D_B__55_1_OFFSET UNITYSDK_OFFSET(0x1DA13E0)
#define MX_VISUAL_BATTLES_SKILLRANGE_SKILLGUIDEPROCESS_GETSKILLGUIDETRANSFORMINFO_OFFSET UNITYSDK_OFFSET(0x1DA1410)
#define MX_VISUAL_BATTLES_SKILLRANGE_SKILLGUIDEPROCESS_GETSKILLENTITYSPAWNERBODY2D_OFFSET UNITYSDK_OFFSET(0x1DA16B0)
#define MX_VISUAL_BATTLES_SKILLRANGE_SKILLGUIDEPROCESS_SIMULATION_OFFSET UNITYSDK_OFFSET(0x1DA1C10)
#define MX_VISUAL_BATTLES_SKILLRANGE_SKILLGUIDEPROCESS_GET_TARGETCANDIDATERULE_OFFSET UNITYSDK_OFFSET(0x1DA2080)
#define MX_VISUAL_BATTLES_SKILLRANGE_SKILLGUIDEPROCESS_GET_POSITIONOFFSET_OFFSET UNITYSDK_OFFSET(0x1DA20A0)
#define MX_VISUAL_BATTLES_SKILLRANGE_SKILLGUIDEPROCESS_CANUSESKILLANDFINALGUIDETRANSFORM_OFFSET UNITYSDK_OFFSET(0x1DA20C0)
#define MX_VISUAL_BATTLES_SKILLRANGE_SKILLGUIDEPROCESS_SET_NOVALIDTARGET_OFFSET UNITYSDK_OFFSET(0x1DA2270)
#define MX_VISUAL_BATTLES_SKILLRANGE_SKILLGUIDEPROCESS_SETTRANSFORM_OFFSET UNITYSDK_OFFSET(0x1DA2280)
#define MX_VISUAL_BATTLES_SKILLRANGE_SKILLGUIDEPROCESS_GET_ENTITYSKILLRANGE_OFFSET UNITYSDK_OFFSET(0x1DA24C0)
#define MX_VISUAL_BATTLES_SKILLRANGE_SKILLGUIDEPROCESS_GET_INPUT_OFFSET UNITYSDK_OFFSET(0x1DA24E0)
#define MX_VISUAL_BATTLES_SKILLRANGE_SKILLGUIDEPROCESS_GET_ENTITYSKILLMINRANGE_OFFSET UNITYSDK_OFFSET(0x1DA1360)
#define MX_VISUAL_BATTLES_SKILLRANGE_SKILLGUIDEPROCESS_GET_TARGETSORTRULE_OFFSET UNITYSDK_OFFSET(0x1DA2500)
#define MX_VISUAL_BATTLES_SKILLRANGE_SKILLGUIDEPROCESS__GETSKILLENTITYSPAWNERBODY2D_B__55_5_OFFSET UNITYSDK_OFFSET(0x1DA2530)
#define MX_VISUAL_BATTLES_SKILLRANGE_SKILLGUIDEPROCESS_GET_INPUT2D_OFFSET UNITYSDK_OFFSET(0x1DA2490)

namespace MX::Visual::Battles::SkillRange
{
	inline static constexpr unsigned int SkillGuideProcess_TypeDefinitionIndex = 20395;

	class SkillGuideProcess : public Il2CppObject
	{
	public:
		::MX::Logic::Actions::IActiveSkill* _SkillAction_k__BackingField; // 0x10
		::MX::Logic::Skills::TargetCandidateRule* _TargetCandidateRule_k__BackingField; // 0x18
		::MX::Logic::Skills::TargetSortRule* _TargetSortRule_k__BackingField; // 0xD8
		::MX::GameData::DAO::Battle::SkillEntityDAO* _LevelSkillEntityData_k__BackingField; // 0x100
		::UnityEngine::Vector3* _Input_k__BackingField; // 0x108
		::UnityEngine::Vector3* _ValidInput_k__BackingField; // 0x114
		::System::Boolean _NoValidTarget_k__BackingField; // 0x120
		::MX::Logic::Battles::Battle* battle; // 0x128
		::MX::Logic::BattleEntities::BattleEntity* executer; // 0x130
		::MX::Logic::BattleEntities::SkillSlot* skillSlot; // 0x138

		::MX::Logic::Skills::SpawnDirectionTypes* get_SpawnDirectionType()
		{
			return (return (::MX::Logic::Skills::SpawnDirectionTypes*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SKILLRANGE_SKILLGUIDEPROCESS_GET_SPAWNDIRECTIONTYPE_OFFSET))(nullptr);
		}

		::System::Int32 _GetSkillEntitySpawnerBody2D_b__55_3()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SKILLRANGE_SKILLGUIDEPROCESS__GETSKILLENTITYSPAWNERBODY2D_B__55_3_OFFSET))(nullptr);
		}

		::System::Void set_ValidInput(::UnityEngine::Vector3* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SKILLRANGE_SKILLGUIDEPROCESS_SET_VALIDINPUT_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_EntitySkillAngle()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SKILLRANGE_SKILLGUIDEPROCESS_GET_ENTITYSKILLANGLE_OFFSET))(nullptr);
		}

		::System::Int32 _GetSkillEntitySpawnerBody2D_b__55_0()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SKILLRANGE_SKILLGUIDEPROCESS__GETSKILLENTITYSPAWNERBODY2D_B__55_0_OFFSET))(nullptr);
		}

		::MX::Logic::Actions::IActiveSkill* get_SkillAction()
		{
			return (return (::MX::Logic::Actions::IActiveSkill*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SKILLRANGE_SKILLGUIDEPROCESS_GET_SKILLACTION_OFFSET))(nullptr);
		}

		::System::Boolean ValidSpawnPositionMovable(::UnityEngine::Vector3* arg, GroundNode&* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Vector3*, GroundNode&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SKILLRANGE_SKILLGUIDEPROCESS_VALIDSPAWNPOSITIONMOVABLE_OFFSET))(arg, arg, nullptr);
		}

		::MX::Logic::Skills::SpawnDirectionTypes* get_OffsetDirectionType()
		{
			return (return (::MX::Logic::Skills::SpawnDirectionTypes*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SKILLRANGE_SKILLGUIDEPROCESS_GET_OFFSETDIRECTIONTYPE_OFFSET))(nullptr);
		}

		::System::Boolean CheckOriginalNodeType(::UnityEngine::Vector3* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SKILLRANGE_SKILLGUIDEPROCESS_CHECKORIGINALNODETYPE_OFFSET))(arg, nullptr);
		}

		::System::Boolean FindTargetPosition(::UnityEngine::Vector3* arg, ::UnityEngine::Vector2&* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Vector3*, ::UnityEngine::Vector2&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SKILLRANGE_SKILLGUIDEPROCESS_FINDTARGETPOSITION_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::MX::Visual::Battles::SkillRange::SkillGuide* arg, ::MX::Logic::Actions::IActiveSkill* arg, ::MX::GameData::DAO::Battle::SkillEntityDAO* arg)
		{
			((::System::Void(*)(::MX::Visual::Battles::SkillRange::SkillGuide*, ::MX::Logic::Actions::IActiveSkill*, ::MX::GameData::DAO::Battle::SkillEntityDAO*, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SKILLRANGE_SKILLGUIDEPROCESS_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void set_Input(::UnityEngine::Vector3* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SKILLRANGE_SKILLGUIDEPROCESS_SET_INPUT_OFFSET))(arg, nullptr);
		}

		::System::Void set_TargetSortRule(::MX::Logic::Skills::TargetSortRule* arg)
		{
			((::System::Void(*)(::MX::Logic::Skills::TargetSortRule*, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SKILLRANGE_SKILLGUIDEPROCESS_SET_TARGETSORTRULE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetTargetList(::MX::Visual::Battles::SkillRange::SkillGuideState* arg)
		{
			return (return (Il2CppObject*(*)(::MX::Visual::Battles::SkillRange::SkillGuideState*, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SKILLRANGE_SKILLGUIDEPROCESS_GETTARGETLIST_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_NoValidTarget()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SKILLRANGE_SKILLGUIDEPROCESS_GET_NOVALIDTARGET_OFFSET))(nullptr);
		}

		::MX::GameData::DAO::Battle::SkillEntityDAO* get_LevelSkillEntityData()
		{
			return (return (::MX::GameData::DAO::Battle::SkillEntityDAO*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SKILLRANGE_SKILLGUIDEPROCESS_GET_LEVELSKILLENTITYDATA_OFFSET))(nullptr);
		}

		::UnityEngine::Vector3* get_ValidInput()
		{
			return (return (::UnityEngine::Vector3*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SKILLRANGE_SKILLGUIDEPROCESS_GET_VALIDINPUT_OFFSET))(nullptr);
		}

		::MX::Logic::Skills::SpawnPositionTypes* get_SpawnPositionType()
		{
			return (return (::MX::Logic::Skills::SpawnPositionTypes*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SKILLRANGE_SKILLGUIDEPROCESS_GET_SPAWNPOSITIONTYPE_OFFSET))(nullptr);
		}

		::System::Boolean NeedCheckOriginalNodeType()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SKILLRANGE_SKILLGUIDEPROCESS_NEEDCHECKORIGINALNODETYPE_OFFSET))(nullptr);
		}

		::MX::Logic::BattleEntities::BattleEntity* FindBattleEntity(::UnityEngine::Vector3* arg)
		{
			return (return (::MX::Logic::BattleEntities::BattleEntity*(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SKILLRANGE_SKILLGUIDEPROCESS_FINDBATTLEENTITY_OFFSET))(arg, nullptr);
		}

		::System::Int32 _GetSkillEntitySpawnerBody2D_b__55_4()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SKILLRANGE_SKILLGUIDEPROCESS__GETSKILLENTITYSPAWNERBODY2D_B__55_4_OFFSET))(nullptr);
		}

		::System::Int32 _GetSkillEntitySpawnerBody2D_b__55_2()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SKILLRANGE_SKILLGUIDEPROCESS__GETSKILLENTITYSPAWNERBODY2D_B__55_2_OFFSET))(nullptr);
		}

		::System::Int32 _GetSkillEntitySpawnerBody2D_b__55_1()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SKILLRANGE_SKILLGUIDEPROCESS__GETSKILLENTITYSPAWNERBODY2D_B__55_1_OFFSET))(nullptr);
		}

		::MX::Visual::Battles::SkillRange::SkillGuideTransformInfo* GetSkillGuideTransformInfo(::UnityEngine::Vector2* arg, ::UnityEngine::Vector2* arg, ::System::Boolean arg)
		{
			return (return (::MX::Visual::Battles::SkillRange::SkillGuideTransformInfo*(*)(::UnityEngine::Vector2*, ::UnityEngine::Vector2*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SKILLRANGE_SKILLGUIDEPROCESS_GETSKILLGUIDETRANSFORMINFO_OFFSET))(arg, arg, arg, nullptr);
		}

		::MX::Core::Physics2D::Bodies::Body2D* GetSkillEntitySpawnerBody2D(::MX::GameData::DAO::Battle::SkillEntityDAO* arg, ::UnityEngine::Vector2* arg, ::UnityEngine::Vector2* arg)
		{
			return (return (::MX::Core::Physics2D::Bodies::Body2D*(*)(::MX::GameData::DAO::Battle::SkillEntityDAO*, ::UnityEngine::Vector2*, ::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SKILLRANGE_SKILLGUIDEPROCESS_GETSKILLENTITYSPAWNERBODY2D_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void Simulation(::UnityEngine::Vector2* arg, ::UnityEngine::Vector2* arg, ::System::Boolean arg, ::MX::Visual::Battles::SkillRange::SkillGuideState* arg, ::MX::Visual::Battles::SkillRange::ISkillGuide* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::UnityEngine::Vector2*, ::System::Boolean, ::MX::Visual::Battles::SkillRange::SkillGuideState*, ::MX::Visual::Battles::SkillRange::ISkillGuide*, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SKILLRANGE_SKILLGUIDEPROCESS_SIMULATION_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::MX::Logic::Skills::TargetCandidateRule* get_TargetCandidateRule()
		{
			return (return (::MX::Logic::Skills::TargetCandidateRule*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SKILLRANGE_SKILLGUIDEPROCESS_GET_TARGETCANDIDATERULE_OFFSET))(nullptr);
		}

		::UnityEngine::Vector2* get_PositionOffset()
		{
			return (return (::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SKILLRANGE_SKILLGUIDEPROCESS_GET_POSITIONOFFSET_OFFSET))(nullptr);
		}

		::System::Boolean CanUseSkillAndFinalGuideTransform(::MX::Visual::Battles::SkillRange::SkillGuideState* arg, ::MX::Visual::Battles::SkillRange::ISkillGuide* arg)
		{
			return (return (::System::Boolean(*)(::MX::Visual::Battles::SkillRange::SkillGuideState*, ::MX::Visual::Battles::SkillRange::ISkillGuide*, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SKILLRANGE_SKILLGUIDEPROCESS_CANUSESKILLANDFINALGUIDETRANSFORM_OFFSET))(arg, arg, nullptr);
		}

		::System::Void set_NoValidTarget(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SKILLRANGE_SKILLGUIDEPROCESS_SET_NOVALIDTARGET_OFFSET))(arg, nullptr);
		}

		::System::Void SetTransform(::MX::Visual::Battles::SkillRange::SkillGuideState* arg, ::MX::Visual::Battles::SkillRange::ISkillGuide* arg)
		{
			((::System::Void(*)(::MX::Visual::Battles::SkillRange::SkillGuideState*, ::MX::Visual::Battles::SkillRange::ISkillGuide*, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SKILLRANGE_SKILLGUIDEPROCESS_SETTRANSFORM_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_EntitySkillRange()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SKILLRANGE_SKILLGUIDEPROCESS_GET_ENTITYSKILLRANGE_OFFSET))(nullptr);
		}

		::UnityEngine::Vector3* get_Input()
		{
			return (return (::UnityEngine::Vector3*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SKILLRANGE_SKILLGUIDEPROCESS_GET_INPUT_OFFSET))(nullptr);
		}

		::System::Int64 get_EntitySkillMinRange()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SKILLRANGE_SKILLGUIDEPROCESS_GET_ENTITYSKILLMINRANGE_OFFSET))(nullptr);
		}

		::MX::Logic::Skills::TargetSortRule* get_TargetSortRule()
		{
			return (return (::MX::Logic::Skills::TargetSortRule*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SKILLRANGE_SKILLGUIDEPROCESS_GET_TARGETSORTRULE_OFFSET))(nullptr);
		}

		::System::Int32 _GetSkillEntitySpawnerBody2D_b__55_5()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SKILLRANGE_SKILLGUIDEPROCESS__GETSKILLENTITYSPAWNERBODY2D_B__55_5_OFFSET))(nullptr);
		}

		::UnityEngine::Vector2* get_Input2D()
		{
			return (return (::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SKILLRANGE_SKILLGUIDEPROCESS_GET_INPUT2D_OFFSET))(nullptr);
		}

	};
}

