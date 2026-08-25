#pragma once
#include "../../../unitysdk.h"

namespace BestHTTP::WebSocket::Frames { class WebSocketFrameTypes; }

namespace BestHTTP::WebSocket::Frames
{
	inline static constexpr unsigned int WebSocketFrameTypes_TypeDefinitionIndex = 21336;

	class WebSocketFrameTypes : public Il2CppObject
	{
	public:
		::System::Byte value__; // 0x10
		::BestHTTP::WebSocket::Frames::WebSocketFrameTypes* Continuation; // 0x0
		::BestHTTP::WebSocket::Frames::WebSocketFrameTypes* Text; // 0x0
		::BestHTTP::WebSocket::Frames::WebSocketFrameTypes* Binary; // 0x0
		::BestHTTP::WebSocket::Frames::WebSocketFrameTypes* ConnectionClose; // 0x0
		::BestHTTP::WebSocket::Frames::WebSocketFrameTypes* Ping; // 0x0
		::BestHTTP::WebSocket::Frames::WebSocketFrameTypes* Pong; // 0x0

	};
}

