#pragma once
#include "../../unitysdk.h"

namespace MX::MinigameCCG { class CCGSkillLogType; }

namespace MX::MinigameCCG
{
	inline static constexpr unsigned int CCGSkillLogType_TypeDefinitionIndex = 20525;

	class CCGSkillLogType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::MX::MinigameCCG::CCGSkillLogType* None; // 0x0
		::MX::MinigameCCG::CCGSkillLogType* Damage; // 0x0
		::MX::MinigameCCG::CCGSkillLogType* Heal; // 0x0
		::MX::MinigameCCG::CCGSkillLogType* Shield; // 0x0

	};
}

