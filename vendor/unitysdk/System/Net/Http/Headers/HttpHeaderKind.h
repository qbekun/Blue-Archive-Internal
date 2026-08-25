#pragma once
#include "../../../../unitysdk.h"

namespace System::Net::Http::Headers
{
	inline static constexpr unsigned int HttpHeaderKind_TypeDefinitionIndex = 36682;

	class HttpHeaderKind : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::System::Net::Http::Headers::HttpHeaderKind* None; // 0x0
		::System::Net::Http::Headers::HttpHeaderKind* Request; // 0x0
		::System::Net::Http::Headers::HttpHeaderKind* Response; // 0x0
		::System::Net::Http::Headers::HttpHeaderKind* Content; // 0x0

	};
}

