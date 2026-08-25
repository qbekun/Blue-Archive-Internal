#pragma once
#include "../../unitysdk.h"

namespace BestHTTP { class HTTPRequest; }
namespace BestHTTP::SignalR { class IConnection; }
namespace BestHTTP::SignalR { class NegotiationData; }
namespace BestHTTP::SignalR { class Connection; }
namespace BestHTTP { class HTTPResponse; }

#define BESTHTTP_SIGNALR_NEGOTIATIONDATA_GET_DISCONNECTTIMEOUT_OFFSET UNITYSDK_OFFSET(0x749970)
#define BESTHTTP_SIGNALR_NEGOTIATIONDATA_SET_DISCONNECTTIMEOUT_OFFSET UNITYSDK_OFFSET(0x749980)
#define BESTHTTP_SIGNALR_NEGOTIATIONDATA_START_OFFSET UNITYSDK_OFFSET(0x749990)
#define BESTHTTP_SIGNALR_NEGOTIATIONDATA_GET_URL_OFFSET UNITYSDK_OFFSET(0x749C50)
#define BESTHTTP_SIGNALR_NEGOTIATIONDATA_GET_TRANSPORTCONNECTTIMEOUT_OFFSET UNITYSDK_OFFSET(0x749C60)
#define BESTHTTP_SIGNALR_NEGOTIATIONDATA_GET_WEBSOCKETSERVERURL_OFFSET UNITYSDK_OFFSET(0x749C70)
#define BESTHTTP_SIGNALR_NEGOTIATIONDATA_GET_CONNECTIONTOKEN_OFFSET UNITYSDK_OFFSET(0x749C80)
#define BESTHTTP_SIGNALR_NEGOTIATIONDATA_SET_CONNECTIONTOKEN_OFFSET UNITYSDK_OFFSET(0x749C90)
#define BESTHTTP_SIGNALR_NEGOTIATIONDATA_GET_CONNECTIONTIMEOUT_OFFSET UNITYSDK_OFFSET(0x749CA0)
#define BESTHTTP_SIGNALR_NEGOTIATIONDATA_GET_PROTOCOLVERSION_OFFSET UNITYSDK_OFFSET(0x749CB0)
#define BESTHTTP_SIGNALR_NEGOTIATIONDATA_PARSE_OFFSET UNITYSDK_OFFSET(0x749CC0)
#define BESTHTTP_SIGNALR_NEGOTIATIONDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x74A6B0)
#define BESTHTTP_SIGNALR_NEGOTIATIONDATA_SET_WEBSOCKETSERVERURL_OFFSET UNITYSDK_OFFSET(0x74A6F0)
#define BESTHTTP_SIGNALR_NEGOTIATIONDATA_SET_CONNECTIONID_OFFSET UNITYSDK_OFFSET(0x74A700)
#define BESTHTTP_SIGNALR_NEGOTIATIONDATA_GETSTRINGLIST_OFFSET UNITYSDK_OFFSET(0x74A710)
#define BESTHTTP_SIGNALR_NEGOTIATIONDATA_GETINT_OFFSET UNITYSDK_OFFSET(0x74A8B0)
#define BESTHTTP_SIGNALR_NEGOTIATIONDATA_RAISEONERROR_OFFSET UNITYSDK_OFFSET(0x74A920)
#define BESTHTTP_SIGNALR_NEGOTIATIONDATA_GET_LONGPOLLDELAY_OFFSET UNITYSDK_OFFSET(0x74AA80)
#define BESTHTTP_SIGNALR_NEGOTIATIONDATA_GETSTRING_OFFSET UNITYSDK_OFFSET(0x74A510)
#define BESTHTTP_SIGNALR_NEGOTIATIONDATA_SET_KEEPALIVETIMEOUT_OFFSET UNITYSDK_OFFSET(0x74AA90)
#define BESTHTTP_SIGNALR_NEGOTIATIONDATA_SET_PROTOCOLVERSION_OFFSET UNITYSDK_OFFSET(0x74AAA0)
#define BESTHTTP_SIGNALR_NEGOTIATIONDATA_GET_KEEPALIVETIMEOUT_OFFSET UNITYSDK_OFFSET(0x74AAB0)
#define BESTHTTP_SIGNALR_NEGOTIATIONDATA_SET_CONNECTIONTIMEOUT_OFFSET UNITYSDK_OFFSET(0x74AAC0)
#define BESTHTTP_SIGNALR_NEGOTIATIONDATA_ONNEGOTIATIONREQUESTFINISHED_OFFSET UNITYSDK_OFFSET(0x74AAD0)
#define BESTHTTP_SIGNALR_NEGOTIATIONDATA_GET_CONNECTIONID_OFFSET UNITYSDK_OFFSET(0x74AFD0)
#define BESTHTTP_SIGNALR_NEGOTIATIONDATA_SET_TRANSPORTCONNECTTIMEOUT_OFFSET UNITYSDK_OFFSET(0x74AFE0)
#define BESTHTTP_SIGNALR_NEGOTIATIONDATA_SET_TRYWEBSOCKETS_OFFSET UNITYSDK_OFFSET(0x74AFF0)
#define BESTHTTP_SIGNALR_NEGOTIATIONDATA_GET_OFFSET UNITYSDK_OFFSET(0x74A5E0)
#define BESTHTTP_SIGNALR_NEGOTIATIONDATA_SET_LONGPOLLDELAY_OFFSET UNITYSDK_OFFSET(0x74B000)
#define BESTHTTP_SIGNALR_NEGOTIATIONDATA_GET_TRYWEBSOCKETS_OFFSET UNITYSDK_OFFSET(0x74B010)
#define BESTHTTP_SIGNALR_NEGOTIATIONDATA_GETDOUBLE_OFFSET UNITYSDK_OFFSET(0x74A570)
#define BESTHTTP_SIGNALR_NEGOTIATIONDATA_SET_URL_OFFSET UNITYSDK_OFFSET(0x74B020)
#define BESTHTTP_SIGNALR_NEGOTIATIONDATA_ABORT_OFFSET UNITYSDK_OFFSET(0x74B030)

namespace BestHTTP::SignalR
{
	inline static constexpr unsigned int NegotiationData_TypeDefinitionIndex = 21487;

	class NegotiationData : public Il2CppObject
	{
	public:
		::System::String* _Url_k__BackingField; // 0x10
		::System::String* _WebSocketServerUrl_k__BackingField; // 0x18
		::System::String* _ConnectionToken_k__BackingField; // 0x20
		::System::String* _ConnectionId_k__BackingField; // 0x28
		Il2CppObject* _KeepAliveTimeout_k__BackingField; // 0x30
		::System::TimeSpan* _DisconnectTimeout_k__BackingField; // 0x40
		::System::TimeSpan* _ConnectionTimeout_k__BackingField; // 0x48
		::System::Boolean _TryWebSockets_k__BackingField; // 0x50
		::System::String* _ProtocolVersion_k__BackingField; // 0x58
		::System::TimeSpan* _TransportConnectTimeout_k__BackingField; // 0x60
		::System::TimeSpan* _LongPollDelay_k__BackingField; // 0x68
		Il2CppObject* OnReceived; // 0x70
		Il2CppObject* OnError; // 0x78
		::BestHTTP::HTTPRequest* NegotiationRequest; // 0x80
		::BestHTTP::SignalR::IConnection* Connection; // 0x88

		::System::TimeSpan* get_DisconnectTimeout()
		{
			return (return (::System::TimeSpan*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_NEGOTIATIONDATA_GET_DISCONNECTTIMEOUT_OFFSET))(nullptr);
		}

		::System::Void set_DisconnectTimeout(::System::TimeSpan* arg)
		{
			((::System::Void(*)(::System::TimeSpan*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_NEGOTIATIONDATA_SET_DISCONNECTTIMEOUT_OFFSET))(arg, nullptr);
		}

		::System::Void Start()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_NEGOTIATIONDATA_START_OFFSET))(nullptr);
		}

		::System::String* get_Url()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_NEGOTIATIONDATA_GET_URL_OFFSET))(nullptr);
		}

		::System::TimeSpan* get_TransportConnectTimeout()
		{
			return (return (::System::TimeSpan*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_NEGOTIATIONDATA_GET_TRANSPORTCONNECTTIMEOUT_OFFSET))(nullptr);
		}

		::System::String* get_WebSocketServerUrl()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_NEGOTIATIONDATA_GET_WEBSOCKETSERVERURL_OFFSET))(nullptr);
		}

		::System::String* get_ConnectionToken()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_NEGOTIATIONDATA_GET_CONNECTIONTOKEN_OFFSET))(nullptr);
		}

		::System::Void set_ConnectionToken(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_NEGOTIATIONDATA_SET_CONNECTIONTOKEN_OFFSET))(str, nullptr);
		}

		::System::TimeSpan* get_ConnectionTimeout()
		{
			return (return (::System::TimeSpan*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_NEGOTIATIONDATA_GET_CONNECTIONTIMEOUT_OFFSET))(nullptr);
		}

		::System::String* get_ProtocolVersion()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_NEGOTIATIONDATA_GET_PROTOCOLVERSION_OFFSET))(nullptr);
		}

		::BestHTTP::SignalR::NegotiationData* Parse(::System::String* str)
		{
			return (return (::BestHTTP::SignalR::NegotiationData*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_NEGOTIATIONDATA_PARSE_OFFSET))(str, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SignalR::Connection* arg)
		{
			((::System::Void(*)(::BestHTTP::SignalR::Connection*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_NEGOTIATIONDATA_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void set_WebSocketServerUrl(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_NEGOTIATIONDATA_SET_WEBSOCKETSERVERURL_OFFSET))(str, nullptr);
		}

		::System::Void set_ConnectionId(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_NEGOTIATIONDATA_SET_CONNECTIONID_OFFSET))(str, nullptr);
		}

		Il2CppObject* GetStringList(Il2CppObject* arg, ::System::String* str)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_NEGOTIATIONDATA_GETSTRINGLIST_OFFSET))(arg, str, nullptr);
		}

		::System::Int32 GetInt(Il2CppObject* arg, ::System::String* str)
		{
			return (return (::System::Int32(*)(Il2CppObject*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_NEGOTIATIONDATA_GETINT_OFFSET))(arg, str, nullptr);
		}

		::System::Void RaiseOnError(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_NEGOTIATIONDATA_RAISEONERROR_OFFSET))(str, nullptr);
		}

		::System::TimeSpan* get_LongPollDelay()
		{
			return (return (::System::TimeSpan*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_NEGOTIATIONDATA_GET_LONGPOLLDELAY_OFFSET))(nullptr);
		}

		::System::String* GetString(Il2CppObject* arg, ::System::String* str)
		{
			return (return (::System::String*(*)(Il2CppObject*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_NEGOTIATIONDATA_GETSTRING_OFFSET))(arg, str, nullptr);
		}

		::System::Void set_KeepAliveTimeout(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_NEGOTIATIONDATA_SET_KEEPALIVETIMEOUT_OFFSET))(arg, nullptr);
		}

		::System::Void set_ProtocolVersion(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_NEGOTIATIONDATA_SET_PROTOCOLVERSION_OFFSET))(str, nullptr);
		}

		Il2CppObject* get_KeepAliveTimeout()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_NEGOTIATIONDATA_GET_KEEPALIVETIMEOUT_OFFSET))(nullptr);
		}

		::System::Void set_ConnectionTimeout(::System::TimeSpan* arg)
		{
			((::System::Void(*)(::System::TimeSpan*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_NEGOTIATIONDATA_SET_CONNECTIONTIMEOUT_OFFSET))(arg, nullptr);
		}

		::System::Void OnNegotiationRequestFinished(::BestHTTP::HTTPRequest* arg, ::BestHTTP::HTTPResponse* arg)
		{
			((::System::Void(*)(::BestHTTP::HTTPRequest*, ::BestHTTP::HTTPResponse*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_NEGOTIATIONDATA_ONNEGOTIATIONREQUESTFINISHED_OFFSET))(arg, arg, nullptr);
		}

		::System::String* get_ConnectionId()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_NEGOTIATIONDATA_GET_CONNECTIONID_OFFSET))(nullptr);
		}

		::System::Void set_TransportConnectTimeout(::System::TimeSpan* arg)
		{
			((::System::Void(*)(::System::TimeSpan*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_NEGOTIATIONDATA_SET_TRANSPORTCONNECTTIMEOUT_OFFSET))(arg, nullptr);
		}

		::System::Void set_TryWebSockets(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_NEGOTIATIONDATA_SET_TRYWEBSOCKETS_OFFSET))(arg, nullptr);
		}

		::System::Object* Get(Il2CppObject* arg, ::System::String* str)
		{
			return (return (::System::Object*(*)(Il2CppObject*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_NEGOTIATIONDATA_GET_OFFSET))(arg, str, nullptr);
		}

		::System::Void set_LongPollDelay(::System::TimeSpan* arg)
		{
			((::System::Void(*)(::System::TimeSpan*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_NEGOTIATIONDATA_SET_LONGPOLLDELAY_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_TryWebSockets()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_NEGOTIATIONDATA_GET_TRYWEBSOCKETS_OFFSET))(nullptr);
		}

		::System::Double GetDouble(Il2CppObject* arg, ::System::String* str)
		{
			return (return (::System::Double(*)(Il2CppObject*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_NEGOTIATIONDATA_GETDOUBLE_OFFSET))(arg, str, nullptr);
		}

		::System::Void set_Url(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_NEGOTIATIONDATA_SET_URL_OFFSET))(str, nullptr);
		}

		::System::Void Abort()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_NEGOTIATIONDATA_ABORT_OFFSET))(nullptr);
		}

	};
}

