#pragma once
#include "../../unitysdk.h"

#define SYSTEM_NET_IWEBPROXY_GETPROXY_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_NET_IWEBPROXY_ISBYPASSED_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_NET_IWEBPROXY_GET_CREDENTIALS_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System::Net
{
	inline static constexpr unsigned int IWebProxy_TypeDefinitionIndex = 29745;

	class IWebProxy : public Il2CppObject
	{
	public:
		::System::Uri* GetProxy(::System::Uri* arg)
		{
			return (return (::System::Uri*(*)(::System::Uri*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_IWEBPROXY_GETPROXY_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsBypassed(::System::Uri* arg)
		{
			return (return (::System::Boolean(*)(::System::Uri*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_IWEBPROXY_ISBYPASSED_OFFSET))(arg, nullptr);
		}

		::System::Net::ICredentials* get_Credentials()
		{
			return (return (::System::Net::ICredentials*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_IWEBPROXY_GET_CREDENTIALS_OFFSET))(nullptr);
		}

	};
}

