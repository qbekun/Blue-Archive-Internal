#pragma once
#include "../../unitysdk.h"

#define SYSTEM_LINQ_LOOKUP`2_CREATE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_LINQ_LOOKUP`2_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_LINQ_LOOKUP`2_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_LINQ_LOOKUP`2_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_LINQ_LOOKUP`2_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_LINQ_LOOKUP`2_APPLYRESULTSELECTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_LINQ_LOOKUP`2_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_LINQ_LOOKUP`2_INTERNALGETHASHCODE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_LINQ_LOOKUP`2_GETGROUPING_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_LINQ_LOOKUP`2_RESIZE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System::Linq
{
	inline static constexpr unsigned int Lookup`2_TypeDefinitionIndex = 32961;

	class Lookup`2 : public Il2CppObject
	{
	public:
		Il2CppObject* comparer; // 0x0
		::Il2CppArray<::System::Object*>* groupings; // 0x0
		Il2CppObject* lastGrouping; // 0x0
		::System::Int32 count; // 0x0

		Il2CppObject* Create(Il2CppObject* arg, Il2CppObject* arg, Il2CppObject* arg, Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, Il2CppObject*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_LOOKUP`2_CREATE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_LOOKUP`2_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_Count()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_LOOKUP`2_GET_COUNT_OFFSET))(nullptr);
		}

		Il2CppObject* get_Item(Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_LOOKUP`2_GET_ITEM_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetEnumerator()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_LOOKUP`2_GETENUMERATOR_OFFSET))(nullptr);
		}

		Il2CppObject* ApplyResultSelector(Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_LOOKUP`2_APPLYRESULTSELECTOR_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* System.Collections.IEnumerable.GetEnumerator()
		{
			return (return (::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_LOOKUP`2_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Int32 InternalGetHashCode(Il2CppObject* arg)
		{
			return (return (::System::Int32(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_LOOKUP`2_INTERNALGETHASHCODE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetGrouping(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_LOOKUP`2_GETGROUPING_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Resize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_LOOKUP`2_RESIZE_OFFSET))(nullptr);
		}

	};
}

