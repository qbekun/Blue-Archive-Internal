#pragma once
#include "../../unitysdk.h"

#define SYSTEM_NET_DIGESTCLIENT_GET_CACHE_OFFSET UNITYSDK_OFFSET(0x9A6A420)
#define SYSTEM_NET_DIGESTCLIENT_CHECKEXPIRED_OFFSET UNITYSDK_OFFSET(0x9A6A600)
#define SYSTEM_NET_DIGESTCLIENT_AUTHENTICATE_OFFSET UNITYSDK_OFFSET(0x9A6AF40)
#define SYSTEM_NET_DIGESTCLIENT_PREAUTHENTICATE_OFFSET UNITYSDK_OFFSET(0x9A6B250)
#define SYSTEM_NET_DIGESTCLIENT_GET_AUTHENTICATIONTYPE_OFFSET UNITYSDK_OFFSET(0x9A6B3D0)
#define SYSTEM_NET_DIGESTCLIENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9A6B400)
#define SYSTEM_NET_DIGESTCLIENT_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9A6B410)

namespace System::Net
{
	inline static constexpr unsigned int DigestClient_TypeDefinitionIndex = 29766;

	class DigestClient : public Il2CppObject
	{
	public:
		::System::Collections::Hashtable* cache; // 0x0

		::System::Collections::Hashtable* get_Cache()
		{
			return (return (::System::Collections::Hashtable*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_DIGESTCLIENT_GET_CACHE_OFFSET))(nullptr);
		}

		::System::Void CheckExpired(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_DIGESTCLIENT_CHECKEXPIRED_OFFSET))(arg, nullptr);
		}

		::System::Net::Authorization* Authenticate(::System::String* str, ::System::Net::WebRequest* arg, ::System::Net::ICredentials* arg)
		{
			return (return (::System::Net::Authorization*(*)(::System::String*, ::System::Net::WebRequest*, ::System::Net::ICredentials*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_DIGESTCLIENT_AUTHENTICATE_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Net::Authorization* PreAuthenticate(::System::Net::WebRequest* arg, ::System::Net::ICredentials* arg)
		{
			return (return (::System::Net::Authorization*(*)(::System::Net::WebRequest*, ::System::Net::ICredentials*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_DIGESTCLIENT_PREAUTHENTICATE_OFFSET))(arg, arg, nullptr);
		}

		::System::String* get_AuthenticationType()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_DIGESTCLIENT_GET_AUTHENTICATIONTYPE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_DIGESTCLIENT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_DIGESTCLIENT_.CCTOR_OFFSET))(nullptr);
		}

	};
}

