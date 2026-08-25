#pragma once
#include "../../../unitysdk.h"

namespace BestHTTP::Connections::HTTP2 { class HTTP2FrameHeaderAndPayload; }
namespace BestHTTP::Connections::HTTP2 { class HTTP2DataFlags; }

#define BESTHTTP_CONNECTIONS_HTTP2_HTTP2DATAFRAME_GET_FLAGS_OFFSET UNITYSDK_OFFSET(0x9128C0)
#define BESTHTTP_CONNECTIONS_HTTP2_HTTP2DATAFRAME_.CTOR_OFFSET UNITYSDK_OFFSET(0x912870)
#define BESTHTTP_CONNECTIONS_HTTP2_HTTP2DATAFRAME_TOSTRING_OFFSET UNITYSDK_OFFSET(0x913050)

namespace BestHTTP::Connections::HTTP2
{
	inline static constexpr unsigned int HTTP2DataFrame_TypeDefinitionIndex = 23449;

	class HTTP2DataFrame : public Il2CppObject
	{
	public:
		::BestHTTP::Connections::HTTP2::HTTP2FrameHeaderAndPayload* Header; // 0x10
		Il2CppObject* PadLength; // 0x30
		::System::UInt32 DataIdx; // 0x34
		::Il2CppArray<::System::Object*>* Data; // 0x38
		::System::UInt32 DataLength; // 0x40

		::BestHTTP::Connections::HTTP2::HTTP2DataFlags* get_Flags()
		{
			return (return (::BestHTTP::Connections::HTTP2::HTTP2DataFlags*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_HTTP2_HTTP2DATAFRAME_GET_FLAGS_OFFSET))(nullptr);
		}

		::System::Void .ctor(::BestHTTP::Connections::HTTP2::HTTP2FrameHeaderAndPayload* arg)
		{
			((::System::Void(*)(::BestHTTP::Connections::HTTP2::HTTP2FrameHeaderAndPayload*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_HTTP2_HTTP2DATAFRAME_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_HTTP2_HTTP2DATAFRAME_TOSTRING_OFFSET))(nullptr);
		}

	};
}

