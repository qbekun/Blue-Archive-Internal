#pragma once
#include "../../../unitysdk.h"

namespace MX::MinigameCCG::UI { class CCGToastType; }

namespace MX::MinigameCCG::UI
{
	inline static constexpr unsigned int CCGToastType_TypeDefinitionIndex = 20871;

	class CCGToastType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::MX::MinigameCCG::UI::CCGToastType* Normal; // 0x0
		::MX::MinigameCCG::UI::CCGToastType* Rest; // 0x0
		::MX::MinigameCCG::UI::CCGToastType* ReplaceCharacter; // 0x0

	};
}

