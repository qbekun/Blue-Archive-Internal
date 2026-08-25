#pragma once
#include "../../../unitysdk.h"

namespace BestHTTP::Connections::HTTP2 { class HTTP2PushPromiseFlags; }

namespace BestHTTP::Connections::HTTP2
{
	inline static constexpr unsigned int HTTP2PushPromiseFlags_TypeDefinitionIndex = 23444;

	class HTTP2PushPromiseFlags : public Il2CppObject
	{
	public:
		::System::Byte value__; // 0x10
		::BestHTTP::Connections::HTTP2::HTTP2PushPromiseFlags* None; // 0x0
		::BestHTTP::Connections::HTTP2::HTTP2PushPromiseFlags* END_HEADERS; // 0x0
		::BestHTTP::Connections::HTTP2::HTTP2PushPromiseFlags* PADDED; // 0x0

	};
}

