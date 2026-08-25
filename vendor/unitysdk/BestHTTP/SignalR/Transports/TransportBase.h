#pragma once
#include "../../../unitysdk.h"

namespace BestHTTP::SignalR { class IConnection; }
namespace BestHTTP::SignalR { class TransportStates; }
namespace BestHTTP::SignalR::Transports { class OnTransportStateChangedDelegate; }
namespace BestHTTP::SignalR::Messages { class IServerMessage; }
namespace BestHTTP::SignalR::JsonEncoders { class IJsonEncoder; }
namespace BestHTTP { class HTTPRequest; }
namespace BestHTTP { class HTTPResponse; }
namespace BestHTTP::SignalR { class Connection; }
namespace BestHTTP::SignalR { class TransportTypes; }

#define BESTHTTP_SIGNALR_TRANSPORTS_TRANSPORTBASE_PARSE_OFFSET UNITYSDK_OFFSET(0x74B9F0)
#define BESTHTTP_SIGNALR_TRANSPORTS_TRANSPORTBASE_GET_SUPPORTSKEEPALIVE_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_SIGNALR_TRANSPORTS_TRANSPORTBASE_ONSTARTREQUESTFINISHED_OFFSET UNITYSDK_OFFSET(0x74FA40)
#define BESTHTTP_SIGNALR_TRANSPORTS_TRANSPORTBASE_SET_STATE_OFFSET UNITYSDK_OFFSET(0x74B390)
#define BESTHTTP_SIGNALR_TRANSPORTS_TRANSPORTBASE_STOP_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_SIGNALR_TRANSPORTS_TRANSPORTBASE_ADD_ONSTATECHANGED_OFFSET UNITYSDK_OFFSET(0x750240)
#define BESTHTTP_SIGNALR_TRANSPORTS_TRANSPORTBASE_GET_STATE_OFFSET UNITYSDK_OFFSET(0x7502E0)
#define BESTHTTP_SIGNALR_TRANSPORTS_TRANSPORTBASE_SET_CONNECTION_OFFSET UNITYSDK_OFFSET(0x7502F0)
#define BESTHTTP_SIGNALR_TRANSPORTS_TRANSPORTBASE_REMOVE_ONSTATECHANGED_OFFSET UNITYSDK_OFFSET(0x750300)
#define BESTHTTP_SIGNALR_TRANSPORTS_TRANSPORTBASE_ONABORTREQUESTFINISHED_OFFSET UNITYSDK_OFFSET(0x7503A0)
#define BESTHTTP_SIGNALR_TRANSPORTS_TRANSPORTBASE_CONNECT_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_SIGNALR_TRANSPORTS_TRANSPORTBASE_ABORT_OFFSET UNITYSDK_OFFSET(0x74F4F0)
#define BESTHTTP_SIGNALR_TRANSPORTS_TRANSPORTBASE_GET_CONNECTION_OFFSET UNITYSDK_OFFSET(0x750A80)
#define BESTHTTP_SIGNALR_TRANSPORTS_TRANSPORTBASE_.CTOR_OFFSET UNITYSDK_OFFSET(0x74D4E0)
#define BESTHTTP_SIGNALR_TRANSPORTS_TRANSPORTBASE_SET_NAME_OFFSET UNITYSDK_OFFSET(0x750A90)
#define BESTHTTP_SIGNALR_TRANSPORTS_TRANSPORTBASE_ONCONNECTED_OFFSET UNITYSDK_OFFSET(0x74CC70)
#define BESTHTTP_SIGNALR_TRANSPORTS_TRANSPORTBASE_STARTED_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_SIGNALR_TRANSPORTS_TRANSPORTBASE_ABORTFINISHED_OFFSET UNITYSDK_OFFSET(0x7509A0)
#define BESTHTTP_SIGNALR_TRANSPORTS_TRANSPORTBASE_ABORTED_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_SIGNALR_TRANSPORTS_TRANSPORTBASE_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_SIGNALR_TRANSPORTS_TRANSPORTBASE_SEND_OFFSET UNITYSDK_OFFSET(0x750FA0)
#define BESTHTTP_SIGNALR_TRANSPORTS_TRANSPORTBASE_START_OFFSET UNITYSDK_OFFSET(0x750AA0)
#define BESTHTTP_SIGNALR_TRANSPORTS_TRANSPORTBASE_SENDIMPL_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_SIGNALR_TRANSPORTS_TRANSPORTBASE_RECONNECT_OFFSET UNITYSDK_OFFSET(0x751240)
#define BESTHTTP_SIGNALR_TRANSPORTS_TRANSPORTBASE_GET_NAME_OFFSET UNITYSDK_OFFSET(0x7513C0)

namespace BestHTTP::SignalR::Transports
{
	inline static constexpr unsigned int TransportBase_TypeDefinitionIndex = 21493;

	class TransportBase : public Il2CppObject
	{
	public:
		::System::Int32 MaxRetryCount; // 0x0
		::System::String* _Name_k__BackingField; // 0x10
		::BestHTTP::SignalR::IConnection* _Connection_k__BackingField; // 0x18
		::BestHTTP::SignalR::TransportStates* _state; // 0x20
		::BestHTTP::SignalR::Transports::OnTransportStateChangedDelegate* OnStateChanged; // 0x28

		::BestHTTP::SignalR::Messages::IServerMessage* Parse(::BestHTTP::SignalR::JsonEncoders::IJsonEncoder* arg, ::System::String* str)
		{
			return (return (::BestHTTP::SignalR::Messages::IServerMessage*(*)(::BestHTTP::SignalR::JsonEncoders::IJsonEncoder*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_TRANSPORTS_TRANSPORTBASE_PARSE_OFFSET))(arg, str, nullptr);
		}

		::System::Boolean get_SupportsKeepAlive()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_TRANSPORTS_TRANSPORTBASE_GET_SUPPORTSKEEPALIVE_OFFSET))(nullptr);
		}

		::System::Void OnStartRequestFinished(::BestHTTP::HTTPRequest* arg, ::BestHTTP::HTTPResponse* arg)
		{
			((::System::Void(*)(::BestHTTP::HTTPRequest*, ::BestHTTP::HTTPResponse*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_TRANSPORTS_TRANSPORTBASE_ONSTARTREQUESTFINISHED_OFFSET))(arg, arg, nullptr);
		}

		::System::Void set_State(::BestHTTP::SignalR::TransportStates* arg)
		{
			((::System::Void(*)(::BestHTTP::SignalR::TransportStates*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_TRANSPORTS_TRANSPORTBASE_SET_STATE_OFFSET))(arg, nullptr);
		}

		::System::Void Stop()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_TRANSPORTS_TRANSPORTBASE_STOP_OFFSET))(nullptr);
		}

		::System::Void add_OnStateChanged(::BestHTTP::SignalR::Transports::OnTransportStateChangedDelegate* arg)
		{
			((::System::Void(*)(::BestHTTP::SignalR::Transports::OnTransportStateChangedDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_TRANSPORTS_TRANSPORTBASE_ADD_ONSTATECHANGED_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SignalR::TransportStates* get_State()
		{
			return (return (::BestHTTP::SignalR::TransportStates*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_TRANSPORTS_TRANSPORTBASE_GET_STATE_OFFSET))(nullptr);
		}

		::System::Void set_Connection(::BestHTTP::SignalR::IConnection* arg)
		{
			((::System::Void(*)(::BestHTTP::SignalR::IConnection*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_TRANSPORTS_TRANSPORTBASE_SET_CONNECTION_OFFSET))(arg, nullptr);
		}

		::System::Void remove_OnStateChanged(::BestHTTP::SignalR::Transports::OnTransportStateChangedDelegate* arg)
		{
			((::System::Void(*)(::BestHTTP::SignalR::Transports::OnTransportStateChangedDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_TRANSPORTS_TRANSPORTBASE_REMOVE_ONSTATECHANGED_OFFSET))(arg, nullptr);
		}

		::System::Void OnAbortRequestFinished(::BestHTTP::HTTPRequest* arg, ::BestHTTP::HTTPResponse* arg)
		{
			((::System::Void(*)(::BestHTTP::HTTPRequest*, ::BestHTTP::HTTPResponse*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_TRANSPORTS_TRANSPORTBASE_ONABORTREQUESTFINISHED_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Connect()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_TRANSPORTS_TRANSPORTBASE_CONNECT_OFFSET))(nullptr);
		}

		::System::Void Abort()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_TRANSPORTS_TRANSPORTBASE_ABORT_OFFSET))(nullptr);
		}

		::BestHTTP::SignalR::IConnection* get_Connection()
		{
			return (return (::BestHTTP::SignalR::IConnection*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_TRANSPORTS_TRANSPORTBASE_GET_CONNECTION_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str, ::BestHTTP::SignalR::Connection* arg)
		{
			((::System::Void(*)(::System::String*, ::BestHTTP::SignalR::Connection*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_TRANSPORTS_TRANSPORTBASE_.CTOR_OFFSET))(str, arg, nullptr);
		}

		::System::Void set_Name(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_TRANSPORTS_TRANSPORTBASE_SET_NAME_OFFSET))(str, nullptr);
		}

		::System::Void OnConnected()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_TRANSPORTS_TRANSPORTBASE_ONCONNECTED_OFFSET))(nullptr);
		}

		::System::Void Started()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_TRANSPORTS_TRANSPORTBASE_STARTED_OFFSET))(nullptr);
		}

		::System::Void AbortFinished()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_TRANSPORTS_TRANSPORTBASE_ABORTFINISHED_OFFSET))(nullptr);
		}

		::System::Void Aborted()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_TRANSPORTS_TRANSPORTBASE_ABORTED_OFFSET))(nullptr);
		}

		::BestHTTP::SignalR::TransportTypes* get_Type()
		{
			return (return (::BestHTTP::SignalR::TransportTypes*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_TRANSPORTS_TRANSPORTBASE_GET_TYPE_OFFSET))(nullptr);
		}

		::System::Void Send(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_TRANSPORTS_TRANSPORTBASE_SEND_OFFSET))(str, nullptr);
		}

		::System::Void Start()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_TRANSPORTS_TRANSPORTBASE_START_OFFSET))(nullptr);
		}

		::System::Void SendImpl(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_TRANSPORTS_TRANSPORTBASE_SENDIMPL_OFFSET))(str, nullptr);
		}

		::System::Void Reconnect()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_TRANSPORTS_TRANSPORTBASE_RECONNECT_OFFSET))(nullptr);
		}

		::System::String* get_Name()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_TRANSPORTS_TRANSPORTBASE_GET_NAME_OFFSET))(nullptr);
		}

	};
}

