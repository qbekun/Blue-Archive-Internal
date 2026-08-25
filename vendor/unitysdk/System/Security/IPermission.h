#pragma once
#include "../../unitysdk.h"

#define SYSTEM_SECURITY_IPERMISSION_DEMAND_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_SECURITY_IPERMISSION_ISSUBSETOF_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System::Security
{
	inline static constexpr unsigned int IPermission_TypeDefinitionIndex = 24271;

	class IPermission : public Il2CppObject
	{
	public:
		::System::Void Demand()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_IPERMISSION_DEMAND_OFFSET))(nullptr);
		}

		::System::Boolean IsSubsetOf(::System::Security::IPermission* arg)
		{
			return (return (::System::Boolean(*)(::System::Security::IPermission*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_IPERMISSION_ISSUBSETOF_OFFSET))(arg, nullptr);
		}

	};
}

