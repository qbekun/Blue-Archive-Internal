#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Battles { class SkillCardUpdateEvent; }

namespace MX::Logic::Battles
{
	inline static constexpr unsigned int SkillCardUpdateEvent_TypeDefinitionIndex = 14406;

	class SkillCardUpdateEvent : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::MX::Logic::Battles::SkillCardUpdateEvent* New; // 0x0
		::MX::Logic::Battles::SkillCardUpdateEvent* Modify; // 0x0
		::MX::Logic::Battles::SkillCardUpdateEvent* Dispell; // 0x0
		::MX::Logic::Battles::SkillCardUpdateEvent* Remove; // 0x0

	};
}

