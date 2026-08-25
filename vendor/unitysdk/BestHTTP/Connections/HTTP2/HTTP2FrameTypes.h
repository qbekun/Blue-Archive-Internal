#pragma once
#include "../../../unitysdk.h"

namespace BestHTTP::Connections::HTTP2 { class HTTP2FrameTypes; }

namespace BestHTTP::Connections::HTTP2
{
	inline static constexpr unsigned int HTTP2FrameTypes_TypeDefinitionIndex = 23440;

	class HTTP2FrameTypes : public Il2CppObject
	{
	public:
		::System::Byte value__; // 0x10
		::BestHTTP::Connections::HTTP2::HTTP2FrameTypes* DATA; // 0x0
		::BestHTTP::Connections::HTTP2::HTTP2FrameTypes* HEADERS; // 0x0
		::BestHTTP::Connections::HTTP2::HTTP2FrameTypes* PRIORITY; // 0x0
		::BestHTTP::Connections::HTTP2::HTTP2FrameTypes* RST_STREAM; // 0x0
		::BestHTTP::Connections::HTTP2::HTTP2FrameTypes* SETTINGS; // 0x0
		::BestHTTP::Connections::HTTP2::HTTP2FrameTypes* PUSH_PROMISE; // 0x0
		::BestHTTP::Connections::HTTP2::HTTP2FrameTypes* PING; // 0x0
		::BestHTTP::Connections::HTTP2::HTTP2FrameTypes* GOAWAY; // 0x0
		::BestHTTP::Connections::HTTP2::HTTP2FrameTypes* WINDOW_UPDATE; // 0x0
		::BestHTTP::Connections::HTTP2::HTTP2FrameTypes* CONTINUATION; // 0x0
		::BestHTTP::Connections::HTTP2::HTTP2FrameTypes* ALT_SVC; // 0x0

	};
}

