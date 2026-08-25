#pragma once
#include "../../unitysdk.h"

#define SYSTEM_LINQ_BUFFER`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_LINQ_BUFFER`1_TOARRAY_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System::Linq
{
	inline static constexpr unsigned int Buffer`1_TypeDefinitionIndex = 32971;

	class Buffer`1 : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* items; // 0x0
		::System::Int32 count; // 0x0

		::System::Void .ctor(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_BUFFER`1_.CTOR_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* ToArray()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_BUFFER`1_TOARRAY_OFFSET))(nullptr);
		}

	};
}

