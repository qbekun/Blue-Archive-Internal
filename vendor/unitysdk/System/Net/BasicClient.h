#pragma once
#include "../../unitysdk.h"

#define SYSTEM_NET_BASICCLIENT_AUTHENTICATE_OFFSET UNITYSDK_OFFSET(0x9A67D20)
#define SYSTEM_NET_BASICCLIENT_GETBYTES_OFFSET UNITYSDK_OFFSET(0x9A68110)
#define SYSTEM_NET_BASICCLIENT_INTERNALAUTHENTICATE_OFFSET UNITYSDK_OFFSET(0x9A67DC0)
#define SYSTEM_NET_BASICCLIENT_PREAUTHENTICATE_OFFSET UNITYSDK_OFFSET(0x9A681B0)
#define SYSTEM_NET_BASICCLIENT_GET_AUTHENTICATIONTYPE_OFFSET UNITYSDK_OFFSET(0x9A681C0)
#define SYSTEM_NET_BASICCLIENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9A66F90)

namespace System::Net
{
	inline static constexpr unsigned int BasicClient_TypeDefinitionIndex = 29756;

	class BasicClient : public Il2CppObject
	{
	public:
		::System::Net::Authorization* Authenticate(::System::String* str, ::System::Net::WebRequest* arg, ::System::Net::ICredentials* arg)
		{
			return (return (::System::Net::Authorization*(*)(::System::String*, ::System::Net::WebRequest*, ::System::Net::ICredentials*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_BASICCLIENT_AUTHENTICATE_OFFSET))(str, arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetBytes(::System::String* str)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_BASICCLIENT_GETBYTES_OFFSET))(str, nullptr);
		}

		::System::Net::Authorization* InternalAuthenticate(::System::Net::WebRequest* arg, ::System::Net::ICredentials* arg)
		{
			return (return (::System::Net::Authorization*(*)(::System::Net::WebRequest*, ::System::Net::ICredentials*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_BASICCLIENT_INTERNALAUTHENTICATE_OFFSET))(arg, arg, nullptr);
		}

		::System::Net::Authorization* PreAuthenticate(::System::Net::WebRequest* arg, ::System::Net::ICredentials* arg)
		{
			return (return (::System::Net::Authorization*(*)(::System::Net::WebRequest*, ::System::Net::ICredentials*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_BASICCLIENT_PREAUTHENTICATE_OFFSET))(arg, arg, nullptr);
		}

		::System::String* get_AuthenticationType()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_BASICCLIENT_GET_AUTHENTICATIONTYPE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_BASICCLIENT_.CTOR_OFFSET))(nullptr);
		}

	};
}

