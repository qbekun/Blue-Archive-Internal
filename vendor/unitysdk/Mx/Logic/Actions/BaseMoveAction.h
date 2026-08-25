#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Actions { class ActionState; }
namespace MX::Logic::BattleEntities { class ObstaclePosition; }
namespace MX::Logic::Data { class RootMotionFrame; }
namespace UnityEngine { class Vector2; }
namespace MX::Logic::BattleEntities { class O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4; }
class GetToVectorDelegate;
class SetNearestNodeDelegate;
class GroundNode;
namespace MX::Logic::Battles { class Battle; }
namespace MX::Logic::BattleEntities { class BehaviorType; }

#define MX_LOGIC_ACTIONS_BASEMOVEACTION_SET_ACTIONMOVEENDROOTMOTION_OFFSET UNITYSDK_OFFSET(0x10E6200)
#define MX_LOGIC_ACTIONS_BASEMOVEACTION_SETNEARESTNODEWITHOUTCHECKTSSBLOCKED_OFFSET UNITYSDK_OFFSET(0x10E6210)
#define MX_LOGIC_ACTIONS_BASEMOVEACTION_SET_ACTIONUNMOUNTWEAPON_OFFSET UNITYSDK_OFFSET(0x10E6270)
#define MX_LOGIC_ACTIONS_BASEMOVEACTION_PROCESSMOVETOCURRENTPATHINDEX_OFFSET UNITYSDK_OFFSET(0x10E6280)
#define MX_LOGIC_ACTIONS_BASEMOVEACTION_SET_ACTIONAPPEAR_OFFSET UNITYSDK_OFFSET(0x10E8D50)
#define MX_LOGIC_ACTIONS_BASEMOVEACTION__PROCESSMOVETOCURRENTPATHINDEX_G__ISNOTOBSTACLEPOSITION|67_0_OFFSET UNITYSDK_OFFSET(0x10E7610)
#define MX_LOGIC_ACTIONS_BASEMOVEACTION_SETPOSITIONCORRECTION_OFFSET UNITYSDK_OFFSET(0x10E7670)
#define MX_LOGIC_ACTIONS_BASEMOVEACTION_UPDATEACTIONMOUNTWEAPON_OFFSET UNITYSDK_OFFSET(0x10E8D60)
#define MX_LOGIC_ACTIONS_BASEMOVEACTION_GETTOVECTORWITHOUTBEZIER_OFFSET UNITYSDK_OFFSET(0x10E80D0)
#define MX_LOGIC_ACTIONS_BASEMOVEACTION_CHECKANDSETJUMPSTATE_OFFSET UNITYSDK_OFFSET(0x10E8A10)
#define MX_LOGIC_ACTIONS_BASEMOVEACTION_GET_ACTIONMOVESTART_OFFSET UNITYSDK_OFFSET(0x10E8EE0)
#define MX_LOGIC_ACTIONS_BASEMOVEACTION_CHECKANDSETROOTMOTIONSTATE_OFFSET UNITYSDK_OFFSET(0x10E8200)
#define MX_LOGIC_ACTIONS_BASEMOVEACTION_CHECKANDRELEASEACTIONJUMP_OFFSET UNITYSDK_OFFSET(0x10E8EF0)
#define MX_LOGIC_ACTIONS_BASEMOVEACTION_GET_ACTIONMOVEENDROOTMOTION_OFFSET UNITYSDK_OFFSET(0x10E8F40)
#define MX_LOGIC_ACTIONS_BASEMOVEACTION_SETLOCK_OFFSET UNITYSDK_OFFSET(0x10E8E90)
#define MX_LOGIC_ACTIONS_BASEMOVEACTION_SETNEARESTNODEWITHCHECKTSSBLOCKED_OFFSET UNITYSDK_OFFSET(0x10E8F50)
#define MX_LOGIC_ACTIONS_BASEMOVEACTION_SET_ACTIONMOVEEND_OFFSET UNITYSDK_OFFSET(0x10E8F90)
#define MX_LOGIC_ACTIONS_BASEMOVEACTION_SET_ACTIONMOVEING_OFFSET UNITYSDK_OFFSET(0x10E8FA0)
#define MX_LOGIC_ACTIONS_BASEMOVEACTION_GET_ACTIONMOVEING_OFFSET UNITYSDK_OFFSET(0x10E8FB0)
#define MX_LOGIC_ACTIONS_BASEMOVEACTION_GETTOVECTORWITHBEZIERALWAYS_OFFSET UNITYSDK_OFFSET(0x10E7290)
#define MX_LOGIC_ACTIONS_BASEMOVEACTION_SET_ACTIONMOUNTWEAPON_OFFSET UNITYSDK_OFFSET(0x10E8FC0)
#define MX_LOGIC_ACTIONS_BASEMOVEACTION_ENTER_OFFSET UNITYSDK_OFFSET(0x10E8FD0)
#define MX_LOGIC_ACTIONS_BASEMOVEACTION_GETTOVECTORWITHBEZIER_OFFSET UNITYSDK_OFFSET(0x10E9100)
#define MX_LOGIC_ACTIONS_BASEMOVEACTION__PROCESSMOVETOCURRENTPATHINDEX_G__PROCESSMOVEENDMOTION|67_1_OFFSET UNITYSDK_OFFSET(0x10E8440)
#define MX_LOGIC_ACTIONS_BASEMOVEACTION_SET_ACTIONIDLE_OFFSET UNITYSDK_OFFSET(0x10E95A0)
#define MX_LOGIC_ACTIONS_BASEMOVEACTION_SETMOVECOMPLETE_OFFSET UNITYSDK_OFFSET(0x10E95B0)
#define MX_LOGIC_ACTIONS_BASEMOVEACTION_GET_ACTIONMOVEEND_OFFSET UNITYSDK_OFFSET(0x10E9670)
#define MX_LOGIC_ACTIONS_BASEMOVEACTION_GET_ACTIONUNMOUNTWEAPON_OFFSET UNITYSDK_OFFSET(0x10E9680)
#define MX_LOGIC_ACTIONS_BASEMOVEACTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x10E9690)
#define MX_LOGIC_ACTIONS_BASEMOVEACTION_GET_ACTIONJUMP_OFFSET UNITYSDK_OFFSET(0x10E99C0)
#define MX_LOGIC_ACTIONS_BASEMOVEACTION_SET_ACTIONJUMP_OFFSET UNITYSDK_OFFSET(0x10E99D0)
#define MX_LOGIC_ACTIONS_BASEMOVEACTION_UPDATEACTIONMOVESTART_OFFSET UNITYSDK_OFFSET(0x10E99E0)
#define MX_LOGIC_ACTIONS_BASEMOVEACTION_GET_ACTIONIDLE_OFFSET UNITYSDK_OFFSET(0x10E9A40)
#define MX_LOGIC_ACTIONS_BASEMOVEACTION_GET_ACTIONMOUNTWEAPON_OFFSET UNITYSDK_OFFSET(0x10E9A50)
#define MX_LOGIC_ACTIONS_BASEMOVEACTION_GET_ACTIONAPPEAR_OFFSET UNITYSDK_OFFSET(0x10E9A60)
#define MX_LOGIC_ACTIONS_BASEMOVEACTION_SET_ACTIONMOVESTART_OFFSET UNITYSDK_OFFSET(0x10E9A70)
#define MX_LOGIC_ACTIONS_BASEMOVEACTION_INTERRUPT_OFFSET UNITYSDK_OFFSET(0x10E9A80)
#define MX_LOGIC_ACTIONS_BASEMOVEACTION_UPDATEACTIONUNMOUNTWEAPON_OFFSET UNITYSDK_OFFSET(0x10E9AB0)

namespace MX::Logic::Actions
{
	inline static constexpr unsigned int BaseMoveAction_TypeDefinitionIndex = 13000;

	class BaseMoveAction : public Il2CppObject
	{
	public:
		::MX::Logic::Actions::ActionState* _ActionAppear_k__BackingField; // 0x50
		::MX::Logic::Actions::ActionState* _ActionMoveStart_k__BackingField; // 0x54
		::MX::Logic::Actions::ActionState* _ActionMoveIng_k__BackingField; // 0x58
		::MX::Logic::Actions::ActionState* _ActionMoveEnd_k__BackingField; // 0x5C
		::MX::Logic::Actions::ActionState* _ActionMoveEndRootMotion_k__BackingField; // 0x60
		::MX::Logic::Actions::ActionState* _ActionJump_k__BackingField; // 0x64
		::MX::Logic::Actions::ActionState* _ActionUnmountWeapon_k__BackingField; // 0x68
		::MX::Logic::Actions::ActionState* _ActionMountWeapon_k__BackingField; // 0x6C
		::MX::Logic::Actions::ActionState* _ActionIdle_k__BackingField; // 0x70
		::System::Int32 currentTargetIndexInPath; // 0x74
		::System::Int32 currentMoveRateInBezierPath; // 0x78
		Il2CppObject* currentPaths; // 0x80
		::MX::Logic::BattleEntities::ObstaclePosition* currentObstaclePosition; // 0x88
		::System::Int32 jumpStartFrame; // 0x90
		::System::Int32 moveEndFrame; // 0x94
		::MX::Logic::Data::RootMotionFrame* currentMoveEndRootMotion; // 0x98
		::System::Single currentMoveEndRootMotionFrameProgress; // 0xA0
		::System::Boolean isMoveEndRootMotionAvailable; // 0xA4
		::System::Int32 mountWeaponDuration; // 0xA8
		::System::Int32 unmountWeaponDuration; // 0xAC
		::System::Single weaponPhaseRemainingDuration; // 0xB0
		::System::Int32 lastPositionCheckElapsed; // 0xB4
		::UnityEngine::Vector2* positionCorrection; // 0xB8
		::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4* character; // 0xC0
		::System::Boolean checkTSSBlocked; // 0xC8
		GetToVectorDelegate* GetToVector; // 0xD0
		SetNearestNodeDelegate* SetNearestNode; // 0xD8
		::System::Boolean isRootMotionCheck; // 0xE0
		::System::Boolean forceUpdatePath; // 0xE1
		Il2CppObject* pathHistory; // 0xE8
		GroundNode* oldTargetNode; // 0xF0
		::System::Single moveCorrectionSkipRatio; // 0xF8
		::System::Single jumpMoveSpeedCorrection; // 0xFC

		::System::Void set_ActionMoveEndRootMotion(::MX::Logic::Actions::ActionState* arg)
		{
			((::System::Void(*)(::MX::Logic::Actions::ActionState*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_ACTIONS_BASEMOVEACTION_SET_ACTIONMOVEENDROOTMOTION_OFFSET))(arg, nullptr);
		}

		::System::Void SetNearestNodeWithoutCheckTSSBlocked(GroundNode* arg)
		{
			((::System::Void(*)(GroundNode*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_ACTIONS_BASEMOVEACTION_SETNEARESTNODEWITHOUTCHECKTSSBLOCKED_OFFSET))(arg, nullptr);
		}

		::System::Void set_ActionUnmountWeapon(::MX::Logic::Actions::ActionState* arg)
		{
			((::System::Void(*)(::MX::Logic::Actions::ActionState*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_ACTIONS_BASEMOVEACTION_SET_ACTIONUNMOUNTWEAPON_OFFSET))(arg, nullptr);
		}

		::System::Boolean ProcessMoveToCurrentPathIndex(::MX::Logic::Battles::Battle* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_ACTIONS_BASEMOVEACTION_PROCESSMOVETOCURRENTPATHINDEX_OFFSET))(arg, nullptr);
		}

		::System::Void set_ActionAppear(::MX::Logic::Actions::ActionState* arg)
		{
			((::System::Void(*)(::MX::Logic::Actions::ActionState*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_ACTIONS_BASEMOVEACTION_SET_ACTIONAPPEAR_OFFSET))(arg, nullptr);
		}

		::System::Boolean _ProcessMoveToCurrentPathIndex_g__IsNotObstaclePosition|67_0(<>c__DisplayClass67_0&* arg)
		{
			return ((::System::Boolean(*)(<>c__DisplayClass67_0&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_ACTIONS_BASEMOVEACTION__PROCESSMOVETOCURRENTPATHINDEX_G__ISNOTOBSTACLEPOSITION|67_0_OFFSET))(arg, nullptr);
		}

		::System::Void SetPositionCorrection(::MX::Logic::Battles::Battle* arg, ::UnityEngine::Vector2* arg2)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_ACTIONS_BASEMOVEACTION_SETPOSITIONCORRECTION_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean UpdateActionMountWeapon(::MX::Logic::Battles::Battle* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_ACTIONS_BASEMOVEACTION_UPDATEACTIONMOUNTWEAPON_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector2* GetToVectorWithoutBezier()
		{
			return ((::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_ACTIONS_BASEMOVEACTION_GETTOVECTORWITHOUTBEZIER_OFFSET))(nullptr);
		}

		::System::Void CheckAndSetJumpState()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_ACTIONS_BASEMOVEACTION_CHECKANDSETJUMPSTATE_OFFSET))(nullptr);
		}

		::MX::Logic::Actions::ActionState* get_ActionMoveStart()
		{
			return ((::MX::Logic::Actions::ActionState*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_ACTIONS_BASEMOVEACTION_GET_ACTIONMOVESTART_OFFSET))(nullptr);
		}

		::System::Void CheckAndSetRootMotionState(GroundNode* arg)
		{
			((::System::Void(*)(GroundNode*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_ACTIONS_BASEMOVEACTION_CHECKANDSETROOTMOTIONSTATE_OFFSET))(arg, nullptr);
		}

		::System::Void CheckAndReleaseActionJump()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_ACTIONS_BASEMOVEACTION_CHECKANDRELEASEACTIONJUMP_OFFSET))(nullptr);
		}

		::MX::Logic::Actions::ActionState* get_ActionMoveEndRootMotion()
		{
			return ((::MX::Logic::Actions::ActionState*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_ACTIONS_BASEMOVEACTION_GET_ACTIONMOVEENDROOTMOTION_OFFSET))(nullptr);
		}

		::System::Void SetLock(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_ACTIONS_BASEMOVEACTION_SETLOCK_OFFSET))(arg, nullptr);
		}

		::System::Void SetNearestNodeWithCheckTSSBlocked(GroundNode* arg)
		{
			((::System::Void(*)(GroundNode*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_ACTIONS_BASEMOVEACTION_SETNEARESTNODEWITHCHECKTSSBLOCKED_OFFSET))(arg, nullptr);
		}

		::System::Void set_ActionMoveEnd(::MX::Logic::Actions::ActionState* arg)
		{
			((::System::Void(*)(::MX::Logic::Actions::ActionState*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_ACTIONS_BASEMOVEACTION_SET_ACTIONMOVEEND_OFFSET))(arg, nullptr);
		}

		::System::Void set_ActionMoveIng(::MX::Logic::Actions::ActionState* arg)
		{
			((::System::Void(*)(::MX::Logic::Actions::ActionState*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_ACTIONS_BASEMOVEACTION_SET_ACTIONMOVEING_OFFSET))(arg, nullptr);
		}

		::MX::Logic::Actions::ActionState* get_ActionMoveIng()
		{
			return ((::MX::Logic::Actions::ActionState*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_ACTIONS_BASEMOVEACTION_GET_ACTIONMOVEING_OFFSET))(nullptr);
		}

		::UnityEngine::Vector2* GetToVectorWithBezierAlways()
		{
			return ((::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_ACTIONS_BASEMOVEACTION_GETTOVECTORWITHBEZIERALWAYS_OFFSET))(nullptr);
		}

		::System::Void set_ActionMountWeapon(::MX::Logic::Actions::ActionState* arg)
		{
			((::System::Void(*)(::MX::Logic::Actions::ActionState*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_ACTIONS_BASEMOVEACTION_SET_ACTIONMOUNTWEAPON_OFFSET))(arg, nullptr);
		}

		::System::Void Enter(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_ACTIONS_BASEMOVEACTION_ENTER_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector2* GetToVectorWithBezier()
		{
			return ((::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_ACTIONS_BASEMOVEACTION_GETTOVECTORWITHBEZIER_OFFSET))(nullptr);
		}

		::System::Boolean _ProcessMoveToCurrentPathIndex_g__ProcessMoveEndMotion|67_1(GroundNode* arg, <>c__DisplayClass67_0&* arg2)
		{
			return ((::System::Boolean(*)(GroundNode*, <>c__DisplayClass67_0&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_ACTIONS_BASEMOVEACTION__PROCESSMOVETOCURRENTPATHINDEX_G__PROCESSMOVEENDMOTION|67_1_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void set_ActionIdle(::MX::Logic::Actions::ActionState* arg)
		{
			((::System::Void(*)(::MX::Logic::Actions::ActionState*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_ACTIONS_BASEMOVEACTION_SET_ACTIONIDLE_OFFSET))(arg, nullptr);
		}

		::System::Void SetMoveComplete(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_ACTIONS_BASEMOVEACTION_SETMOVECOMPLETE_OFFSET))(arg, nullptr);
		}

		::MX::Logic::Actions::ActionState* get_ActionMoveEnd()
		{
			return ((::MX::Logic::Actions::ActionState*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_ACTIONS_BASEMOVEACTION_GET_ACTIONMOVEEND_OFFSET))(nullptr);
		}

		::MX::Logic::Actions::ActionState* get_ActionUnmountWeapon()
		{
			return ((::MX::Logic::Actions::ActionState*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_ACTIONS_BASEMOVEACTION_GET_ACTIONUNMOUNTWEAPON_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4* arg, ::MX::Logic::BattleEntities::BehaviorType* arg2)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4*, ::MX::Logic::BattleEntities::BehaviorType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_ACTIONS_BASEMOVEACTION_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::MX::Logic::Actions::ActionState* get_ActionJump()
		{
			return ((::MX::Logic::Actions::ActionState*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_ACTIONS_BASEMOVEACTION_GET_ACTIONJUMP_OFFSET))(nullptr);
		}

		::System::Void set_ActionJump(::MX::Logic::Actions::ActionState* arg)
		{
			((::System::Void(*)(::MX::Logic::Actions::ActionState*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_ACTIONS_BASEMOVEACTION_SET_ACTIONJUMP_OFFSET))(arg, nullptr);
		}

		::System::Boolean UpdateActionMoveStart(::MX::Logic::Battles::Battle* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_ACTIONS_BASEMOVEACTION_UPDATEACTIONMOVESTART_OFFSET))(arg, nullptr);
		}

		::MX::Logic::Actions::ActionState* get_ActionIdle()
		{
			return ((::MX::Logic::Actions::ActionState*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_ACTIONS_BASEMOVEACTION_GET_ACTIONIDLE_OFFSET))(nullptr);
		}

		::MX::Logic::Actions::ActionState* get_ActionMountWeapon()
		{
			return ((::MX::Logic::Actions::ActionState*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_ACTIONS_BASEMOVEACTION_GET_ACTIONMOUNTWEAPON_OFFSET))(nullptr);
		}

		::MX::Logic::Actions::ActionState* get_ActionAppear()
		{
			return ((::MX::Logic::Actions::ActionState*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_ACTIONS_BASEMOVEACTION_GET_ACTIONAPPEAR_OFFSET))(nullptr);
		}

		::System::Void set_ActionMoveStart(::MX::Logic::Actions::ActionState* arg)
		{
			((::System::Void(*)(::MX::Logic::Actions::ActionState*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_ACTIONS_BASEMOVEACTION_SET_ACTIONMOVESTART_OFFSET))(arg, nullptr);
		}

		::System::Void Interrupt()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_ACTIONS_BASEMOVEACTION_INTERRUPT_OFFSET))(nullptr);
		}

		::System::Boolean UpdateActionUnmountWeapon(::MX::Logic::Battles::Battle* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_ACTIONS_BASEMOVEACTION_UPDATEACTIONUNMOUNTWEAPON_OFFSET))(arg, nullptr);
		}

	};
}

