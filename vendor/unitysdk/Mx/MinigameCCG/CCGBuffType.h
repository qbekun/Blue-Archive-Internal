#pragma once
#include "../../unitysdk.h"

namespace MX::MinigameCCG { class CCGBuffType; }

namespace MX::MinigameCCG
{
	inline static constexpr unsigned int CCGBuffType_TypeDefinitionIndex = 20477;

	class CCGBuffType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::MX::MinigameCCG::CCGBuffType* Buff; // 0x0
		::MX::MinigameCCG::CCGBuffType* Debuff; // 0x0

	};
}

