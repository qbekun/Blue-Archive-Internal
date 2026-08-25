#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Skills { class SkillType; }

#define MX_LOGIC_SKILLS_SKILLTYPEEXTENSIONS_ISBASICS_OFFSET UNITYSDK_OFFSET(0x13ED5E0)

namespace MX::Logic::Skills
{
	inline static constexpr unsigned int SkillTypeExtensions_TypeDefinitionIndex = 14595;

	class SkillTypeExtensions : public Il2CppObject
	{
	public:
		::System::Boolean IsBasics(::MX::Logic::Skills::SkillType* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::Skills::SkillType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_SKILLTYPEEXTENSIONS_ISBASICS_OFFSET))(arg, nullptr);
		}

	};
}

