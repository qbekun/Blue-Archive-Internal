#pragma once
#include "../../unitysdk.h"

namespace BestHTTP::SignalR::JsonEncoders { class IJsonEncoder; }
namespace BestHTTP::SignalR { class ConnectionStates; }
namespace BestHTTP::SignalR { class NegotiationData; }
namespace BestHTTP::SignalR::Transports { class TransportBase; }
namespace BestHTTP::SignalR { class ProtocolVersions; }
namespace BestHTTP::SignalR::Authentication { class IAuthenticationProvider; }
namespace BestHTTP::SignalR { class OnConnectedDelegate; }
namespace BestHTTP::SignalR { class OnClosedDelegate; }
namespace BestHTTP::SignalR { class OnErrorDelegate; }
namespace BestHTTP::SignalR { class OnStateChanged; }
namespace BestHTTP::SignalR { class OnNonHubMessageDelegate; }
namespace BestHTTP::SignalR { class OnPrepareRequestDelegate; }
namespace BestHTTP::SignalR::Messages { class MultiMessage; }
namespace BestHTTP { class HTTPRequest; }
namespace BestHTTP::Connections { class SupportedProtocols; }
namespace BestHTTP::SignalR::Hubs { class Hub; }
namespace BestHTTP::SignalR::Messages { class IServerMessage; }
namespace BestHTTP::SignalR { class RequestTypes; }
namespace PlatformSupport::Collections::Specialized { class NotifyCollectionChangedEventArgs; }
namespace BestHTTP { class HTTPResponse; }

#define BESTHTTP_SIGNALR_CONNECTION_GET_URI_OFFSET UNITYSDK_OFFSET(0x656090)
#define BESTHTTP_SIGNALR_CONNECTION_SET_URI_OFFSET UNITYSDK_OFFSET(0x6560A0)
#define BESTHTTP_SIGNALR_CONNECTION_GET_STATE_OFFSET UNITYSDK_OFFSET(0x6560B0)
#define BESTHTTP_SIGNALR_CONNECTION_SET_STATE_OFFSET UNITYSDK_OFFSET(0x6560C0)
#define BESTHTTP_SIGNALR_CONNECTION_GET_NEGOTIATIONRESULT_OFFSET UNITYSDK_OFFSET(0x656100)
#define BESTHTTP_SIGNALR_CONNECTION_SET_NEGOTIATIONRESULT_OFFSET UNITYSDK_OFFSET(0x656110)
#define BESTHTTP_SIGNALR_CONNECTION_GET_HUBS_OFFSET UNITYSDK_OFFSET(0x656120)
#define BESTHTTP_SIGNALR_CONNECTION_SET_HUBS_OFFSET UNITYSDK_OFFSET(0x656130)
#define BESTHTTP_SIGNALR_CONNECTION_GET_TRANSPORT_OFFSET UNITYSDK_OFFSET(0x656140)
#define BESTHTTP_SIGNALR_CONNECTION_SET_TRANSPORT_OFFSET UNITYSDK_OFFSET(0x656150)
#define BESTHTTP_SIGNALR_CONNECTION_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0x656160)
#define BESTHTTP_SIGNALR_CONNECTION_SET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0x656170)
#define BESTHTTP_SIGNALR_CONNECTION_GET_ADDITIONALQUERYPARAMS_OFFSET UNITYSDK_OFFSET(0x656180)
#define BESTHTTP_SIGNALR_CONNECTION_SET_ADDITIONALQUERYPARAMS_OFFSET UNITYSDK_OFFSET(0x656190)
#define BESTHTTP_SIGNALR_CONNECTION_GET_QUERYPARAMSONLYFORHANDSHAKE_OFFSET UNITYSDK_OFFSET(0x6562B0)
#define BESTHTTP_SIGNALR_CONNECTION_SET_QUERYPARAMSONLYFORHANDSHAKE_OFFSET UNITYSDK_OFFSET(0x6562C0)
#define BESTHTTP_SIGNALR_CONNECTION_GET_JSONENCODER_OFFSET UNITYSDK_OFFSET(0x6562D0)
#define BESTHTTP_SIGNALR_CONNECTION_SET_JSONENCODER_OFFSET UNITYSDK_OFFSET(0x6562E0)
#define BESTHTTP_SIGNALR_CONNECTION_GET_AUTHENTICATIONPROVIDER_OFFSET UNITYSDK_OFFSET(0x6562F0)
#define BESTHTTP_SIGNALR_CONNECTION_SET_AUTHENTICATIONPROVIDER_OFFSET UNITYSDK_OFFSET(0x656300)
#define BESTHTTP_SIGNALR_CONNECTION_GET_PINGINTERVAL_OFFSET UNITYSDK_OFFSET(0x656310)
#define BESTHTTP_SIGNALR_CONNECTION_SET_PINGINTERVAL_OFFSET UNITYSDK_OFFSET(0x656320)
#define BESTHTTP_SIGNALR_CONNECTION_GET_RECONNECTDELAY_OFFSET UNITYSDK_OFFSET(0x656330)
#define BESTHTTP_SIGNALR_CONNECTION_SET_RECONNECTDELAY_OFFSET UNITYSDK_OFFSET(0x656340)
#define BESTHTTP_SIGNALR_CONNECTION_ADD_ONCONNECTED_OFFSET UNITYSDK_OFFSET(0x656350)
#define BESTHTTP_SIGNALR_CONNECTION_REMOVE_ONCONNECTED_OFFSET UNITYSDK_OFFSET(0x6563F0)
#define BESTHTTP_SIGNALR_CONNECTION_ADD_ONCLOSED_OFFSET UNITYSDK_OFFSET(0x656490)
#define BESTHTTP_SIGNALR_CONNECTION_REMOVE_ONCLOSED_OFFSET UNITYSDK_OFFSET(0x656530)
#define BESTHTTP_SIGNALR_CONNECTION_ADD_ONERROR_OFFSET UNITYSDK_OFFSET(0x6565D0)
#define BESTHTTP_SIGNALR_CONNECTION_REMOVE_ONERROR_OFFSET UNITYSDK_OFFSET(0x656670)
#define BESTHTTP_SIGNALR_CONNECTION_ADD_ONRECONNECTING_OFFSET UNITYSDK_OFFSET(0x656710)
#define BESTHTTP_SIGNALR_CONNECTION_REMOVE_ONRECONNECTING_OFFSET UNITYSDK_OFFSET(0x6567B0)
#define BESTHTTP_SIGNALR_CONNECTION_ADD_ONRECONNECTED_OFFSET UNITYSDK_OFFSET(0x656850)
#define BESTHTTP_SIGNALR_CONNECTION_REMOVE_ONRECONNECTED_OFFSET UNITYSDK_OFFSET(0x6568F0)
#define BESTHTTP_SIGNALR_CONNECTION_ADD_ONSTATECHANGED_OFFSET UNITYSDK_OFFSET(0x656990)
#define BESTHTTP_SIGNALR_CONNECTION_REMOVE_ONSTATECHANGED_OFFSET UNITYSDK_OFFSET(0x656A30)
#define BESTHTTP_SIGNALR_CONNECTION_ADD_ONNONHUBMESSAGE_OFFSET UNITYSDK_OFFSET(0x656AD0)
#define BESTHTTP_SIGNALR_CONNECTION_REMOVE_ONNONHUBMESSAGE_OFFSET UNITYSDK_OFFSET(0x656B70)
#define BESTHTTP_SIGNALR_CONNECTION_GET_REQUESTPREPARATOR_OFFSET UNITYSDK_OFFSET(0x656C10)
#define BESTHTTP_SIGNALR_CONNECTION_SET_REQUESTPREPARATOR_OFFSET UNITYSDK_OFFSET(0x656C20)
#define BESTHTTP_SIGNALR_CONNECTION_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x656C40)
#define BESTHTTP_SIGNALR_CONNECTION_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x656C70)
#define BESTHTTP_SIGNALR_CONNECTION_GET_TIMESTAMP_OFFSET UNITYSDK_OFFSET(0x656CF0)
#define BESTHTTP_SIGNALR_CONNECTION_GET_CONNECTIONDATA_OFFSET UNITYSDK_OFFSET(0x656DA0)
#define BESTHTTP_SIGNALR_CONNECTION_GET_QUERYPARAMS_OFFSET UNITYSDK_OFFSET(0x656FB0)
#define BESTHTTP_SIGNALR_CONNECTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x657410)
#define BESTHTTP_SIGNALR_CONNECTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x657810)
#define BESTHTTP_SIGNALR_CONNECTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x657550)
#define BESTHTTP_SIGNALR_CONNECTION_OPEN_OFFSET UNITYSDK_OFFSET(0x657920)
#define BESTHTTP_SIGNALR_CONNECTION_ONAUTHENTICATIONSUCCEDED_OFFSET UNITYSDK_OFFSET(0x657D70)
#define BESTHTTP_SIGNALR_CONNECTION_ONAUTHENTICATIONFAILED_OFFSET UNITYSDK_OFFSET(0x657F00)
#define BESTHTTP_SIGNALR_CONNECTION_STARTIMPL_OFFSET UNITYSDK_OFFSET(0x657C00)
#define BESTHTTP_SIGNALR_CONNECTION_ONNEGOTIATIONDATARECEIVED_OFFSET UNITYSDK_OFFSET(0x658100)
#define BESTHTTP_SIGNALR_CONNECTION_ONNEGOTIATIONERROR_OFFSET UNITYSDK_OFFSET(0x6583D0)
#define BESTHTTP_SIGNALR_CONNECTION_CLOSE_OFFSET UNITYSDK_OFFSET(0x658470)
#define BESTHTTP_SIGNALR_CONNECTION_RECONNECT_OFFSET UNITYSDK_OFFSET(0x6587E0)
#define BESTHTTP_SIGNALR_CONNECTION_SEND_OFFSET UNITYSDK_OFFSET(0x658AE0)
#define BESTHTTP_SIGNALR_CONNECTION_SENDJSON_OFFSET UNITYSDK_OFFSET(0x658D00)
#define BESTHTTP_SIGNALR_CONNECTION_BESTHTTP.SIGNALR.ICONNECTION.ONMESSAGE_OFFSET UNITYSDK_OFFSET(0x658D90)
#define BESTHTTP_SIGNALR_CONNECTION_BESTHTTP.SIGNALR.ICONNECTION.TRANSPORTSTARTED_OFFSET UNITYSDK_OFFSET(0x659830)
#define BESTHTTP_SIGNALR_CONNECTION_BESTHTTP.SIGNALR.ICONNECTION.TRANSPORTRECONNECTED_OFFSET UNITYSDK_OFFSET(0x659BE0)
#define BESTHTTP_SIGNALR_CONNECTION_BESTHTTP.SIGNALR.ICONNECTION.TRANSPORTABORTED_OFFSET UNITYSDK_OFFSET(0x659E40)
#define BESTHTTP_SIGNALR_CONNECTION_BESTHTTP.SIGNALR.ICONNECTION.ERROR_OFFSET UNITYSDK_OFFSET(0x659E50)
#define BESTHTTP_SIGNALR_CONNECTION_BESTHTTP.SIGNALR.ICONNECTION.BUILDURI_OFFSET UNITYSDK_OFFSET(0x65A2F0)
#define BESTHTTP_SIGNALR_CONNECTION_BESTHTTP.SIGNALR.ICONNECTION.BUILDURI_OFFSET UNITYSDK_OFFSET(0x65A390)
#define BESTHTTP_SIGNALR_CONNECTION_BESTHTTP.SIGNALR.ICONNECTION.PREPAREREQUEST_OFFSET UNITYSDK_OFFSET(0x65AB80)
#define BESTHTTP_SIGNALR_CONNECTION_BESTHTTP.SIGNALR.ICONNECTION.PARSERESPONSE_OFFSET UNITYSDK_OFFSET(0x65AC50)
#define BESTHTTP_SIGNALR_CONNECTION_BESTHTTP.EXTENSIONS.IHEARTBEAT.ONHEARTBEATUPDATE_OFFSET UNITYSDK_OFFSET(0x65AE30)
#define BESTHTTP_SIGNALR_CONNECTION_INITONSTART_OFFSET UNITYSDK_OFFSET(0x659B00)
#define BESTHTTP_SIGNALR_CONNECTION_FINDHUB_OFFSET UNITYSDK_OFFSET(0x659730)
#define BESTHTTP_SIGNALR_CONNECTION_TRYFALLBACKTRANSPORT_OFFSET UNITYSDK_OFFSET(0x65A090)
#define BESTHTTP_SIGNALR_CONNECTION_ADDITIONALQUERYPARAMS_COLLECTIONCHANGED_OFFSET UNITYSDK_OFFSET(0x65BAD0)
#define BESTHTTP_SIGNALR_CONNECTION_PING_OFFSET UNITYSDK_OFFSET(0x65B7D0)
#define BESTHTTP_SIGNALR_CONNECTION_ONPINGREQUESTFINISHED_OFFSET UNITYSDK_OFFSET(0x65BAF0)
#define BESTHTTP_SIGNALR_CONNECTION_.CCTOR_OFFSET UNITYSDK_OFFSET(0x65BF10)

namespace BestHTTP::SignalR
{
	inline static constexpr unsigned int Connection_TypeDefinitionIndex = 21481;

	class Connection : public Il2CppObject
	{
	public:
		::BestHTTP::SignalR::JsonEncoders::IJsonEncoder* DefaultEncoder; // 0x0
		::System::Uri* _Uri_k__BackingField; // 0x10
		::BestHTTP::SignalR::ConnectionStates* _state; // 0x18
		::BestHTTP::SignalR::NegotiationData* _NegotiationResult_k__BackingField; // 0x20
		::Il2CppArray<::System::Object*>* _Hubs_k__BackingField; // 0x28
		::BestHTTP::SignalR::Transports::TransportBase* _Transport_k__BackingField; // 0x30
		::BestHTTP::SignalR::ProtocolVersions* _Protocol_k__BackingField; // 0x38
		Il2CppObject* additionalQueryParams; // 0x40
		::System::Boolean _QueryParamsOnlyForHandshake_k__BackingField; // 0x48
		::BestHTTP::SignalR::JsonEncoders::IJsonEncoder* _JsonEncoder_k__BackingField; // 0x50
		::BestHTTP::SignalR::Authentication::IAuthenticationProvider* _AuthenticationProvider_k__BackingField; // 0x58
		::System::TimeSpan* _PingInterval_k__BackingField; // 0x60
		::System::TimeSpan* _ReconnectDelay_k__BackingField; // 0x68
		::BestHTTP::SignalR::OnConnectedDelegate* OnConnected; // 0x70
		::BestHTTP::SignalR::OnClosedDelegate* OnClosed; // 0x78
		::BestHTTP::SignalR::OnErrorDelegate* OnError; // 0x80
		::BestHTTP::SignalR::OnConnectedDelegate* OnReconnecting; // 0x88
		::BestHTTP::SignalR::OnConnectedDelegate* OnReconnected; // 0x90
		::BestHTTP::SignalR::OnStateChanged* OnStateChanged; // 0x98
		::BestHTTP::SignalR::OnNonHubMessageDelegate* OnNonHubMessage; // 0xA0
		::BestHTTP::SignalR::OnPrepareRequestDelegate* _RequestPreparator_k__BackingField; // 0xA8
		::System::Int64 ClientMessageCounter; // 0xB0
		::Il2CppArray<::System::Object*>* ClientProtocols; // 0xB8
		::System::Int64 RequestCounter; // 0xC0
		::BestHTTP::SignalR::Messages::MultiMessage* LastReceivedMessage; // 0xC8
		::System::String* GroupsToken; // 0xD0
		Il2CppObject* BufferedMessages; // 0xD8
		::System::DateTime* LastMessageReceivedAt; // 0xE0
		::System::DateTime* ReconnectStartedAt; // 0xE8
		::System::DateTime* ReconnectDelayStartedAt; // 0xF0
		::System::Boolean ReconnectStarted; // 0xF8
		::System::DateTime* LastPingSentAt; // 0x100
		::BestHTTP::HTTPRequest* PingRequest; // 0x108
		Il2CppObject* TransportConnectionStartedAt; // 0x110
		::System::Text::StringBuilder* queryBuilder; // 0x120
		::System::String* BuiltConnectionData; // 0x128
		::System::String* BuiltQueryParams; // 0x130
		::BestHTTP::Connections::SupportedProtocols* NextProtocolToTry; // 0x138

		::System::Uri* get_Uri()
		{
			return (return (::System::Uri*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_CONNECTION_GET_URI_OFFSET))(nullptr);
		}

		::System::Void set_Uri(::System::Uri* arg)
		{
			((::System::Void(*)(::System::Uri*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_CONNECTION_SET_URI_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SignalR::ConnectionStates* get_State()
		{
			return (return (::BestHTTP::SignalR::ConnectionStates*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_CONNECTION_GET_STATE_OFFSET))(nullptr);
		}

		::System::Void set_State(::BestHTTP::SignalR::ConnectionStates* arg)
		{
			((::System::Void(*)(::BestHTTP::SignalR::ConnectionStates*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_CONNECTION_SET_STATE_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SignalR::NegotiationData* get_NegotiationResult()
		{
			return (return (::BestHTTP::SignalR::NegotiationData*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_CONNECTION_GET_NEGOTIATIONRESULT_OFFSET))(nullptr);
		}

		::System::Void set_NegotiationResult(::BestHTTP::SignalR::NegotiationData* arg)
		{
			((::System::Void(*)(::BestHTTP::SignalR::NegotiationData*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_CONNECTION_SET_NEGOTIATIONRESULT_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* get_Hubs()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_CONNECTION_GET_HUBS_OFFSET))(nullptr);
		}

		::System::Void set_Hubs(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_CONNECTION_SET_HUBS_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SignalR::Transports::TransportBase* get_Transport()
		{
			return (return (::BestHTTP::SignalR::Transports::TransportBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_CONNECTION_GET_TRANSPORT_OFFSET))(nullptr);
		}

		::System::Void set_Transport(::BestHTTP::SignalR::Transports::TransportBase* arg)
		{
			((::System::Void(*)(::BestHTTP::SignalR::Transports::TransportBase*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_CONNECTION_SET_TRANSPORT_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SignalR::ProtocolVersions* get_Protocol()
		{
			return (return (::BestHTTP::SignalR::ProtocolVersions*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_CONNECTION_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void set_Protocol(::BestHTTP::SignalR::ProtocolVersions* arg)
		{
			((::System::Void(*)(::BestHTTP::SignalR::ProtocolVersions*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_CONNECTION_SET_PROTOCOL_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_AdditionalQueryParams()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_CONNECTION_GET_ADDITIONALQUERYPARAMS_OFFSET))(nullptr);
		}

		::System::Void set_AdditionalQueryParams(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_CONNECTION_SET_ADDITIONALQUERYPARAMS_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_QueryParamsOnlyForHandshake()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_CONNECTION_GET_QUERYPARAMSONLYFORHANDSHAKE_OFFSET))(nullptr);
		}

		::System::Void set_QueryParamsOnlyForHandshake(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_CONNECTION_SET_QUERYPARAMSONLYFORHANDSHAKE_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SignalR::JsonEncoders::IJsonEncoder* get_JsonEncoder()
		{
			return (return (::BestHTTP::SignalR::JsonEncoders::IJsonEncoder*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_CONNECTION_GET_JSONENCODER_OFFSET))(nullptr);
		}

		::System::Void set_JsonEncoder(::BestHTTP::SignalR::JsonEncoders::IJsonEncoder* arg)
		{
			((::System::Void(*)(::BestHTTP::SignalR::JsonEncoders::IJsonEncoder*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_CONNECTION_SET_JSONENCODER_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SignalR::Authentication::IAuthenticationProvider* get_AuthenticationProvider()
		{
			return (return (::BestHTTP::SignalR::Authentication::IAuthenticationProvider*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_CONNECTION_GET_AUTHENTICATIONPROVIDER_OFFSET))(nullptr);
		}

		::System::Void set_AuthenticationProvider(::BestHTTP::SignalR::Authentication::IAuthenticationProvider* arg)
		{
			((::System::Void(*)(::BestHTTP::SignalR::Authentication::IAuthenticationProvider*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_CONNECTION_SET_AUTHENTICATIONPROVIDER_OFFSET))(arg, nullptr);
		}

		::System::TimeSpan* get_PingInterval()
		{
			return (return (::System::TimeSpan*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_CONNECTION_GET_PINGINTERVAL_OFFSET))(nullptr);
		}

		::System::Void set_PingInterval(::System::TimeSpan* arg)
		{
			((::System::Void(*)(::System::TimeSpan*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_CONNECTION_SET_PINGINTERVAL_OFFSET))(arg, nullptr);
		}

		::System::TimeSpan* get_ReconnectDelay()
		{
			return (return (::System::TimeSpan*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_CONNECTION_GET_RECONNECTDELAY_OFFSET))(nullptr);
		}

		::System::Void set_ReconnectDelay(::System::TimeSpan* arg)
		{
			((::System::Void(*)(::System::TimeSpan*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_CONNECTION_SET_RECONNECTDELAY_OFFSET))(arg, nullptr);
		}

		::System::Void add_OnConnected(::BestHTTP::SignalR::OnConnectedDelegate* arg)
		{
			((::System::Void(*)(::BestHTTP::SignalR::OnConnectedDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_CONNECTION_ADD_ONCONNECTED_OFFSET))(arg, nullptr);
		}

		::System::Void remove_OnConnected(::BestHTTP::SignalR::OnConnectedDelegate* arg)
		{
			((::System::Void(*)(::BestHTTP::SignalR::OnConnectedDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_CONNECTION_REMOVE_ONCONNECTED_OFFSET))(arg, nullptr);
		}

		::System::Void add_OnClosed(::BestHTTP::SignalR::OnClosedDelegate* arg)
		{
			((::System::Void(*)(::BestHTTP::SignalR::OnClosedDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_CONNECTION_ADD_ONCLOSED_OFFSET))(arg, nullptr);
		}

		::System::Void remove_OnClosed(::BestHTTP::SignalR::OnClosedDelegate* arg)
		{
			((::System::Void(*)(::BestHTTP::SignalR::OnClosedDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_CONNECTION_REMOVE_ONCLOSED_OFFSET))(arg, nullptr);
		}

		::System::Void add_OnError(::BestHTTP::SignalR::OnErrorDelegate* arg)
		{
			((::System::Void(*)(::BestHTTP::SignalR::OnErrorDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_CONNECTION_ADD_ONERROR_OFFSET))(arg, nullptr);
		}

		::System::Void remove_OnError(::BestHTTP::SignalR::OnErrorDelegate* arg)
		{
			((::System::Void(*)(::BestHTTP::SignalR::OnErrorDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_CONNECTION_REMOVE_ONERROR_OFFSET))(arg, nullptr);
		}

		::System::Void add_OnReconnecting(::BestHTTP::SignalR::OnConnectedDelegate* arg)
		{
			((::System::Void(*)(::BestHTTP::SignalR::OnConnectedDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_CONNECTION_ADD_ONRECONNECTING_OFFSET))(arg, nullptr);
		}

		::System::Void remove_OnReconnecting(::BestHTTP::SignalR::OnConnectedDelegate* arg)
		{
			((::System::Void(*)(::BestHTTP::SignalR::OnConnectedDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_CONNECTION_REMOVE_ONRECONNECTING_OFFSET))(arg, nullptr);
		}

		::System::Void add_OnReconnected(::BestHTTP::SignalR::OnConnectedDelegate* arg)
		{
			((::System::Void(*)(::BestHTTP::SignalR::OnConnectedDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_CONNECTION_ADD_ONRECONNECTED_OFFSET))(arg, nullptr);
		}

		::System::Void remove_OnReconnected(::BestHTTP::SignalR::OnConnectedDelegate* arg)
		{
			((::System::Void(*)(::BestHTTP::SignalR::OnConnectedDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_CONNECTION_REMOVE_ONRECONNECTED_OFFSET))(arg, nullptr);
		}

		::System::Void add_OnStateChanged(::BestHTTP::SignalR::OnStateChanged* arg)
		{
			((::System::Void(*)(::BestHTTP::SignalR::OnStateChanged*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_CONNECTION_ADD_ONSTATECHANGED_OFFSET))(arg, nullptr);
		}

		::System::Void remove_OnStateChanged(::BestHTTP::SignalR::OnStateChanged* arg)
		{
			((::System::Void(*)(::BestHTTP::SignalR::OnStateChanged*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_CONNECTION_REMOVE_ONSTATECHANGED_OFFSET))(arg, nullptr);
		}

		::System::Void add_OnNonHubMessage(::BestHTTP::SignalR::OnNonHubMessageDelegate* arg)
		{
			((::System::Void(*)(::BestHTTP::SignalR::OnNonHubMessageDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_CONNECTION_ADD_ONNONHUBMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void remove_OnNonHubMessage(::BestHTTP::SignalR::OnNonHubMessageDelegate* arg)
		{
			((::System::Void(*)(::BestHTTP::SignalR::OnNonHubMessageDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_CONNECTION_REMOVE_ONNONHUBMESSAGE_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SignalR::OnPrepareRequestDelegate* get_RequestPreparator()
		{
			return (return (::BestHTTP::SignalR::OnPrepareRequestDelegate*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_CONNECTION_GET_REQUESTPREPARATOR_OFFSET))(nullptr);
		}

		::System::Void set_RequestPreparator(::BestHTTP::SignalR::OnPrepareRequestDelegate* arg)
		{
			((::System::Void(*)(::BestHTTP::SignalR::OnPrepareRequestDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_CONNECTION_SET_REQUESTPREPARATOR_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SignalR::Hubs::Hub* get_Item(::System::Int32 arg)
		{
			return (return (::BestHTTP::SignalR::Hubs::Hub*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_CONNECTION_GET_ITEM_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SignalR::Hubs::Hub* get_Item(::System::String* str)
		{
			return (return (::BestHTTP::SignalR::Hubs::Hub*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_CONNECTION_GET_ITEM_OFFSET))(str, nullptr);
		}

		::System::UInt32 get_Timestamp()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_CONNECTION_GET_TIMESTAMP_OFFSET))(nullptr);
		}

		::System::String* get_ConnectionData()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_CONNECTION_GET_CONNECTIONDATA_OFFSET))(nullptr);
		}

		::System::String* get_QueryParams()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_CONNECTION_GET_QUERYPARAMS_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Uri* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::Uri*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_CONNECTION_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Uri* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::Uri*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_CONNECTION_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Uri* arg)
		{
			((::System::Void(*)(::System::Uri*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_CONNECTION_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void Open()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_CONNECTION_OPEN_OFFSET))(nullptr);
		}

		::System::Void OnAuthenticationSucceded(::BestHTTP::SignalR::Authentication::IAuthenticationProvider* arg)
		{
			((::System::Void(*)(::BestHTTP::SignalR::Authentication::IAuthenticationProvider*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_CONNECTION_ONAUTHENTICATIONSUCCEDED_OFFSET))(arg, nullptr);
		}

		::System::Void OnAuthenticationFailed(::BestHTTP::SignalR::Authentication::IAuthenticationProvider* arg, ::System::String* str)
		{
			((::System::Void(*)(::BestHTTP::SignalR::Authentication::IAuthenticationProvider*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_CONNECTION_ONAUTHENTICATIONFAILED_OFFSET))(arg, str, nullptr);
		}

		::System::Void StartImpl()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_CONNECTION_STARTIMPL_OFFSET))(nullptr);
		}

		::System::Void OnNegotiationDataReceived(::BestHTTP::SignalR::NegotiationData* arg)
		{
			((::System::Void(*)(::BestHTTP::SignalR::NegotiationData*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_CONNECTION_ONNEGOTIATIONDATARECEIVED_OFFSET))(arg, nullptr);
		}

		::System::Void OnNegotiationError(::BestHTTP::SignalR::NegotiationData* arg, ::System::String* str)
		{
			((::System::Void(*)(::BestHTTP::SignalR::NegotiationData*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_CONNECTION_ONNEGOTIATIONERROR_OFFSET))(arg, str, nullptr);
		}

		::System::Void Close()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_CONNECTION_CLOSE_OFFSET))(nullptr);
		}

		::System::Void Reconnect()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_CONNECTION_RECONNECT_OFFSET))(nullptr);
		}

		::System::Boolean Send(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_CONNECTION_SEND_OFFSET))(arg, nullptr);
		}

		::System::Boolean SendJson(::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_CONNECTION_SENDJSON_OFFSET))(str, nullptr);
		}

		::System::Void BestHTTP.SignalR.IConnection.OnMessage(::BestHTTP::SignalR::Messages::IServerMessage* arg)
		{
			((::System::Void(*)(::BestHTTP::SignalR::Messages::IServerMessage*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_CONNECTION_BESTHTTP.SIGNALR.ICONNECTION.ONMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void BestHTTP.SignalR.IConnection.TransportStarted()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_CONNECTION_BESTHTTP.SIGNALR.ICONNECTION.TRANSPORTSTARTED_OFFSET))(nullptr);
		}

		::System::Void BestHTTP.SignalR.IConnection.TransportReconnected()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_CONNECTION_BESTHTTP.SIGNALR.ICONNECTION.TRANSPORTRECONNECTED_OFFSET))(nullptr);
		}

		::System::Void BestHTTP.SignalR.IConnection.TransportAborted()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_CONNECTION_BESTHTTP.SIGNALR.ICONNECTION.TRANSPORTABORTED_OFFSET))(nullptr);
		}

		::System::Void BestHTTP.SignalR.IConnection.Error(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_CONNECTION_BESTHTTP.SIGNALR.ICONNECTION.ERROR_OFFSET))(str, nullptr);
		}

		::System::Uri* BestHTTP.SignalR.IConnection.BuildUri(::BestHTTP::SignalR::RequestTypes* arg)
		{
			return (return (::System::Uri*(*)(::BestHTTP::SignalR::RequestTypes*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_CONNECTION_BESTHTTP.SIGNALR.ICONNECTION.BUILDURI_OFFSET))(arg, nullptr);
		}

		::System::Uri* BestHTTP.SignalR.IConnection.BuildUri(::BestHTTP::SignalR::RequestTypes* arg, ::BestHTTP::SignalR::Transports::TransportBase* arg)
		{
			return (return (::System::Uri*(*)(::BestHTTP::SignalR::RequestTypes*, ::BestHTTP::SignalR::Transports::TransportBase*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_CONNECTION_BESTHTTP.SIGNALR.ICONNECTION.BUILDURI_OFFSET))(arg, arg, nullptr);
		}

		::BestHTTP::HTTPRequest* BestHTTP.SignalR.IConnection.PrepareRequest(::BestHTTP::HTTPRequest* arg, ::BestHTTP::SignalR::RequestTypes* arg)
		{
			return (return (::BestHTTP::HTTPRequest*(*)(::BestHTTP::HTTPRequest*, ::BestHTTP::SignalR::RequestTypes*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_CONNECTION_BESTHTTP.SIGNALR.ICONNECTION.PREPAREREQUEST_OFFSET))(arg, arg, nullptr);
		}

		::System::String* BestHTTP.SignalR.IConnection.ParseResponse(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_CONNECTION_BESTHTTP.SIGNALR.ICONNECTION.PARSERESPONSE_OFFSET))(str, nullptr);
		}

		::System::Void BestHTTP.Extensions.IHeartbeat.OnHeartbeatUpdate(::System::TimeSpan* arg)
		{
			((::System::Void(*)(::System::TimeSpan*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_CONNECTION_BESTHTTP.EXTENSIONS.IHEARTBEAT.ONHEARTBEATUPDATE_OFFSET))(arg, nullptr);
		}

		::System::Void InitOnStart()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_CONNECTION_INITONSTART_OFFSET))(nullptr);
		}

		::BestHTTP::SignalR::Hubs::Hub* FindHub(::System::UInt64 arg)
		{
			return (return (::BestHTTP::SignalR::Hubs::Hub*(*)(::System::UInt64, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_CONNECTION_FINDHUB_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryFallbackTransport()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_CONNECTION_TRYFALLBACKTRANSPORT_OFFSET))(nullptr);
		}

		::System::Void AdditionalQueryParams_CollectionChanged(::System::Object* arg, ::PlatformSupport::Collections::Specialized::NotifyCollectionChangedEventArgs* arg)
		{
			((::System::Void(*)(::System::Object*, ::PlatformSupport::Collections::Specialized::NotifyCollectionChangedEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_CONNECTION_ADDITIONALQUERYPARAMS_COLLECTIONCHANGED_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Ping()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_CONNECTION_PING_OFFSET))(nullptr);
		}

		::System::Void OnPingRequestFinished(::BestHTTP::HTTPRequest* arg, ::BestHTTP::HTTPResponse* arg)
		{
			((::System::Void(*)(::BestHTTP::HTTPRequest*, ::BestHTTP::HTTPResponse*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_CONNECTION_ONPINGREQUESTFINISHED_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_CONNECTION_.CCTOR_OFFSET))(nullptr);
		}

	};
}

