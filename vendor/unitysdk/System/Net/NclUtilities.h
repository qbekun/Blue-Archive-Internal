#pragma once
#include "../../unitysdk.h"

#define SYSTEM_NET_NCLUTILITIES_ISFATAL_OFFSET UNITYSDK_OFFSET(0x9BA6B70)
#define SYSTEM_NET_NCLUTILITIES_ISADDRESSLOCAL_OFFSET UNITYSDK_OFFSET(0x9BA6C20)
#define SYSTEM_NET_NCLUTILITIES_GETLOCALHOST_OFFSET UNITYSDK_OFFSET(0x9BA7230)
#define SYSTEM_NET_NCLUTILITIES_GET_LOCALADDRESSES_OFFSET UNITYSDK_OFFSET(0x9BA6CA0)
#define SYSTEM_NET_NCLUTILITIES_GET_LOCALADDRESSESLOCK_OFFSET UNITYSDK_OFFSET(0x9BA7250)

namespace System::Net
{
	inline static constexpr unsigned int NclUtilities_TypeDefinitionIndex = 29684;

	class NclUtilities : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* _LocalAddresses; // 0x0
		::System::Object* _LocalAddressesLock; // 0x8
		::System::String* _LocalDomainName; // 0x10

		::System::Boolean IsFatal(::System::Exception* arg)
		{
			return (return (::System::Boolean(*)(::System::Exception*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NCLUTILITIES_ISFATAL_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsAddressLocal(::System::Net::IPAddress* arg)
		{
			return (return (::System::Boolean(*)(::System::Net::IPAddress*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NCLUTILITIES_ISADDRESSLOCAL_OFFSET))(arg, nullptr);
		}

		::System::Net::IPHostEntry* GetLocalHost()
		{
			return (return (::System::Net::IPHostEntry*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NCLUTILITIES_GETLOCALHOST_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_LocalAddresses()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NCLUTILITIES_GET_LOCALADDRESSES_OFFSET))(nullptr);
		}

		::System::Object* get_LocalAddressesLock()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NCLUTILITIES_GET_LOCALADDRESSESLOCK_OFFSET))(nullptr);
		}

	};
}

