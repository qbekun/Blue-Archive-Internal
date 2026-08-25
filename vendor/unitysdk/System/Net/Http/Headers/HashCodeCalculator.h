#pragma once
#include "../../../../unitysdk.h"

#define SYSTEM_NET_HTTP_HEADERS_HASHCODECALCULATOR_CALCULATE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System::Net::Http::Headers
{
	inline static constexpr unsigned int HashCodeCalculator_TypeDefinitionIndex = 36675;

	class HashCodeCalculator : public Il2CppObject
	{
	public:
		::System::Int32 Calculate(Il2CppObject* arg)
		{
			return (return (::System::Int32(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_HASHCODECALCULATOR_CALCULATE_OFFSET))(arg, nullptr);
		}

	};
}

