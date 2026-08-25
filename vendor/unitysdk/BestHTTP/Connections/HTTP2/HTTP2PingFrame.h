#pragma once
#include "../../../unitysdk.h"

namespace BestHTTP::Connections::HTTP2 { class HTTP2FrameHeaderAndPayload; }
namespace BestHTTP::Connections::HTTP2 { class HTTP2PingFlags; }

#define BESTHTTP_CONNECTIONS_HTTP2_HTTP2PINGFRAME_GET_FLAGS_OFFSET UNITYSDK_OFFSET(0x913D20)
#define BESTHTTP_CONNECTIONS_HTTP2_HTTP2PINGFRAME_.CTOR_OFFSET UNITYSDK_OFFSET(0x912330)
#define BESTHTTP_CONNECTIONS_HTTP2_HTTP2PINGFRAME_TOSTRING_OFFSET UNITYSDK_OFFSET(0x913D30)

namespace BestHTTP::Connections::HTTP2
{
	inline static constexpr unsigned int HTTP2PingFrame_TypeDefinitionIndex = 23454;

	class HTTP2PingFrame : public Il2CppObject
	{
	public:
		::BestHTTP::Connections::HTTP2::HTTP2FrameHeaderAndPayload* Header; // 0x10
		::Il2CppArray<::System::Object*>* OpaqueData; // 0x30
		::System::Byte OpaqueDataLength; // 0x38

		::BestHTTP::Connections::HTTP2::HTTP2PingFlags* get_Flags()
		{
			return (return (::BestHTTP::Connections::HTTP2::HTTP2PingFlags*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_HTTP2_HTTP2PINGFRAME_GET_FLAGS_OFFSET))(nullptr);
		}

		::System::Void .ctor(::BestHTTP::Connections::HTTP2::HTTP2FrameHeaderAndPayload* arg)
		{
			((::System::Void(*)(::BestHTTP::Connections::HTTP2::HTTP2FrameHeaderAndPayload*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_HTTP2_HTTP2PINGFRAME_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_HTTP2_HTTP2PINGFRAME_TOSTRING_OFFSET))(nullptr);
		}

	};
}

