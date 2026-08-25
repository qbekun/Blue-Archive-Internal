#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::BattleEntities { class ForceMoveCommandInfo; }
namespace MX::Logic::Battles { class Battle; }
namespace MX::Logic::BattleEntities { class O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4; }
namespace MX::Logic::BattleEntities { class BehaviorType; }

#define MX_LOGIC_ACTIONS_ENTERGROUNDACTION_ENTER_OFFSET UNITYSDK_OFFSET(0x10EB510)
#define MX_LOGIC_ACTIONS_ENTERGROUNDACTION_INTERRUPT_OFFSET UNITYSDK_OFFSET(0x10EB5F0)
#define MX_LOGIC_ACTIONS_ENTERGROUNDACTION_UPDATE_OFFSET UNITYSDK_OFFSET(0x10EB6C0)
#define MX_LOGIC_ACTIONS_ENTERGROUNDACTION_UPDATEACTIONAPPEAR_OFFSET UNITYSDK_OFFSET(0x10EB740)
#define MX_LOGIC_ACTIONS_ENTERGROUNDACTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x10EBDE0)
#define MX_LOGIC_ACTIONS_ENTERGROUNDACTION_UPDATEACTIONMOVE_OFFSET UNITYSDK_OFFSET(0x10EB850)
#define MX_LOGIC_ACTIONS_ENTERGROUNDACTION_MOVE_OFFSET UNITYSDK_OFFSET(0x10EB930)
#define MX_LOGIC_ACTIONS_ENTERGROUNDACTION_SETMOVECOMPLETE_OFFSET UNITYSDK_OFFSET(0x10EBE40)

namespace MX::Logic::Actions
{
	inline static constexpr unsigned int EnterGroundAction_TypeDefinitionIndex = 13009;

	class EnterGroundAction : public ::TriInspector::ValidateInputAttribute
	{
	public:
		::System::Int32 appearFrameDuration; // 0x100
		::System::Int32 currentSpawnMoveIndex; // 0x104
		::MX::Logic::BattleEntities::ForceMoveCommandInfo* spawnMoveInfo; // 0x108

		::System::Void Enter(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_ACTIONS_ENTERGROUNDACTION_ENTER_OFFSET))(arg, nullptr);
		}

		::System::Void Interrupt()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_ACTIONS_ENTERGROUNDACTION_INTERRUPT_OFFSET))(nullptr);
		}

		::System::Void Update(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_ACTIONS_ENTERGROUNDACTION_UPDATE_OFFSET))(arg, nullptr);
		}

		::System::Boolean UpdateActionAppear(::MX::Logic::Battles::Battle* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_ACTIONS_ENTERGROUNDACTION_UPDATEACTIONAPPEAR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4* arg, ::MX::Logic::BattleEntities::BehaviorType* arg2)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4*, ::MX::Logic::BattleEntities::BehaviorType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_ACTIONS_ENTERGROUNDACTION_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean UpdateActionMove(::MX::Logic::Battles::Battle* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_ACTIONS_ENTERGROUNDACTION_UPDATEACTIONMOVE_OFFSET))(arg, nullptr);
		}

		::System::Boolean Move(::MX::Logic::Battles::Battle* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_ACTIONS_ENTERGROUNDACTION_MOVE_OFFSET))(arg, nullptr);
		}

		::System::Void SetMoveComplete(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_ACTIONS_ENTERGROUNDACTION_SETMOVECOMPLETE_OFFSET))(arg, nullptr);
		}

	};
}

