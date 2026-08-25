#pragma once
#include "../../unitysdk.h"

namespace BestHTTP::WebSocket { class WebSocket; }
namespace BestHTTP::Core { class HostConnectionKey; }
namespace BestHTTP::WebSocket::Frames { class WebSocketFrameReader; }
namespace BestHTTP { class HTTPRequest; }
namespace BestHTTP::WebSocket::Frames { class WebSocketFrame; }
namespace BestHTTP { class HTTPRequestStates; }

#define BESTHTTP_WEBSOCKET_WEBSOCKETRESPONSE_GET_WEBSOCKET_OFFSET UNITYSDK_OFFSET(0x4F0650)
#define BESTHTTP_WEBSOCKET_WEBSOCKETRESPONSE_SET_WEBSOCKET_OFFSET UNITYSDK_OFFSET(0x4F0660)
#define BESTHTTP_WEBSOCKET_WEBSOCKETRESPONSE_GET_CONNECTIONKEY_OFFSET UNITYSDK_OFFSET(0x4F0680)
#define BESTHTTP_WEBSOCKET_WEBSOCKETRESPONSE_SET_CONNECTIONKEY_OFFSET UNITYSDK_OFFSET(0x4F0690)
#define BESTHTTP_WEBSOCKET_WEBSOCKETRESPONSE_GET_ISCLOSED_OFFSET UNITYSDK_OFFSET(0x4ED150)
#define BESTHTTP_WEBSOCKET_WEBSOCKETRESPONSE_GET_PINGFREQUNECY_OFFSET UNITYSDK_OFFSET(0x4F06B0)
#define BESTHTTP_WEBSOCKET_WEBSOCKETRESPONSE_SET_PINGFREQUNECY_OFFSET UNITYSDK_OFFSET(0x4F06C0)
#define BESTHTTP_WEBSOCKET_WEBSOCKETRESPONSE_GET_MAXFRAGMENTSIZE_OFFSET UNITYSDK_OFFSET(0x4F06D0)
#define BESTHTTP_WEBSOCKET_WEBSOCKETRESPONSE_SET_MAXFRAGMENTSIZE_OFFSET UNITYSDK_OFFSET(0x4F06E0)
#define BESTHTTP_WEBSOCKET_WEBSOCKETRESPONSE_GET_BUFFEREDAMOUNT_OFFSET UNITYSDK_OFFSET(0x4F06F0)
#define BESTHTTP_WEBSOCKET_WEBSOCKETRESPONSE_GET_LATENCY_OFFSET UNITYSDK_OFFSET(0x4F0700)
#define BESTHTTP_WEBSOCKET_WEBSOCKETRESPONSE_SET_LATENCY_OFFSET UNITYSDK_OFFSET(0x4F0710)
#define BESTHTTP_WEBSOCKET_WEBSOCKETRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0x4F0720)
#define BESTHTTP_WEBSOCKET_WEBSOCKETRESPONSE_STARTRECEIVE_OFFSET UNITYSDK_OFFSET(0x4EF2C0)
#define BESTHTTP_WEBSOCKET_WEBSOCKETRESPONSE_CLOSESTREAM_OFFSET UNITYSDK_OFFSET(0x4EE540)
#define BESTHTTP_WEBSOCKET_WEBSOCKETRESPONSE_SEND_OFFSET UNITYSDK_OFFSET(0x4EF670)
#define BESTHTTP_WEBSOCKET_WEBSOCKETRESPONSE_SEND_OFFSET UNITYSDK_OFFSET(0x4EF8E0)
#define BESTHTTP_WEBSOCKET_WEBSOCKETRESPONSE_SEND_OFFSET UNITYSDK_OFFSET(0x4EFA80)
#define BESTHTTP_WEBSOCKET_WEBSOCKETRESPONSE_SEND_OFFSET UNITYSDK_OFFSET(0x4EFC90)
#define BESTHTTP_WEBSOCKET_WEBSOCKETRESPONSE_CLOSE_OFFSET UNITYSDK_OFFSET(0x4EFFF0)
#define BESTHTTP_WEBSOCKET_WEBSOCKETRESPONSE_CLOSE_OFFSET UNITYSDK_OFFSET(0x4F0090)
#define BESTHTTP_WEBSOCKET_WEBSOCKETRESPONSE_STARTPINGING_OFFSET UNITYSDK_OFFSET(0x4EF080)
#define BESTHTTP_WEBSOCKET_WEBSOCKETRESPONSE_SENDTHREADFUNC_OFFSET UNITYSDK_OFFSET(0x4F0D00)
#define BESTHTTP_WEBSOCKET_WEBSOCKETRESPONSE_RECEIVETHREADFUNC_OFFSET UNITYSDK_OFFSET(0x4F14C0)
#define BESTHTTP_WEBSOCKET_WEBSOCKETRESPONSE_BESTHTTP.CORE.IPROTOCOL.HANDLEEVENTS_OFFSET UNITYSDK_OFFSET(0x4F2380)
#define BESTHTTP_WEBSOCKET_WEBSOCKETRESPONSE_BESTHTTP.EXTENSIONS.IHEARTBEAT.ONHEARTBEATUPDATE_OFFSET UNITYSDK_OFFSET(0x4F2C70)
#define BESTHTTP_WEBSOCKET_WEBSOCKETRESPONSE_ONAPPLICATIONFOREGROUNDSTATECHANGED_OFFSET UNITYSDK_OFFSET(0x4F3350)
#define BESTHTTP_WEBSOCKET_WEBSOCKETRESPONSE_SENDPING_OFFSET UNITYSDK_OFFSET(0x4F0AA0)
#define BESTHTTP_WEBSOCKET_WEBSOCKETRESPONSE_CLOSEWITHERROR_OFFSET UNITYSDK_OFFSET(0x4F3050)
#define BESTHTTP_WEBSOCKET_WEBSOCKETRESPONSE_CALCULATELATENCY_OFFSET UNITYSDK_OFFSET(0x4F22F0)
#define BESTHTTP_WEBSOCKET_WEBSOCKETRESPONSE_BESTHTTP.CORE.IPROTOCOL.CANCELLATIONREQUESTED_OFFSET UNITYSDK_OFFSET(0x4F33B0)
#define BESTHTTP_WEBSOCKET_WEBSOCKETRESPONSE_TRYTOCLEANUP_OFFSET UNITYSDK_OFFSET(0x4F33C0)
#define BESTHTTP_WEBSOCKET_WEBSOCKETRESPONSE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x4F34E0)
#define BESTHTTP_WEBSOCKET_WEBSOCKETRESPONSE_.CCTOR_OFFSET UNITYSDK_OFFSET(0x4F3510)

namespace BestHTTP::WebSocket
{
	inline static constexpr unsigned int WebSocketResponse_TypeDefinitionIndex = 21331;

	class WebSocketResponse : public Il2CppObject
	{
	public:
		::System::Int32 RTTBufferCapacity; // 0x0
		::BestHTTP::WebSocket::WebSocket* _WebSocket_k__BackingField; // 0xB8
		Il2CppObject* OnText; // 0xC0
		Il2CppObject* OnBinary; // 0xC8
		Il2CppObject* OnIncompleteFrame; // 0xD0
		Il2CppObject* OnClosed; // 0xD8
		::BestHTTP::Core::HostConnectionKey* _ConnectionKey_k__BackingField; // 0xE0
		::System::TimeSpan* _PingFrequnecy_k__BackingField; // 0xF0
		::System::UInt32 _MaxFragmentSize_k__BackingField; // 0xF8
		::System::Int32 _bufferedAmount; // 0xFC
		::System::Int32 _Latency_k__BackingField; // 0x100
		::System::DateTime* lastMessage; // 0x108
		Il2CppObject* IncompleteFrames; // 0x110
		Il2CppObject* CompletedFrames; // 0x118
		::BestHTTP::WebSocket::Frames::WebSocketFrameReader* CloseFrame; // 0x120
		Il2CppObject* unsentFrames; // 0x140
		::System::Threading::AutoResetEvent* newFrameSignal; // 0x148
		::System::Int32 sendThreadCreated; // 0x150
		::System::Int32 closedThreads; // 0x154
		::System::Boolean closeSent; // 0x158
		::System::Boolean closed; // 0x159
		::System::DateTime* lastPing; // 0x160
		Il2CppObject* rtts; // 0x168

		::BestHTTP::WebSocket::WebSocket* get_WebSocket()
		{
			return (return (::BestHTTP::WebSocket::WebSocket*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_WEBSOCKET_WEBSOCKETRESPONSE_GET_WEBSOCKET_OFFSET))(nullptr);
		}

		::System::Void set_WebSocket(::BestHTTP::WebSocket::WebSocket* arg)
		{
			((::System::Void(*)(::BestHTTP::WebSocket::WebSocket*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_WEBSOCKET_WEBSOCKETRESPONSE_SET_WEBSOCKET_OFFSET))(arg, nullptr);
		}

		::BestHTTP::Core::HostConnectionKey* get_ConnectionKey()
		{
			return (return (::BestHTTP::Core::HostConnectionKey*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_WEBSOCKET_WEBSOCKETRESPONSE_GET_CONNECTIONKEY_OFFSET))(nullptr);
		}

		::System::Void set_ConnectionKey(::BestHTTP::Core::HostConnectionKey* arg)
		{
			((::System::Void(*)(::BestHTTP::Core::HostConnectionKey*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_WEBSOCKET_WEBSOCKETRESPONSE_SET_CONNECTIONKEY_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsClosed()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_WEBSOCKET_WEBSOCKETRESPONSE_GET_ISCLOSED_OFFSET))(nullptr);
		}

		::System::TimeSpan* get_PingFrequnecy()
		{
			return (return (::System::TimeSpan*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_WEBSOCKET_WEBSOCKETRESPONSE_GET_PINGFREQUNECY_OFFSET))(nullptr);
		}

		::System::Void set_PingFrequnecy(::System::TimeSpan* arg)
		{
			((::System::Void(*)(::System::TimeSpan*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_WEBSOCKET_WEBSOCKETRESPONSE_SET_PINGFREQUNECY_OFFSET))(arg, nullptr);
		}

		::System::UInt32 get_MaxFragmentSize()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_WEBSOCKET_WEBSOCKETRESPONSE_GET_MAXFRAGMENTSIZE_OFFSET))(nullptr);
		}

		::System::Void set_MaxFragmentSize(::System::UInt32 arg)
		{
			((::System::Void(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_WEBSOCKET_WEBSOCKETRESPONSE_SET_MAXFRAGMENTSIZE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_BufferedAmount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_WEBSOCKET_WEBSOCKETRESPONSE_GET_BUFFEREDAMOUNT_OFFSET))(nullptr);
		}

		::System::Int32 get_Latency()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_WEBSOCKET_WEBSOCKETRESPONSE_GET_LATENCY_OFFSET))(nullptr);
		}

		::System::Void set_Latency(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_WEBSOCKET_WEBSOCKETRESPONSE_SET_LATENCY_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::HTTPRequest* arg, ::System::IO::Stream* arg, ::System::Boolean arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::BestHTTP::HTTPRequest*, ::System::IO::Stream*, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_WEBSOCKET_WEBSOCKETRESPONSE_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void StartReceive()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_WEBSOCKET_WEBSOCKETRESPONSE_STARTRECEIVE_OFFSET))(nullptr);
		}

		::System::Void CloseStream()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_WEBSOCKET_WEBSOCKETRESPONSE_CLOSESTREAM_OFFSET))(nullptr);
		}

		::System::Void Send(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_WEBSOCKET_WEBSOCKETRESPONSE_SEND_OFFSET))(str, nullptr);
		}

		::System::Void Send(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_WEBSOCKET_WEBSOCKETRESPONSE_SEND_OFFSET))(arg, nullptr);
		}

		::System::Void Send(::Il2CppArray<::System::Object*>* arg, ::System::UInt64 arg, ::System::UInt64 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::UInt64, ::System::UInt64, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_WEBSOCKET_WEBSOCKETRESPONSE_SEND_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void Send(::BestHTTP::WebSocket::Frames::WebSocketFrame* arg)
		{
			((::System::Void(*)(::BestHTTP::WebSocket::Frames::WebSocketFrame*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_WEBSOCKET_WEBSOCKETRESPONSE_SEND_OFFSET))(arg, nullptr);
		}

		::System::Void Close()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_WEBSOCKET_WEBSOCKETRESPONSE_CLOSE_OFFSET))(nullptr);
		}

		::System::Void Close(::System::UInt16 arg, ::System::String* str)
		{
			((::System::Void(*)(::System::UInt16, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_WEBSOCKET_WEBSOCKETRESPONSE_CLOSE_OFFSET))(arg, str, nullptr);
		}

		::System::Void StartPinging(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_WEBSOCKET_WEBSOCKETRESPONSE_STARTPINGING_OFFSET))(arg, nullptr);
		}

		::System::Void SendThreadFunc()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_WEBSOCKET_WEBSOCKETRESPONSE_SENDTHREADFUNC_OFFSET))(nullptr);
		}

		::System::Void ReceiveThreadFunc()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_WEBSOCKET_WEBSOCKETRESPONSE_RECEIVETHREADFUNC_OFFSET))(nullptr);
		}

		::System::Void BestHTTP.Core.IProtocol.HandleEvents()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_WEBSOCKET_WEBSOCKETRESPONSE_BESTHTTP.CORE.IPROTOCOL.HANDLEEVENTS_OFFSET))(nullptr);
		}

		::System::Void BestHTTP.Extensions.IHeartbeat.OnHeartbeatUpdate(::System::TimeSpan* arg)
		{
			((::System::Void(*)(::System::TimeSpan*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_WEBSOCKET_WEBSOCKETRESPONSE_BESTHTTP.EXTENSIONS.IHEARTBEAT.ONHEARTBEATUPDATE_OFFSET))(arg, nullptr);
		}

		::System::Void OnApplicationForegroundStateChanged(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_WEBSOCKET_WEBSOCKETRESPONSE_ONAPPLICATIONFOREGROUNDSTATECHANGED_OFFSET))(arg, nullptr);
		}

		::System::Void SendPing()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_WEBSOCKET_WEBSOCKETRESPONSE_SENDPING_OFFSET))(nullptr);
		}

		::System::Void CloseWithError(::BestHTTP::HTTPRequestStates* arg, ::System::String* str)
		{
			((::System::Void(*)(::BestHTTP::HTTPRequestStates*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_WEBSOCKET_WEBSOCKETRESPONSE_CLOSEWITHERROR_OFFSET))(arg, str, nullptr);
		}

		::System::Int32 CalculateLatency()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_WEBSOCKET_WEBSOCKETRESPONSE_CALCULATELATENCY_OFFSET))(nullptr);
		}

		::System::Void BestHTTP.Core.IProtocol.CancellationRequested()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_WEBSOCKET_WEBSOCKETRESPONSE_BESTHTTP.CORE.IPROTOCOL.CANCELLATIONREQUESTED_OFFSET))(nullptr);
		}

		::System::Void TryToCleanup()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_WEBSOCKET_WEBSOCKETRESPONSE_TRYTOCLEANUP_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_WEBSOCKET_WEBSOCKETRESPONSE_TOSTRING_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_WEBSOCKET_WEBSOCKETRESPONSE_.CCTOR_OFFSET))(nullptr);
		}

	};
}

