#pragma once
#include "../../../../unitysdk.h"

#define SYSTEM_RUNTIME_REMOTING_LIFETIME_ILEASE_GET_CURRENTLEASETIME_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_RUNTIME_REMOTING_LIFETIME_ILEASE_GET_CURRENTSTATE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_RUNTIME_REMOTING_LIFETIME_ILEASE_GET_RENEWONCALLTIME_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_RUNTIME_REMOTING_LIFETIME_ILEASE_RENEW_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System::Runtime::Remoting::Lifetime
{
	inline static constexpr unsigned int ILease_TypeDefinitionIndex = 24465;

	class ILease : public Il2CppObject
	{
	public:
		::System::TimeSpan* get_CurrentLeaseTime()
		{
			return (return (::System::TimeSpan*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_LIFETIME_ILEASE_GET_CURRENTLEASETIME_OFFSET))(nullptr);
		}

		::System::Runtime::Remoting::Lifetime::LeaseState* get_CurrentState()
		{
			return (return (::System::Runtime::Remoting::Lifetime::LeaseState*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_LIFETIME_ILEASE_GET_CURRENTSTATE_OFFSET))(nullptr);
		}

		::System::TimeSpan* get_RenewOnCallTime()
		{
			return (return (::System::TimeSpan*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_LIFETIME_ILEASE_GET_RENEWONCALLTIME_OFFSET))(nullptr);
		}

		::System::TimeSpan* Renew(::System::TimeSpan* arg)
		{
			return (return (::System::TimeSpan*(*)(::System::TimeSpan*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_LIFETIME_ILEASE_RENEW_OFFSET))(arg, nullptr);
		}

	};
}

