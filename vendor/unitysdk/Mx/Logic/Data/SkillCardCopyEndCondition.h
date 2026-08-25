#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Data { class SkillCardCopyEndCondition; }

namespace MX::Logic::Data
{
	inline static constexpr unsigned int SkillCardCopyEndCondition_TypeDefinitionIndex = 13535;

	class SkillCardCopyEndCondition : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::MX::Logic::Data::SkillCardCopyEndCondition* TriggerCount; // 0x0
		::MX::Logic::Data::SkillCardCopyEndCondition* None; // 0x0

	};
}

