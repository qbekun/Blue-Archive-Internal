#pragma once
#include "../../unitysdk.h"

namespace System::Globalization
{
	inline static constexpr unsigned int DateTimeStyles_TypeDefinitionIndex = 24962;

	class DateTimeStyles : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::System::Globalization::DateTimeStyles* None; // 0x0
		::System::Globalization::DateTimeStyles* AllowLeadingWhite; // 0x0
		::System::Globalization::DateTimeStyles* AllowTrailingWhite; // 0x0
		::System::Globalization::DateTimeStyles* AllowInnerWhite; // 0x0
		::System::Globalization::DateTimeStyles* AllowWhiteSpaces; // 0x0
		::System::Globalization::DateTimeStyles* NoCurrentDateDefault; // 0x0
		::System::Globalization::DateTimeStyles* AdjustToUniversal; // 0x0
		::System::Globalization::DateTimeStyles* AssumeLocal; // 0x0
		::System::Globalization::DateTimeStyles* AssumeUniversal; // 0x0
		::System::Globalization::DateTimeStyles* RoundtripKind; // 0x0

	};
}

