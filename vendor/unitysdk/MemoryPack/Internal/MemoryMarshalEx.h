#pragma once
#include "../../unitysdk.h"

#define MEMORYPACK_INTERNAL_MEMORYMARSHALEX_GETARRAYDATAREFERENCE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MEMORYPACK_INTERNAL_MEMORYMARSHALEX_ALLOCATEUNINITIALIZEDARRAY_OFFSET UNITYSDK_OFFSET(0x000000)

namespace MemoryPack::Internal
{
	inline static constexpr unsigned int MemoryMarshalEx_TypeDefinitionIndex = 35447;

	class MemoryMarshalEx : public Il2CppObject
	{
	public:
		Il2CppObject&* GetArrayDataReference(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (Il2CppObject&*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_INTERNAL_MEMORYMARSHALEX_GETARRAYDATAREFERENCE_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* AllocateUninitializedArray(::System::Int32 arg, ::System::Boolean arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_INTERNAL_MEMORYMARSHALEX_ALLOCATEUNINITIALIZEDARRAY_OFFSET))(arg, arg, nullptr);
		}

	};
}

