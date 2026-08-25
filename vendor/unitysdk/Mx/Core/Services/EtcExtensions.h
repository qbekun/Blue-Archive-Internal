#pragma once
#include "../../../unitysdk.h"

#define MX_CORE_SERVICES_ETCEXTENSIONS_TRYGETVALUE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace MX::Core::Services
{
	inline static constexpr unsigned int EtcExtensions_TypeDefinitionIndex = 12774;

	class EtcExtensions : public Il2CppObject
	{
	public:
		::System::Boolean TryGetValue(Il2CppObject* arg, Il2CppObject&* arg2)
		{
			return ((::System::Boolean(*)(Il2CppObject*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_SERVICES_ETCEXTENSIONS_TRYGETVALUE_OFFSET))(arg, arg2, nullptr);
		}

	};
}

