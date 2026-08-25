#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_COLLECTIONS_GENERIC_ARRAYBUILDER`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COLLECTIONS_GENERIC_ARRAYBUILDER`1_TOARRAY_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COLLECTIONS_GENERIC_ARRAYBUILDER`1_UNCHECKEDADD_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System::Collections::Generic
{
	inline static constexpr unsigned int ArrayBuilder`1_TypeDefinitionIndex = 33583;

	class ArrayBuilder`1 : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* _array; // 0x0
		::System::Int32 _count; // 0x0

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_GENERIC_ARRAYBUILDER`1_.CTOR_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* ToArray()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_GENERIC_ARRAYBUILDER`1_TOARRAY_OFFSET))(nullptr);
		}

		::System::Void UncheckedAdd(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_GENERIC_ARRAYBUILDER`1_UNCHECKEDADD_OFFSET))(arg, nullptr);
		}

	};
}

