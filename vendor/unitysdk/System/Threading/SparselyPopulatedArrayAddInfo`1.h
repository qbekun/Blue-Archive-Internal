#pragma once
#include "../../unitysdk.h"

#define SYSTEM_THREADING_SPARSELYPOPULATEDARRAYADDINFO`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_THREADING_SPARSELYPOPULATEDARRAYADDINFO`1_GET_SOURCE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_THREADING_SPARSELYPOPULATEDARRAYADDINFO`1_GET_INDEX_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System::Threading
{
	inline static constexpr unsigned int SparselyPopulatedArrayAddInfo`1_TypeDefinitionIndex = 24068;

	class SparselyPopulatedArrayAddInfo`1 : public Il2CppObject
	{
	public:
		Il2CppObject* _source; // 0x0
		::System::Int32 _index; // 0x0

		::System::Void .ctor(Il2CppObject* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_SPARSELYPOPULATEDARRAYADDINFO`1_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* get_Source()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_SPARSELYPOPULATEDARRAYADDINFO`1_GET_SOURCE_OFFSET))(nullptr);
		}

		::System::Int32 get_Index()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_SPARSELYPOPULATEDARRAYADDINFO`1_GET_INDEX_OFFSET))(nullptr);
		}

	};
}

