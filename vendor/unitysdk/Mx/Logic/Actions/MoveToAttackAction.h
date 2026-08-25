#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Battles { class Battle; }
namespace MX::Logic::BattleEntities { class O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4; }
namespace MX::Logic::BattleEntities { class BehaviorType; }

#define MX_LOGIC_ACTIONS_MOVETOATTACKACTION_UPDATE_OFFSET UNITYSDK_OFFSET(0x10EDFD0)
#define MX_LOGIC_ACTIONS_MOVETOATTACKACTION_MOVE_OFFSET UNITYSDK_OFFSET(0x10EE3B0)
#define MX_LOGIC_ACTIONS_MOVETOATTACKACTION_ENTER_OFFSET UNITYSDK_OFFSET(0x10EEB20)
#define MX_LOGIC_ACTIONS_MOVETOATTACKACTION_INTERRUPT_OFFSET UNITYSDK_OFFSET(0x10EEC90)
#define MX_LOGIC_ACTIONS_MOVETOATTACKACTION_UPDATEACTIONMOVEEND_OFFSET UNITYSDK_OFFSET(0x10EE1F0)
#define MX_LOGIC_ACTIONS_MOVETOATTACKACTION_UPDATETARGETLOST_OFFSET UNITYSDK_OFFSET(0x10EE2F0)
#define MX_LOGIC_ACTIONS_MOVETOATTACKACTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x10EECD0)

namespace MX::Logic::Actions
{
	inline static constexpr unsigned int MoveToAttackAction_TypeDefinitionIndex = 13018;

	class MoveToAttackAction : public ::TriInspector::ValidateInputAttribute
	{
	public:
		::System::Void Update(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_ACTIONS_MOVETOATTACKACTION_UPDATE_OFFSET))(arg, nullptr);
		}

		::System::Boolean Move(::MX::Logic::Battles::Battle* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_ACTIONS_MOVETOATTACKACTION_MOVE_OFFSET))(arg, nullptr);
		}

		::System::Void Enter(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_ACTIONS_MOVETOATTACKACTION_ENTER_OFFSET))(arg, nullptr);
		}

		::System::Void Interrupt()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_ACTIONS_MOVETOATTACKACTION_INTERRUPT_OFFSET))(nullptr);
		}

		::System::Boolean UpdateActionMoveEnd(::MX::Logic::Battles::Battle* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_ACTIONS_MOVETOATTACKACTION_UPDATEACTIONMOVEEND_OFFSET))(arg, nullptr);
		}

		::System::Boolean UpdateTargetLost(::MX::Logic::Battles::Battle* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_ACTIONS_MOVETOATTACKACTION_UPDATETARGETLOST_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4* arg, ::MX::Logic::BattleEntities::BehaviorType* arg2)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4*, ::MX::Logic::BattleEntities::BehaviorType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_ACTIONS_MOVETOATTACKACTION_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

	};
}

