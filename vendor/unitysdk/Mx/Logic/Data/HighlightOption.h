#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Data { class HighlightOption; }

namespace MX::Logic::Data
{
	inline static constexpr unsigned int HighlightOption_TypeDefinitionIndex = 13524;

	class HighlightOption : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::MX::Logic::Data::HighlightOption* None; // 0x0
		::MX::Logic::Data::HighlightOption* Highlight; // 0x0
		::MX::Logic::Data::HighlightOption* HighlightAndFactor; // 0x0
		::MX::Logic::Data::HighlightOption* FactorOnly; // 0x0

	};
}

