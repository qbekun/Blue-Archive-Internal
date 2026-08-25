#pragma once
#include "../../unitysdk.h"

#define MEMORYPACK_FORMATTERS_GROUPING`2_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define MEMORYPACK_FORMATTERS_GROUPING`2_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define MEMORYPACK_FORMATTERS_GROUPING`2_GET_KEY_OFFSET UNITYSDK_OFFSET(0x000000)
#define MEMORYPACK_FORMATTERS_GROUPING`2_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x000000)

namespace MemoryPack::Formatters
{
	inline static constexpr unsigned int Grouping`2_TypeDefinitionIndex = 35511;

	class Grouping`2 : public Il2CppObject
	{
	public:
		Il2CppObject* key; // 0x0
		Il2CppObject* elements; // 0x0

		::System::Void .ctor(Il2CppObject* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_FORMATTERS_GROUPING`2_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Collections::IEnumerator* System.Collections.IEnumerable.GetEnumerator()
		{
			return (return (::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_FORMATTERS_GROUPING`2_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET))(nullptr);
		}

		Il2CppObject* get_Key()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_FORMATTERS_GROUPING`2_GET_KEY_OFFSET))(nullptr);
		}

		Il2CppObject* GetEnumerator()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_FORMATTERS_GROUPING`2_GETENUMERATOR_OFFSET))(nullptr);
		}

	};
}

