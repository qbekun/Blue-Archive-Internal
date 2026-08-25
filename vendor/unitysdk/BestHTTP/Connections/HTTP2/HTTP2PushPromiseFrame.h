#pragma once
#include "../../../unitysdk.h"

namespace BestHTTP::Connections::HTTP2 { class HTTP2FrameHeaderAndPayload; }
namespace BestHTTP::Connections::HTTP2 { class HTTP2PushPromiseFlags; }

#define BESTHTTP_CONNECTIONS_HTTP2_HTTP2PUSHPROMISEFRAME_.CTOR_OFFSET UNITYSDK_OFFSET(0x912570)
#define BESTHTTP_CONNECTIONS_HTTP2_HTTP2PUSHPROMISEFRAME_GET_FLAGS_OFFSET UNITYSDK_OFFSET(0x9125D0)
#define BESTHTTP_CONNECTIONS_HTTP2_HTTP2PUSHPROMISEFRAME_TOSTRING_OFFSET UNITYSDK_OFFSET(0x913A00)

namespace BestHTTP::Connections::HTTP2
{
	inline static constexpr unsigned int HTTP2PushPromiseFrame_TypeDefinitionIndex = 23453;

	class HTTP2PushPromiseFrame : public Il2CppObject
	{
	public:
		::BestHTTP::Connections::HTTP2::HTTP2FrameHeaderAndPayload* Header; // 0x10
		Il2CppObject* PadLength; // 0x30
		::System::Byte ReservedBit; // 0x32
		::System::UInt32 PromisedStreamId; // 0x34
		::System::UInt32 HeaderBlockFragmentIdx; // 0x38
		::Il2CppArray<::System::Object*>* HeaderBlockFragment; // 0x40
		::System::UInt32 HeaderBlockFragmentLength; // 0x48

		::System::Void .ctor(::BestHTTP::Connections::HTTP2::HTTP2FrameHeaderAndPayload* arg)
		{
			((::System::Void(*)(::BestHTTP::Connections::HTTP2::HTTP2FrameHeaderAndPayload*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_HTTP2_HTTP2PUSHPROMISEFRAME_.CTOR_OFFSET))(arg, nullptr);
		}

		::BestHTTP::Connections::HTTP2::HTTP2PushPromiseFlags* get_Flags()
		{
			return (return (::BestHTTP::Connections::HTTP2::HTTP2PushPromiseFlags*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_HTTP2_HTTP2PUSHPROMISEFRAME_GET_FLAGS_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_HTTP2_HTTP2PUSHPROMISEFRAME_TOSTRING_OFFSET))(nullptr);
		}

	};
}

