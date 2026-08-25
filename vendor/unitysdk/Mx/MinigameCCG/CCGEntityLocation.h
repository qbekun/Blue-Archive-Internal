#pragma once
#include "../../unitysdk.h"

namespace MX::MinigameCCG { class CCGEntityLocation; }

namespace MX::MinigameCCG
{
	inline static constexpr unsigned int CCGEntityLocation_TypeDefinitionIndex = 20504;

	class CCGEntityLocation : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::MX::MinigameCCG::CCGEntityLocation* None; // 0x0
		::MX::MinigameCCG::CCGEntityLocation* Deck; // 0x0
		::MX::MinigameCCG::CCGEntityLocation* Grave; // 0x0
		::MX::MinigameCCG::CCGEntityLocation* Hand; // 0x0
		::MX::MinigameCCG::CCGEntityLocation* Battlefield; // 0x0
		::MX::MinigameCCG::CCGEntityLocation* Void; // 0x0

	};
}

