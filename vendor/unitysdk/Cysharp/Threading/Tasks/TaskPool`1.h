#pragma once
#include "../../../unitysdk.h"

#define CYSHARP_THREADING_TASKS_TASKPOOL`1_TRYPOP_OFFSET UNITYSDK_OFFSET(0x000000)
#define CYSHARP_THREADING_TASKS_TASKPOOL`1_TRYPUSH_OFFSET UNITYSDK_OFFSET(0x000000)
#define CYSHARP_THREADING_TASKS_TASKPOOL`1_GET_SIZE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int TaskPool`1_TypeDefinitionIndex = 35896;

	class TaskPool`1 : public Il2CppObject
	{
	public:
		::System::Int32 gate; // 0x0
		::System::Int32 size; // 0x0
		Il2CppObject* root; // 0x0

		::System::Boolean TryPop(Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TASKPOOL`1_TRYPOP_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryPush(Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TASKPOOL`1_TRYPUSH_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_Size()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TASKPOOL`1_GET_SIZE_OFFSET))(nullptr);
		}

	};
}

