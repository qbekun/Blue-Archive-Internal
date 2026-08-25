#pragma once
#include "../unitysdk.h"

namespace System
{
	inline static constexpr unsigned int AppContextSwitches_TypeDefinitionIndex = 23911;

	class AppContextSwitches : public Il2CppObject
	{
	public:
		::System::Boolean SetActorAsReferenceWhenCopyingClaimsIdentity; // 0x0
		::System::Boolean NoAsyncCurrentCulture; // 0x1
		::System::Boolean EnforceJapaneseEraYearRanges; // 0x2
		::System::Boolean FormatJapaneseFirstYearAsANumber; // 0x3
		::System::Boolean EnforceLegacyJapaneseDateParsing; // 0x4

	};
}

