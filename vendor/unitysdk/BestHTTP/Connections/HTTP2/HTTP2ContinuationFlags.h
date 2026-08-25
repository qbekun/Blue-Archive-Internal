#pragma once
#include "../../../unitysdk.h"

namespace BestHTTP::Connections::HTTP2 { class HTTP2ContinuationFlags; }

namespace BestHTTP::Connections::HTTP2
{
	inline static constexpr unsigned int HTTP2ContinuationFlags_TypeDefinitionIndex = 23446;

	class HTTP2ContinuationFlags : public Il2CppObject
	{
	public:
		::System::Byte value__; // 0x10
		::BestHTTP::Connections::HTTP2::HTTP2ContinuationFlags* None; // 0x0
		::BestHTTP::Connections::HTTP2::HTTP2ContinuationFlags* END_HEADERS; // 0x0

	};
}

