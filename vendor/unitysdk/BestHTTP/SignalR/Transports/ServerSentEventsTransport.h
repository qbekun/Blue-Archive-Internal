#pragma once
#include "../../../unitysdk.h"

namespace BestHTTP::ServerSentEvents { class EventSource; }
namespace BestHTTP::SignalR { class TransportTypes; }
namespace BestHTTP::ServerSentEvents { class Message; }
namespace BestHTTP::SignalR { class Connection; }

#define BESTHTTP_SIGNALR_TRANSPORTS_SERVERSENTEVENTSTRANSPORT_ONEVENTSOURCECLOSED_OFFSET UNITYSDK_OFFSET(0x74D550)
#define BESTHTTP_SIGNALR_TRANSPORTS_SERVERSENTEVENTSTRANSPORT_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x74D890)
#define BESTHTTP_SIGNALR_TRANSPORTS_SERVERSENTEVENTSTRANSPORT_ONEVENTSOURCEERROR_OFFSET UNITYSDK_OFFSET(0x74D680)
#define BESTHTTP_SIGNALR_TRANSPORTS_SERVERSENTEVENTSTRANSPORT_STARTED_OFFSET UNITYSDK_OFFSET(0x74D8A0)
#define BESTHTTP_SIGNALR_TRANSPORTS_SERVERSENTEVENTSTRANSPORT_CONNECT_OFFSET UNITYSDK_OFFSET(0x74D8B0)
#define BESTHTTP_SIGNALR_TRANSPORTS_SERVERSENTEVENTSTRANSPORT_ABORTED_OFFSET UNITYSDK_OFFSET(0x74EB30)
#define BESTHTTP_SIGNALR_TRANSPORTS_SERVERSENTEVENTSTRANSPORT_ONEVENTSOURCEMESSAGE_OFFSET UNITYSDK_OFFSET(0x74EB70)
#define BESTHTTP_SIGNALR_TRANSPORTS_SERVERSENTEVENTSTRANSPORT_GET_SUPPORTSKEEPALIVE_OFFSET UNITYSDK_OFFSET(0x74ECF0)
#define BESTHTTP_SIGNALR_TRANSPORTS_SERVERSENTEVENTSTRANSPORT_ONEVENTSOURCEOPEN_OFFSET UNITYSDK_OFFSET(0x74ED00)
#define BESTHTTP_SIGNALR_TRANSPORTS_SERVERSENTEVENTSTRANSPORT_STOP_OFFSET UNITYSDK_OFFSET(0x74EE10)
#define BESTHTTP_SIGNALR_TRANSPORTS_SERVERSENTEVENTSTRANSPORT_ABORT_OFFSET UNITYSDK_OFFSET(0x74F480)
#define BESTHTTP_SIGNALR_TRANSPORTS_SERVERSENTEVENTSTRANSPORT_.CTOR_OFFSET UNITYSDK_OFFSET(0x74F730)

namespace BestHTTP::SignalR::Transports
{
	inline static constexpr unsigned int ServerSentEventsTransport_TypeDefinitionIndex = 21491;

	class ServerSentEventsTransport : public Il2CppObject
	{
	public:
		::BestHTTP::ServerSentEvents::EventSource* EventSource; // 0x38

		::System::Void OnEventSourceClosed(::BestHTTP::ServerSentEvents::EventSource* arg)
		{
			((::System::Void(*)(::BestHTTP::ServerSentEvents::EventSource*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_TRANSPORTS_SERVERSENTEVENTSTRANSPORT_ONEVENTSOURCECLOSED_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SignalR::TransportTypes* get_Type()
		{
			return (return (::BestHTTP::SignalR::TransportTypes*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_TRANSPORTS_SERVERSENTEVENTSTRANSPORT_GET_TYPE_OFFSET))(nullptr);
		}

		::System::Void OnEventSourceError(::BestHTTP::ServerSentEvents::EventSource* arg, ::System::String* str)
		{
			((::System::Void(*)(::BestHTTP::ServerSentEvents::EventSource*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_TRANSPORTS_SERVERSENTEVENTSTRANSPORT_ONEVENTSOURCEERROR_OFFSET))(arg, str, nullptr);
		}

		::System::Void Started()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_TRANSPORTS_SERVERSENTEVENTSTRANSPORT_STARTED_OFFSET))(nullptr);
		}

		::System::Void Connect()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_TRANSPORTS_SERVERSENTEVENTSTRANSPORT_CONNECT_OFFSET))(nullptr);
		}

		::System::Void Aborted()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_TRANSPORTS_SERVERSENTEVENTSTRANSPORT_ABORTED_OFFSET))(nullptr);
		}

		::System::Void OnEventSourceMessage(::BestHTTP::ServerSentEvents::EventSource* arg, ::BestHTTP::ServerSentEvents::Message* arg)
		{
			((::System::Void(*)(::BestHTTP::ServerSentEvents::EventSource*, ::BestHTTP::ServerSentEvents::Message*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_TRANSPORTS_SERVERSENTEVENTSTRANSPORT_ONEVENTSOURCEMESSAGE_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean get_SupportsKeepAlive()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_TRANSPORTS_SERVERSENTEVENTSTRANSPORT_GET_SUPPORTSKEEPALIVE_OFFSET))(nullptr);
		}

		::System::Void OnEventSourceOpen(::BestHTTP::ServerSentEvents::EventSource* arg)
		{
			((::System::Void(*)(::BestHTTP::ServerSentEvents::EventSource*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_TRANSPORTS_SERVERSENTEVENTSTRANSPORT_ONEVENTSOURCEOPEN_OFFSET))(arg, nullptr);
		}

		::System::Void Stop()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_TRANSPORTS_SERVERSENTEVENTSTRANSPORT_STOP_OFFSET))(nullptr);
		}

		::System::Void Abort()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_TRANSPORTS_SERVERSENTEVENTSTRANSPORT_ABORT_OFFSET))(nullptr);
		}

		::System::Void .ctor(::BestHTTP::SignalR::Connection* arg)
		{
			((::System::Void(*)(::BestHTTP::SignalR::Connection*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_TRANSPORTS_SERVERSENTEVENTSTRANSPORT_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

