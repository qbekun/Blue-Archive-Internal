#pragma once
#include "../../unitysdk.h"

#define MONO_HTTP_NTLMCLIENT_AUTHENTICATE_OFFSET UNITYSDK_OFFSET(0x96DB160)
#define MONO_HTTP_NTLMCLIENT_PREAUTHENTICATE_OFFSET UNITYSDK_OFFSET(0x96DB570)
#define MONO_HTTP_NTLMCLIENT_GET_AUTHENTICATIONTYPE_OFFSET UNITYSDK_OFFSET(0x96DB580)
#define MONO_HTTP_NTLMCLIENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x96DB5B0)
#define MONO_HTTP_NTLMCLIENT_.CCTOR_OFFSET UNITYSDK_OFFSET(0x96DB5C0)

namespace Mono::Http
{
	inline static constexpr unsigned int NtlmClient_TypeDefinitionIndex = 29089;

	class NtlmClient : public Il2CppObject
	{
	public:
		Il2CppObject* cache; // 0x0

		::System::Net::Authorization* Authenticate(::System::String* str, ::System::Net::WebRequest* arg, ::System::Net::ICredentials* arg)
		{
			return (return (::System::Net::Authorization*(*)(::System::String*, ::System::Net::WebRequest*, ::System::Net::ICredentials*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_HTTP_NTLMCLIENT_AUTHENTICATE_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Net::Authorization* PreAuthenticate(::System::Net::WebRequest* arg, ::System::Net::ICredentials* arg)
		{
			return (return (::System::Net::Authorization*(*)(::System::Net::WebRequest*, ::System::Net::ICredentials*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_HTTP_NTLMCLIENT_PREAUTHENTICATE_OFFSET))(arg, arg, nullptr);
		}

		::System::String* get_AuthenticationType()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_HTTP_NTLMCLIENT_GET_AUTHENTICATIONTYPE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_HTTP_NTLMCLIENT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_HTTP_NTLMCLIENT_.CCTOR_OFFSET))(nullptr);
		}

	};
}

