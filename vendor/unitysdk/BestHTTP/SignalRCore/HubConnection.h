#pragma once
#include "../../unitysdk.h"

namespace BestHTTP::SignalRCore { class ConnectionStates; }
namespace BestHTTP::SignalRCore { class ITransport; }
namespace BestHTTP::SignalRCore { class IProtocol; }
namespace BestHTTP::SignalRCore { class IAuthenticationProvider; }
namespace BestHTTP::SignalRCore::Messages { class NegotiationResult; }
namespace BestHTTP::SignalRCore { class HubOptions; }
namespace BestHTTP::SignalRCore { class IRetryPolicy; }
namespace BestHTTP::Logger { class LoggingContext; }
namespace BestHTTP::SignalRCore { class RetryContext; }
namespace BestHTTP::SignalRCore { class HubConnection; }
namespace BestHTTP::SignalRCore { class TransportTypes; }
namespace BestHTTP { class HTTPRequest; }
namespace BestHTTP { class HTTPResponse; }
namespace BestHTTP::SignalRCore::Messages { class Message; }
namespace BestHTTP::SignalRCore { class Subscription; }
namespace BestHTTP::SignalRCore { class TransportStates; }

#define BESTHTTP_SIGNALRCORE_HUBCONNECTION_GET_URI_OFFSET UNITYSDK_OFFSET(0x644C30)
#define BESTHTTP_SIGNALRCORE_HUBCONNECTION_SET_URI_OFFSET UNITYSDK_OFFSET(0x644C40)
#define BESTHTTP_SIGNALRCORE_HUBCONNECTION_GET_STATE_OFFSET UNITYSDK_OFFSET(0x644C50)
#define BESTHTTP_SIGNALRCORE_HUBCONNECTION_SET_STATE_OFFSET UNITYSDK_OFFSET(0x644C60)
#define BESTHTTP_SIGNALRCORE_HUBCONNECTION_GET_TRANSPORT_OFFSET UNITYSDK_OFFSET(0x644C70)
#define BESTHTTP_SIGNALRCORE_HUBCONNECTION_SET_TRANSPORT_OFFSET UNITYSDK_OFFSET(0x644C80)
#define BESTHTTP_SIGNALRCORE_HUBCONNECTION_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0x644C90)
#define BESTHTTP_SIGNALRCORE_HUBCONNECTION_SET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0x644CA0)
#define BESTHTTP_SIGNALRCORE_HUBCONNECTION_ADD_ONREDIRECTED_OFFSET UNITYSDK_OFFSET(0x644CB0)
#define BESTHTTP_SIGNALRCORE_HUBCONNECTION_REMOVE_ONREDIRECTED_OFFSET UNITYSDK_OFFSET(0x644D50)
#define BESTHTTP_SIGNALRCORE_HUBCONNECTION_ADD_ONCONNECTED_OFFSET UNITYSDK_OFFSET(0x644DF0)
#define BESTHTTP_SIGNALRCORE_HUBCONNECTION_REMOVE_ONCONNECTED_OFFSET UNITYSDK_OFFSET(0x644E90)
#define BESTHTTP_SIGNALRCORE_HUBCONNECTION_ADD_ONERROR_OFFSET UNITYSDK_OFFSET(0x644F30)
#define BESTHTTP_SIGNALRCORE_HUBCONNECTION_REMOVE_ONERROR_OFFSET UNITYSDK_OFFSET(0x644FD0)
#define BESTHTTP_SIGNALRCORE_HUBCONNECTION_ADD_ONCLOSED_OFFSET UNITYSDK_OFFSET(0x645070)
#define BESTHTTP_SIGNALRCORE_HUBCONNECTION_REMOVE_ONCLOSED_OFFSET UNITYSDK_OFFSET(0x645110)
#define BESTHTTP_SIGNALRCORE_HUBCONNECTION_ADD_ONMESSAGE_OFFSET UNITYSDK_OFFSET(0x6451B0)
#define BESTHTTP_SIGNALRCORE_HUBCONNECTION_REMOVE_ONMESSAGE_OFFSET UNITYSDK_OFFSET(0x645250)
#define BESTHTTP_SIGNALRCORE_HUBCONNECTION_ADD_ONRECONNECTING_OFFSET UNITYSDK_OFFSET(0x6452F0)
#define BESTHTTP_SIGNALRCORE_HUBCONNECTION_REMOVE_ONRECONNECTING_OFFSET UNITYSDK_OFFSET(0x645390)
#define BESTHTTP_SIGNALRCORE_HUBCONNECTION_ADD_ONRECONNECTED_OFFSET UNITYSDK_OFFSET(0x645430)
#define BESTHTTP_SIGNALRCORE_HUBCONNECTION_REMOVE_ONRECONNECTED_OFFSET UNITYSDK_OFFSET(0x6454D0)
#define BESTHTTP_SIGNALRCORE_HUBCONNECTION_ADD_ONTRANSPORTEVENT_OFFSET UNITYSDK_OFFSET(0x645570)
#define BESTHTTP_SIGNALRCORE_HUBCONNECTION_REMOVE_ONTRANSPORTEVENT_OFFSET UNITYSDK_OFFSET(0x645610)
#define BESTHTTP_SIGNALRCORE_HUBCONNECTION_GET_AUTHENTICATIONPROVIDER_OFFSET UNITYSDK_OFFSET(0x6456B0)
#define BESTHTTP_SIGNALRCORE_HUBCONNECTION_SET_AUTHENTICATIONPROVIDER_OFFSET UNITYSDK_OFFSET(0x6456C0)
#define BESTHTTP_SIGNALRCORE_HUBCONNECTION_GET_NEGOTIATIONRESULT_OFFSET UNITYSDK_OFFSET(0x6456D0)
#define BESTHTTP_SIGNALRCORE_HUBCONNECTION_SET_NEGOTIATIONRESULT_OFFSET UNITYSDK_OFFSET(0x6456E0)
#define BESTHTTP_SIGNALRCORE_HUBCONNECTION_GET_OPTIONS_OFFSET UNITYSDK_OFFSET(0x6456F0)
#define BESTHTTP_SIGNALRCORE_HUBCONNECTION_SET_OPTIONS_OFFSET UNITYSDK_OFFSET(0x645700)
#define BESTHTTP_SIGNALRCORE_HUBCONNECTION_GET_REDIRECTCOUNT_OFFSET UNITYSDK_OFFSET(0x645710)
#define BESTHTTP_SIGNALRCORE_HUBCONNECTION_SET_REDIRECTCOUNT_OFFSET UNITYSDK_OFFSET(0x645720)
#define BESTHTTP_SIGNALRCORE_HUBCONNECTION_GET_RECONNECTPOLICY_OFFSET UNITYSDK_OFFSET(0x645730)
#define BESTHTTP_SIGNALRCORE_HUBCONNECTION_SET_RECONNECTPOLICY_OFFSET UNITYSDK_OFFSET(0x645740)
#define BESTHTTP_SIGNALRCORE_HUBCONNECTION_GET_CONTEXT_OFFSET UNITYSDK_OFFSET(0x645760)
#define BESTHTTP_SIGNALRCORE_HUBCONNECTION_SET_CONTEXT_OFFSET UNITYSDK_OFFSET(0x645770)
#define BESTHTTP_SIGNALRCORE_HUBCONNECTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x645790)
#define BESTHTTP_SIGNALRCORE_HUBCONNECTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x645800)
#define BESTHTTP_SIGNALRCORE_HUBCONNECTION_STARTCONNECT_OFFSET UNITYSDK_OFFSET(0x645BB0)
#define BESTHTTP_SIGNALRCORE_HUBCONNECTION_CONNECTASYNC_OFFSET UNITYSDK_OFFSET(0x647A70)
#define BESTHTTP_SIGNALRCORE_HUBCONNECTION_ONASYNCCONNECTEDCALLBACK_OFFSET UNITYSDK_OFFSET(0x647DA0)
#define BESTHTTP_SIGNALRCORE_HUBCONNECTION_ONASYNCCONNECTFAILEDCALLBACK_OFFSET UNITYSDK_OFFSET(0x647F90)
#define BESTHTTP_SIGNALRCORE_HUBCONNECTION_ONAUTHENTICATIONSUCCEDED_OFFSET UNITYSDK_OFFSET(0x6481B0)
#define BESTHTTP_SIGNALRCORE_HUBCONNECTION_ONAUTHENTICATIONFAILED_OFFSET UNITYSDK_OFFSET(0x648470)
#define BESTHTTP_SIGNALRCORE_HUBCONNECTION_STARTNEGOTIATION_OFFSET UNITYSDK_OFFSET(0x647580)
#define BESTHTTP_SIGNALRCORE_HUBCONNECTION_CONNECTIMPL_OFFSET UNITYSDK_OFFSET(0x648720)
#define BESTHTTP_SIGNALRCORE_HUBCONNECTION_ISTRANSPORTSUPPORTED_OFFSET UNITYSDK_OFFSET(0x648D30)
#define BESTHTTP_SIGNALRCORE_HUBCONNECTION_ONNEGOTIATIONREQUESTFINISHED_OFFSET UNITYSDK_OFFSET(0x648EC0)
#define BESTHTTP_SIGNALRCORE_HUBCONNECTION_STARTCLOSE_OFFSET UNITYSDK_OFFSET(0x64A870)
#define BESTHTTP_SIGNALRCORE_HUBCONNECTION_CLOSEASYNC_OFFSET UNITYSDK_OFFSET(0x64AC60)
#define BESTHTTP_SIGNALRCORE_HUBCONNECTION_ONCLOSEDASYNCCALLBACK_OFFSET UNITYSDK_OFFSET(0x64AEF0)
#define BESTHTTP_SIGNALRCORE_HUBCONNECTION_ONCLOSEDASYNCERRORCALLBACK_OFFSET UNITYSDK_OFFSET(0x64B0E0)
#define BESTHTTP_SIGNALRCORE_HUBCONNECTION_INVOKE_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_SIGNALRCORE_HUBCONNECTION_INVOKEASYNC_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_SIGNALRCORE_HUBCONNECTION_INVOKEASYNC_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_SIGNALRCORE_HUBCONNECTION_SEND_OFFSET UNITYSDK_OFFSET(0x64B300)
#define BESTHTTP_SIGNALRCORE_HUBCONNECTION_SENDASYNC_OFFSET UNITYSDK_OFFSET(0x64B780)
#define BESTHTTP_SIGNALRCORE_HUBCONNECTION_SENDASYNC_OFFSET UNITYSDK_OFFSET(0x64B7A0)
#define BESTHTTP_SIGNALRCORE_HUBCONNECTION_INVOKEIMP_OFFSET UNITYSDK_OFFSET(0x64B530)
#define BESTHTTP_SIGNALRCORE_HUBCONNECTION_SENDMESSAGE_OFFSET UNITYSDK_OFFSET(0x64BA80)
#define BESTHTTP_SIGNALRCORE_HUBCONNECTION_GETDOWNSTREAMCONTROLLER_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_SIGNALRCORE_HUBCONNECTION_GETUPSTREAMCONTROLLER_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_SIGNALRCORE_HUBCONNECTION_ON_OFFSET UNITYSDK_OFFSET(0x64C450)
#define BESTHTTP_SIGNALRCORE_HUBCONNECTION_ON_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_SIGNALRCORE_HUBCONNECTION_ON_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_SIGNALRCORE_HUBCONNECTION_ON_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_SIGNALRCORE_HUBCONNECTION_ON_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_SIGNALRCORE_HUBCONNECTION_ON_OFFSET UNITYSDK_OFFSET(0x64C530)
#define BESTHTTP_SIGNALRCORE_HUBCONNECTION_REMOVE_OFFSET UNITYSDK_OFFSET(0x64C620)
#define BESTHTTP_SIGNALRCORE_HUBCONNECTION_GETSUBSCRIPTION_OFFSET UNITYSDK_OFFSET(0x64C670)
#define BESTHTTP_SIGNALRCORE_HUBCONNECTION_GETITEMTYPE_OFFSET UNITYSDK_OFFSET(0x64C6E0)
#define BESTHTTP_SIGNALRCORE_HUBCONNECTION_ONMESSAGES_OFFSET UNITYSDK_OFFSET(0x64C750)
#define BESTHTTP_SIGNALRCORE_HUBCONNECTION_TRANSPORT_ONSTATECHANGED_OFFSET UNITYSDK_OFFSET(0x64D570)
#define BESTHTTP_SIGNALRCORE_HUBCONNECTION_GETNEXTTRANSPORTTOTRY_OFFSET UNITYSDK_OFFSET(0x64E0C0)
#define BESTHTTP_SIGNALRCORE_HUBCONNECTION_SETSTATE_OFFSET UNITYSDK_OFFSET(0x6461B0)
#define BESTHTTP_SIGNALRCORE_HUBCONNECTION_BESTHTTP.EXTENSIONS.IHEARTBEAT.ONHEARTBEATUPDATE_OFFSET UNITYSDK_OFFSET(0x64E4F0)
#define BESTHTTP_SIGNALRCORE_HUBCONNECTION_.CCTOR_OFFSET UNITYSDK_OFFSET(0x64EE90)

namespace BestHTTP::SignalRCore
{
	inline static constexpr unsigned int HubConnection_TypeDefinitionIndex = 21445;

	class HubConnection : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* EmptyArgs; // 0x0
		::System::Uri* _Uri_k__BackingField; // 0x10
		::BestHTTP::SignalRCore::ConnectionStates* _State_k__BackingField; // 0x18
		::BestHTTP::SignalRCore::ITransport* _Transport_k__BackingField; // 0x20
		::BestHTTP::SignalRCore::IProtocol* _Protocol_k__BackingField; // 0x28
		Il2CppObject* OnRedirected; // 0x30
		Il2CppObject* OnConnected; // 0x38
		Il2CppObject* OnError; // 0x40
		Il2CppObject* OnClosed; // 0x48
		Il2CppObject* OnMessage; // 0x50
		Il2CppObject* OnReconnecting; // 0x58
		Il2CppObject* OnReconnected; // 0x60
		Il2CppObject* OnTransportEvent; // 0x68
		::BestHTTP::SignalRCore::IAuthenticationProvider* _AuthenticationProvider_k__BackingField; // 0x70
		::BestHTTP::SignalRCore::Messages::NegotiationResult* _NegotiationResult_k__BackingField; // 0x78
		::BestHTTP::SignalRCore::HubOptions* _Options_k__BackingField; // 0x80
		::System::Int32 _RedirectCount_k__BackingField; // 0x88
		::BestHTTP::SignalRCore::IRetryPolicy* _ReconnectPolicy_k__BackingField; // 0x90
		::BestHTTP::Logger::LoggingContext* _Context_k__BackingField; // 0x98
		::System::Int64 lastInvocationId; // 0xA0
		::System::Int32 lastStreamId; // 0xA8
		Il2CppObject* invocations; // 0xB0
		Il2CppObject* subscriptions; // 0xB8
		::System::DateTime* lastMessageSentAt; // 0xC0
		::System::DateTime* lastMessageReceivedAt; // 0xC8
		::System::DateTime* connectionStartedAt; // 0xD0
		::BestHTTP::SignalRCore::RetryContext* currentContext; // 0xD8
		::System::DateTime* reconnectStartTime; // 0xF0
		::System::DateTime* reconnectAt; // 0xF8
		Il2CppObject* triedoutTransports; // 0x100
		Il2CppObject* connectAsyncTaskCompletionSource; // 0x108
		Il2CppObject* closeAsyncTaskCompletionSource; // 0x110

		::System::Uri* get_Uri()
		{
			return (return (::System::Uri*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALRCORE_HUBCONNECTION_GET_URI_OFFSET))(nullptr);
		}

		::System::Void set_Uri(::System::Uri* arg)
		{
			((::System::Void(*)(::System::Uri*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALRCORE_HUBCONNECTION_SET_URI_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SignalRCore::ConnectionStates* get_State()
		{
			return (return (::BestHTTP::SignalRCore::ConnectionStates*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALRCORE_HUBCONNECTION_GET_STATE_OFFSET))(nullptr);
		}

		::System::Void set_State(::BestHTTP::SignalRCore::ConnectionStates* arg)
		{
			((::System::Void(*)(::BestHTTP::SignalRCore::ConnectionStates*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALRCORE_HUBCONNECTION_SET_STATE_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SignalRCore::ITransport* get_Transport()
		{
			return (return (::BestHTTP::SignalRCore::ITransport*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALRCORE_HUBCONNECTION_GET_TRANSPORT_OFFSET))(nullptr);
		}

		::System::Void set_Transport(::BestHTTP::SignalRCore::ITransport* arg)
		{
			((::System::Void(*)(::BestHTTP::SignalRCore::ITransport*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALRCORE_HUBCONNECTION_SET_TRANSPORT_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SignalRCore::IProtocol* get_Protocol()
		{
			return (return (::BestHTTP::SignalRCore::IProtocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALRCORE_HUBCONNECTION_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void set_Protocol(::BestHTTP::SignalRCore::IProtocol* arg)
		{
			((::System::Void(*)(::BestHTTP::SignalRCore::IProtocol*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALRCORE_HUBCONNECTION_SET_PROTOCOL_OFFSET))(arg, nullptr);
		}

		::System::Void add_OnRedirected(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALRCORE_HUBCONNECTION_ADD_ONREDIRECTED_OFFSET))(arg, nullptr);
		}

		::System::Void remove_OnRedirected(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALRCORE_HUBCONNECTION_REMOVE_ONREDIRECTED_OFFSET))(arg, nullptr);
		}

		::System::Void add_OnConnected(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALRCORE_HUBCONNECTION_ADD_ONCONNECTED_OFFSET))(arg, nullptr);
		}

		::System::Void remove_OnConnected(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALRCORE_HUBCONNECTION_REMOVE_ONCONNECTED_OFFSET))(arg, nullptr);
		}

		::System::Void add_OnError(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALRCORE_HUBCONNECTION_ADD_ONERROR_OFFSET))(arg, nullptr);
		}

		::System::Void remove_OnError(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALRCORE_HUBCONNECTION_REMOVE_ONERROR_OFFSET))(arg, nullptr);
		}

		::System::Void add_OnClosed(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALRCORE_HUBCONNECTION_ADD_ONCLOSED_OFFSET))(arg, nullptr);
		}

		::System::Void remove_OnClosed(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALRCORE_HUBCONNECTION_REMOVE_ONCLOSED_OFFSET))(arg, nullptr);
		}

		::System::Void add_OnMessage(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALRCORE_HUBCONNECTION_ADD_ONMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void remove_OnMessage(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALRCORE_HUBCONNECTION_REMOVE_ONMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void add_OnReconnecting(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALRCORE_HUBCONNECTION_ADD_ONRECONNECTING_OFFSET))(arg, nullptr);
		}

		::System::Void remove_OnReconnecting(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALRCORE_HUBCONNECTION_REMOVE_ONRECONNECTING_OFFSET))(arg, nullptr);
		}

		::System::Void add_OnReconnected(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALRCORE_HUBCONNECTION_ADD_ONRECONNECTED_OFFSET))(arg, nullptr);
		}

		::System::Void remove_OnReconnected(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALRCORE_HUBCONNECTION_REMOVE_ONRECONNECTED_OFFSET))(arg, nullptr);
		}

		::System::Void add_OnTransportEvent(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALRCORE_HUBCONNECTION_ADD_ONTRANSPORTEVENT_OFFSET))(arg, nullptr);
		}

		::System::Void remove_OnTransportEvent(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALRCORE_HUBCONNECTION_REMOVE_ONTRANSPORTEVENT_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SignalRCore::IAuthenticationProvider* get_AuthenticationProvider()
		{
			return (return (::BestHTTP::SignalRCore::IAuthenticationProvider*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALRCORE_HUBCONNECTION_GET_AUTHENTICATIONPROVIDER_OFFSET))(nullptr);
		}

		::System::Void set_AuthenticationProvider(::BestHTTP::SignalRCore::IAuthenticationProvider* arg)
		{
			((::System::Void(*)(::BestHTTP::SignalRCore::IAuthenticationProvider*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALRCORE_HUBCONNECTION_SET_AUTHENTICATIONPROVIDER_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SignalRCore::Messages::NegotiationResult* get_NegotiationResult()
		{
			return (return (::BestHTTP::SignalRCore::Messages::NegotiationResult*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALRCORE_HUBCONNECTION_GET_NEGOTIATIONRESULT_OFFSET))(nullptr);
		}

		::System::Void set_NegotiationResult(::BestHTTP::SignalRCore::Messages::NegotiationResult* arg)
		{
			((::System::Void(*)(::BestHTTP::SignalRCore::Messages::NegotiationResult*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALRCORE_HUBCONNECTION_SET_NEGOTIATIONRESULT_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SignalRCore::HubOptions* get_Options()
		{
			return (return (::BestHTTP::SignalRCore::HubOptions*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALRCORE_HUBCONNECTION_GET_OPTIONS_OFFSET))(nullptr);
		}

		::System::Void set_Options(::BestHTTP::SignalRCore::HubOptions* arg)
		{
			((::System::Void(*)(::BestHTTP::SignalRCore::HubOptions*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALRCORE_HUBCONNECTION_SET_OPTIONS_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_RedirectCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALRCORE_HUBCONNECTION_GET_REDIRECTCOUNT_OFFSET))(nullptr);
		}

		::System::Void set_RedirectCount(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALRCORE_HUBCONNECTION_SET_REDIRECTCOUNT_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SignalRCore::IRetryPolicy* get_ReconnectPolicy()
		{
			return (return (::BestHTTP::SignalRCore::IRetryPolicy*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALRCORE_HUBCONNECTION_GET_RECONNECTPOLICY_OFFSET))(nullptr);
		}

		::System::Void set_ReconnectPolicy(::BestHTTP::SignalRCore::IRetryPolicy* arg)
		{
			((::System::Void(*)(::BestHTTP::SignalRCore::IRetryPolicy*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALRCORE_HUBCONNECTION_SET_RECONNECTPOLICY_OFFSET))(arg, nullptr);
		}

		::BestHTTP::Logger::LoggingContext* get_Context()
		{
			return (return (::BestHTTP::Logger::LoggingContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALRCORE_HUBCONNECTION_GET_CONTEXT_OFFSET))(nullptr);
		}

		::System::Void set_Context(::BestHTTP::Logger::LoggingContext* arg)
		{
			((::System::Void(*)(::BestHTTP::Logger::LoggingContext*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALRCORE_HUBCONNECTION_SET_CONTEXT_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Uri* arg, ::BestHTTP::SignalRCore::IProtocol* arg)
		{
			((::System::Void(*)(::System::Uri*, ::BestHTTP::SignalRCore::IProtocol*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALRCORE_HUBCONNECTION_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Uri* arg, ::BestHTTP::SignalRCore::IProtocol* arg, ::BestHTTP::SignalRCore::HubOptions* arg)
		{
			((::System::Void(*)(::System::Uri*, ::BestHTTP::SignalRCore::IProtocol*, ::BestHTTP::SignalRCore::HubOptions*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALRCORE_HUBCONNECTION_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void StartConnect()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALRCORE_HUBCONNECTION_STARTCONNECT_OFFSET))(nullptr);
		}

		Il2CppObject* ConnectAsync()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALRCORE_HUBCONNECTION_CONNECTASYNC_OFFSET))(nullptr);
		}

		::System::Void OnAsyncConnectedCallback(::BestHTTP::SignalRCore::HubConnection* arg)
		{
			((::System::Void(*)(::BestHTTP::SignalRCore::HubConnection*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALRCORE_HUBCONNECTION_ONASYNCCONNECTEDCALLBACK_OFFSET))(arg, nullptr);
		}

		::System::Void OnAsyncConnectFailedCallback(::BestHTTP::SignalRCore::HubConnection* arg, ::System::String* str)
		{
			((::System::Void(*)(::BestHTTP::SignalRCore::HubConnection*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALRCORE_HUBCONNECTION_ONASYNCCONNECTFAILEDCALLBACK_OFFSET))(arg, str, nullptr);
		}

		::System::Void OnAuthenticationSucceded(::BestHTTP::SignalRCore::IAuthenticationProvider* arg)
		{
			((::System::Void(*)(::BestHTTP::SignalRCore::IAuthenticationProvider*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALRCORE_HUBCONNECTION_ONAUTHENTICATIONSUCCEDED_OFFSET))(arg, nullptr);
		}

		::System::Void OnAuthenticationFailed(::BestHTTP::SignalRCore::IAuthenticationProvider* arg, ::System::String* str)
		{
			((::System::Void(*)(::BestHTTP::SignalRCore::IAuthenticationProvider*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALRCORE_HUBCONNECTION_ONAUTHENTICATIONFAILED_OFFSET))(arg, str, nullptr);
		}

		::System::Void StartNegotiation()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALRCORE_HUBCONNECTION_STARTNEGOTIATION_OFFSET))(nullptr);
		}

		::System::Void ConnectImpl(::BestHTTP::SignalRCore::TransportTypes* arg)
		{
			((::System::Void(*)(::BestHTTP::SignalRCore::TransportTypes*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALRCORE_HUBCONNECTION_CONNECTIMPL_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsTransportSupported(::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALRCORE_HUBCONNECTION_ISTRANSPORTSUPPORTED_OFFSET))(str, nullptr);
		}

		::System::Void OnNegotiationRequestFinished(::BestHTTP::HTTPRequest* arg, ::BestHTTP::HTTPResponse* arg)
		{
			((::System::Void(*)(::BestHTTP::HTTPRequest*, ::BestHTTP::HTTPResponse*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALRCORE_HUBCONNECTION_ONNEGOTIATIONREQUESTFINISHED_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartClose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALRCORE_HUBCONNECTION_STARTCLOSE_OFFSET))(nullptr);
		}

		Il2CppObject* CloseAsync()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALRCORE_HUBCONNECTION_CLOSEASYNC_OFFSET))(nullptr);
		}

		::System::Void OnClosedAsyncCallback(::BestHTTP::SignalRCore::HubConnection* arg)
		{
			((::System::Void(*)(::BestHTTP::SignalRCore::HubConnection*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALRCORE_HUBCONNECTION_ONCLOSEDASYNCCALLBACK_OFFSET))(arg, nullptr);
		}

		::System::Void OnClosedAsyncErrorCallback(::BestHTTP::SignalRCore::HubConnection* arg, ::System::String* str)
		{
			((::System::Void(*)(::BestHTTP::SignalRCore::HubConnection*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALRCORE_HUBCONNECTION_ONCLOSEDASYNCERRORCALLBACK_OFFSET))(arg, str, nullptr);
		}

		Il2CppObject* Invoke(::System::String* str, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (Il2CppObject*(*)(::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALRCORE_HUBCONNECTION_INVOKE_OFFSET))(str, arg, nullptr);
		}

		Il2CppObject* InvokeAsync(::System::String* str, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (Il2CppObject*(*)(::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALRCORE_HUBCONNECTION_INVOKEASYNC_OFFSET))(str, arg, nullptr);
		}

		Il2CppObject* InvokeAsync(::System::String* str, ::System::Threading::CancellationToken* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (Il2CppObject*(*)(::System::String*, ::System::Threading::CancellationToken*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALRCORE_HUBCONNECTION_INVOKEASYNC_OFFSET))(str, arg, arg, nullptr);
		}

		Il2CppObject* Send(::System::String* str, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (Il2CppObject*(*)(::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALRCORE_HUBCONNECTION_SEND_OFFSET))(str, arg, nullptr);
		}

		Il2CppObject* SendAsync(::System::String* str, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (Il2CppObject*(*)(::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALRCORE_HUBCONNECTION_SENDASYNC_OFFSET))(str, arg, nullptr);
		}

		Il2CppObject* SendAsync(::System::String* str, ::System::Threading::CancellationToken* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (Il2CppObject*(*)(::System::String*, ::System::Threading::CancellationToken*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALRCORE_HUBCONNECTION_SENDASYNC_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Int64 InvokeImp(::System::String* str, ::Il2CppArray<::System::Object*>* arg, Il2CppObject* arg, ::System::Type* arg, ::System::Boolean arg)
		{
			return (return (::System::Int64(*)(::System::String*, ::Il2CppArray<::System::Object*>*, Il2CppObject*, ::System::Type*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALRCORE_HUBCONNECTION_INVOKEIMP_OFFSET))(str, arg, arg, arg, arg, nullptr);
		}

		::System::Void SendMessage(::BestHTTP::SignalRCore::Messages::Message* arg)
		{
			((::System::Void(*)(::BestHTTP::SignalRCore::Messages::Message*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALRCORE_HUBCONNECTION_SENDMESSAGE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetDownStreamController(::System::String* str, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (Il2CppObject*(*)(::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALRCORE_HUBCONNECTION_GETDOWNSTREAMCONTROLLER_OFFSET))(str, arg, nullptr);
		}

		Il2CppObject* GetUpStreamController(::System::String* str, ::System::Int32 arg, ::System::Boolean arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (Il2CppObject*(*)(::System::String*, ::System::Int32, ::System::Boolean, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALRCORE_HUBCONNECTION_GETUPSTREAMCONTROLLER_OFFSET))(str, arg, arg, arg, nullptr);
		}

		::System::Void On(::System::String* str, ::System::Action* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALRCORE_HUBCONNECTION_ON_OFFSET))(str, arg, nullptr);
		}

		::System::Void On(::System::String* str, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALRCORE_HUBCONNECTION_ON_OFFSET))(str, arg, nullptr);
		}

		::System::Void On(::System::String* str, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALRCORE_HUBCONNECTION_ON_OFFSET))(str, arg, nullptr);
		}

		::System::Void On(::System::String* str, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALRCORE_HUBCONNECTION_ON_OFFSET))(str, arg, nullptr);
		}

		::System::Void On(::System::String* str, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALRCORE_HUBCONNECTION_ON_OFFSET))(str, arg, nullptr);
		}

		::System::Void On(::System::String* str, ::Il2CppArray<::System::Object*>* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALRCORE_HUBCONNECTION_ON_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Void Remove(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALRCORE_HUBCONNECTION_REMOVE_OFFSET))(str, nullptr);
		}

		::BestHTTP::SignalRCore::Subscription* GetSubscription(::System::String* str)
		{
			return (return (::BestHTTP::SignalRCore::Subscription*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALRCORE_HUBCONNECTION_GETSUBSCRIPTION_OFFSET))(str, nullptr);
		}

		::System::Type* GetItemType(::System::Int64 arg)
		{
			return (return (::System::Type*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALRCORE_HUBCONNECTION_GETITEMTYPE_OFFSET))(arg, nullptr);
		}

		::System::Void OnMessages(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALRCORE_HUBCONNECTION_ONMESSAGES_OFFSET))(arg, nullptr);
		}

		::System::Void Transport_OnStateChanged(::BestHTTP::SignalRCore::TransportStates* arg, ::BestHTTP::SignalRCore::TransportStates* arg)
		{
			((::System::Void(*)(::BestHTTP::SignalRCore::TransportStates*, ::BestHTTP::SignalRCore::TransportStates*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALRCORE_HUBCONNECTION_TRANSPORT_ONSTATECHANGED_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* GetNextTransportToTry()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALRCORE_HUBCONNECTION_GETNEXTTRANSPORTTOTRY_OFFSET))(nullptr);
		}

		::System::Void SetState(::BestHTTP::SignalRCore::ConnectionStates* arg, ::System::String* str, ::System::Boolean arg)
		{
			((::System::Void(*)(::BestHTTP::SignalRCore::ConnectionStates*, ::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALRCORE_HUBCONNECTION_SETSTATE_OFFSET))(arg, str, arg, nullptr);
		}

		::System::Void BestHTTP.Extensions.IHeartbeat.OnHeartbeatUpdate(::System::TimeSpan* arg)
		{
			((::System::Void(*)(::System::TimeSpan*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALRCORE_HUBCONNECTION_BESTHTTP.EXTENSIONS.IHEARTBEAT.ONHEARTBEATUPDATE_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALRCORE_HUBCONNECTION_.CCTOR_OFFSET))(nullptr);
		}

	};
}

