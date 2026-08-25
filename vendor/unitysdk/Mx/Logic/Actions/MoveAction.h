#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::AI { class SteeringTypes; }
namespace MX::Logic::Battles { class Battle; }
namespace UnityEngine { class Vector2; }
namespace MX::Logic::BattleEntities { class O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4; }
namespace MX::Logic::BattleEntities { class BehaviorType; }

#define MX_LOGIC_ACTIONS_MOVEACTION_UPDATEPOSITIONBYSTEERINGFORCE_OFFSET UNITYSDK_OFFSET(0x10EAD80)
#define MX_LOGIC_ACTIONS_MOVEACTION_HASSTEERING_OFFSET UNITYSDK_OFFSET(0x10EAE10)
#define MX_LOGIC_ACTIONS_MOVEACTION_TRYTOACCUMULATEFORCE_OFFSET UNITYSDK_OFFSET(0x10EAE20)
#define MX_LOGIC_ACTIONS_MOVEACTION_UPDATE_OFFSET UNITYSDK_OFFSET(0x10EAFF0)
#define MX_LOGIC_ACTIONS_MOVEACTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x10EB0F0)
#define MX_LOGIC_ACTIONS_MOVEACTION_CALCFORCE_OFFSET UNITYSDK_OFFSET(0x10EB140)

namespace MX::Logic::Actions
{
	inline static constexpr unsigned int MoveAction_TypeDefinitionIndex = 13005;

	class MoveAction : public Il2CppObject
	{
	public:
		::MX::Logic::AI::SteeringTypes* activeSteering; // 0x50

		::System::Void UpdatePositionBySteeringForce(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_ACTIONS_MOVEACTION_UPDATEPOSITIONBYSTEERINGFORCE_OFFSET))(arg, nullptr);
		}

		::System::Boolean HasSteering(::MX::Logic::AI::SteeringTypes* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::AI::SteeringTypes*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_ACTIONS_MOVEACTION_HASSTEERING_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryToAccumulateForce(::UnityEngine::Vector2&* arg, ::UnityEngine::Vector2* arg2, ::System::Single arg3)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector2&*, ::UnityEngine::Vector2*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_ACTIONS_MOVEACTION_TRYTOACCUMULATEFORCE_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void Update(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_ACTIONS_MOVEACTION_UPDATE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4* arg, ::MX::Logic::BattleEntities::BehaviorType* arg2)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4*, ::MX::Logic::BattleEntities::BehaviorType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_ACTIONS_MOVEACTION_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::UnityEngine::Vector2* CalcForce(::MX::Logic::Battles::Battle* arg)
		{
			return ((::UnityEngine::Vector2*(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_ACTIONS_MOVEACTION_CALCFORCE_OFFSET))(arg, nullptr);
		}

	};
}

