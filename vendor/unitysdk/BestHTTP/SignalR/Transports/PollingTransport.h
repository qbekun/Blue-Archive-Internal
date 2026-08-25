#pragma once
#include "../../../unitysdk.h"

namespace BestHTTP { class HTTPRequest; }
namespace BestHTTP::SignalR { class TransportTypes; }
namespace BestHTTP { class HTTPResponse; }
namespace BestHTTP::SignalR { class Connection; }

#define BESTHTTP_SIGNALR_TRANSPORTS_POLLINGTRANSPORT_CONNECT_OFFSET UNITYSDK_OFFSET(0x74B090)
#define BESTHTTP_SIGNALR_TRANSPORTS_POLLINGTRANSPORT_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x74B3C0)
#define BESTHTTP_SIGNALR_TRANSPORTS_POLLINGTRANSPORT_ONPOLLREQUESTFINISHED_OFFSET UNITYSDK_OFFSET(0x74B3D0)
#define BESTHTTP_SIGNALR_TRANSPORTS_POLLINGTRANSPORT_BESTHTTP.EXTENSIONS.IHEARTBEAT.ONHEARTBEATUPDATE_OFFSET UNITYSDK_OFFSET(0x74C0C0)
#define BESTHTTP_SIGNALR_TRANSPORTS_POLLINGTRANSPORT_.CTOR_OFFSET UNITYSDK_OFFSET(0x74C3E0)
#define BESTHTTP_SIGNALR_TRANSPORTS_POLLINGTRANSPORT_ABORTED_OFFSET UNITYSDK_OFFSET(0x74C5A0)
#define BESTHTTP_SIGNALR_TRANSPORTS_POLLINGTRANSPORT_STARTED_OFFSET UNITYSDK_OFFSET(0x74C620)
#define BESTHTTP_SIGNALR_TRANSPORTS_POLLINGTRANSPORT_STOP_OFFSET UNITYSDK_OFFSET(0x74C6B0)
#define BESTHTTP_SIGNALR_TRANSPORTS_POLLINGTRANSPORT_ONCONNECTREQUESTFINISHED_OFFSET UNITYSDK_OFFSET(0x74C760)
#define BESTHTTP_SIGNALR_TRANSPORTS_POLLINGTRANSPORT_POLL_OFFSET UNITYSDK_OFFSET(0x74C1F0)
#define BESTHTTP_SIGNALR_TRANSPORTS_POLLINGTRANSPORT_GET_SUPPORTSKEEPALIVE_OFFSET UNITYSDK_OFFSET(0x74CD70)

namespace BestHTTP::SignalR::Transports
{
	inline static constexpr unsigned int PollingTransport_TypeDefinitionIndex = 21488;

	class PollingTransport : public Il2CppObject
	{
	public:
		::System::DateTime* LastPoll; // 0x38
		::System::TimeSpan* PollDelay; // 0x40
		::System::TimeSpan* PollTimeout; // 0x48
		::BestHTTP::HTTPRequest* pollRequest; // 0x50

		::System::Void Connect()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_TRANSPORTS_POLLINGTRANSPORT_CONNECT_OFFSET))(nullptr);
		}

		::BestHTTP::SignalR::TransportTypes* get_Type()
		{
			return (return (::BestHTTP::SignalR::TransportTypes*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_TRANSPORTS_POLLINGTRANSPORT_GET_TYPE_OFFSET))(nullptr);
		}

		::System::Void OnPollRequestFinished(::BestHTTP::HTTPRequest* arg, ::BestHTTP::HTTPResponse* arg)
		{
			((::System::Void(*)(::BestHTTP::HTTPRequest*, ::BestHTTP::HTTPResponse*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_TRANSPORTS_POLLINGTRANSPORT_ONPOLLREQUESTFINISHED_OFFSET))(arg, arg, nullptr);
		}

		::System::Void BestHTTP.Extensions.IHeartbeat.OnHeartbeatUpdate(::System::TimeSpan* arg)
		{
			((::System::Void(*)(::System::TimeSpan*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_TRANSPORTS_POLLINGTRANSPORT_BESTHTTP.EXTENSIONS.IHEARTBEAT.ONHEARTBEATUPDATE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SignalR::Connection* arg)
		{
			((::System::Void(*)(::BestHTTP::SignalR::Connection*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_TRANSPORTS_POLLINGTRANSPORT_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void Aborted()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_TRANSPORTS_POLLINGTRANSPORT_ABORTED_OFFSET))(nullptr);
		}

		::System::Void Started()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_TRANSPORTS_POLLINGTRANSPORT_STARTED_OFFSET))(nullptr);
		}

		::System::Void Stop()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_TRANSPORTS_POLLINGTRANSPORT_STOP_OFFSET))(nullptr);
		}

		::System::Void OnConnectRequestFinished(::BestHTTP::HTTPRequest* arg, ::BestHTTP::HTTPResponse* arg)
		{
			((::System::Void(*)(::BestHTTP::HTTPRequest*, ::BestHTTP::HTTPResponse*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_TRANSPORTS_POLLINGTRANSPORT_ONCONNECTREQUESTFINISHED_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Poll()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_TRANSPORTS_POLLINGTRANSPORT_POLL_OFFSET))(nullptr);
		}

		::System::Boolean get_SupportsKeepAlive()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_TRANSPORTS_POLLINGTRANSPORT_GET_SUPPORTSKEEPALIVE_OFFSET))(nullptr);
		}

	};
}

