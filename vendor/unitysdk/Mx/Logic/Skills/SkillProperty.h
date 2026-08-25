#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Skills { class SkillProperty; }

namespace MX::Logic::Skills
{
	inline static constexpr unsigned int SkillProperty_TypeDefinitionIndex = 14591;

	class SkillProperty : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::MX::Logic::Skills::SkillProperty* None; // 0x0
		::MX::Logic::Skills::SkillProperty* ReuseCoolTime; // 0x0
		::MX::Logic::Skills::SkillProperty* CoolTime; // 0x0
		::MX::Logic::Skills::SkillProperty* CoolTimeAndStartCoolTime; // 0x0
		::MX::Logic::Skills::SkillProperty* ProjectileRange; // 0x0
		::MX::Logic::Skills::SkillProperty* TargetingRange; // 0x0
		::MX::Logic::Skills::SkillProperty* Invalid; // 0x0

	};
}

