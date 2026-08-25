#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Battles { class SkillCardState; }

namespace MX::Logic::Battles
{
	inline static constexpr unsigned int SkillCardState_TypeDefinitionIndex = 14405;

	class SkillCardState : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::MX::Logic::Battles::SkillCardState* None; // 0x0
		::MX::Logic::Battles::SkillCardState* InHand; // 0x0
		::MX::Logic::Battles::SkillCardState* InDeck; // 0x0
		::MX::Logic::Battles::SkillCardState* Used; // 0x0
		::MX::Logic::Battles::SkillCardState* Cast; // 0x0
		::MX::Logic::Battles::SkillCardState* InputReceived; // 0x0
		::MX::Logic::Battles::SkillCardState* CoolTime; // 0x0
		::MX::Logic::Battles::SkillCardState* CoolTimeComplete; // 0x0
		::MX::Logic::Battles::SkillCardState* Disabled; // 0x0
		::MX::Logic::Battles::SkillCardState* Waiting; // 0x0
		::MX::Logic::Battles::SkillCardState* Switched; // 0x0

	};
}

