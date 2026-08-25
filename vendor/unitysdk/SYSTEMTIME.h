#pragma once
#include "unitysdk.h"

#define SYSTEMTIME_EQUALS_OFFSET UNITYSDK_OFFSET(0x911EF70)

	inline static constexpr unsigned int SYSTEMTIME_TypeDefinitionIndex = 23527;

	class SYSTEMTIME : public Il2CppObject
	{
	public:
		::System::UInt16 Year; // 0x10
		::System::UInt16 Month; // 0x12
		::System::UInt16 DayOfWeek; // 0x14
		::System::UInt16 Day; // 0x16
		::System::UInt16 Hour; // 0x18
		::System::UInt16 Minute; // 0x1A
		::System::UInt16 Second; // 0x1C
		::System::UInt16 Milliseconds; // 0x1E

		::System::Boolean Equals(SYSTEMTIME&* arg)
		{
			return (return (::System::Boolean(*)(SYSTEMTIME&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEMTIME_EQUALS_OFFSET))(arg, nullptr);
		}

	};

