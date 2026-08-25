#pragma once
#include "../../unitysdk.h"

#define SYSTEM_LINQ_ORDEREDENUMERABLE`2_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_LINQ_ORDEREDENUMERABLE`2_GETENUMERABLESORTER_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System::Linq
{
	inline static constexpr unsigned int OrderedEnumerable`2_TypeDefinitionIndex = 32968;

	class OrderedEnumerable`2 : public PositiveButtonEffect
	{
	public:
		Il2CppObject* parent; // 0x0
		Il2CppObject* keySelector; // 0x0
		Il2CppObject* comparer; // 0x0
		::System::Boolean descending; // 0x0

		::System::Void .ctor(Il2CppObject* arg, Il2CppObject* arg, Il2CppObject* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_ORDEREDENUMERABLE`2_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		Il2CppObject* GetEnumerableSorter(Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_ORDEREDENUMERABLE`2_GETENUMERABLESORTER_OFFSET))(arg, nullptr);
		}

	};
}

