#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::BattleEntities { class BattleEntity; }
namespace MX::Logic::BattleEntities { class BehaviorType; }

#define MX_LOGIC_ACTIONS_INTERACTIONTSAACTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x10ED860)
#define MX_LOGIC_ACTIONS_INTERACTIONTSAACTION_LEAVE_OFFSET UNITYSDK_OFFSET(0x10ED980)

namespace MX::Logic::Actions
{
	inline static constexpr unsigned int InteractionTSAAction_TypeDefinitionIndex = 13015;

	class InteractionTSAAction : public Il2CppObject
	{
	public:
		::System::Void .ctor(::MX::Logic::BattleEntities::BattleEntity* arg, ::MX::Logic::BattleEntities::BehaviorType* arg2)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::BattleEntities::BehaviorType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_ACTIONS_INTERACTIONTSAACTION_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Leave()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_ACTIONS_INTERACTIONTSAACTION_LEAVE_OFFSET))(nullptr);
		}

	};
}

