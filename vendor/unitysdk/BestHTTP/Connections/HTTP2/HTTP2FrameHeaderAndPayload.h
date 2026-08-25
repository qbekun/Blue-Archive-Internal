#pragma once
#include "../../../unitysdk.h"

namespace BestHTTP::Connections::HTTP2 { class HTTP2FrameTypes; }

#define BESTHTTP_CONNECTIONS_HTTP2_HTTP2FRAMEHEADERANDPAYLOAD_PAYLOADASHEX_OFFSET UNITYSDK_OFFSET(0x908F90)
#define BESTHTTP_CONNECTIONS_HTTP2_HTTP2FRAMEHEADERANDPAYLOAD_TOSTRING_OFFSET UNITYSDK_OFFSET(0x912A30)

namespace BestHTTP::Connections::HTTP2
{
	inline static constexpr unsigned int HTTP2FrameHeaderAndPayload_TypeDefinitionIndex = 23447;

	class HTTP2FrameHeaderAndPayload : public Il2CppObject
	{
	public:
		::System::UInt32 PayloadLength; // 0x10
		::BestHTTP::Connections::HTTP2::HTTP2FrameTypes* Type; // 0x14
		::System::Byte Flags; // 0x15
		::System::UInt32 StreamId; // 0x18
		::Il2CppArray<::System::Object*>* Payload; // 0x20
		::System::UInt32 PayloadOffset; // 0x28
		::System::Boolean DontUseMemPool; // 0x2C

		::System::String* PayloadAsHex()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_HTTP2_HTTP2FRAMEHEADERANDPAYLOAD_PAYLOADASHEX_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_HTTP2_HTTP2FRAMEHEADERANDPAYLOAD_TOSTRING_OFFSET))(nullptr);
		}

	};
}

