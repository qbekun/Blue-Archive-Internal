#pragma once
#include "../../../unitysdk.h"

namespace MX::MinigameCCG::Visual { class CCGEffectState; }

namespace MX::MinigameCCG::Visual
{
	inline static constexpr unsigned int CCGEffectState_TypeDefinitionIndex = 21175;

	class CCGEffectState : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::MX::MinigameCCG::Visual::CCGEffectState* Start; // 0x0
		::MX::MinigameCCG::Visual::CCGEffectState* Idle; // 0x0
		::MX::MinigameCCG::Visual::CCGEffectState* End; // 0x0

	};
}

