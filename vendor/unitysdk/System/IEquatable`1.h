#pragma once
#include "../unitysdk.h"

#define SYSTEM_IEQUATABLE`1_EQUALS_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System
{
	inline static constexpr unsigned int IEquatable`1_TypeDefinitionIndex = 23773;

	class IEquatable`1 : public Il2CppObject
	{
	public:
		::System::Boolean Equals(Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IEQUATABLE`1_EQUALS_OFFSET))(arg, nullptr);
		}

	};
}

