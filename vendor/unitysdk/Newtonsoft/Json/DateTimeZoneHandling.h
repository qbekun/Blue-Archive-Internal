#pragma once
#include "../../unitysdk.h"

namespace Newtonsoft::Json { class DateTimeZoneHandling; }

namespace Newtonsoft::Json
{
	inline static constexpr unsigned int DateTimeZoneHandling_TypeDefinitionIndex = 31672;

	class DateTimeZoneHandling : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::Newtonsoft::Json::DateTimeZoneHandling* Local; // 0x0
		::Newtonsoft::Json::DateTimeZoneHandling* Utc; // 0x0
		::Newtonsoft::Json::DateTimeZoneHandling* Unspecified; // 0x0
		::Newtonsoft::Json::DateTimeZoneHandling* RoundtripKind; // 0x0

	};
}

