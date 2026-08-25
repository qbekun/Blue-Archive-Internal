#pragma once
#include "../../../unitysdk.h"

namespace BestHTTP::Connections::HTTP2 { class HTTP2FrameHeaderAndPayload; }
namespace BestHTTP::Connections::HTTP2 { class HTTP2HeadersFlags; }

#define BESTHTTP_CONNECTIONS_HTTP2_HTTP2HEADERSFRAME_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9132C0)
#define BESTHTTP_CONNECTIONS_HTTP2_HTTP2HEADERSFRAME_.CTOR_OFFSET UNITYSDK_OFFSET(0x911A80)
#define BESTHTTP_CONNECTIONS_HTTP2_HTTP2HEADERSFRAME_GET_FLAGS_OFFSET UNITYSDK_OFFSET(0x911AE0)

namespace BestHTTP::Connections::HTTP2
{
	inline static constexpr unsigned int HTTP2HeadersFrame_TypeDefinitionIndex = 23450;

	class HTTP2HeadersFrame : public Il2CppObject
	{
	public:
		::BestHTTP::Connections::HTTP2::HTTP2FrameHeaderAndPayload* Header; // 0x10
		Il2CppObject* PadLength; // 0x30
		Il2CppObject* IsExclusive; // 0x32
		Il2CppObject* StreamDependency; // 0x34
		Il2CppObject* Weight; // 0x3C
		::System::UInt32 HeaderBlockFragmentIdx; // 0x40
		::Il2CppArray<::System::Object*>* HeaderBlockFragment; // 0x48
		::System::UInt32 HeaderBlockFragmentLength; // 0x50

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_HTTP2_HTTP2HEADERSFRAME_TOSTRING_OFFSET))(nullptr);
		}

		::System::Void .ctor(::BestHTTP::Connections::HTTP2::HTTP2FrameHeaderAndPayload* arg)
		{
			((::System::Void(*)(::BestHTTP::Connections::HTTP2::HTTP2FrameHeaderAndPayload*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_HTTP2_HTTP2HEADERSFRAME_.CTOR_OFFSET))(arg, nullptr);
		}

		::BestHTTP::Connections::HTTP2::HTTP2HeadersFlags* get_Flags()
		{
			return (return (::BestHTTP::Connections::HTTP2::HTTP2HeadersFlags*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_HTTP2_HTTP2HEADERSFRAME_GET_FLAGS_OFFSET))(nullptr);
		}

	};
}

