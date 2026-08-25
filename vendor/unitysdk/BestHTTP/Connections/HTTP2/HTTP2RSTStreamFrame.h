#pragma once
#include "../../../unitysdk.h"

namespace BestHTTP::Connections::HTTP2 { class HTTP2FrameHeaderAndPayload; }
namespace BestHTTP::Connections::HTTP2 { class HTTP2ErrorCodes; }

#define BESTHTTP_CONNECTIONS_HTTP2_HTTP2RSTSTREAMFRAME_GET_ERROR_OFFSET UNITYSDK_OFFSET(0x913930)
#define BESTHTTP_CONNECTIONS_HTTP2_HTTP2RSTSTREAMFRAME_TOSTRING_OFFSET UNITYSDK_OFFSET(0x913940)
#define BESTHTTP_CONNECTIONS_HTTP2_HTTP2RSTSTREAMFRAME_.CTOR_OFFSET UNITYSDK_OFFSET(0x912110)

namespace BestHTTP::Connections::HTTP2
{
	inline static constexpr unsigned int HTTP2RSTStreamFrame_TypeDefinitionIndex = 23452;

	class HTTP2RSTStreamFrame : public Il2CppObject
	{
	public:
		::BestHTTP::Connections::HTTP2::HTTP2FrameHeaderAndPayload* Header; // 0x10
		::System::UInt32 ErrorCode; // 0x30

		::BestHTTP::Connections::HTTP2::HTTP2ErrorCodes* get_Error()
		{
			return (return (::BestHTTP::Connections::HTTP2::HTTP2ErrorCodes*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_HTTP2_HTTP2RSTSTREAMFRAME_GET_ERROR_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_HTTP2_HTTP2RSTSTREAMFRAME_TOSTRING_OFFSET))(nullptr);
		}

		::System::Void .ctor(::BestHTTP::Connections::HTTP2::HTTP2FrameHeaderAndPayload* arg)
		{
			((::System::Void(*)(::BestHTTP::Connections::HTTP2::HTTP2FrameHeaderAndPayload*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_HTTP2_HTTP2RSTSTREAMFRAME_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

