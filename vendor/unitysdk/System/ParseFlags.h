#pragma once
#include "../unitysdk.h"

namespace System
{
	inline static constexpr unsigned int ParseFlags_TypeDefinitionIndex = 23756;

	class ParseFlags : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::System::ParseFlags* HaveYear; // 0x0
		::System::ParseFlags* HaveMonth; // 0x0
		::System::ParseFlags* HaveDay; // 0x0
		::System::ParseFlags* HaveHour; // 0x0
		::System::ParseFlags* HaveMinute; // 0x0
		::System::ParseFlags* HaveSecond; // 0x0
		::System::ParseFlags* HaveTime; // 0x0
		::System::ParseFlags* HaveDate; // 0x0
		::System::ParseFlags* TimeZoneUsed; // 0x0
		::System::ParseFlags* TimeZoneUtc; // 0x0
		::System::ParseFlags* ParsedMonthName; // 0x0
		::System::ParseFlags* CaptureOffset; // 0x0
		::System::ParseFlags* YearDefault; // 0x0
		::System::ParseFlags* Rfc1123Pattern; // 0x0
		::System::ParseFlags* UtcSortPattern; // 0x0

	};
}

