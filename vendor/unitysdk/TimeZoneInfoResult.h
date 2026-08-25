#pragma once
#include "unitysdk.h"

	inline static constexpr unsigned int TimeZoneInfoResult_TypeDefinitionIndex = 23670;

	class TimeZoneInfoResult : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		TimeZoneInfoResult* Success; // 0x0
		TimeZoneInfoResult* TimeZoneNotFoundException; // 0x0
		TimeZoneInfoResult* InvalidTimeZoneException; // 0x0
		TimeZoneInfoResult* SecurityException; // 0x0

	};

