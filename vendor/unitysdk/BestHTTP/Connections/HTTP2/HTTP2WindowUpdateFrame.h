#pragma once
#include "../../../unitysdk.h"

namespace BestHTTP::Connections::HTTP2 { class HTTP2FrameHeaderAndPayload; }

#define BESTHTTP_CONNECTIONS_HTTP2_HTTP2WINDOWUPDATEFRAME_TOSTRING_OFFSET UNITYSDK_OFFSET(0x914170)
#define BESTHTTP_CONNECTIONS_HTTP2_HTTP2WINDOWUPDATEFRAME_.CTOR_OFFSET UNITYSDK_OFFSET(0x912040)

namespace BestHTTP::Connections::HTTP2
{
	inline static constexpr unsigned int HTTP2WindowUpdateFrame_TypeDefinitionIndex = 23456;

	class HTTP2WindowUpdateFrame : public Il2CppObject
	{
	public:
		::BestHTTP::Connections::HTTP2::HTTP2FrameHeaderAndPayload* Header; // 0x10
		::System::Byte ReservedBit; // 0x30
		::System::UInt32 WindowSizeIncrement; // 0x34

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_HTTP2_HTTP2WINDOWUPDATEFRAME_TOSTRING_OFFSET))(nullptr);
		}

		::System::Void .ctor(::BestHTTP::Connections::HTTP2::HTTP2FrameHeaderAndPayload* arg)
		{
			((::System::Void(*)(::BestHTTP::Connections::HTTP2::HTTP2FrameHeaderAndPayload*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_HTTP2_HTTP2WINDOWUPDATEFRAME_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

