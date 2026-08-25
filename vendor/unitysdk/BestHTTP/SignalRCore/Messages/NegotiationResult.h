#pragma once
#include "../../../unitysdk.h"

namespace BestHTTP { class HTTPResponse; }
namespace BestHTTP::SignalRCore::Messages { class NegotiationResult; }
namespace BestHTTP::SignalRCore { class HubConnection; }

#define BESTHTTP_SIGNALRCORE_MESSAGES_NEGOTIATIONRESULT_SET_URL_OFFSET UNITYSDK_OFFSET(0x655160)
#define BESTHTTP_SIGNALRCORE_MESSAGES_NEGOTIATIONRESULT_SET_NEGOTIATEVERSION_OFFSET UNITYSDK_OFFSET(0x655170)
#define BESTHTTP_SIGNALRCORE_MESSAGES_NEGOTIATIONRESULT_GET_ACCESSTOKEN_OFFSET UNITYSDK_OFFSET(0x655180)
#define BESTHTTP_SIGNALRCORE_MESSAGES_NEGOTIATIONRESULT_GET_CONNECTIONID_OFFSET UNITYSDK_OFFSET(0x655190)
#define BESTHTTP_SIGNALRCORE_MESSAGES_NEGOTIATIONRESULT_.CTOR_OFFSET UNITYSDK_OFFSET(0x64A860)
#define BESTHTTP_SIGNALRCORE_MESSAGES_NEGOTIATIONRESULT_PARSE_OFFSET UNITYSDK_OFFSET(0x6494E0)
#define BESTHTTP_SIGNALRCORE_MESSAGES_NEGOTIATIONRESULT_GET_CONNECTIONTOKEN_OFFSET UNITYSDK_OFFSET(0x655220)
#define BESTHTTP_SIGNALRCORE_MESSAGES_NEGOTIATIONRESULT_SET_CONNECTIONID_OFFSET UNITYSDK_OFFSET(0x655230)
#define BESTHTTP_SIGNALRCORE_MESSAGES_NEGOTIATIONRESULT_SET_NEGOTIATIONRESPONSE_OFFSET UNITYSDK_OFFSET(0x655240)
#define BESTHTTP_SIGNALRCORE_MESSAGES_NEGOTIATIONRESULT_ISABSOLUTE_OFFSET UNITYSDK_OFFSET(0x6551A0)
#define BESTHTTP_SIGNALRCORE_MESSAGES_NEGOTIATIONRESULT_GET_SUPPORTEDTRANSPORTS_OFFSET UNITYSDK_OFFSET(0x655250)
#define BESTHTTP_SIGNALRCORE_MESSAGES_NEGOTIATIONRESULT_GET_NEGOTIATEVERSION_OFFSET UNITYSDK_OFFSET(0x655260)
#define BESTHTTP_SIGNALRCORE_MESSAGES_NEGOTIATIONRESULT_SET_CONNECTIONTOKEN_OFFSET UNITYSDK_OFFSET(0x655270)
#define BESTHTTP_SIGNALRCORE_MESSAGES_NEGOTIATIONRESULT_GET_URL_OFFSET UNITYSDK_OFFSET(0x655280)
#define BESTHTTP_SIGNALRCORE_MESSAGES_NEGOTIATIONRESULT_GET_NEGOTIATIONRESPONSE_OFFSET UNITYSDK_OFFSET(0x655290)
#define BESTHTTP_SIGNALRCORE_MESSAGES_NEGOTIATIONRESULT_SET_ACCESSTOKEN_OFFSET UNITYSDK_OFFSET(0x6552A0)
#define BESTHTTP_SIGNALRCORE_MESSAGES_NEGOTIATIONRESULT_SET_SUPPORTEDTRANSPORTS_OFFSET UNITYSDK_OFFSET(0x6552B0)

namespace BestHTTP::SignalRCore::Messages
{
	inline static constexpr unsigned int NegotiationResult_TypeDefinitionIndex = 21471;

	class NegotiationResult : public Il2CppObject
	{
	public:
		::System::Int32 _NegotiateVersion_k__BackingField; // 0x10
		::System::String* _ConnectionToken_k__BackingField; // 0x18
		::System::String* _ConnectionId_k__BackingField; // 0x20
		Il2CppObject* _SupportedTransports_k__BackingField; // 0x28
		::System::Uri* _Url_k__BackingField; // 0x30
		::System::String* _AccessToken_k__BackingField; // 0x38
		::BestHTTP::HTTPResponse* _NegotiationResponse_k__BackingField; // 0x40

		::System::Void set_Url(::System::Uri* arg)
		{
			((::System::Void(*)(::System::Uri*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALRCORE_MESSAGES_NEGOTIATIONRESULT_SET_URL_OFFSET))(arg, nullptr);
		}

		::System::Void set_NegotiateVersion(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALRCORE_MESSAGES_NEGOTIATIONRESULT_SET_NEGOTIATEVERSION_OFFSET))(arg, nullptr);
		}

		::System::String* get_AccessToken()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALRCORE_MESSAGES_NEGOTIATIONRESULT_GET_ACCESSTOKEN_OFFSET))(nullptr);
		}

		::System::String* get_ConnectionId()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALRCORE_MESSAGES_NEGOTIATIONRESULT_GET_CONNECTIONID_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALRCORE_MESSAGES_NEGOTIATIONRESULT_.CTOR_OFFSET))(nullptr);
		}

		::BestHTTP::SignalRCore::Messages::NegotiationResult* Parse(::BestHTTP::HTTPResponse* arg, ::System::String&* arg, ::BestHTTP::SignalRCore::HubConnection* arg)
		{
			return (return (::BestHTTP::SignalRCore::Messages::NegotiationResult*(*)(::BestHTTP::HTTPResponse*, ::System::String&*, ::BestHTTP::SignalRCore::HubConnection*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALRCORE_MESSAGES_NEGOTIATIONRESULT_PARSE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::String* get_ConnectionToken()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALRCORE_MESSAGES_NEGOTIATIONRESULT_GET_CONNECTIONTOKEN_OFFSET))(nullptr);
		}

		::System::Void set_ConnectionId(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALRCORE_MESSAGES_NEGOTIATIONRESULT_SET_CONNECTIONID_OFFSET))(str, nullptr);
		}

		::System::Void set_NegotiationResponse(::BestHTTP::HTTPResponse* arg)
		{
			((::System::Void(*)(::BestHTTP::HTTPResponse*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALRCORE_MESSAGES_NEGOTIATIONRESULT_SET_NEGOTIATIONRESPONSE_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsAbsolute(::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALRCORE_MESSAGES_NEGOTIATIONRESULT_ISABSOLUTE_OFFSET))(str, nullptr);
		}

		Il2CppObject* get_SupportedTransports()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALRCORE_MESSAGES_NEGOTIATIONRESULT_GET_SUPPORTEDTRANSPORTS_OFFSET))(nullptr);
		}

		::System::Int32 get_NegotiateVersion()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALRCORE_MESSAGES_NEGOTIATIONRESULT_GET_NEGOTIATEVERSION_OFFSET))(nullptr);
		}

		::System::Void set_ConnectionToken(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALRCORE_MESSAGES_NEGOTIATIONRESULT_SET_CONNECTIONTOKEN_OFFSET))(str, nullptr);
		}

		::System::Uri* get_Url()
		{
			return (return (::System::Uri*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALRCORE_MESSAGES_NEGOTIATIONRESULT_GET_URL_OFFSET))(nullptr);
		}

		::BestHTTP::HTTPResponse* get_NegotiationResponse()
		{
			return (return (::BestHTTP::HTTPResponse*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALRCORE_MESSAGES_NEGOTIATIONRESULT_GET_NEGOTIATIONRESPONSE_OFFSET))(nullptr);
		}

		::System::Void set_AccessToken(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALRCORE_MESSAGES_NEGOTIATIONRESULT_SET_ACCESSTOKEN_OFFSET))(str, nullptr);
		}

		::System::Void set_SupportedTransports(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALRCORE_MESSAGES_NEGOTIATIONRESULT_SET_SUPPORTEDTRANSPORTS_OFFSET))(arg, nullptr);
		}

	};
}

