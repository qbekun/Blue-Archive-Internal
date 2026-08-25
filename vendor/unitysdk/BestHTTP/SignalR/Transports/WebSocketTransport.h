#pragma once
#include "../../../unitysdk.h"

namespace BestHTTP::WebSocket { class WebSocket; }
namespace BestHTTP::SignalR { class TransportTypes; }
namespace BestHTTP::SignalR { class Connection; }

#define BESTHTTP_SIGNALR_TRANSPORTS_WEBSOCKETTRANSPORT_STOP_OFFSET UNITYSDK_OFFSET(0x7513D0)
#define BESTHTTP_SIGNALR_TRANSPORTS_WEBSOCKETTRANSPORT_WSOCKET_ONERROR_OFFSET UNITYSDK_OFFSET(0x751480)
#define BESTHTTP_SIGNALR_TRANSPORTS_WEBSOCKETTRANSPORT_ABORTED_OFFSET UNITYSDK_OFFSET(0x751710)
#define BESTHTTP_SIGNALR_TRANSPORTS_WEBSOCKETTRANSPORT_CONNECT_OFFSET UNITYSDK_OFFSET(0x751770)
#define BESTHTTP_SIGNALR_TRANSPORTS_WEBSOCKETTRANSPORT_WSOCKET_ONCLOSED_OFFSET UNITYSDK_OFFSET(0x751D00)
#define BESTHTTP_SIGNALR_TRANSPORTS_WEBSOCKETTRANSPORT_WSOCKET_ONOPEN_OFFSET UNITYSDK_OFFSET(0x751F10)
#define BESTHTTP_SIGNALR_TRANSPORTS_WEBSOCKETTRANSPORT_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x752040)
#define BESTHTTP_SIGNALR_TRANSPORTS_WEBSOCKETTRANSPORT_SENDIMPL_OFFSET UNITYSDK_OFFSET(0x752050)
#define BESTHTTP_SIGNALR_TRANSPORTS_WEBSOCKETTRANSPORT_WSOCKET_ONMESSAGE_OFFSET UNITYSDK_OFFSET(0x7520A0)
#define BESTHTTP_SIGNALR_TRANSPORTS_WEBSOCKETTRANSPORT_GET_SUPPORTSKEEPALIVE_OFFSET UNITYSDK_OFFSET(0x7521E0)
#define BESTHTTP_SIGNALR_TRANSPORTS_WEBSOCKETTRANSPORT_.CTOR_OFFSET UNITYSDK_OFFSET(0x7521F0)
#define BESTHTTP_SIGNALR_TRANSPORTS_WEBSOCKETTRANSPORT_STARTED_OFFSET UNITYSDK_OFFSET(0x752280)

namespace BestHTTP::SignalR::Transports
{
	inline static constexpr unsigned int WebSocketTransport_TypeDefinitionIndex = 21494;

	class WebSocketTransport : public Il2CppObject
	{
	public:
		::BestHTTP::WebSocket::WebSocket* wSocket; // 0x30

		::System::Void Stop()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_TRANSPORTS_WEBSOCKETTRANSPORT_STOP_OFFSET))(nullptr);
		}

		::System::Void WSocket_OnError(::BestHTTP::WebSocket::WebSocket* arg, ::System::String* str)
		{
			((::System::Void(*)(::BestHTTP::WebSocket::WebSocket*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_TRANSPORTS_WEBSOCKETTRANSPORT_WSOCKET_ONERROR_OFFSET))(arg, str, nullptr);
		}

		::System::Void Aborted()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_TRANSPORTS_WEBSOCKETTRANSPORT_ABORTED_OFFSET))(nullptr);
		}

		::System::Void Connect()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_TRANSPORTS_WEBSOCKETTRANSPORT_CONNECT_OFFSET))(nullptr);
		}

		::System::Void WSocket_OnClosed(::BestHTTP::WebSocket::WebSocket* arg, ::System::UInt16 arg, ::System::String* str)
		{
			((::System::Void(*)(::BestHTTP::WebSocket::WebSocket*, ::System::UInt16, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_TRANSPORTS_WEBSOCKETTRANSPORT_WSOCKET_ONCLOSED_OFFSET))(arg, arg, str, nullptr);
		}

		::System::Void WSocket_OnOpen(::BestHTTP::WebSocket::WebSocket* arg)
		{
			((::System::Void(*)(::BestHTTP::WebSocket::WebSocket*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_TRANSPORTS_WEBSOCKETTRANSPORT_WSOCKET_ONOPEN_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SignalR::TransportTypes* get_Type()
		{
			return (return (::BestHTTP::SignalR::TransportTypes*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_TRANSPORTS_WEBSOCKETTRANSPORT_GET_TYPE_OFFSET))(nullptr);
		}

		::System::Void SendImpl(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_TRANSPORTS_WEBSOCKETTRANSPORT_SENDIMPL_OFFSET))(str, nullptr);
		}

		::System::Void WSocket_OnMessage(::BestHTTP::WebSocket::WebSocket* arg, ::System::String* str)
		{
			((::System::Void(*)(::BestHTTP::WebSocket::WebSocket*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_TRANSPORTS_WEBSOCKETTRANSPORT_WSOCKET_ONMESSAGE_OFFSET))(arg, str, nullptr);
		}

		::System::Boolean get_SupportsKeepAlive()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_TRANSPORTS_WEBSOCKETTRANSPORT_GET_SUPPORTSKEEPALIVE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::BestHTTP::SignalR::Connection* arg)
		{
			((::System::Void(*)(::BestHTTP::SignalR::Connection*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_TRANSPORTS_WEBSOCKETTRANSPORT_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void Started()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_TRANSPORTS_WEBSOCKETTRANSPORT_STARTED_OFFSET))(nullptr);
		}

	};
}

