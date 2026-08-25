#pragma once
#include "../../../unitysdk.h"

namespace BestHTTP::Connections::HTTP2 { class HTTP2FrameHeaderAndPayload; }
namespace BestHTTP::Connections::HTTP2 { class HTTP2ContinuationFlags; }

#define BESTHTTP_CONNECTIONS_HTTP2_HTTP2CONTINUATIONFRAME_GET_HEADERBLOCKFRAGMENTLENGTH_OFFSET UNITYSDK_OFFSET(0x914230)
#define BESTHTTP_CONNECTIONS_HTTP2_HTTP2CONTINUATIONFRAME_.CTOR_OFFSET UNITYSDK_OFFSET(0x912830)
#define BESTHTTP_CONNECTIONS_HTTP2_HTTP2CONTINUATIONFRAME_TOSTRING_OFFSET UNITYSDK_OFFSET(0x914240)
#define BESTHTTP_CONNECTIONS_HTTP2_HTTP2CONTINUATIONFRAME_GET_FLAGS_OFFSET UNITYSDK_OFFSET(0x914300)

namespace BestHTTP::Connections::HTTP2
{
	inline static constexpr unsigned int HTTP2ContinuationFrame_TypeDefinitionIndex = 23457;

	class HTTP2ContinuationFrame : public Il2CppObject
	{
	public:
		::BestHTTP::Connections::HTTP2::HTTP2FrameHeaderAndPayload* Header; // 0x10
		::Il2CppArray<::System::Object*>* HeaderBlockFragment; // 0x30

		::System::UInt32 get_HeaderBlockFragmentLength()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_HTTP2_HTTP2CONTINUATIONFRAME_GET_HEADERBLOCKFRAGMENTLENGTH_OFFSET))(nullptr);
		}

		::System::Void .ctor(::BestHTTP::Connections::HTTP2::HTTP2FrameHeaderAndPayload* arg)
		{
			((::System::Void(*)(::BestHTTP::Connections::HTTP2::HTTP2FrameHeaderAndPayload*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_HTTP2_HTTP2CONTINUATIONFRAME_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_HTTP2_HTTP2CONTINUATIONFRAME_TOSTRING_OFFSET))(nullptr);
		}

		::BestHTTP::Connections::HTTP2::HTTP2ContinuationFlags* get_Flags()
		{
			return (return (::BestHTTP::Connections::HTTP2::HTTP2ContinuationFlags*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_HTTP2_HTTP2CONTINUATIONFRAME_GET_FLAGS_OFFSET))(nullptr);
		}

	};
}

