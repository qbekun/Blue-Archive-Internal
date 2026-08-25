#pragma once
#include "../../../unitysdk.h"

namespace BestHTTP::Connections::HTTP2 { class HTTP2GoAwayFrame; }
namespace BestHTTP::Connections::HTTP2 { class HTTP2FrameHeaderAndPayload; }
namespace BestHTTP::Connections::HTTP2 { class HTTP2AltSVCFrame; }
namespace BestHTTP::Connections::HTTP2 { class HTTP2HeadersFrame; }
namespace BestHTTP::Connections::HTTP2 { class HTTP2ErrorCodes; }
namespace BestHTTP::Connections::HTTP2 { class HTTP2SettingsFrame; }
namespace BestHTTP::Connections::HTTP2 { class HTTP2WindowUpdateFrame; }
namespace BestHTTP::Connections::HTTP2 { class HTTP2RSTStreamFrame; }
namespace BestHTTP::Connections::HTTP2 { class HTTP2PingFrame; }
namespace BestHTTP::Connections::HTTP2 { class HTTP2PushPromiseFrame; }
namespace BestHTTP::Connections::HTTP2 { class HTTP2PingFlags; }
namespace BestHTTP::PlatformSupport::Memory { class PooledBuffer; }
namespace BestHTTP::Connections::HTTP2 { class HTTP2ContinuationFrame; }
namespace BestHTTP::Connections::HTTP2 { class HTTP2DataFrame; }
namespace BestHTTP::Connections::HTTP2 { class HTTP2PriorityFrame; }

#define BESTHTTP_CONNECTIONS_HTTP2_HTTP2FRAMEHELPER_READGOAWAYFRAME_OFFSET UNITYSDK_OFFSET(0x9114F0)
#define BESTHTTP_CONNECTIONS_HTTP2_HTTP2FRAMEHELPER_READHEADER_OFFSET UNITYSDK_OFFSET(0x9116E0)
#define BESTHTTP_CONNECTIONS_HTTP2_HTTP2FRAMEHELPER_CREATEWINDOWUPDATEFRAME_OFFSET UNITYSDK_OFFSET(0x911900)
#define BESTHTTP_CONNECTIONS_HTTP2_HTTP2FRAMEHELPER_READALTSVCFRAME_OFFSET UNITYSDK_OFFSET(0x9119D0)
#define BESTHTTP_CONNECTIONS_HTTP2_HTTP2FRAMEHELPER_READHEADERSFRAME_OFFSET UNITYSDK_OFFSET(0x909410)
#define BESTHTTP_CONNECTIONS_HTTP2_HTTP2FRAMEHELPER_CREATERSTFRAME_OFFSET UNITYSDK_OFFSET(0x911AF0)
#define BESTHTTP_CONNECTIONS_HTTP2_HTTP2FRAMEHELPER_READSETTINGS_OFFSET UNITYSDK_OFFSET(0x911BC0)
#define BESTHTTP_CONNECTIONS_HTTP2_HTTP2FRAMEHELPER_CREATESETTINGSFRAME_OFFSET UNITYSDK_OFFSET(0x911E00)
#define BESTHTTP_CONNECTIONS_HTTP2_HTTP2FRAMEHELPER_READWINDOWUPDATEFRAME_OFFSET UNITYSDK_OFFSET(0x911F80)
#define BESTHTTP_CONNECTIONS_HTTP2_HTTP2FRAMEHELPER_READRST_STREAMFRAME_OFFSET UNITYSDK_OFFSET(0x912080)
#define BESTHTTP_CONNECTIONS_HTTP2_HTTP2FRAMEHELPER_CREATEGOAWAYFRAME_OFFSET UNITYSDK_OFFSET(0x912140)
#define BESTHTTP_CONNECTIONS_HTTP2_HTTP2FRAMEHELPER_READPINGFRAME_OFFSET UNITYSDK_OFFSET(0x912240)
#define BESTHTTP_CONNECTIONS_HTTP2_HTTP2FRAMEHELPER_READPUSH_PROMISEFRAME_OFFSET UNITYSDK_OFFSET(0x9123B0)
#define BESTHTTP_CONNECTIONS_HTTP2_HTTP2FRAMEHELPER_STREAMREAD_OFFSET UNITYSDK_OFFSET(0x911830)
#define BESTHTTP_CONNECTIONS_HTTP2_HTTP2FRAMEHELPER_CREATEPINGFRAME_OFFSET UNITYSDK_OFFSET(0x9125E0)
#define BESTHTTP_CONNECTIONS_HTTP2_HTTP2FRAMEHELPER_HEADERASBINARY_OFFSET UNITYSDK_OFFSET(0x912690)
#define BESTHTTP_CONNECTIONS_HTTP2_HTTP2FRAMEHELPER_READCONTINUATIONFRAME_OFFSET UNITYSDK_OFFSET(0x912790)
#define BESTHTTP_CONNECTIONS_HTTP2_HTTP2FRAMEHELPER_READDATAFRAME_OFFSET UNITYSDK_OFFSET(0x9098F0)
#define BESTHTTP_CONNECTIONS_HTTP2_HTTP2FRAMEHELPER_CREATEACKSETTINGSFRAME_OFFSET UNITYSDK_OFFSET(0x9128D0)
#define BESTHTTP_CONNECTIONS_HTTP2_HTTP2FRAMEHELPER_READPRIORITYFRAME_OFFSET UNITYSDK_OFFSET(0x9128F0)

namespace BestHTTP::Connections::HTTP2
{
	inline static constexpr unsigned int HTTP2FrameHelper_TypeDefinitionIndex = 23439;

	class HTTP2FrameHelper : public Il2CppObject
	{
	public:
		::BestHTTP::Connections::HTTP2::HTTP2GoAwayFrame* ReadGoAwayFrame(::BestHTTP::Connections::HTTP2::HTTP2FrameHeaderAndPayload* arg)
		{
			return (return (::BestHTTP::Connections::HTTP2::HTTP2GoAwayFrame*(*)(::BestHTTP::Connections::HTTP2::HTTP2FrameHeaderAndPayload*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_HTTP2_HTTP2FRAMEHELPER_READGOAWAYFRAME_OFFSET))(arg, nullptr);
		}

		::BestHTTP::Connections::HTTP2::HTTP2FrameHeaderAndPayload* ReadHeader(::System::IO::Stream* arg)
		{
			return (return (::BestHTTP::Connections::HTTP2::HTTP2FrameHeaderAndPayload*(*)(::System::IO::Stream*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_HTTP2_HTTP2FRAMEHELPER_READHEADER_OFFSET))(arg, nullptr);
		}

		::BestHTTP::Connections::HTTP2::HTTP2FrameHeaderAndPayload* CreateWindowUpdateFrame(::System::UInt32 arg, ::System::UInt32 arg)
		{
			return (return (::BestHTTP::Connections::HTTP2::HTTP2FrameHeaderAndPayload*(*)(::System::UInt32, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_HTTP2_HTTP2FRAMEHELPER_CREATEWINDOWUPDATEFRAME_OFFSET))(arg, arg, nullptr);
		}

		::BestHTTP::Connections::HTTP2::HTTP2AltSVCFrame* ReadAltSvcFrame(::BestHTTP::Connections::HTTP2::HTTP2FrameHeaderAndPayload* arg)
		{
			return (return (::BestHTTP::Connections::HTTP2::HTTP2AltSVCFrame*(*)(::BestHTTP::Connections::HTTP2::HTTP2FrameHeaderAndPayload*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_HTTP2_HTTP2FRAMEHELPER_READALTSVCFRAME_OFFSET))(arg, nullptr);
		}

		::BestHTTP::Connections::HTTP2::HTTP2HeadersFrame* ReadHeadersFrame(::BestHTTP::Connections::HTTP2::HTTP2FrameHeaderAndPayload* arg)
		{
			return (return (::BestHTTP::Connections::HTTP2::HTTP2HeadersFrame*(*)(::BestHTTP::Connections::HTTP2::HTTP2FrameHeaderAndPayload*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_HTTP2_HTTP2FRAMEHELPER_READHEADERSFRAME_OFFSET))(arg, nullptr);
		}

		::BestHTTP::Connections::HTTP2::HTTP2FrameHeaderAndPayload* CreateRSTFrame(::System::UInt32 arg, ::BestHTTP::Connections::HTTP2::HTTP2ErrorCodes* arg)
		{
			return (return (::BestHTTP::Connections::HTTP2::HTTP2FrameHeaderAndPayload*(*)(::System::UInt32, ::BestHTTP::Connections::HTTP2::HTTP2ErrorCodes*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_HTTP2_HTTP2FRAMEHELPER_CREATERSTFRAME_OFFSET))(arg, arg, nullptr);
		}

		::BestHTTP::Connections::HTTP2::HTTP2SettingsFrame* ReadSettings(::BestHTTP::Connections::HTTP2::HTTP2FrameHeaderAndPayload* arg)
		{
			return (return (::BestHTTP::Connections::HTTP2::HTTP2SettingsFrame*(*)(::BestHTTP::Connections::HTTP2::HTTP2FrameHeaderAndPayload*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_HTTP2_HTTP2FRAMEHELPER_READSETTINGS_OFFSET))(arg, nullptr);
		}

		::BestHTTP::Connections::HTTP2::HTTP2FrameHeaderAndPayload* CreateSettingsFrame(Il2CppObject* arg)
		{
			return (return (::BestHTTP::Connections::HTTP2::HTTP2FrameHeaderAndPayload*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_HTTP2_HTTP2FRAMEHELPER_CREATESETTINGSFRAME_OFFSET))(arg, nullptr);
		}

		::BestHTTP::Connections::HTTP2::HTTP2WindowUpdateFrame* ReadWindowUpdateFrame(::BestHTTP::Connections::HTTP2::HTTP2FrameHeaderAndPayload* arg)
		{
			return (return (::BestHTTP::Connections::HTTP2::HTTP2WindowUpdateFrame*(*)(::BestHTTP::Connections::HTTP2::HTTP2FrameHeaderAndPayload*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_HTTP2_HTTP2FRAMEHELPER_READWINDOWUPDATEFRAME_OFFSET))(arg, nullptr);
		}

		::BestHTTP::Connections::HTTP2::HTTP2RSTStreamFrame* ReadRST_StreamFrame(::BestHTTP::Connections::HTTP2::HTTP2FrameHeaderAndPayload* arg)
		{
			return (return (::BestHTTP::Connections::HTTP2::HTTP2RSTStreamFrame*(*)(::BestHTTP::Connections::HTTP2::HTTP2FrameHeaderAndPayload*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_HTTP2_HTTP2FRAMEHELPER_READRST_STREAMFRAME_OFFSET))(arg, nullptr);
		}

		::BestHTTP::Connections::HTTP2::HTTP2FrameHeaderAndPayload* CreateGoAwayFrame(::System::UInt32 arg, ::BestHTTP::Connections::HTTP2::HTTP2ErrorCodes* arg)
		{
			return (return (::BestHTTP::Connections::HTTP2::HTTP2FrameHeaderAndPayload*(*)(::System::UInt32, ::BestHTTP::Connections::HTTP2::HTTP2ErrorCodes*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_HTTP2_HTTP2FRAMEHELPER_CREATEGOAWAYFRAME_OFFSET))(arg, arg, nullptr);
		}

		::BestHTTP::Connections::HTTP2::HTTP2PingFrame* ReadPingFrame(::BestHTTP::Connections::HTTP2::HTTP2FrameHeaderAndPayload* arg)
		{
			return (return (::BestHTTP::Connections::HTTP2::HTTP2PingFrame*(*)(::BestHTTP::Connections::HTTP2::HTTP2FrameHeaderAndPayload*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_HTTP2_HTTP2FRAMEHELPER_READPINGFRAME_OFFSET))(arg, nullptr);
		}

		::BestHTTP::Connections::HTTP2::HTTP2PushPromiseFrame* ReadPush_PromiseFrame(::BestHTTP::Connections::HTTP2::HTTP2FrameHeaderAndPayload* arg)
		{
			return (return (::BestHTTP::Connections::HTTP2::HTTP2PushPromiseFrame*(*)(::BestHTTP::Connections::HTTP2::HTTP2FrameHeaderAndPayload*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_HTTP2_HTTP2FRAMEHELPER_READPUSH_PROMISEFRAME_OFFSET))(arg, nullptr);
		}

		::System::Void StreamRead(::System::IO::Stream* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::UInt32 arg)
		{
			((::System::Void(*)(::System::IO::Stream*, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_HTTP2_HTTP2FRAMEHELPER_STREAMREAD_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::BestHTTP::Connections::HTTP2::HTTP2FrameHeaderAndPayload* CreatePingFrame(::BestHTTP::Connections::HTTP2::HTTP2PingFlags* arg)
		{
			return (return (::BestHTTP::Connections::HTTP2::HTTP2FrameHeaderAndPayload*(*)(::BestHTTP::Connections::HTTP2::HTTP2PingFlags*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_HTTP2_HTTP2FRAMEHELPER_CREATEPINGFRAME_OFFSET))(arg, nullptr);
		}

		::BestHTTP::PlatformSupport::Memory::PooledBuffer* HeaderAsBinary(::BestHTTP::Connections::HTTP2::HTTP2FrameHeaderAndPayload* arg)
		{
			return (return (::BestHTTP::PlatformSupport::Memory::PooledBuffer*(*)(::BestHTTP::Connections::HTTP2::HTTP2FrameHeaderAndPayload*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_HTTP2_HTTP2FRAMEHELPER_HEADERASBINARY_OFFSET))(arg, nullptr);
		}

		::BestHTTP::Connections::HTTP2::HTTP2ContinuationFrame* ReadContinuationFrame(::BestHTTP::Connections::HTTP2::HTTP2FrameHeaderAndPayload* arg)
		{
			return (return (::BestHTTP::Connections::HTTP2::HTTP2ContinuationFrame*(*)(::BestHTTP::Connections::HTTP2::HTTP2FrameHeaderAndPayload*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_HTTP2_HTTP2FRAMEHELPER_READCONTINUATIONFRAME_OFFSET))(arg, nullptr);
		}

		::BestHTTP::Connections::HTTP2::HTTP2DataFrame* ReadDataFrame(::BestHTTP::Connections::HTTP2::HTTP2FrameHeaderAndPayload* arg)
		{
			return (return (::BestHTTP::Connections::HTTP2::HTTP2DataFrame*(*)(::BestHTTP::Connections::HTTP2::HTTP2FrameHeaderAndPayload*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_HTTP2_HTTP2FRAMEHELPER_READDATAFRAME_OFFSET))(arg, nullptr);
		}

		::BestHTTP::Connections::HTTP2::HTTP2FrameHeaderAndPayload* CreateACKSettingsFrame()
		{
			return (return (::BestHTTP::Connections::HTTP2::HTTP2FrameHeaderAndPayload*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_HTTP2_HTTP2FRAMEHELPER_CREATEACKSETTINGSFRAME_OFFSET))(nullptr);
		}

		::BestHTTP::Connections::HTTP2::HTTP2PriorityFrame* ReadPriorityFrame(::BestHTTP::Connections::HTTP2::HTTP2FrameHeaderAndPayload* arg)
		{
			return (return (::BestHTTP::Connections::HTTP2::HTTP2PriorityFrame*(*)(::BestHTTP::Connections::HTTP2::HTTP2FrameHeaderAndPayload*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_HTTP2_HTTP2FRAMEHELPER_READPRIORITYFRAME_OFFSET))(arg, nullptr);
		}

	};
}

