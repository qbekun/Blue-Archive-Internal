#pragma once
#include "../../../unitysdk.h"

namespace BestHTTP::SignalR::Messages { class ClientMessage; }
namespace BestHTTP::SignalR { class Connection; }
namespace BestHTTP::SignalR::Messages { class MethodCallMessage; }
namespace BestHTTP::SignalR::Messages { class IServerMessage; }

#define BESTHTTP_SIGNALR_HUBS_IHUB_CALL_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_SIGNALR_HUBS_IHUB_HASSENTMESSAGEID_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_SIGNALR_HUBS_IHUB_CLOSE_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_SIGNALR_HUBS_IHUB_GET_CONNECTION_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_SIGNALR_HUBS_IHUB_SET_CONNECTION_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_SIGNALR_HUBS_IHUB_ONMETHOD_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_SIGNALR_HUBS_IHUB_ONMESSAGE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace BestHTTP::SignalR::Hubs
{
	inline static constexpr unsigned int IHub_TypeDefinitionIndex = 21513;

	class IHub : public Il2CppObject
	{
	public:
		::System::Boolean Call(::BestHTTP::SignalR::Messages::ClientMessage* arg)
		{
			return (return (::System::Boolean(*)(::BestHTTP::SignalR::Messages::ClientMessage*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_HUBS_IHUB_CALL_OFFSET))(arg, nullptr);
		}

		::System::Boolean HasSentMessageId(::System::UInt64 arg)
		{
			return (return (::System::Boolean(*)(::System::UInt64, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_HUBS_IHUB_HASSENTMESSAGEID_OFFSET))(arg, nullptr);
		}

		::System::Void Close()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_HUBS_IHUB_CLOSE_OFFSET))(nullptr);
		}

		::BestHTTP::SignalR::Connection* get_Connection()
		{
			return (return (::BestHTTP::SignalR::Connection*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_HUBS_IHUB_GET_CONNECTION_OFFSET))(nullptr);
		}

		::System::Void set_Connection(::BestHTTP::SignalR::Connection* arg)
		{
			((::System::Void(*)(::BestHTTP::SignalR::Connection*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_HUBS_IHUB_SET_CONNECTION_OFFSET))(arg, nullptr);
		}

		::System::Void OnMethod(::BestHTTP::SignalR::Messages::MethodCallMessage* arg)
		{
			((::System::Void(*)(::BestHTTP::SignalR::Messages::MethodCallMessage*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_HUBS_IHUB_ONMETHOD_OFFSET))(arg, nullptr);
		}

		::System::Void OnMessage(::BestHTTP::SignalR::Messages::IServerMessage* arg)
		{
			((::System::Void(*)(::BestHTTP::SignalR::Messages::IServerMessage*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_HUBS_IHUB_ONMESSAGE_OFFSET))(arg, nullptr);
		}

	};
}

