#pragma once
#include "../../../../unitysdk.h"

namespace MX::Logic::Skills::Passive { class PassiveSkillTargetType; }

namespace MX::Logic::Skills::Passive
{
	inline static constexpr unsigned int PassiveSkillTargetType_TypeDefinitionIndex = 14669;

	class PassiveSkillTargetType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::MX::Logic::Skills::Passive::PassiveSkillTargetType* None; // 0x0
		::MX::Logic::Skills::Passive::PassiveSkillTargetType* UseTriggerSource; // 0x0
		::MX::Logic::Skills::Passive::PassiveSkillTargetType* UseTriggerTarget; // 0x0
		::MX::Logic::Skills::Passive::PassiveSkillTargetType* UseSkillEntityTargetingRule; // 0x0
		::MX::Logic::Skills::Passive::PassiveSkillTargetType* UseTriggerTargetExceptSelf; // 0x0

	};
}

