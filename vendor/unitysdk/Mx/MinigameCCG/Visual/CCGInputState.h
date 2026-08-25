#pragma once
#include "../../../unitysdk.h"

namespace MX::MinigameCCG::Visual { class CCGInputState; }

namespace MX::MinigameCCG::Visual
{
	inline static constexpr unsigned int CCGInputState_TypeDefinitionIndex = 21164;

	class CCGInputState : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::MX::MinigameCCG::Visual::CCGInputState* None; // 0x0
		::MX::MinigameCCG::Visual::CCGInputState* SetFront; // 0x0
		::MX::MinigameCCG::Visual::CCGInputState* SelectCharacters; // 0x0
		::MX::MinigameCCG::Visual::CCGInputState* PendingUseEntity; // 0x0
		::MX::MinigameCCG::Visual::CCGInputState* HandZoom; // 0x0
		::MX::MinigameCCG::Visual::CCGInputState* UseEntity; // 0x0
		::MX::MinigameCCG::Visual::CCGInputState* Directing; // 0x0

	};
}

