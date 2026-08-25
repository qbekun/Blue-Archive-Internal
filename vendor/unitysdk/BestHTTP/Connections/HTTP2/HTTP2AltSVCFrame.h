#pragma once
#include "../../../unitysdk.h"

namespace BestHTTP::Connections::HTTP2 { class HTTP2FrameHeaderAndPayload; }

#define BESTHTTP_CONNECTIONS_HTTP2_HTTP2ALTSVCFRAME_.CTOR_OFFSET UNITYSDK_OFFSET(0x911A30)

namespace BestHTTP::Connections::HTTP2
{
	inline static constexpr unsigned int HTTP2AltSVCFrame_TypeDefinitionIndex = 23458;

	class HTTP2AltSVCFrame : public Il2CppObject
	{
	public:
		::BestHTTP::Connections::HTTP2::HTTP2FrameHeaderAndPayload* Header; // 0x10
		::System::String* Origin; // 0x30
		::System::String* AltSvcFieldValue; // 0x38

		::System::Void .ctor(::BestHTTP::Connections::HTTP2::HTTP2FrameHeaderAndPayload* arg)
		{
			((::System::Void(*)(::BestHTTP::Connections::HTTP2::HTTP2FrameHeaderAndPayload*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_HTTP2_HTTP2ALTSVCFRAME_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

