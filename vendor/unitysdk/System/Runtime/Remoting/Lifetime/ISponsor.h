#pragma once
#include "../../../../unitysdk.h"

#define SYSTEM_RUNTIME_REMOTING_LIFETIME_ISPONSOR_RENEWAL_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System::Runtime::Remoting::Lifetime
{
	inline static constexpr unsigned int ISponsor_TypeDefinitionIndex = 24466;

	class ISponsor : public Il2CppObject
	{
	public:
		::System::TimeSpan* Renewal(::System::Runtime::Remoting::Lifetime::ILease* arg)
		{
			return (return (::System::TimeSpan*(*)(::System::Runtime::Remoting::Lifetime::ILease*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_LIFETIME_ISPONSOR_RENEWAL_OFFSET))(arg, nullptr);
		}

	};
}

