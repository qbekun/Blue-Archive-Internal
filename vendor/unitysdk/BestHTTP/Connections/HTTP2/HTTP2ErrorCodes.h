#pragma once
#include "../../../unitysdk.h"

namespace BestHTTP::Connections::HTTP2 { class HTTP2ErrorCodes; }

namespace BestHTTP::Connections::HTTP2
{
	inline static constexpr unsigned int HTTP2ErrorCodes_TypeDefinitionIndex = 23438;

	class HTTP2ErrorCodes : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::BestHTTP::Connections::HTTP2::HTTP2ErrorCodes* NO_ERROR; // 0x0
		::BestHTTP::Connections::HTTP2::HTTP2ErrorCodes* PROTOCOL_ERROR; // 0x0
		::BestHTTP::Connections::HTTP2::HTTP2ErrorCodes* INTERNAL_ERROR; // 0x0
		::BestHTTP::Connections::HTTP2::HTTP2ErrorCodes* FLOW_CONTROL_ERROR; // 0x0
		::BestHTTP::Connections::HTTP2::HTTP2ErrorCodes* SETTINGS_TIMEOUT; // 0x0
		::BestHTTP::Connections::HTTP2::HTTP2ErrorCodes* STREAM_CLOSED; // 0x0
		::BestHTTP::Connections::HTTP2::HTTP2ErrorCodes* FRAME_SIZE_ERROR; // 0x0
		::BestHTTP::Connections::HTTP2::HTTP2ErrorCodes* REFUSED_STREAM; // 0x0
		::BestHTTP::Connections::HTTP2::HTTP2ErrorCodes* CANCEL; // 0x0
		::BestHTTP::Connections::HTTP2::HTTP2ErrorCodes* COMPRESSION_ERROR; // 0x0
		::BestHTTP::Connections::HTTP2::HTTP2ErrorCodes* CONNECT_ERROR; // 0x0
		::BestHTTP::Connections::HTTP2::HTTP2ErrorCodes* ENHANCE_YOUR_CALM; // 0x0
		::BestHTTP::Connections::HTTP2::HTTP2ErrorCodes* INADEQUATE_SECURITY; // 0x0
		::BestHTTP::Connections::HTTP2::HTTP2ErrorCodes* HTTP_1_1_REQUIRED; // 0x0

	};
}

