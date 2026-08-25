#pragma once
#include "../../../unitysdk.h"

namespace BestHTTP::Connections::HTTP2 { class HTTP2FrameHeaderAndPayload; }
namespace BestHTTP::Connections::HTTP2 { class HTTP2ErrorCodes; }

#define BESTHTTP_CONNECTIONS_HTTP2_HTTP2GOAWAYFRAME_TOSTRING_OFFSET UNITYSDK_OFFSET(0x913E00)
#define BESTHTTP_CONNECTIONS_HTTP2_HTTP2GOAWAYFRAME_GET_ERROR_OFFSET UNITYSDK_OFFSET(0x914160)
#define BESTHTTP_CONNECTIONS_HTTP2_HTTP2GOAWAYFRAME_.CTOR_OFFSET UNITYSDK_OFFSET(0x911690)

namespace BestHTTP::Connections::HTTP2
{
	inline static constexpr unsigned int HTTP2GoAwayFrame_TypeDefinitionIndex = 23455;

	class HTTP2GoAwayFrame : public Il2CppObject
	{
	public:
		::BestHTTP::Connections::HTTP2::HTTP2FrameHeaderAndPayload* Header; // 0x10
		::System::Byte ReservedBit; // 0x30
		::System::UInt32 LastStreamId; // 0x34
		::System::UInt32 ErrorCode; // 0x38
		::Il2CppArray<::System::Object*>* AdditionalDebugData; // 0x40
		::System::UInt32 AdditionalDebugDataLength; // 0x48

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_HTTP2_HTTP2GOAWAYFRAME_TOSTRING_OFFSET))(nullptr);
		}

		::BestHTTP::Connections::HTTP2::HTTP2ErrorCodes* get_Error()
		{
			return (return (::BestHTTP::Connections::HTTP2::HTTP2ErrorCodes*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_HTTP2_HTTP2GOAWAYFRAME_GET_ERROR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::BestHTTP::Connections::HTTP2::HTTP2FrameHeaderAndPayload* arg)
		{
			((::System::Void(*)(::BestHTTP::Connections::HTTP2::HTTP2FrameHeaderAndPayload*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_HTTP2_HTTP2GOAWAYFRAME_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

