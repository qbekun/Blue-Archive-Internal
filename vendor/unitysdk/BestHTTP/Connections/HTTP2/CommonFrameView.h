#pragma once
#include "../../../unitysdk.h"

namespace BestHTTP::Connections::HTTP2 { class HTTP2FrameHeaderAndPayload; }

#define BESTHTTP_CONNECTIONS_HTTP2_COMMONFRAMEVIEW_ADVANCEFRAME_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_CONNECTIONS_HTTP2_COMMONFRAMEVIEW_ADDFRAME_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_CONNECTIONS_HTTP2_COMMONFRAMEVIEW_SET_POSITION_OFFSET UNITYSDK_OFFSET(0x908C20)
#define BESTHTTP_CONNECTIONS_HTTP2_COMMONFRAMEVIEW_CALCULATEDATALENGTHFORFRAME_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_CONNECTIONS_HTTP2_COMMONFRAMEVIEW_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x908C30)
#define BESTHTTP_CONNECTIONS_HTTP2_COMMONFRAMEVIEW_READBYTE_OFFSET UNITYSDK_OFFSET(0x908C40)
#define BESTHTTP_CONNECTIONS_HTTP2_COMMONFRAMEVIEW_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x908CA0)
#define BESTHTTP_CONNECTIONS_HTTP2_COMMONFRAMEVIEW_READ_OFFSET UNITYSDK_OFFSET(0x908CB0)
#define BESTHTTP_CONNECTIONS_HTTP2_COMMONFRAMEVIEW_TOSTRING_OFFSET UNITYSDK_OFFSET(0x908DD0)
#define BESTHTTP_CONNECTIONS_HTTP2_COMMONFRAMEVIEW_.CTOR_OFFSET UNITYSDK_OFFSET(0x909100)
#define BESTHTTP_CONNECTIONS_HTTP2_COMMONFRAMEVIEW_SET_LENGTH_OFFSET UNITYSDK_OFFSET(0x909190)
#define BESTHTTP_CONNECTIONS_HTTP2_COMMONFRAMEVIEW_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9091A0)

namespace BestHTTP::Connections::HTTP2
{
	inline static constexpr unsigned int CommonFrameView_TypeDefinitionIndex = 23431;

	class CommonFrameView : public Il2CppObject
	{
	public:
		::System::Int64 _Length_k__BackingField; // 0x10
		::System::Int64 _Position_k__BackingField; // 0x18
		Il2CppObject* frames; // 0x20
		::System::Int32 currentFrameIdx; // 0x28
		::Il2CppArray<::System::Object*>* data; // 0x30
		::System::UInt32 dataOffset; // 0x38
		::System::UInt32 maxOffset; // 0x3C

		::System::Boolean AdvanceFrame()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_HTTP2_COMMONFRAMEVIEW_ADVANCEFRAME_OFFSET))(nullptr);
		}

		::System::Void AddFrame(::BestHTTP::Connections::HTTP2::HTTP2FrameHeaderAndPayload* arg)
		{
			((::System::Void(*)(::BestHTTP::Connections::HTTP2::HTTP2FrameHeaderAndPayload*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_HTTP2_COMMONFRAMEVIEW_ADDFRAME_OFFSET))(arg, nullptr);
		}

		::System::Void set_Position(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_HTTP2_COMMONFRAMEVIEW_SET_POSITION_OFFSET))(arg, nullptr);
		}

		::System::Int64 CalculateDataLengthForFrame(::BestHTTP::Connections::HTTP2::HTTP2FrameHeaderAndPayload* arg)
		{
			return (return (::System::Int64(*)(::BestHTTP::Connections::HTTP2::HTTP2FrameHeaderAndPayload*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_HTTP2_COMMONFRAMEVIEW_CALCULATEDATALENGTHFORFRAME_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_Position()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_HTTP2_COMMONFRAMEVIEW_GET_POSITION_OFFSET))(nullptr);
		}

		::System::Int32 ReadByte()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_HTTP2_COMMONFRAMEVIEW_READBYTE_OFFSET))(nullptr);
		}

		::System::Int64 get_Length()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_HTTP2_COMMONFRAMEVIEW_GET_LENGTH_OFFSET))(nullptr);
		}

		::System::Int32 Read(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_HTTP2_COMMONFRAMEVIEW_READ_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_HTTP2_COMMONFRAMEVIEW_TOSTRING_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_HTTP2_COMMONFRAMEVIEW_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_Length(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_HTTP2_COMMONFRAMEVIEW_SET_LENGTH_OFFSET))(arg, nullptr);
		}

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_HTTP2_COMMONFRAMEVIEW_DISPOSE_OFFSET))(nullptr);
		}

	};
}

