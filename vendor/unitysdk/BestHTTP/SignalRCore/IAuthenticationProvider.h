#pragma once
#include "../../unitysdk.h"

namespace BestHTTP::SignalRCore { class OnAuthenticationFailedDelegate; }
namespace BestHTTP { class HTTPRequest; }
namespace BestHTTP::SignalRCore { class OnAuthenticationSuccededDelegate; }

#define BESTHTTP_SIGNALRCORE_IAUTHENTICATIONPROVIDER_REMOVE_ONAUTHENTICATIONFAILED_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_SIGNALRCORE_IAUTHENTICATIONPROVIDER_PREPAREREQUEST_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_SIGNALRCORE_IAUTHENTICATIONPROVIDER_REMOVE_ONAUTHENTICATIONSUCCEDED_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_SIGNALRCORE_IAUTHENTICATIONPROVIDER_GET_ISPREAUTHREQUIRED_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_SIGNALRCORE_IAUTHENTICATIONPROVIDER_ADD_ONAUTHENTICATIONFAILED_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_SIGNALRCORE_IAUTHENTICATIONPROVIDER_ADD_ONAUTHENTICATIONSUCCEDED_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_SIGNALRCORE_IAUTHENTICATIONPROVIDER_STARTAUTHENTICATION_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_SIGNALRCORE_IAUTHENTICATIONPROVIDER_CANCEL_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_SIGNALRCORE_IAUTHENTICATIONPROVIDER_PREPAREURI_OFFSET UNITYSDK_OFFSET(0x000000)

namespace BestHTTP::SignalRCore
{
	inline static constexpr unsigned int IAuthenticationProvider_TypeDefinitionIndex = 21448;

	class IAuthenticationProvider : public Il2CppObject
	{
	public:
		::System::Void remove_OnAuthenticationFailed(::BestHTTP::SignalRCore::OnAuthenticationFailedDelegate* arg)
		{
			((::System::Void(*)(::BestHTTP::SignalRCore::OnAuthenticationFailedDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALRCORE_IAUTHENTICATIONPROVIDER_REMOVE_ONAUTHENTICATIONFAILED_OFFSET))(arg, nullptr);
		}

		::System::Void PrepareRequest(::BestHTTP::HTTPRequest* arg)
		{
			((::System::Void(*)(::BestHTTP::HTTPRequest*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALRCORE_IAUTHENTICATIONPROVIDER_PREPAREREQUEST_OFFSET))(arg, nullptr);
		}

		::System::Void remove_OnAuthenticationSucceded(::BestHTTP::SignalRCore::OnAuthenticationSuccededDelegate* arg)
		{
			((::System::Void(*)(::BestHTTP::SignalRCore::OnAuthenticationSuccededDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALRCORE_IAUTHENTICATIONPROVIDER_REMOVE_ONAUTHENTICATIONSUCCEDED_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsPreAuthRequired()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALRCORE_IAUTHENTICATIONPROVIDER_GET_ISPREAUTHREQUIRED_OFFSET))(nullptr);
		}

		::System::Void add_OnAuthenticationFailed(::BestHTTP::SignalRCore::OnAuthenticationFailedDelegate* arg)
		{
			((::System::Void(*)(::BestHTTP::SignalRCore::OnAuthenticationFailedDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALRCORE_IAUTHENTICATIONPROVIDER_ADD_ONAUTHENTICATIONFAILED_OFFSET))(arg, nullptr);
		}

		::System::Void add_OnAuthenticationSucceded(::BestHTTP::SignalRCore::OnAuthenticationSuccededDelegate* arg)
		{
			((::System::Void(*)(::BestHTTP::SignalRCore::OnAuthenticationSuccededDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALRCORE_IAUTHENTICATIONPROVIDER_ADD_ONAUTHENTICATIONSUCCEDED_OFFSET))(arg, nullptr);
		}

		::System::Void StartAuthentication()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALRCORE_IAUTHENTICATIONPROVIDER_STARTAUTHENTICATION_OFFSET))(nullptr);
		}

		::System::Void Cancel()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALRCORE_IAUTHENTICATIONPROVIDER_CANCEL_OFFSET))(nullptr);
		}

		::System::Uri* PrepareUri(::System::Uri* arg)
		{
			return (return (::System::Uri*(*)(::System::Uri*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALRCORE_IAUTHENTICATIONPROVIDER_PREPAREURI_OFFSET))(arg, nullptr);
		}

	};
}

