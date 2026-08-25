#pragma once
#include "../../unitysdk.h"

#define CYSHARP_TEXT_READONLYLISTADAPTOR`1_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x000000)
#define CYSHARP_TEXT_READONLYLISTADAPTOR`1_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define CYSHARP_TEXT_READONLYLISTADAPTOR`1_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define CYSHARP_TEXT_READONLYLISTADAPTOR`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define CYSHARP_TEXT_READONLYLISTADAPTOR`1_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x000000)

namespace Cysharp::Text
{
	inline static constexpr unsigned int ReadOnlyListAdaptor`1_TypeDefinitionIndex = 34714;

	class ReadOnlyListAdaptor`1 : public Il2CppObject
	{
	public:
		Il2CppObject* _list; // 0x0

		Il2CppObject* get_Item(::System::Int32 arg)
		{
			return (return (Il2CppObject*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_TEXT_READONLYLISTADAPTOR`1_GET_ITEM_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* System.Collections.IEnumerable.GetEnumerator()
		{
			return (return (::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_TEXT_READONLYLISTADAPTOR`1_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET))(nullptr);
		}

		Il2CppObject* GetEnumerator()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_TEXT_READONLYLISTADAPTOR`1_GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_TEXT_READONLYLISTADAPTOR`1_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_Count()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_TEXT_READONLYLISTADAPTOR`1_GET_COUNT_OFFSET))(nullptr);
		}

	};
}

