#pragma once
#include "../../../../unitysdk.h"

namespace MX::Logic::BattleEntities { class BattleEntity; }
namespace MX::Logic::Skills::Passive { class PassiveSkill; }
namespace MX::Logic::Battles { class Battle; }

#define MX_LOGIC_SKILLS_PASSIVE_IMMEDIATEEXECUTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x1402C50)
#define MX_LOGIC_SKILLS_PASSIVE_IMMEDIATEEXECUTION_UPDATE_OFFSET UNITYSDK_OFFSET(0x1402D40)
#define MX_LOGIC_SKILLS_PASSIVE_IMMEDIATEEXECUTION_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1402E10)

namespace MX::Logic::Skills::Passive
{
	inline static constexpr unsigned int ImmediateExecution_TypeDefinitionIndex = 14666;

	class ImmediateExecution : public Il2CppObject
	{
	public:
		::System::Void .ctor(::MX::Logic::BattleEntities::BattleEntity* arg, ::MX::Logic::Skills::Passive::PassiveSkill* arg2)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::Skills::Passive::PassiveSkill*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_IMMEDIATEEXECUTION_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Update(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_IMMEDIATEEXECUTION_UPDATE_OFFSET))(arg, nullptr);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_IMMEDIATEEXECUTION_EVALUATE_OFFSET))(nullptr);
		}

	};
}

