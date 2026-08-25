#pragma once
#include "../../unitysdk.h"

namespace Newtonsoft::Json { class DateParseHandling; }

namespace Newtonsoft::Json
{
	inline static constexpr unsigned int DateParseHandling_TypeDefinitionIndex = 31671;

	class DateParseHandling : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::Newtonsoft::Json::DateParseHandling* None; // 0x0
		::Newtonsoft::Json::DateParseHandling* DateTime; // 0x0
		::Newtonsoft::Json::DateParseHandling* DateTimeOffset; // 0x0

	};
}

