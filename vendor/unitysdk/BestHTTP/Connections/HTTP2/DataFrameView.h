#pragma once
#include "../../../unitysdk.h"

namespace BestHTTP::Connections::HTTP2 { class HTTP2FrameHeaderAndPayload; }

#define BESTHTTP_CONNECTIONS_HTTP2_DATAFRAMEVIEW_CALCULATEDATALENGTHFORFRAME_OFFSET UNITYSDK_OFFSET(0x9098C0)
#define BESTHTTP_CONNECTIONS_HTTP2_DATAFRAMEVIEW_ADDFRAME_OFFSET UNITYSDK_OFFSET(0x909A60)
#define BESTHTTP_CONNECTIONS_HTTP2_DATAFRAMEVIEW_ADVANCEFRAME_OFFSET UNITYSDK_OFFSET(0x909C20)
#define BESTHTTP_CONNECTIONS_HTTP2_DATAFRAMEVIEW_.CTOR_OFFSET UNITYSDK_OFFSET(0x909D00)

namespace BestHTTP::Connections::HTTP2
{
	inline static constexpr unsigned int DataFrameView_TypeDefinitionIndex = 23433;

	class DataFrameView : public Il2CppObject
	{
	public:
		::System::Int64 CalculateDataLengthForFrame(::BestHTTP::Connections::HTTP2::HTTP2FrameHeaderAndPayload* arg)
		{
			return (return (::System::Int64(*)(::BestHTTP::Connections::HTTP2::HTTP2FrameHeaderAndPayload*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_HTTP2_DATAFRAMEVIEW_CALCULATEDATALENGTHFORFRAME_OFFSET))(arg, nullptr);
		}

		::System::Void AddFrame(::BestHTTP::Connections::HTTP2::HTTP2FrameHeaderAndPayload* arg)
		{
			((::System::Void(*)(::BestHTTP::Connections::HTTP2::HTTP2FrameHeaderAndPayload*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_HTTP2_DATAFRAMEVIEW_ADDFRAME_OFFSET))(arg, nullptr);
		}

		::System::Boolean AdvanceFrame()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_HTTP2_DATAFRAMEVIEW_ADVANCEFRAME_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_HTTP2_DATAFRAMEVIEW_.CTOR_OFFSET))(nullptr);
		}

	};
}

