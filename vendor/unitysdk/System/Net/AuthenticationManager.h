#pragma once
#include "../../unitysdk.h"

#define SYSTEM_NET_AUTHENTICATIONMANAGER_ENSUREMODULES_OFFSET UNITYSDK_OFFSET(0x9A66C80)
#define SYSTEM_NET_AUTHENTICATIONMANAGER_AUTHENTICATE_OFFSET UNITYSDK_OFFSET(0x9A66FA0)
#define SYSTEM_NET_AUTHENTICATIONMANAGER_DOAUTHENTICATE_OFFSET UNITYSDK_OFFSET(0x9A670B0)
#define SYSTEM_NET_AUTHENTICATIONMANAGER_PREAUTHENTICATE_OFFSET UNITYSDK_OFFSET(0x9A67670)
#define SYSTEM_NET_AUTHENTICATIONMANAGER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9A67C70)

namespace System::Net
{
	inline static constexpr unsigned int AuthenticationManager_TypeDefinitionIndex = 29755;

	class AuthenticationManager : public Il2CppObject
	{
	public:
		::System::Collections::ArrayList* modules; // 0x0
		::System::Object* locker; // 0x8
		::System::Net::ICredentialPolicy* credential_policy; // 0x10

		::System::Void EnsureModules()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_AUTHENTICATIONMANAGER_ENSUREMODULES_OFFSET))(nullptr);
		}

		::System::Net::Authorization* Authenticate(::System::String* str, ::System::Net::WebRequest* arg, ::System::Net::ICredentials* arg)
		{
			return (return (::System::Net::Authorization*(*)(::System::String*, ::System::Net::WebRequest*, ::System::Net::ICredentials*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_AUTHENTICATIONMANAGER_AUTHENTICATE_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Net::Authorization* DoAuthenticate(::System::String* str, ::System::Net::WebRequest* arg, ::System::Net::ICredentials* arg)
		{
			return (return (::System::Net::Authorization*(*)(::System::String*, ::System::Net::WebRequest*, ::System::Net::ICredentials*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_AUTHENTICATIONMANAGER_DOAUTHENTICATE_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Net::Authorization* PreAuthenticate(::System::Net::WebRequest* arg, ::System::Net::ICredentials* arg)
		{
			return (return (::System::Net::Authorization*(*)(::System::Net::WebRequest*, ::System::Net::ICredentials*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_AUTHENTICATIONMANAGER_PREAUTHENTICATE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_AUTHENTICATIONMANAGER_.CCTOR_OFFSET))(nullptr);
		}

	};
}

