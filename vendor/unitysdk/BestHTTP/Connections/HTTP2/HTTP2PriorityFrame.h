#pragma once
#include "../../../unitysdk.h"

namespace BestHTTP::Connections::HTTP2 { class HTTP2FrameHeaderAndPayload; }

#define BESTHTTP_CONNECTIONS_HTTP2_HTTP2PRIORITYFRAME_.CTOR_OFFSET UNITYSDK_OFFSET(0x9129F0)
#define BESTHTTP_CONNECTIONS_HTTP2_HTTP2PRIORITYFRAME_TOSTRING_OFFSET UNITYSDK_OFFSET(0x913740)

namespace BestHTTP::Connections::HTTP2
{
	inline static constexpr unsigned int HTTP2PriorityFrame_TypeDefinitionIndex = 23451;

	class HTTP2PriorityFrame : public Il2CppObject
	{
	public:
		::BestHTTP::Connections::HTTP2::HTTP2FrameHeaderAndPayload* Header; // 0x10
		::System::Byte IsExclusive; // 0x30
		::System::UInt32 StreamDependency; // 0x34
		::System::Byte Weight; // 0x38

		::System::Void .ctor(::BestHTTP::Connections::HTTP2::HTTP2FrameHeaderAndPayload* arg)
		{
			((::System::Void(*)(::BestHTTP::Connections::HTTP2::HTTP2FrameHeaderAndPayload*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_HTTP2_HTTP2PRIORITYFRAME_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_HTTP2_HTTP2PRIORITYFRAME_TOSTRING_OFFSET))(nullptr);
		}

	};
}

