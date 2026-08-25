#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_COLLECTIONS_GENERIC_ICOMPARER`1_COMPARE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System::Collections::Generic
{
	inline static constexpr unsigned int IComparer`1_TypeDefinitionIndex = 25134;

	class IComparer`1 : public Il2CppObject
	{
	public:
		::System::Int32 Compare(Il2CppObject* arg, Il2CppObject* arg)
		{
			return (return (::System::Int32(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_GENERIC_ICOMPARER`1_COMPARE_OFFSET))(arg, arg, nullptr);
		}

	};
}

