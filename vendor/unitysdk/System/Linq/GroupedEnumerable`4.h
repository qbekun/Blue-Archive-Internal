#pragma once
#include "../../unitysdk.h"

#define SYSTEM_LINQ_GROUPEDENUMERABLE`4_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_LINQ_GROUPEDENUMERABLE`4_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_LINQ_GROUPEDENUMERABLE`4_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System::Linq
{
	inline static constexpr unsigned int GroupedEnumerable`4_TypeDefinitionIndex = 32964;

	class GroupedEnumerable`4 : public Il2CppObject
	{
	public:
		Il2CppObject* source; // 0x0
		Il2CppObject* keySelector; // 0x0
		Il2CppObject* elementSelector; // 0x0
		Il2CppObject* comparer; // 0x0
		Il2CppObject* resultSelector; // 0x0

		::System::Void .ctor(Il2CppObject* arg, Il2CppObject* arg, Il2CppObject* arg, Il2CppObject* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, Il2CppObject*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_GROUPEDENUMERABLE`4_.CTOR_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		Il2CppObject* GetEnumerator()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_GROUPEDENUMERABLE`4_GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* System.Collections.IEnumerable.GetEnumerator()
		{
			return (return (::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_GROUPEDENUMERABLE`4_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET))(nullptr);
		}

	};
}

