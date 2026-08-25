#pragma once
#include "../../../unitysdk.h"

namespace MX::MinigameCCG::UI { class CCGToastLifetime; }

namespace MX::MinigameCCG::UI
{
	inline static constexpr unsigned int CCGToastLifetime_TypeDefinitionIndex = 20870;

	class CCGToastLifetime : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::MX::MinigameCCG::UI::CCGToastLifetime* Persistent; // 0x0
		::MX::MinigameCCG::UI::CCGToastLifetime* Timed; // 0x0

	};
}

