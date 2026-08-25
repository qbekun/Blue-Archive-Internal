#pragma once
#include "../../../unitysdk.h"

namespace MX::MinigameCCG::UI { class CCGToastPosition; }

namespace MX::MinigameCCG::UI
{
	inline static constexpr unsigned int CCGToastPosition_TypeDefinitionIndex = 20869;

	class CCGToastPosition : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::MX::MinigameCCG::UI::CCGToastPosition* Top; // 0x0
		::MX::MinigameCCG::UI::CCGToastPosition* UpperTop; // 0x0
		::MX::MinigameCCG::UI::CCGToastPosition* Center; // 0x0

	};
}

