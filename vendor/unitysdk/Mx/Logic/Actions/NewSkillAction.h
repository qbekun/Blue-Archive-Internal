#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Skills { class SkillSpecification; }
namespace MX::Logic::Skills { class TargetCandidateRule; }
namespace MX::Logic::Skills { class TargetSortRule; }
namespace MX::Logic::Skills { class SkillApplyType; }
namespace MX::Logic::Data { class RootMotionFrame; }
namespace MX::Logic::Skills { class SpawnDirectionTypes; }
namespace UnityEngine { class Vector2; }
namespace MX::GameData::DAO::Battle { class SkillEntityDAO; }
namespace MX::Logic::Data { class LevelRootMotionMoveValue; }
namespace MX::Logic::Battles { class Battle; }
namespace MX::Logic::BattleEntities { class BattleEntity; }
namespace MX::Logic::BattleEntities { class BehaviorType; }
namespace MX::GameData::DAO::Battle { class NewSkillActionDAO; }
namespace MX::Logic::Skills { class TargetingType; }
namespace MX::Logic::Data { class StatCorrection; }
namespace MX::Logic::Actions { class NewSkillAction; }
namespace MX::Logic::BattleEntities { class GroundObstacle; }
namespace MX::Logic::BattleEntities { class O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4; }

#define MX_LOGIC_ACTIONS_NEWSKILLACTION_GET_ISATTACKENTERSKIPBYLASTSKILL_OFFSET UNITYSDK_OFFSET(0x10F7780)
#define MX_LOGIC_ACTIONS_NEWSKILLACTION_GET_PRIMARYSKILLAPPLYTYPE_OFFSET UNITYSDK_OFFSET(0x10F7790)
#define MX_LOGIC_ACTIONS_NEWSKILLACTION_UPDATE_OFFSET UNITYSDK_OFFSET(0x10F77A0)
#define MX_LOGIC_ACTIONS_NEWSKILLACTION_UPDATEROOTMOTION_OFFSET UNITYSDK_OFFSET(0x10F77D0)
#define MX_LOGIC_ACTIONS_NEWSKILLACTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x10F2AB0)
#define MX_LOGIC_ACTIONS_NEWSKILLACTION_APPLYSPAWNPOSITIONTRANSFORMDIFF_OFFSET UNITYSDK_OFFSET(0x10F88E0)
#define MX_LOGIC_ACTIONS_NEWSKILLACTION_GET_PRIMARYTARGETINGTYPE_OFFSET UNITYSDK_OFFSET(0x10F88F0)
#define MX_LOGIC_ACTIONS_NEWSKILLACTION_GET_PRIMARYCANDIDATERULE_OFFSET UNITYSDK_OFFSET(0x10F8940)
#define MX_LOGIC_ACTIONS_NEWSKILLACTION_GET_EXECUTERDIRECTIONTYPE_OFFSET UNITYSDK_OFFSET(0x10F8960)
#define MX_LOGIC_ACTIONS_NEWSKILLACTION_SET_CURRENTINVOKERDIRECTIONTYPE_OFFSET UNITYSDK_OFFSET(0x10F8970)
#define MX_LOGIC_ACTIONS_NEWSKILLACTION_GET_CURRENTINVOKERDIRECTIONWORLDPOSITION_OFFSET UNITYSDK_OFFSET(0x10F8980)
#define MX_LOGIC_ACTIONS_NEWSKILLACTION_APPLYCORRECTION_OFFSET UNITYSDK_OFFSET(0x10F8990)
#define MX_LOGIC_ACTIONS_NEWSKILLACTION_SET_RANGE_OFFSET UNITYSDK_OFFSET(0x10F8A10)
#define MX_LOGIC_ACTIONS_NEWSKILLACTION_GETENTITIESTOSPAWN_OFFSET UNITYSDK_OFFSET(0x10F8A20)
#define MX_LOGIC_ACTIONS_NEWSKILLACTION_GET_EXECUTERDIRECTIONWORLDPOSITION_OFFSET UNITYSDK_OFFSET(0x10F8A30)
#define MX_LOGIC_ACTIONS_NEWSKILLACTION_GET_CURRENTINVOKERDIRECTIONTYPE_OFFSET UNITYSDK_OFFSET(0x10F8A40)
#define MX_LOGIC_ACTIONS_NEWSKILLACTION_SET_CURRENTINVOKERDIRECTIONWORLDPOSITION_OFFSET UNITYSDK_OFFSET(0x10F8A50)
#define MX_LOGIC_ACTIONS_NEWSKILLACTION_SETENTITYDIRECTION_OFFSET UNITYSDK_OFFSET(0x10F33B0)
#define MX_LOGIC_ACTIONS_NEWSKILLACTION_GET_ROOTMOTIONMOVE_OFFSET UNITYSDK_OFFSET(0x10F8BB0)
#define MX_LOGIC_ACTIONS_NEWSKILLACTION_GET_SKILLSPECIFICATION_OFFSET UNITYSDK_OFFSET(0x10F8BC0)
#define MX_LOGIC_ACTIONS_NEWSKILLACTION_CONVERTTONEWSKILLACTION_OFFSET UNITYSDK_OFFSET(0x10F8BD0)
#define MX_LOGIC_ACTIONS_NEWSKILLACTION__UPDATEROOTMOTION_B__65_3_OFFSET UNITYSDK_OFFSET(0x10F8BE0)
#define MX_LOGIC_ACTIONS_NEWSKILLACTION_INTERRUPT_OFFSET UNITYSDK_OFFSET(0x10F74A0)
#define MX_LOGIC_ACTIONS_NEWSKILLACTION_GET_MAINENTITYDATA_OFFSET UNITYSDK_OFFSET(0x10F8C30)
#define MX_LOGIC_ACTIONS_NEWSKILLACTION_SET_ANGLE_OFFSET UNITYSDK_OFFSET(0x10F8C40)
#define MX_LOGIC_ACTIONS_NEWSKILLACTION_GET_PRIMARYSORTRULE_OFFSET UNITYSDK_OFFSET(0x10F8C50)
#define MX_LOGIC_ACTIONS_NEWSKILLACTION__UPDATEROOTMOTION_B__65_2_OFFSET UNITYSDK_OFFSET(0x10F8C80)
#define MX_LOGIC_ACTIONS_NEWSKILLACTION__UPDATEROOTMOTION_B__65_0_OFFSET UNITYSDK_OFFSET(0x10F8CD0)
#define MX_LOGIC_ACTIONS_NEWSKILLACTION_SET_MINRANGE_OFFSET UNITYSDK_OFFSET(0x10F8DD0)
#define MX_LOGIC_ACTIONS_NEWSKILLACTION_GET_RANGE_OFFSET UNITYSDK_OFFSET(0x10F8DE0)
#define MX_LOGIC_ACTIONS_NEWSKILLACTION__UPDATEROOTMOTION_B__65_1_OFFSET UNITYSDK_OFFSET(0x10F8DF0)
#define MX_LOGIC_ACTIONS_NEWSKILLACTION_GET_MINRANGE_OFFSET UNITYSDK_OFFSET(0x10F8EF0)
#define MX_LOGIC_ACTIONS_NEWSKILLACTION_GET_ROOTMOTIONFRAME_OFFSET UNITYSDK_OFFSET(0x10F8F00)
#define MX_LOGIC_ACTIONS_NEWSKILLACTION_ENTER_OFFSET UNITYSDK_OFFSET(0x10F8F10)
#define MX_LOGIC_ACTIONS_NEWSKILLACTION_GET_ANGLE_OFFSET UNITYSDK_OFFSET(0x10F91F0)
#define MX_LOGIC_ACTIONS_NEWSKILLACTION_SET_PRIMARYSKILLAPPLYTYPE_OFFSET UNITYSDK_OFFSET(0x10F9200)

namespace MX::Logic::Actions
{
	inline static constexpr unsigned int NewSkillAction_TypeDefinitionIndex = 13028;

	class NewSkillAction : public Il2CppObject
	{
	public:
		::MX::Logic::Skills::SkillSpecification* _SkillSpecification_k__BackingField; // 0x50
		::MX::Logic::Skills::TargetCandidateRule* _PrimaryCandidateRule_k__BackingField; // 0x58
		::MX::Logic::Skills::TargetSortRule* _PrimarySortRule_k__BackingField; // 0x118
		::MX::Logic::Skills::SkillApplyType* _PrimarySkillApplyType_k__BackingField; // 0x140
		::MX::Logic::Data::RootMotionFrame* _RootMotionFrame_k__BackingField; // 0x148
		::System::Int64 _Range_k__BackingField; // 0x150
		::System::Int64 _Angle_k__BackingField; // 0x158
		::System::Int64 _MinRange_k__BackingField; // 0x160
		::MX::Logic::Skills::SpawnDirectionTypes* _ExecuterDirectionType_k__BackingField; // 0x168
		::UnityEngine::Vector2* _ExecuterDirectionWorldPosition_k__BackingField; // 0x16C
		::MX::Logic::Skills::SpawnDirectionTypes* _CurrentInvokerDirectionType_k__BackingField; // 0x174
		::UnityEngine::Vector2* _CurrentInvokerDirectionWorldPosition_k__BackingField; // 0x178
		::MX::GameData::DAO::Battle::SkillEntityDAO* _MainEntityData_k__BackingField; // 0x180
		::MX::Logic::Data::LevelRootMotionMoveValue* _RootMotionMove_k__BackingField; // 0x188
		::System::Boolean _IsAttackEnterSkipByLastSkill_k__BackingField; // 0x190
		::UnityEngine::Vector2* RootMotionStartPosition; // 0x194
		::UnityEngine::Vector2* RootMotionEndPosition; // 0x19C
		::System::Boolean ignoreCrashByTSSObstacleCheck; // 0x1A4

		::System::Boolean get_IsAttackEnterSkipByLastSkill()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_ACTIONS_NEWSKILLACTION_GET_ISATTACKENTERSKIPBYLASTSKILL_OFFSET))(nullptr);
		}

		::MX::Logic::Skills::SkillApplyType* get_PrimarySkillApplyType()
		{
			return ((::MX::Logic::Skills::SkillApplyType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_ACTIONS_NEWSKILLACTION_GET_PRIMARYSKILLAPPLYTYPE_OFFSET))(nullptr);
		}

		::System::Void Update(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_ACTIONS_NEWSKILLACTION_UPDATE_OFFSET))(arg, nullptr);
		}

		::System::Void UpdateRootMotion(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_ACTIONS_NEWSKILLACTION_UPDATEROOTMOTION_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::Logic::BattleEntities::BattleEntity* arg, ::MX::Logic::BattleEntities::BehaviorType* arg2, ::MX::GameData::DAO::Battle::NewSkillActionDAO* arg3, ::MX::Logic::Skills::SkillSpecification* arg4)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::BattleEntities::BehaviorType*, ::MX::GameData::DAO::Battle::NewSkillActionDAO*, ::MX::Logic::Skills::SkillSpecification*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_ACTIONS_NEWSKILLACTION_.CTOR_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void ApplySpawnPositionTransformDiff(Il2CppObject* arg, ::UnityEngine::Vector2* arg2, ::UnityEngine::Vector2* arg3, ::UnityEngine::Vector2* arg4)
		{
			((::System::Void(*)(Il2CppObject*, ::UnityEngine::Vector2*, ::UnityEngine::Vector2*, ::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_ACTIONS_NEWSKILLACTION_APPLYSPAWNPOSITIONTRANSFORMDIFF_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::MX::Logic::Skills::TargetingType* get_PrimaryTargetingType()
		{
			return ((::MX::Logic::Skills::TargetingType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_ACTIONS_NEWSKILLACTION_GET_PRIMARYTARGETINGTYPE_OFFSET))(nullptr);
		}

		::MX::Logic::Skills::TargetCandidateRule* get_PrimaryCandidateRule()
		{
			return ((::MX::Logic::Skills::TargetCandidateRule*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_ACTIONS_NEWSKILLACTION_GET_PRIMARYCANDIDATERULE_OFFSET))(nullptr);
		}

		::MX::Logic::Skills::SpawnDirectionTypes* get_ExecuterDirectionType()
		{
			return ((::MX::Logic::Skills::SpawnDirectionTypes*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_ACTIONS_NEWSKILLACTION_GET_EXECUTERDIRECTIONTYPE_OFFSET))(nullptr);
		}

		::System::Void set_CurrentInvokerDirectionType(::MX::Logic::Skills::SpawnDirectionTypes* arg)
		{
			((::System::Void(*)(::MX::Logic::Skills::SpawnDirectionTypes*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_ACTIONS_NEWSKILLACTION_SET_CURRENTINVOKERDIRECTIONTYPE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector2* get_CurrentInvokerDirectionWorldPosition()
		{
			return ((::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_ACTIONS_NEWSKILLACTION_GET_CURRENTINVOKERDIRECTIONWORLDPOSITION_OFFSET))(nullptr);
		}

		::System::Void ApplyCorrection(::MX::Logic::Data::StatCorrection* arg)
		{
			((::System::Void(*)(::MX::Logic::Data::StatCorrection*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_ACTIONS_NEWSKILLACTION_APPLYCORRECTION_OFFSET))(arg, nullptr);
		}

		::System::Void set_Range(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_ACTIONS_NEWSKILLACTION_SET_RANGE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetEntitiesToSpawn()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_ACTIONS_NEWSKILLACTION_GETENTITIESTOSPAWN_OFFSET))(nullptr);
		}

		::UnityEngine::Vector2* get_ExecuterDirectionWorldPosition()
		{
			return ((::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_ACTIONS_NEWSKILLACTION_GET_EXECUTERDIRECTIONWORLDPOSITION_OFFSET))(nullptr);
		}

		::MX::Logic::Skills::SpawnDirectionTypes* get_CurrentInvokerDirectionType()
		{
			return ((::MX::Logic::Skills::SpawnDirectionTypes*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_ACTIONS_NEWSKILLACTION_GET_CURRENTINVOKERDIRECTIONTYPE_OFFSET))(nullptr);
		}

		::System::Void set_CurrentInvokerDirectionWorldPosition(::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_ACTIONS_NEWSKILLACTION_SET_CURRENTINVOKERDIRECTIONWORLDPOSITION_OFFSET))(arg, nullptr);
		}

		::System::Void SetEntityDirection(::MX::Logic::Battles::Battle* arg, ::MX::Logic::Skills::SpawnDirectionTypes* arg2, Il2CppObject* arg3, ::UnityEngine::Vector2* arg4, ::System::Boolean arg5)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::Skills::SpawnDirectionTypes*, Il2CppObject*, ::UnityEngine::Vector2*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_ACTIONS_NEWSKILLACTION_SETENTITYDIRECTION_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		::MX::Logic::Data::LevelRootMotionMoveValue* get_RootMotionMove()
		{
			return ((::MX::Logic::Data::LevelRootMotionMoveValue*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_ACTIONS_NEWSKILLACTION_GET_ROOTMOTIONMOVE_OFFSET))(nullptr);
		}

		::MX::Logic::Skills::SkillSpecification* get_SkillSpecification()
		{
			return ((::MX::Logic::Skills::SkillSpecification*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_ACTIONS_NEWSKILLACTION_GET_SKILLSPECIFICATION_OFFSET))(nullptr);
		}

		::MX::Logic::Actions::NewSkillAction* ConvertToNewSkillAction()
		{
			return ((::MX::Logic::Actions::NewSkillAction*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_ACTIONS_NEWSKILLACTION_CONVERTTONEWSKILLACTION_OFFSET))(nullptr);
		}

		::System::Boolean _UpdateRootMotion_b__65_3(::MX::Logic::BattleEntities::GroundObstacle* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::BattleEntities::GroundObstacle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_ACTIONS_NEWSKILLACTION__UPDATEROOTMOTION_B__65_3_OFFSET))(arg, nullptr);
		}

		::System::Void Interrupt()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_ACTIONS_NEWSKILLACTION_INTERRUPT_OFFSET))(nullptr);
		}

		::MX::GameData::DAO::Battle::SkillEntityDAO* get_MainEntityData()
		{
			return ((::MX::GameData::DAO::Battle::SkillEntityDAO*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_ACTIONS_NEWSKILLACTION_GET_MAINENTITYDATA_OFFSET))(nullptr);
		}

		::System::Void set_Angle(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_ACTIONS_NEWSKILLACTION_SET_ANGLE_OFFSET))(arg, nullptr);
		}

		::MX::Logic::Skills::TargetSortRule* get_PrimarySortRule()
		{
			return ((::MX::Logic::Skills::TargetSortRule*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_ACTIONS_NEWSKILLACTION_GET_PRIMARYSORTRULE_OFFSET))(nullptr);
		}

		::System::Boolean _UpdateRootMotion_b__65_2(::MX::Logic::BattleEntities::GroundObstacle* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::BattleEntities::GroundObstacle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_ACTIONS_NEWSKILLACTION__UPDATEROOTMOTION_B__65_2_OFFSET))(arg, nullptr);
		}

		::System::Boolean _UpdateRootMotion_b__65_0(::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_ACTIONS_NEWSKILLACTION__UPDATEROOTMOTION_B__65_0_OFFSET))(arg, nullptr);
		}

		::System::Void set_MinRange(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_ACTIONS_NEWSKILLACTION_SET_MINRANGE_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_Range()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_ACTIONS_NEWSKILLACTION_GET_RANGE_OFFSET))(nullptr);
		}

		::System::Boolean _UpdateRootMotion_b__65_1(::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_ACTIONS_NEWSKILLACTION__UPDATEROOTMOTION_B__65_1_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_MinRange()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_ACTIONS_NEWSKILLACTION_GET_MINRANGE_OFFSET))(nullptr);
		}

		::MX::Logic::Data::RootMotionFrame* get_RootMotionFrame()
		{
			return ((::MX::Logic::Data::RootMotionFrame*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_ACTIONS_NEWSKILLACTION_GET_ROOTMOTIONFRAME_OFFSET))(nullptr);
		}

		::System::Void Enter(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_ACTIONS_NEWSKILLACTION_ENTER_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_Angle()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_ACTIONS_NEWSKILLACTION_GET_ANGLE_OFFSET))(nullptr);
		}

		::System::Void set_PrimarySkillApplyType(::MX::Logic::Skills::SkillApplyType* arg)
		{
			((::System::Void(*)(::MX::Logic::Skills::SkillApplyType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_ACTIONS_NEWSKILLACTION_SET_PRIMARYSKILLAPPLYTYPE_OFFSET))(arg, nullptr);
		}

	};
}

