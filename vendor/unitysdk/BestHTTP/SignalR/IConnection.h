#pragma once
#include "../../unitysdk.h"

namespace BestHTTP::SignalR { class ProtocolVersions; }
namespace BestHTTP::SignalR { class NegotiationData; }
namespace BestHTTP::SignalR::JsonEncoders { class IJsonEncoder; }
namespace BestHTTP::SignalR::Messages { class IServerMessage; }
namespace BestHTTP::SignalR { class RequestTypes; }
namespace BestHTTP::SignalR::Transports { class TransportBase; }
namespace BestHTTP { class HTTPRequest; }

#define BESTHTTP_SIGNALR_ICONNECTION_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_SIGNALR_ICONNECTION_GET_NEGOTIATIONRESULT_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_SIGNALR_ICONNECTION_GET_JSONENCODER_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_SIGNALR_ICONNECTION_SET_JSONENCODER_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_SIGNALR_ICONNECTION_ONMESSAGE_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_SIGNALR_ICONNECTION_TRANSPORTSTARTED_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_SIGNALR_ICONNECTION_TRANSPORTRECONNECTED_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_SIGNALR_ICONNECTION_TRANSPORTABORTED_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_SIGNALR_ICONNECTION_ERROR_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_SIGNALR_ICONNECTION_BUILDURI_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_SIGNALR_ICONNECTION_BUILDURI_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_SIGNALR_ICONNECTION_PREPAREREQUEST_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_SIGNALR_ICONNECTION_PARSERESPONSE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace BestHTTP::SignalR
{
	inline static constexpr unsigned int IConnection_TypeDefinitionIndex = 21479;

	class IConnection : public Il2CppObject
	{
	public:
		::BestHTTP::SignalR::ProtocolVersions* get_Protocol()
		{
			return (return (::BestHTTP::SignalR::ProtocolVersions*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_ICONNECTION_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::BestHTTP::SignalR::NegotiationData* get_NegotiationResult()
		{
			return (return (::BestHTTP::SignalR::NegotiationData*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_ICONNECTION_GET_NEGOTIATIONRESULT_OFFSET))(nullptr);
		}

		::BestHTTP::SignalR::JsonEncoders::IJsonEncoder* get_JsonEncoder()
		{
			return (return (::BestHTTP::SignalR::JsonEncoders::IJsonEncoder*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_ICONNECTION_GET_JSONENCODER_OFFSET))(nullptr);
		}

		::System::Void set_JsonEncoder(::BestHTTP::SignalR::JsonEncoders::IJsonEncoder* arg)
		{
			((::System::Void(*)(::BestHTTP::SignalR::JsonEncoders::IJsonEncoder*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_ICONNECTION_SET_JSONENCODER_OFFSET))(arg, nullptr);
		}

		::System::Void OnMessage(::BestHTTP::SignalR::Messages::IServerMessage* arg)
		{
			((::System::Void(*)(::BestHTTP::SignalR::Messages::IServerMessage*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_ICONNECTION_ONMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void TransportStarted()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_ICONNECTION_TRANSPORTSTARTED_OFFSET))(nullptr);
		}

		::System::Void TransportReconnected()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_ICONNECTION_TRANSPORTRECONNECTED_OFFSET))(nullptr);
		}

		::System::Void TransportAborted()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_ICONNECTION_TRANSPORTABORTED_OFFSET))(nullptr);
		}

		::System::Void Error(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_ICONNECTION_ERROR_OFFSET))(str, nullptr);
		}

		::System::Uri* BuildUri(::BestHTTP::SignalR::RequestTypes* arg)
		{
			return (return (::System::Uri*(*)(::BestHTTP::SignalR::RequestTypes*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_ICONNECTION_BUILDURI_OFFSET))(arg, nullptr);
		}

		::System::Uri* BuildUri(::BestHTTP::SignalR::RequestTypes* arg, ::BestHTTP::SignalR::Transports::TransportBase* arg)
		{
			return (return (::System::Uri*(*)(::BestHTTP::SignalR::RequestTypes*, ::BestHTTP::SignalR::Transports::TransportBase*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_ICONNECTION_BUILDURI_OFFSET))(arg, arg, nullptr);
		}

		::BestHTTP::HTTPRequest* PrepareRequest(::BestHTTP::HTTPRequest* arg, ::BestHTTP::SignalR::RequestTypes* arg)
		{
			return (return (::BestHTTP::HTTPRequest*(*)(::BestHTTP::HTTPRequest*, ::BestHTTP::SignalR::RequestTypes*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_ICONNECTION_PREPAREREQUEST_OFFSET))(arg, arg, nullptr);
		}

		::System::String* ParseResponse(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_ICONNECTION_PARSERESPONSE_OFFSET))(str, nullptr);
		}

	};
}

