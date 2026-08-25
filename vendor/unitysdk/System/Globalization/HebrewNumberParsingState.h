#pragma once
#include "../../unitysdk.h"

namespace System::Globalization
{
	inline static constexpr unsigned int HebrewNumberParsingState_TypeDefinitionIndex = 24966;

	class HebrewNumberParsingState : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::System::Globalization::HebrewNumberParsingState* InvalidHebrewNumber; // 0x0
		::System::Globalization::HebrewNumberParsingState* NotHebrewDigit; // 0x0
		::System::Globalization::HebrewNumberParsingState* FoundEndOfHebrewNumber; // 0x0
		::System::Globalization::HebrewNumberParsingState* ContinueParsing; // 0x0

	};
}

