#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_COLLECTIONS_GENERIC_IEQUALITYCOMPARER`1_EQUALS_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COLLECTIONS_GENERIC_IEQUALITYCOMPARER`1_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System::Collections::Generic
{
	inline static constexpr unsigned int IEqualityComparer`1_TypeDefinitionIndex = 25141;

	class IEqualityComparer`1 : public Il2CppObject
	{
	public:
		::System::Boolean Equals(Il2CppObject* arg, Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_GENERIC_IEQUALITYCOMPARER`1_EQUALS_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 GetHashCode(Il2CppObject* arg)
		{
			return (return (::System::Int32(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_GENERIC_IEQUALITYCOMPARER`1_GETHASHCODE_OFFSET))(arg, nullptr);
		}

	};
}

