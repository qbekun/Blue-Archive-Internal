#pragma once
#include "../../unitysdk.h"

#define SYSTEM_LINQ_ORDEREDENUMERABLE`1_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_LINQ_ORDEREDENUMERABLE`1_GETENUMERABLESORTER_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_LINQ_ORDEREDENUMERABLE`1_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_LINQ_ORDEREDENUMERABLE`1_SYSTEM.LINQ.IORDEREDENUMERABLE_TELEMENT_.CREATEORDEREDENUMERABLE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_LINQ_ORDEREDENUMERABLE`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System::Linq
{
	inline static constexpr unsigned int OrderedEnumerable`1_TypeDefinitionIndex = 32967;

	class OrderedEnumerable`1 : public Il2CppObject
	{
	public:
		Il2CppObject* source; // 0x0

		Il2CppObject* GetEnumerator()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_ORDEREDENUMERABLE`1_GETENUMERATOR_OFFSET))(nullptr);
		}

		Il2CppObject* GetEnumerableSorter(Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_ORDEREDENUMERABLE`1_GETENUMERABLESORTER_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* System.Collections.IEnumerable.GetEnumerator()
		{
			return (return (::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_ORDEREDENUMERABLE`1_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET))(nullptr);
		}

		Il2CppObject* System.Linq.IOrderedEnumerable_TElement_.CreateOrderedEnumerable(Il2CppObject* arg, Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_ORDEREDENUMERABLE`1_SYSTEM.LINQ.IORDEREDENUMERABLE_TELEMENT_.CREATEORDEREDENUMERABLE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_ORDEREDENUMERABLE`1_.CTOR_OFFSET))(nullptr);
		}

	};
}

