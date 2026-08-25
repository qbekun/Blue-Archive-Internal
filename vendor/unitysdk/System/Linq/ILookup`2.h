#pragma once
#include "../../unitysdk.h"

#define SYSTEM_LINQ_ILOOKUP`2_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_LINQ_ILOOKUP`2_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System::Linq
{
	inline static constexpr unsigned int ILookup`2_TypeDefinitionIndex = 32956;

	class ILookup`2 : public Il2CppObject
	{
	public:
		::System::Int32 get_Count()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_ILOOKUP`2_GET_COUNT_OFFSET))(nullptr);
		}

		Il2CppObject* get_Item(Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_ILOOKUP`2_GET_ITEM_OFFSET))(arg, nullptr);
		}

	};
}

