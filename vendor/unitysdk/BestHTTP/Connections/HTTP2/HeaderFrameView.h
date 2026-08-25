#pragma once
#include "../../../unitysdk.h"

namespace BestHTTP::Connections::HTTP2 { class HTTP2FrameHeaderAndPayload; }

#define BESTHTTP_CONNECTIONS_HTTP2_HEADERFRAMEVIEW_ADVANCEFRAME_OFFSET UNITYSDK_OFFSET(0x9092E0)
#define BESTHTTP_CONNECTIONS_HTTP2_HEADERFRAMEVIEW_ADDFRAME_OFFSET UNITYSDK_OFFSET(0x909670)
#define BESTHTTP_CONNECTIONS_HTTP2_HEADERFRAMEVIEW_CALCULATEDATALENGTHFORFRAME_OFFSET UNITYSDK_OFFSET(0x909850)
#define BESTHTTP_CONNECTIONS_HTTP2_HEADERFRAMEVIEW_.CTOR_OFFSET UNITYSDK_OFFSET(0x9098B0)

namespace BestHTTP::Connections::HTTP2
{
	inline static constexpr unsigned int HeaderFrameView_TypeDefinitionIndex = 23432;

	class HeaderFrameView : public Il2CppObject
	{
	public:
		::System::Boolean AdvanceFrame()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_HTTP2_HEADERFRAMEVIEW_ADVANCEFRAME_OFFSET))(nullptr);
		}

		::System::Void AddFrame(::BestHTTP::Connections::HTTP2::HTTP2FrameHeaderAndPayload* arg)
		{
			((::System::Void(*)(::BestHTTP::Connections::HTTP2::HTTP2FrameHeaderAndPayload*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_HTTP2_HEADERFRAMEVIEW_ADDFRAME_OFFSET))(arg, nullptr);
		}

		::System::Int64 CalculateDataLengthForFrame(::BestHTTP::Connections::HTTP2::HTTP2FrameHeaderAndPayload* arg)
		{
			return (return (::System::Int64(*)(::BestHTTP::Connections::HTTP2::HTTP2FrameHeaderAndPayload*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_HTTP2_HEADERFRAMEVIEW_CALCULATEDATALENGTHFORFRAME_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_HTTP2_HEADERFRAMEVIEW_.CTOR_OFFSET))(nullptr);
		}

	};
}

