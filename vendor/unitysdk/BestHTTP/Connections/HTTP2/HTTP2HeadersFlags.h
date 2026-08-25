#pragma once
#include "../../../unitysdk.h"

namespace BestHTTP::Connections::HTTP2 { class HTTP2HeadersFlags; }

namespace BestHTTP::Connections::HTTP2
{
	inline static constexpr unsigned int HTTP2HeadersFlags_TypeDefinitionIndex = 23442;

	class HTTP2HeadersFlags : public Il2CppObject
	{
	public:
		::System::Byte value__; // 0x10
		::BestHTTP::Connections::HTTP2::HTTP2HeadersFlags* None; // 0x0
		::BestHTTP::Connections::HTTP2::HTTP2HeadersFlags* END_STREAM; // 0x0
		::BestHTTP::Connections::HTTP2::HTTP2HeadersFlags* END_HEADERS; // 0x0
		::BestHTTP::Connections::HTTP2::HTTP2HeadersFlags* PADDED; // 0x0
		::BestHTTP::Connections::HTTP2::HTTP2HeadersFlags* PRIORITY; // 0x0

	};
}

