#pragma once
#include "../../unitysdk.h"

#define SYSTEM_THREADING_SPARSELYPOPULATEDARRAY`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_THREADING_SPARSELYPOPULATEDARRAY`1_GET_TAIL_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_THREADING_SPARSELYPOPULATEDARRAY`1_ADD_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System::Threading
{
	inline static constexpr unsigned int SparselyPopulatedArray`1_TypeDefinitionIndex = 24067;

	class SparselyPopulatedArray`1 : public Il2CppObject
	{
	public:
		Il2CppObject* _head; // 0x0
		Il2CppObject* _tail; // 0x0

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_SPARSELYPOPULATEDARRAY`1_.CTOR_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_Tail()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_SPARSELYPOPULATEDARRAY`1_GET_TAIL_OFFSET))(nullptr);
		}

		Il2CppObject* Add(Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_SPARSELYPOPULATEDARRAY`1_ADD_OFFSET))(arg, nullptr);
		}

	};
}

