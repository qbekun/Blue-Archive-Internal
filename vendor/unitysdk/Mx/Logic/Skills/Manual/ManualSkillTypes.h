#pragma once
#include "../../../../unitysdk.h"

namespace MX::Logic::Skills::Manual { class ManualSkillTypes; }

namespace MX::Logic::Skills::Manual
{
	inline static constexpr unsigned int ManualSkillTypes_TypeDefinitionIndex = 14673;

	class ManualSkillTypes : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::MX::Logic::Skills::Manual::ManualSkillTypes* None; // 0x0
		::MX::Logic::Skills::Manual::ManualSkillTypes* GroupBuff; // 0x0
		::MX::Logic::Skills::Manual::ManualSkillTypes* StrategyBuff; // 0x0
		::MX::Logic::Skills::Manual::ManualSkillTypes* EventBuff; // 0x0

	};
}

