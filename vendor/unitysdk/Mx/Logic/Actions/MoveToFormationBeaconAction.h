#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::BattleEntities { class ForceMoveCommandInfo; }
namespace MX::Logic::Battles { class GroundFormationBeacon; }
namespace MX::Logic::Actions { class ActionState; }
namespace MX::Logic::Battles { class Battle; }
namespace MX::Logic::BattleEntities { class O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4; }
namespace MX::Logic::BattleEntities { class BehaviorType; }

#define MX_LOGIC_ACTIONS_MOVETOFORMATIONBEACONACTION_SET_ORIGINALFORCEMOVECOMMANDINFO_OFFSET UNITYSDK_OFFSET(0x10EED00)
#define MX_LOGIC_ACTIONS_MOVETOFORMATIONBEACONACTION_LEAVE_OFFSET UNITYSDK_OFFSET(0x10EED20)
#define MX_LOGIC_ACTIONS_MOVETOFORMATIONBEACONACTION_PROCESSINSTANTMOVE_OFFSET UNITYSDK_OFFSET(0x10EED50)
#define MX_LOGIC_ACTIONS_MOVETOFORMATIONBEACONACTION_GET_ORIGINALFORCEMOVECOMMANDINFO_OFFSET UNITYSDK_OFFSET(0x10EF200)
#define MX_LOGIC_ACTIONS_MOVETOFORMATIONBEACONACTION__MOVE_B__17_1_OFFSET UNITYSDK_OFFSET(0x10EF210)
#define MX_LOGIC_ACTIONS_MOVETOFORMATIONBEACONACTION_ENTER_OFFSET UNITYSDK_OFFSET(0x10EF300)
#define MX_LOGIC_ACTIONS_MOVETOFORMATIONBEACONACTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x10EF560)
#define MX_LOGIC_ACTIONS_MOVETOFORMATIONBEACONACTION_UPDATETARGETFOUND_OFFSET UNITYSDK_OFFSET(0x10EF5B0)
#define MX_LOGIC_ACTIONS_MOVETOFORMATIONBEACONACTION_UPDATE_OFFSET UNITYSDK_OFFSET(0x10EF6C0)
#define MX_LOGIC_ACTIONS_MOVETOFORMATIONBEACONACTION_UPDATEACTIONUNMOUNTWEAPON_OFFSET UNITYSDK_OFFSET(0x10F0710)
#define MX_LOGIC_ACTIONS_MOVETOFORMATIONBEACONACTION_SETMOVECOMPLETE_OFFSET UNITYSDK_OFFSET(0x10F0810)
#define MX_LOGIC_ACTIONS_MOVETOFORMATIONBEACONACTION_SET_MOVEENDNORMAL_OFFSET UNITYSDK_OFFSET(0x10F0920)
#define MX_LOGIC_ACTIONS_MOVETOFORMATIONBEACONACTION_GET_MOVEENDNORMAL_OFFSET UNITYSDK_OFFSET(0x10F0930)
#define MX_LOGIC_ACTIONS_MOVETOFORMATIONBEACONACTION__MOVE_B__17_0_OFFSET UNITYSDK_OFFSET(0x10F0940)
#define MX_LOGIC_ACTIONS_MOVETOFORMATIONBEACONACTION_UPDATEACTIONMOVEEND_OFFSET UNITYSDK_OFFSET(0x10EFDB0)
#define MX_LOGIC_ACTIONS_MOVETOFORMATIONBEACONACTION_MOVE_OFFSET UNITYSDK_OFFSET(0x10EFE90)

namespace MX::Logic::Actions
{
	inline static constexpr unsigned int MoveToFormationBeaconAction_TypeDefinitionIndex = 13019;

	class MoveToFormationBeaconAction : public ::TriInspector::ValidateInputAttribute
	{
	public:
		::MX::Logic::BattleEntities::ForceMoveCommandInfo* _OriginalForceMoveCommandInfo_k__BackingField; // 0x100
		::MX::Logic::Battles::GroundFormationBeacon* formationBeacon; // 0x108
		::System::Boolean isWaitOtherCharacter; // 0x110
		::MX::Logic::Actions::ActionState* _MoveEndNormal_k__BackingField; // 0x114

		::System::Void set_OriginalForceMoveCommandInfo(::MX::Logic::BattleEntities::ForceMoveCommandInfo* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::ForceMoveCommandInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_ACTIONS_MOVETOFORMATIONBEACONACTION_SET_ORIGINALFORCEMOVECOMMANDINFO_OFFSET))(arg, nullptr);
		}

		::System::Void Leave()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_ACTIONS_MOVETOFORMATIONBEACONACTION_LEAVE_OFFSET))(nullptr);
		}

		::System::Boolean ProcessInstantMove(::MX::Logic::Battles::Battle* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_ACTIONS_MOVETOFORMATIONBEACONACTION_PROCESSINSTANTMOVE_OFFSET))(arg, nullptr);
		}

		::MX::Logic::BattleEntities::ForceMoveCommandInfo* get_OriginalForceMoveCommandInfo()
		{
			return ((::MX::Logic::BattleEntities::ForceMoveCommandInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_ACTIONS_MOVETOFORMATIONBEACONACTION_GET_ORIGINALFORCEMOVECOMMANDINFO_OFFSET))(nullptr);
		}

		::System::Boolean _Move_b__17_1(::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_ACTIONS_MOVETOFORMATIONBEACONACTION__MOVE_B__17_1_OFFSET))(arg, nullptr);
		}

		::System::Void Enter(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_ACTIONS_MOVETOFORMATIONBEACONACTION_ENTER_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4* arg, ::MX::Logic::BattleEntities::BehaviorType* arg2)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4*, ::MX::Logic::BattleEntities::BehaviorType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_ACTIONS_MOVETOFORMATIONBEACONACTION_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean UpdateTargetFound(::MX::Logic::Battles::Battle* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_ACTIONS_MOVETOFORMATIONBEACONACTION_UPDATETARGETFOUND_OFFSET))(arg, nullptr);
		}

		::System::Void Update(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_ACTIONS_MOVETOFORMATIONBEACONACTION_UPDATE_OFFSET))(arg, nullptr);
		}

		::System::Boolean UpdateActionUnmountWeapon(::MX::Logic::Battles::Battle* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_ACTIONS_MOVETOFORMATIONBEACONACTION_UPDATEACTIONUNMOUNTWEAPON_OFFSET))(arg, nullptr);
		}

		::System::Void SetMoveComplete(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_ACTIONS_MOVETOFORMATIONBEACONACTION_SETMOVECOMPLETE_OFFSET))(arg, nullptr);
		}

		::System::Void set_MoveEndNormal(::MX::Logic::Actions::ActionState* arg)
		{
			((::System::Void(*)(::MX::Logic::Actions::ActionState*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_ACTIONS_MOVETOFORMATIONBEACONACTION_SET_MOVEENDNORMAL_OFFSET))(arg, nullptr);
		}

		::MX::Logic::Actions::ActionState* get_MoveEndNormal()
		{
			return ((::MX::Logic::Actions::ActionState*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_ACTIONS_MOVETOFORMATIONBEACONACTION_GET_MOVEENDNORMAL_OFFSET))(nullptr);
		}

		::System::Boolean _Move_b__17_0(::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_ACTIONS_MOVETOFORMATIONBEACONACTION__MOVE_B__17_0_OFFSET))(arg, nullptr);
		}

		::System::Boolean UpdateActionMoveEnd(::MX::Logic::Battles::Battle* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_ACTIONS_MOVETOFORMATIONBEACONACTION_UPDATEACTIONMOVEEND_OFFSET))(arg, nullptr);
		}

		::System::Boolean Move(::MX::Logic::Battles::Battle* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_ACTIONS_MOVETOFORMATIONBEACONACTION_MOVE_OFFSET))(arg, nullptr);
		}

	};
}

