#pragma once
#include "../../unitysdk.h"

#define MEMORYPACK_INTERNAL_ENUMERABLEEXTENSIONS_TRYGETNONENUMERATEDCOUNTEX_OFFSET UNITYSDK_OFFSET(0x000000)

namespace MemoryPack::Internal
{
	inline static constexpr unsigned int EnumerableExtensions_TypeDefinitionIndex = 35444;

	class EnumerableExtensions : public Il2CppObject
	{
	public:
		::System::Boolean TryGetNonEnumeratedCountEx(Il2CppObject* arg, int32_t&* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_INTERNAL_ENUMERABLEEXTENSIONS_TRYGETNONENUMERATEDCOUNTEX_OFFSET))(arg, arg, nullptr);
		}

	};
}

