#pragma once
#include "../../unitysdk.h"

namespace Newtonsoft::Json { class DateFormatHandling; }

namespace Newtonsoft::Json
{
	inline static constexpr unsigned int DateFormatHandling_TypeDefinitionIndex = 31670;

	class DateFormatHandling : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::Newtonsoft::Json::DateFormatHandling* IsoDateFormat; // 0x0
		::Newtonsoft::Json::DateFormatHandling* MicrosoftDateFormat; // 0x0

	};
}

