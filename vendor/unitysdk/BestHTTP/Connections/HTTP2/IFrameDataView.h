#pragma once
#include "../../../unitysdk.h"

namespace BestHTTP::Connections::HTTP2 { class HTTP2FrameHeaderAndPayload; }

#define BESTHTTP_CONNECTIONS_HTTP2_IFRAMEDATAVIEW_READ_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_CONNECTIONS_HTTP2_IFRAMEDATAVIEW_ADDFRAME_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_CONNECTIONS_HTTP2_IFRAMEDATAVIEW_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_CONNECTIONS_HTTP2_IFRAMEDATAVIEW_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_CONNECTIONS_HTTP2_IFRAMEDATAVIEW_READBYTE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace BestHTTP::Connections::HTTP2
{
	inline static constexpr unsigned int IFrameDataView_TypeDefinitionIndex = 23430;

	class IFrameDataView : public Il2CppObject
	{
	public:
		::System::Int32 Read(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_HTTP2_IFRAMEDATAVIEW_READ_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void AddFrame(::BestHTTP::Connections::HTTP2::HTTP2FrameHeaderAndPayload* arg)
		{
			((::System::Void(*)(::BestHTTP::Connections::HTTP2::HTTP2FrameHeaderAndPayload*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_HTTP2_IFRAMEDATAVIEW_ADDFRAME_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_Position()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_HTTP2_IFRAMEDATAVIEW_GET_POSITION_OFFSET))(nullptr);
		}

		::System::Int64 get_Length()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_HTTP2_IFRAMEDATAVIEW_GET_LENGTH_OFFSET))(nullptr);
		}

		::System::Int32 ReadByte()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_HTTP2_IFRAMEDATAVIEW_READBYTE_OFFSET))(nullptr);
		}

	};
}

