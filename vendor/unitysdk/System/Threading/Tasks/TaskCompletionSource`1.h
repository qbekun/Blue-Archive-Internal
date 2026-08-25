#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_THREADING_TASKS_TASKCOMPLETIONSOURCE`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_THREADING_TASKS_TASKCOMPLETIONSOURCE`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_THREADING_TASKS_TASKCOMPLETIONSOURCE`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_THREADING_TASKS_TASKCOMPLETIONSOURCE`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_THREADING_TASKS_TASKCOMPLETIONSOURCE`1_GET_TASK_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_THREADING_TASKS_TASKCOMPLETIONSOURCE`1_SPINUNTILCOMPLETED_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_THREADING_TASKS_TASKCOMPLETIONSOURCE`1_TRYSETEXCEPTION_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_THREADING_TASKS_TASKCOMPLETIONSOURCE`1_TRYSETRESULT_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_THREADING_TASKS_TASKCOMPLETIONSOURCE`1_SETRESULT_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_THREADING_TASKS_TASKCOMPLETIONSOURCE`1_TRYSETCANCELED_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_THREADING_TASKS_TASKCOMPLETIONSOURCE`1_TRYSETCANCELED_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_THREADING_TASKS_TASKCOMPLETIONSOURCE`1_SETCANCELED_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System::Threading::Tasks
{
	inline static constexpr unsigned int TaskCompletionSource`1_TypeDefinitionIndex = 24133;

	class TaskCompletionSource`1 : public Il2CppObject
	{
	public:
		Il2CppObject* _task; // 0x0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASKCOMPLETIONSOURCE`1_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Threading::Tasks::TaskCreationOptions* arg)
		{
			((::System::Void(*)(::System::Threading::Tasks::TaskCreationOptions*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASKCOMPLETIONSOURCE`1_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASKCOMPLETIONSOURCE`1_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Object* arg, ::System::Threading::Tasks::TaskCreationOptions* arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Threading::Tasks::TaskCreationOptions*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASKCOMPLETIONSOURCE`1_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* get_Task()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASKCOMPLETIONSOURCE`1_GET_TASK_OFFSET))(nullptr);
		}

		::System::Void SpinUntilCompleted()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASKCOMPLETIONSOURCE`1_SPINUNTILCOMPLETED_OFFSET))(nullptr);
		}

		::System::Boolean TrySetException(::System::Exception* arg)
		{
			return (return (::System::Boolean(*)(::System::Exception*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASKCOMPLETIONSOURCE`1_TRYSETEXCEPTION_OFFSET))(arg, nullptr);
		}

		::System::Boolean TrySetResult(Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASKCOMPLETIONSOURCE`1_TRYSETRESULT_OFFSET))(arg, nullptr);
		}

		::System::Void SetResult(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASKCOMPLETIONSOURCE`1_SETRESULT_OFFSET))(arg, nullptr);
		}

		::System::Boolean TrySetCanceled()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASKCOMPLETIONSOURCE`1_TRYSETCANCELED_OFFSET))(nullptr);
		}

		::System::Boolean TrySetCanceled(::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Boolean(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASKCOMPLETIONSOURCE`1_TRYSETCANCELED_OFFSET))(arg, nullptr);
		}

		::System::Void SetCanceled()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASKCOMPLETIONSOURCE`1_SETCANCELED_OFFSET))(nullptr);
		}

	};
}

