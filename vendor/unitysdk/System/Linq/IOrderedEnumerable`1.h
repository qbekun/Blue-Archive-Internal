#pragma once
#include "../../unitysdk.h"

#define SYSTEM_LINQ_IORDEREDENUMERABLE`1_CREATEORDEREDENUMERABLE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System::Linq
{
	inline static constexpr unsigned int IOrderedEnumerable`1_TypeDefinitionIndex = 32954;

	class IOrderedEnumerable`1 : public Il2CppObject
	{
	public:
		Il2CppObject* CreateOrderedEnumerable(Il2CppObject* arg, Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_IORDEREDENUMERABLE`1_CREATEORDEREDENUMERABLE_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

