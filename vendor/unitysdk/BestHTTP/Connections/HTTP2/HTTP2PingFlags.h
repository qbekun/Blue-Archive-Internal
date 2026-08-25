#pragma once
#include "../../../unitysdk.h"

namespace BestHTTP::Connections::HTTP2 { class HTTP2PingFlags; }

namespace BestHTTP::Connections::HTTP2
{
	inline static constexpr unsigned int HTTP2PingFlags_TypeDefinitionIndex = 23445;

	class HTTP2PingFlags : public Il2CppObject
	{
	public:
		::System::Byte value__; // 0x10
		::BestHTTP::Connections::HTTP2::HTTP2PingFlags* None; // 0x0
		::BestHTTP::Connections::HTTP2::HTTP2PingFlags* ACK; // 0x0

	};
}

