#pragma once
#include "../../unitysdk.h"

#define SYSTEM_NET_IAUTHENTICATIONMODULE_AUTHENTICATE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_NET_IAUTHENTICATIONMODULE_PREAUTHENTICATE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_NET_IAUTHENTICATIONMODULE_GET_AUTHENTICATIONTYPE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System::Net
{
	inline static constexpr unsigned int IAuthenticationModule_TypeDefinitionIndex = 29678;

	class IAuthenticationModule : public Il2CppObject
	{
	public:
		::System::Net::Authorization* Authenticate(::System::String* str, ::System::Net::WebRequest* arg, ::System::Net::ICredentials* arg)
		{
			return (return (::System::Net::Authorization*(*)(::System::String*, ::System::Net::WebRequest*, ::System::Net::ICredentials*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_IAUTHENTICATIONMODULE_AUTHENTICATE_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Net::Authorization* PreAuthenticate(::System::Net::WebRequest* arg, ::System::Net::ICredentials* arg)
		{
			return (return (::System::Net::Authorization*(*)(::System::Net::WebRequest*, ::System::Net::ICredentials*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_IAUTHENTICATIONMODULE_PREAUTHENTICATE_OFFSET))(arg, arg, nullptr);
		}

		::System::String* get_AuthenticationType()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_IAUTHENTICATIONMODULE_GET_AUTHENTICATIONTYPE_OFFSET))(nullptr);
		}

	};
}

