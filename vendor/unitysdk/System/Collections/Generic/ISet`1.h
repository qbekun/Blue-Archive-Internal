#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_COLLECTIONS_GENERIC_ISET`1_ADD_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System::Collections::Generic
{
	inline static constexpr unsigned int ISet`1_TypeDefinitionIndex = 29623;

	class ISet`1 : public Il2CppObject
	{
	public:
		::System::Boolean Add(Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_GENERIC_ISET`1_ADD_OFFSET))(arg, nullptr);
		}

	};
}

