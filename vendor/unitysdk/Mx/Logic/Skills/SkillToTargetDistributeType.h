#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Skills { class SkillToTargetDistributeType; }

namespace MX::Logic::Skills
{
	inline static constexpr unsigned int SkillToTargetDistributeType_TypeDefinitionIndex = 14593;

	class SkillToTargetDistributeType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::MX::Logic::Skills::SkillToTargetDistributeType* None; // 0x0
		::MX::Logic::Skills::SkillToTargetDistributeType* EachToEachTarget; // 0x0
		::MX::Logic::Skills::SkillToTargetDistributeType* AllToOneTarget; // 0x0
		::MX::Logic::Skills::SkillToTargetDistributeType* OneToAllTarget; // 0x0

	};
}

