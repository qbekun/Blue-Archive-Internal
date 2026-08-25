#pragma once
#include "../../../unitysdk.h"

namespace System::Net::Http
{
	inline static constexpr unsigned int HttpCompletionOption_TypeDefinitionIndex = 36654;

	class HttpCompletionOption : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::System::Net::Http::HttpCompletionOption* ResponseContentRead; // 0x0
		::System::Net::Http::HttpCompletionOption* ResponseHeadersRead; // 0x0

	};
}

