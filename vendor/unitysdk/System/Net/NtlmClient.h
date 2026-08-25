#pragma once
#include "../../unitysdk.h"

#define SYSTEM_NET_NTLMCLIENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9A781E0)
#define SYSTEM_NET_NTLMCLIENT_AUTHENTICATE_OFFSET UNITYSDK_OFFSET(0x9A78250)
#define SYSTEM_NET_NTLMCLIENT_PREAUTHENTICATE_OFFSET UNITYSDK_OFFSET(0x9A78310)
#define SYSTEM_NET_NTLMCLIENT_GET_AUTHENTICATIONTYPE_OFFSET UNITYSDK_OFFSET(0x9A78320)

namespace System::Net
{
	inline static constexpr unsigned int NtlmClient_TypeDefinitionIndex = 29788;

	class NtlmClient : public Il2CppObject
	{
	public:
		::System::Net::IAuthenticationModule* authObject; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NTLMCLIENT_.CTOR_OFFSET))(nullptr);
		}

		::System::Net::Authorization* Authenticate(::System::String* str, ::System::Net::WebRequest* arg, ::System::Net::ICredentials* arg)
		{
			return (return (::System::Net::Authorization*(*)(::System::String*, ::System::Net::WebRequest*, ::System::Net::ICredentials*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NTLMCLIENT_AUTHENTICATE_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Net::Authorization* PreAuthenticate(::System::Net::WebRequest* arg, ::System::Net::ICredentials* arg)
		{
			return (return (::System::Net::Authorization*(*)(::System::Net::WebRequest*, ::System::Net::ICredentials*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NTLMCLIENT_PREAUTHENTICATE_OFFSET))(arg, arg, nullptr);
		}

		::System::String* get_AuthenticationType()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NTLMCLIENT_GET_AUTHENTICATIONTYPE_OFFSET))(nullptr);
		}

	};
}

