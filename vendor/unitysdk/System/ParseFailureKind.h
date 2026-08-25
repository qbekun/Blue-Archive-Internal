#pragma once
#include "../unitysdk.h"

namespace System
{
	inline static constexpr unsigned int ParseFailureKind_TypeDefinitionIndex = 23755;

	class ParseFailureKind : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::System::ParseFailureKind* None; // 0x0
		::System::ParseFailureKind* ArgumentNull; // 0x0
		::System::ParseFailureKind* Format; // 0x0
		::System::ParseFailureKind* FormatWithParameter; // 0x0
		::System::ParseFailureKind* FormatWithOriginalDateTime; // 0x0
		::System::ParseFailureKind* FormatWithFormatSpecifier; // 0x0
		::System::ParseFailureKind* FormatWithOriginalDateTimeAndParameter; // 0x0
		::System::ParseFailureKind* FormatBadDateTimeCalendar; // 0x0

	};
}

