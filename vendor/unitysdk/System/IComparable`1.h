#pragma once
#include "../unitysdk.h"

#define SYSTEM_ICOMPARABLE`1_COMPARETO_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System
{
	inline static constexpr unsigned int IComparable`1_TypeDefinitionIndex = 23769;

	class IComparable`1 : public Il2CppObject
	{
	public:
		::System::Int32 CompareTo(Il2CppObject* arg)
		{
			return (return (::System::Int32(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_ICOMPARABLE`1_COMPARETO_OFFSET))(arg, nullptr);
		}

	};
}

