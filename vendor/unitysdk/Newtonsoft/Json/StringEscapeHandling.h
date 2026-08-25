#pragma once
#include "../../unitysdk.h"

namespace Newtonsoft::Json { class StringEscapeHandling; }

namespace Newtonsoft::Json
{
	inline static constexpr unsigned int StringEscapeHandling_TypeDefinitionIndex = 31797;

	class StringEscapeHandling : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::Newtonsoft::Json::StringEscapeHandling* Default; // 0x0
		::Newtonsoft::Json::StringEscapeHandling* EscapeNonAscii; // 0x0
		::Newtonsoft::Json::StringEscapeHandling* EscapeHtml; // 0x0

	};
}

