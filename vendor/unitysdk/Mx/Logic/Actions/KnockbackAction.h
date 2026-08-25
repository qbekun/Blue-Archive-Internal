#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine { class Vector2; }
namespace MX::Core::Math { class TransitionType; }
namespace MX::Logic::Battles { class Battle; }
namespace MX::Logic::BattleEntities { class O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4; }
namespace MX::Logic::BattleEntities { class BehaviorType; }

#define MX_LOGIC_ACTIONS_KNOCKBACKACTION_UPDATE_OFFSET UNITYSDK_OFFSET(0x10EDBD0)
#define MX_LOGIC_ACTIONS_KNOCKBACKACTION_ENTER_OFFSET UNITYSDK_OFFSET(0x10EDCF0)
#define MX_LOGIC_ACTIONS_KNOCKBACKACTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x10EDD60)
#define MX_LOGIC_ACTIONS_KNOCKBACKACTION_LEAVE_OFFSET UNITYSDK_OFFSET(0x10EDE30)
#define MX_LOGIC_ACTIONS_KNOCKBACKACTION_SETPROPERTY_OFFSET UNITYSDK_OFFSET(0x10EDEE0)
#define MX_LOGIC_ACTIONS_KNOCKBACKACTION_GET_PROGRESSRATE_OFFSET UNITYSDK_OFFSET(0x10EDCD0)

namespace MX::Logic::Actions
{
	inline static constexpr unsigned int KnockbackAction_TypeDefinitionIndex = 13017;

	class KnockbackAction : public Il2CppObject
	{
	public:
		::UnityEngine::Vector2* startPos; // 0x50
		::UnityEngine::Vector2* endPos; // 0x58
		::System::Single knockbackDistance; // 0x60
		::UnityEngine::Vector2* knockbackDirection; // 0x64
		::MX::Core::Math::TransitionType* transitionType; // 0x6C

		::System::Void Update(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_ACTIONS_KNOCKBACKACTION_UPDATE_OFFSET))(arg, nullptr);
		}

		::System::Void Enter(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_ACTIONS_KNOCKBACKACTION_ENTER_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4* arg, ::MX::Logic::BattleEntities::BehaviorType* arg2)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4*, ::MX::Logic::BattleEntities::BehaviorType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_ACTIONS_KNOCKBACKACTION_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Leave()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_ACTIONS_KNOCKBACKACTION_LEAVE_OFFSET))(nullptr);
		}

		::System::Void SetProperty(::System::Int32 arg, ::System::Single arg2, ::UnityEngine::Vector2* arg3, ::MX::Core::Math::TransitionType* arg4)
		{
			((::System::Void(*)(::System::Int32, ::System::Single, ::UnityEngine::Vector2*, ::MX::Core::Math::TransitionType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_ACTIONS_KNOCKBACKACTION_SETPROPERTY_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Single get_ProgressRate()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_ACTIONS_KNOCKBACKACTION_GET_PROGRESSRATE_OFFSET))(nullptr);
		}

	};
}

