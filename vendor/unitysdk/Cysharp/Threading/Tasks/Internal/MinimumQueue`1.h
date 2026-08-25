#pragma once
#include "../../../../unitysdk.h"

#define CYSHARP_THREADING_TASKS_INTERNAL_MINIMUMQUEUE`1_SETCAPACITY_OFFSET UNITYSDK_OFFSET(0x000000)
#define CYSHARP_THREADING_TASKS_INTERNAL_MINIMUMQUEUE`1_DEQUEUE_OFFSET UNITYSDK_OFFSET(0x000000)
#define CYSHARP_THREADING_TASKS_INTERNAL_MINIMUMQUEUE`1_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x000000)
#define CYSHARP_THREADING_TASKS_INTERNAL_MINIMUMQUEUE`1_THROWFOREMPTYQUEUE_OFFSET UNITYSDK_OFFSET(0x000000)
#define CYSHARP_THREADING_TASKS_INTERNAL_MINIMUMQUEUE`1_ENQUEUE_OFFSET UNITYSDK_OFFSET(0x000000)
#define CYSHARP_THREADING_TASKS_INTERNAL_MINIMUMQUEUE`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define CYSHARP_THREADING_TASKS_INTERNAL_MINIMUMQUEUE`1_GROW_OFFSET UNITYSDK_OFFSET(0x000000)
#define CYSHARP_THREADING_TASKS_INTERNAL_MINIMUMQUEUE`1_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x000000)

namespace Cysharp::Threading::Tasks::Internal
{
	inline static constexpr unsigned int MinimumQueue`1_TypeDefinitionIndex = 36130;

	class MinimumQueue`1 : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* array; // 0x0
		::System::Int32 head; // 0x0
		::System::Int32 tail; // 0x0
		::System::Int32 size; // 0x0

		::System::Void SetCapacity(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_INTERNAL_MINIMUMQUEUE`1_SETCAPACITY_OFFSET))(arg, nullptr);
		}

		Il2CppObject* Dequeue()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_INTERNAL_MINIMUMQUEUE`1_DEQUEUE_OFFSET))(nullptr);
		}

		::System::Int32 get_Count()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_INTERNAL_MINIMUMQUEUE`1_GET_COUNT_OFFSET))(nullptr);
		}

		::System::Void ThrowForEmptyQueue()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_INTERNAL_MINIMUMQUEUE`1_THROWFOREMPTYQUEUE_OFFSET))(nullptr);
		}

		::System::Void Enqueue(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_INTERNAL_MINIMUMQUEUE`1_ENQUEUE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_INTERNAL_MINIMUMQUEUE`1_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void Grow()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_INTERNAL_MINIMUMQUEUE`1_GROW_OFFSET))(nullptr);
		}

		::System::Void MoveNext(int32_t&* arg)
		{
			((::System::Void(*)(int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_INTERNAL_MINIMUMQUEUE`1_MOVENEXT_OFFSET))(arg, nullptr);
		}

	};
}

