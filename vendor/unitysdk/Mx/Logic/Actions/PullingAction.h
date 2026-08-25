#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine { class Vector2; }
namespace MX::Core::Math { class TransitionType; }
namespace MX::Logic::Battles { class Battle; }
namespace MX::Logic::BattleEntities { class O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4; }
namespace MX::Logic::BattleEntities { class BehaviorType; }

#define MX_LOGIC_ACTIONS_PULLINGACTION_SETPROPERTY_OFFSET UNITYSDK_OFFSET(0x10F14A0)
#define MX_LOGIC_ACTIONS_PULLINGACTION_ENTER_OFFSET UNITYSDK_OFFSET(0x10F14C0)
#define MX_LOGIC_ACTIONS_PULLINGACTION_UPDATE_OFFSET UNITYSDK_OFFSET(0x10F1680)
#define MX_LOGIC_ACTIONS_PULLINGACTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x10F17B0)
#define MX_LOGIC_ACTIONS_PULLINGACTION_GET_PROGRESSRATE_OFFSET UNITYSDK_OFFSET(0x10F1790)
#define MX_LOGIC_ACTIONS_PULLINGACTION_LEAVE_OFFSET UNITYSDK_OFFSET(0x10F1800)

namespace MX::Logic::Actions
{
	inline static constexpr unsigned int PullingAction_TypeDefinitionIndex = 13022;

	class PullingAction : public Il2CppObject
	{
	public:
		::UnityEngine::Vector2* attractionPos; // 0x50
		::UnityEngine::Vector2* startPos; // 0x58
		::UnityEngine::Vector2* endPos; // 0x60
		::System::Single offsetDistance; // 0x68
		::UnityEngine::Vector2* direction; // 0x6C
		::MX::Core::Math::TransitionType* transition; // 0x74

		::System::Void SetProperty(::System::Int32 arg, ::UnityEngine::Vector2* arg2, ::System::Single arg3, ::MX::Core::Math::TransitionType* arg4)
		{
			((::System::Void(*)(::System::Int32, ::UnityEngine::Vector2*, ::System::Single, ::MX::Core::Math::TransitionType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_ACTIONS_PULLINGACTION_SETPROPERTY_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void Enter(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_ACTIONS_PULLINGACTION_ENTER_OFFSET))(arg, nullptr);
		}

		::System::Void Update(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_ACTIONS_PULLINGACTION_UPDATE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4* arg, ::MX::Logic::BattleEntities::BehaviorType* arg2)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4*, ::MX::Logic::BattleEntities::BehaviorType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_ACTIONS_PULLINGACTION_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Single get_ProgressRate()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_ACTIONS_PULLINGACTION_GET_PROGRESSRATE_OFFSET))(nullptr);
		}

		::System::Void Leave()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_ACTIONS_PULLINGACTION_LEAVE_OFFSET))(nullptr);
		}

	};
}

