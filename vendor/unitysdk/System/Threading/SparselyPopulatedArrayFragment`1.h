#pragma once
#include "../../unitysdk.h"

#define SYSTEM_THREADING_SPARSELYPOPULATEDARRAYFRAGMENT`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_THREADING_SPARSELYPOPULATEDARRAYFRAGMENT`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_THREADING_SPARSELYPOPULATEDARRAYFRAGMENT`1_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_THREADING_SPARSELYPOPULATEDARRAYFRAGMENT`1_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_THREADING_SPARSELYPOPULATEDARRAYFRAGMENT`1_GET_PREV_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_THREADING_SPARSELYPOPULATEDARRAYFRAGMENT`1_SAFEATOMICREMOVE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System::Threading
{
	inline static constexpr unsigned int SparselyPopulatedArrayFragment`1_TypeDefinitionIndex = 24069;

	class SparselyPopulatedArrayFragment`1 : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* _elements; // 0x0
		::System::Int32 _freeCount; // 0x0
		Il2CppObject* _next; // 0x0
		Il2CppObject* _prev; // 0x0

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_SPARSELYPOPULATEDARRAYFRAGMENT`1_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Int32 arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::Int32, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_SPARSELYPOPULATEDARRAYFRAGMENT`1_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* get_Item(::System::Int32 arg)
		{
			return (return (Il2CppObject*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_SPARSELYPOPULATEDARRAYFRAGMENT`1_GET_ITEM_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_Length()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_SPARSELYPOPULATEDARRAYFRAGMENT`1_GET_LENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* get_Prev()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_SPARSELYPOPULATEDARRAYFRAGMENT`1_GET_PREV_OFFSET))(nullptr);
		}

		Il2CppObject* SafeAtomicRemove(::System::Int32 arg, Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(::System::Int32, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_SPARSELYPOPULATEDARRAYFRAGMENT`1_SAFEATOMICREMOVE_OFFSET))(arg, arg, nullptr);
		}

	};
}

