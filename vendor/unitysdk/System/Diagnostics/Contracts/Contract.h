#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_DIAGNOSTICS_CONTRACTS_CONTRACT_FORALL_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System::Diagnostics::Contracts
{
	inline static constexpr unsigned int Contract_TypeDefinitionIndex = 25034;

	class Contract : public Il2CppObject
	{
	public:
		::System::Boolean ForAll(Il2CppObject* arg, Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_CONTRACTS_CONTRACT_FORALL_OFFSET))(arg, arg, nullptr);
		}

	};
}

