#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::BattleEntities { class BattleEntity; }
namespace MX::Logic::Battles { class Battle; }
namespace MX::Logic::BattleEntities { class BehaviorType; }

#define MX_LOGIC_ACTIONS_TSADYINGACTION_ENTER_OFFSET UNITYSDK_OFFSET(0x10EDA00)
#define MX_LOGIC_ACTIONS_TSADYINGACTION_SET_ATTACKER_OFFSET UNITYSDK_OFFSET(0x10EDA80)
#define MX_LOGIC_ACTIONS_TSADYINGACTION_GET_ATTACKER_OFFSET UNITYSDK_OFFSET(0x10EDA90)
#define MX_LOGIC_ACTIONS_TSADYINGACTION_LEAVE_OFFSET UNITYSDK_OFFSET(0x10EDAA0)
#define MX_LOGIC_ACTIONS_TSADYINGACTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x10EDB80)

namespace MX::Logic::Actions
{
	inline static constexpr unsigned int TSADyingAction_TypeDefinitionIndex = 13016;

	class TSADyingAction : public Il2CppObject
	{
	public:
		::MX::Logic::BattleEntities::BattleEntity* _Attacker_k__BackingField; // 0x50

		::System::Void Enter(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_ACTIONS_TSADYINGACTION_ENTER_OFFSET))(arg, nullptr);
		}

		::System::Void set_Attacker(::MX::Logic::BattleEntities::BattleEntity* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::BattleEntity*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_ACTIONS_TSADYINGACTION_SET_ATTACKER_OFFSET))(arg, nullptr);
		}

		::MX::Logic::BattleEntities::BattleEntity* get_Attacker()
		{
			return ((::MX::Logic::BattleEntities::BattleEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_ACTIONS_TSADYINGACTION_GET_ATTACKER_OFFSET))(nullptr);
		}

		::System::Void Leave()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_ACTIONS_TSADYINGACTION_LEAVE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Logic::BattleEntities::BattleEntity* arg, ::MX::Logic::BattleEntities::BehaviorType* arg2)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::BattleEntities::BehaviorType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_ACTIONS_TSADYINGACTION_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

	};
}

