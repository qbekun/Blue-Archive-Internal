#pragma once
#include "../../../unitysdk.h"

namespace BestHTTP::Connections::HTTP2 { class HTTP2Settings; }

namespace BestHTTP::Connections::HTTP2
{
	inline static constexpr unsigned int HTTP2Settings_TypeDefinitionIndex = 23462;

	class HTTP2Settings : public Il2CppObject
	{
	public:
		::System::UInt16 value__; // 0x10
		::BestHTTP::Connections::HTTP2::HTTP2Settings* HEADER_TABLE_SIZE; // 0x0
		::BestHTTP::Connections::HTTP2::HTTP2Settings* ENABLE_PUSH; // 0x0
		::BestHTTP::Connections::HTTP2::HTTP2Settings* MAX_CONCURRENT_STREAMS; // 0x0
		::BestHTTP::Connections::HTTP2::HTTP2Settings* INITIAL_WINDOW_SIZE; // 0x0
		::BestHTTP::Connections::HTTP2::HTTP2Settings* MAX_FRAME_SIZE; // 0x0
		::BestHTTP::Connections::HTTP2::HTTP2Settings* MAX_HEADER_LIST_SIZE; // 0x0
		::BestHTTP::Connections::HTTP2::HTTP2Settings* RESERVED; // 0x0
		::BestHTTP::Connections::HTTP2::HTTP2Settings* ENABLE_CONNECT_PROTOCOL; // 0x0

	};
}

