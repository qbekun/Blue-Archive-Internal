#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::BattleEntities { class O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4; }
namespace UnityEngine { class Vector2; }
namespace MX::Logic::Battles { class Battle; }
namespace MX::Logic::BattleEntities { class EntityId; }
namespace MX::Logic::BattleEntities { class BehaviorType; }
namespace MX::Logic::Actions { class ActionProgress; }

#define MX_LOGIC_ACTIONS_CHARMEDACTION_PROCESSMOVE_OFFSET UNITYSDK_OFFSET(0x10E9E90)
#define MX_LOGIC_ACTIONS_CHARMEDACTION_LEAVE_OFFSET UNITYSDK_OFFSET(0x10EA4D0)
#define MX_LOGIC_ACTIONS_CHARMEDACTION_GET_MOVESPEEDRATE_OFFSET UNITYSDK_OFFSET(0x10EA610)
#define MX_LOGIC_ACTIONS_CHARMEDACTION_SETNEWTARGET_OFFSET UNITYSDK_OFFSET(0x10EA620)
#define MX_LOGIC_ACTIONS_CHARMEDACTION_ENTER_OFFSET UNITYSDK_OFFSET(0x10EA780)
#define MX_LOGIC_ACTIONS_CHARMEDACTION_SET_MOVESPEEDRATE_OFFSET UNITYSDK_OFFSET(0x10EA7A0)
#define MX_LOGIC_ACTIONS_CHARMEDACTION_CHECKEXPIREDCOMMAND_OFFSET UNITYSDK_OFFSET(0x10EA510)
#define MX_LOGIC_ACTIONS_CHARMEDACTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x10EA7C0)
#define MX_LOGIC_ACTIONS_CHARMEDACTION_GETMOVEVECTOR_OFFSET UNITYSDK_OFFSET(0x10EA910)
#define MX_LOGIC_ACTIONS_CHARMEDACTION_GET_ACTIONPROGRESS_OFFSET UNITYSDK_OFFSET(0x10EABB0)
#define MX_LOGIC_ACTIONS_CHARMEDACTION_UPDATE_OFFSET UNITYSDK_OFFSET(0x10EAC20)
#define MX_LOGIC_ACTIONS_CHARMEDACTION_GET_TARGETPOSITION_OFFSET UNITYSDK_OFFSET(0x10EAB10)

namespace MX::Logic::Actions
{
	inline static constexpr unsigned int CharmedAction_TypeDefinitionIndex = 13003;

	class CharmedAction : public Il2CppObject
	{
	public:
		::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4* character; // 0x50
		::System::Int64 _MoveSpeedRate_k__BackingField; // 0x58
		::UnityEngine::Vector2* lastValidTargetPosition; // 0x60
		Il2CppObject* commandList; // 0x68

		::System::Void ProcessMove(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_ACTIONS_CHARMEDACTION_PROCESSMOVE_OFFSET))(arg, nullptr);
		}

		::System::Void Leave()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_ACTIONS_CHARMEDACTION_LEAVE_OFFSET))(nullptr);
		}

		::System::Int64 get_MoveSpeedRate()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_ACTIONS_CHARMEDACTION_GET_MOVESPEEDRATE_OFFSET))(nullptr);
		}

		::System::Void SetNewTarget(::MX::Logic::Battles::Battle* arg, ::MX::Logic::BattleEntities::EntityId* arg2, ::System::Int64 arg3, ::System::Int32 arg4)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::BattleEntities::EntityId*, ::System::Int64, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_ACTIONS_CHARMEDACTION_SETNEWTARGET_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void Enter(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_ACTIONS_CHARMEDACTION_ENTER_OFFSET))(arg, nullptr);
		}

		::System::Void set_MoveSpeedRate(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_ACTIONS_CHARMEDACTION_SET_MOVESPEEDRATE_OFFSET))(arg, nullptr);
		}

		::System::Void CheckExpiredCommand()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_ACTIONS_CHARMEDACTION_CHECKEXPIREDCOMMAND_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4* arg, ::MX::Logic::BattleEntities::BehaviorType* arg2)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4*, ::MX::Logic::BattleEntities::BehaviorType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_ACTIONS_CHARMEDACTION_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::UnityEngine::Vector2* GetMoveVector(::MX::Logic::Battles::Battle* arg)
		{
			return ((::UnityEngine::Vector2*(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_ACTIONS_CHARMEDACTION_GETMOVEVECTOR_OFFSET))(arg, nullptr);
		}

		::MX::Logic::Actions::ActionProgress* get_ActionProgress()
		{
			return ((::MX::Logic::Actions::ActionProgress*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_ACTIONS_CHARMEDACTION_GET_ACTIONPROGRESS_OFFSET))(nullptr);
		}

		::System::Void Update(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_ACTIONS_CHARMEDACTION_UPDATE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector2* get_targetPosition()
		{
			return ((::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_ACTIONS_CHARMEDACTION_GET_TARGETPOSITION_OFFSET))(nullptr);
		}

	};
}

