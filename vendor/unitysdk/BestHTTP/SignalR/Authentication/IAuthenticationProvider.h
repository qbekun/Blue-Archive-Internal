#pragma once
#include "../../../unitysdk.h"

namespace BestHTTP::SignalR::Authentication { class OnAuthenticationFailedDelegate; }
namespace BestHTTP { class HTTPRequest; }
namespace BestHTTP::SignalR { class RequestTypes; }
namespace BestHTTP::SignalR::Authentication { class OnAuthenticationSuccededDelegate; }

#define BESTHTTP_SIGNALR_AUTHENTICATION_IAUTHENTICATIONPROVIDER_REMOVE_ONAUTHENTICATIONFAILED_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_SIGNALR_AUTHENTICATION_IAUTHENTICATIONPROVIDER_PREPAREREQUEST_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_SIGNALR_AUTHENTICATION_IAUTHENTICATIONPROVIDER_ADD_ONAUTHENTICATIONFAILED_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_SIGNALR_AUTHENTICATION_IAUTHENTICATIONPROVIDER_STARTAUTHENTICATION_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_SIGNALR_AUTHENTICATION_IAUTHENTICATIONPROVIDER_GET_ISPREAUTHREQUIRED_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_SIGNALR_AUTHENTICATION_IAUTHENTICATIONPROVIDER_REMOVE_ONAUTHENTICATIONSUCCEDED_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_SIGNALR_AUTHENTICATION_IAUTHENTICATIONPROVIDER_ADD_ONAUTHENTICATIONSUCCEDED_OFFSET UNITYSDK_OFFSET(0x000000)

namespace BestHTTP::SignalR::Authentication
{
	inline static constexpr unsigned int IAuthenticationProvider_TypeDefinitionIndex = 21516;

	class IAuthenticationProvider : public Il2CppObject
	{
	public:
		::System::Void remove_OnAuthenticationFailed(::BestHTTP::SignalR::Authentication::OnAuthenticationFailedDelegate* arg)
		{
			((::System::Void(*)(::BestHTTP::SignalR::Authentication::OnAuthenticationFailedDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_AUTHENTICATION_IAUTHENTICATIONPROVIDER_REMOVE_ONAUTHENTICATIONFAILED_OFFSET))(arg, nullptr);
		}

		::System::Void PrepareRequest(::BestHTTP::HTTPRequest* arg, ::BestHTTP::SignalR::RequestTypes* arg)
		{
			((::System::Void(*)(::BestHTTP::HTTPRequest*, ::BestHTTP::SignalR::RequestTypes*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_AUTHENTICATION_IAUTHENTICATIONPROVIDER_PREPAREREQUEST_OFFSET))(arg, arg, nullptr);
		}

		::System::Void add_OnAuthenticationFailed(::BestHTTP::SignalR::Authentication::OnAuthenticationFailedDelegate* arg)
		{
			((::System::Void(*)(::BestHTTP::SignalR::Authentication::OnAuthenticationFailedDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_AUTHENTICATION_IAUTHENTICATIONPROVIDER_ADD_ONAUTHENTICATIONFAILED_OFFSET))(arg, nullptr);
		}

		::System::Void StartAuthentication()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_AUTHENTICATION_IAUTHENTICATIONPROVIDER_STARTAUTHENTICATION_OFFSET))(nullptr);
		}

		::System::Boolean get_IsPreAuthRequired()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_AUTHENTICATION_IAUTHENTICATIONPROVIDER_GET_ISPREAUTHREQUIRED_OFFSET))(nullptr);
		}

		::System::Void remove_OnAuthenticationSucceded(::BestHTTP::SignalR::Authentication::OnAuthenticationSuccededDelegate* arg)
		{
			((::System::Void(*)(::BestHTTP::SignalR::Authentication::OnAuthenticationSuccededDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_AUTHENTICATION_IAUTHENTICATIONPROVIDER_REMOVE_ONAUTHENTICATIONSUCCEDED_OFFSET))(arg, nullptr);
		}

		::System::Void add_OnAuthenticationSucceded(::BestHTTP::SignalR::Authentication::OnAuthenticationSuccededDelegate* arg)
		{
			((::System::Void(*)(::BestHTTP::SignalR::Authentication::OnAuthenticationSuccededDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_AUTHENTICATION_IAUTHENTICATIONPROVIDER_ADD_ONAUTHENTICATIONSUCCEDED_OFFSET))(arg, nullptr);
		}

	};
}

