#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_COLLECTIONS_GENERIC_IREADONLYLIST`1_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System::Collections::Generic
{
	inline static constexpr unsigned int IReadOnlyList`1_TypeDefinitionIndex = 25145;

	class IReadOnlyList`1 : public Il2CppObject
	{
	public:
		Il2CppObject* get_Item(::System::Int32 arg)
		{
			return (return (Il2CppObject*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_GENERIC_IREADONLYLIST`1_GET_ITEM_OFFSET))(arg, nullptr);
		}

	};
}

