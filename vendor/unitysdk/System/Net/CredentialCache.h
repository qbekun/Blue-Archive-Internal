#pragma once
#include "../../unitysdk.h"

#define SYSTEM_NET_CREDENTIALCACHE_GET_DEFAULTCREDENTIALS_OFFSET UNITYSDK_OFFSET(0x9BA6800)
#define SYSTEM_NET_CREDENTIALCACHE_GET_DEFAULTNETWORKCREDENTIALS_OFFSET UNITYSDK_OFFSET(0x9BA6850)

namespace System::Net
{
	inline static constexpr unsigned int CredentialCache_TypeDefinitionIndex = 29673;

	class CredentialCache : public Il2CppObject
	{
	public:
		::System::Net::ICredentials* get_DefaultCredentials()
		{
			return (return (::System::Net::ICredentials*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CREDENTIALCACHE_GET_DEFAULTCREDENTIALS_OFFSET))(nullptr);
		}

		::System::Net::NetworkCredential* get_DefaultNetworkCredentials()
		{
			return (return (::System::Net::NetworkCredential*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CREDENTIALCACHE_GET_DEFAULTNETWORKCREDENTIALS_OFFSET))(nullptr);
		}

	};
}

