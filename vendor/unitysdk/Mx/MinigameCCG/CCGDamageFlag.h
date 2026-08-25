#pragma once
#include "../../unitysdk.h"

namespace MX::MinigameCCG { class CCGDamageFlag; }

namespace MX::MinigameCCG
{
	inline static constexpr unsigned int CCGDamageFlag_TypeDefinitionIndex = 20626;

	class CCGDamageFlag : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::MX::MinigameCCG::CCGDamageFlag* Health; // 0x0
		::MX::MinigameCCG::CCGDamageFlag* Shield; // 0x0
		::MX::MinigameCCG::CCGDamageFlag* Default; // 0x0

	};
}

