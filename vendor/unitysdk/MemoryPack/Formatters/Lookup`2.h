#pragma once
#include "../../unitysdk.h"

#define MEMORYPACK_FORMATTERS_LOOKUP`2_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define MEMORYPACK_FORMATTERS_LOOKUP`2_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x000000)
#define MEMORYPACK_FORMATTERS_LOOKUP`2_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define MEMORYPACK_FORMATTERS_LOOKUP`2_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define MEMORYPACK_FORMATTERS_LOOKUP`2_CONTAINS_OFFSET UNITYSDK_OFFSET(0x000000)
#define MEMORYPACK_FORMATTERS_LOOKUP`2_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x000000)

namespace MemoryPack::Formatters
{
	inline static constexpr unsigned int Lookup`2_TypeDefinitionIndex = 35512;

	class Lookup`2 : public Il2CppObject
	{
	public:
		Il2CppObject* groupings; // 0x0

		Il2CppObject* GetEnumerator()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_FORMATTERS_LOOKUP`2_GETENUMERATOR_OFFSET))(nullptr);
		}

		Il2CppObject* get_Item(Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_FORMATTERS_LOOKUP`2_GET_ITEM_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* System.Collections.IEnumerable.GetEnumerator()
		{
			return (return (::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_FORMATTERS_LOOKUP`2_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_FORMATTERS_LOOKUP`2_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean Contains(Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_FORMATTERS_LOOKUP`2_CONTAINS_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_Count()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_FORMATTERS_LOOKUP`2_GET_COUNT_OFFSET))(nullptr);
		}

	};
}

