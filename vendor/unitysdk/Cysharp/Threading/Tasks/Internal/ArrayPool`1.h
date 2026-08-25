#pragma once
#include "../../../../unitysdk.h"

#define CYSHARP_THREADING_TASKS_INTERNAL_ARRAYPOOL`1_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x000000)
#define CYSHARP_THREADING_TASKS_INTERNAL_ARRAYPOOL`1_.CCTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define CYSHARP_THREADING_TASKS_INTERNAL_ARRAYPOOL`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define CYSHARP_THREADING_TASKS_INTERNAL_ARRAYPOOL`1_RETURN_OFFSET UNITYSDK_OFFSET(0x000000)
#define CYSHARP_THREADING_TASKS_INTERNAL_ARRAYPOOL`1_RENT_OFFSET UNITYSDK_OFFSET(0x000000)
#define CYSHARP_THREADING_TASKS_INTERNAL_ARRAYPOOL`1_GETQUEUEINDEX_OFFSET UNITYSDK_OFFSET(0x000000)

namespace Cysharp::Threading::Tasks::Internal
{
	inline static constexpr unsigned int ArrayPool`1_TypeDefinitionIndex = 36125;

	class ArrayPool`1 : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* EmptyArray; // 0x0
		Il2CppObject* Shared; // 0x0
		::Il2CppArray<::System::Object*>* buckets; // 0x0
		::Il2CppArray<::System::Object*>* locks; // 0x0

		::System::Int32 CalculateSize(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_INTERNAL_ARRAYPOOL`1_CALCULATESIZE_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_INTERNAL_ARRAYPOOL`1_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_INTERNAL_ARRAYPOOL`1_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Return(::Il2CppArray<::System::Object*>* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_INTERNAL_ARRAYPOOL`1_RETURN_OFFSET))(arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* Rent(::System::Int32 arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_INTERNAL_ARRAYPOOL`1_RENT_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetQueueIndex(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_INTERNAL_ARRAYPOOL`1_GETQUEUEINDEX_OFFSET))(arg, nullptr);
		}

	};
}

