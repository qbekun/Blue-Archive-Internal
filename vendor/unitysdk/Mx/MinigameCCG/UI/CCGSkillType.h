#pragma once
#include "../../../unitysdk.h"

namespace MX::MinigameCCG::UI { class CCGSkillType; }

namespace MX::MinigameCCG::UI
{
	inline static constexpr unsigned int CCGSkillType_TypeDefinitionIndex = 20723;

	class CCGSkillType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::MX::MinigameCCG::UI::CCGSkillType* Active; // 0x0
		::MX::MinigameCCG::UI::CCGSkillType* Passive; // 0x0

	};
}

