#pragma once
#include "../../../unitysdk.h"

namespace Cysharp::Threading::Tasks { class ExceptionHolder; }
namespace Cysharp::Threading::Tasks { class UniTaskStatus; }

#define CYSHARP_THREADING_TASKS_UNITASKCOMPLETIONSOURCE`1_ONCOMPLETED_OFFSET UNITYSDK_OFFSET(0x000000)
#define CYSHARP_THREADING_TASKS_UNITASKCOMPLETIONSOURCE`1_GETRESULT_OFFSET UNITYSDK_OFFSET(0x000000)
#define CYSHARP_THREADING_TASKS_UNITASKCOMPLETIONSOURCE`1_TRYSETEXCEPTION_OFFSET UNITYSDK_OFFSET(0x000000)
#define CYSHARP_THREADING_TASKS_UNITASKCOMPLETIONSOURCE`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define CYSHARP_THREADING_TASKS_UNITASKCOMPLETIONSOURCE`1_MARKHANDLED_OFFSET UNITYSDK_OFFSET(0x000000)
#define CYSHARP_THREADING_TASKS_UNITASKCOMPLETIONSOURCE`1_GET_TASK_OFFSET UNITYSDK_OFFSET(0x000000)
#define CYSHARP_THREADING_TASKS_UNITASKCOMPLETIONSOURCE`1_UNSAFEGETSTATUS_OFFSET UNITYSDK_OFFSET(0x000000)
#define CYSHARP_THREADING_TASKS_UNITASKCOMPLETIONSOURCE`1_CYSHARP.THREADING.TASKS.IUNITASKSOURCE.GETRESULT_OFFSET UNITYSDK_OFFSET(0x000000)
#define CYSHARP_THREADING_TASKS_UNITASKCOMPLETIONSOURCE`1_TRYSETRESULT_OFFSET UNITYSDK_OFFSET(0x000000)
#define CYSHARP_THREADING_TASKS_UNITASKCOMPLETIONSOURCE`1_TRYSIGNALCOMPLETION_OFFSET UNITYSDK_OFFSET(0x000000)
#define CYSHARP_THREADING_TASKS_UNITASKCOMPLETIONSOURCE`1_GETSTATUS_OFFSET UNITYSDK_OFFSET(0x000000)
#define CYSHARP_THREADING_TASKS_UNITASKCOMPLETIONSOURCE`1_TRYSETCANCELED_OFFSET UNITYSDK_OFFSET(0x000000)

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int UniTaskCompletionSource`1_TypeDefinitionIndex = 35950;

	class UniTaskCompletionSource`1 : public Il2CppObject
	{
	public:
		::System::Threading::CancellationToken* cancellationToken; // 0x0
		Il2CppObject* result; // 0x0
		::Cysharp::Threading::Tasks::ExceptionHolder* exception; // 0x0
		::System::Object* gate; // 0x0
		Il2CppObject* singleContinuation; // 0x0
		::System::Object* singleState; // 0x0
		Il2CppObject* secondaryContinuationList; // 0x0
		::System::Int32 intStatus; // 0x0
		::System::Boolean handled; // 0x0

		::System::Void OnCompleted(Il2CppObject* arg, ::System::Object* arg, ::System::Int16 arg)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Object*, ::System::Int16, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASKCOMPLETIONSOURCE`1_ONCOMPLETED_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* GetResult(::System::Int16 arg)
		{
			return (return (Il2CppObject*(*)(::System::Int16, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASKCOMPLETIONSOURCE`1_GETRESULT_OFFSET))(arg, nullptr);
		}

		::System::Boolean TrySetException(::System::Exception* arg)
		{
			return (return (::System::Boolean(*)(::System::Exception*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASKCOMPLETIONSOURCE`1_TRYSETEXCEPTION_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASKCOMPLETIONSOURCE`1_.CTOR_OFFSET))(nullptr);
		}

		::System::Void MarkHandled()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASKCOMPLETIONSOURCE`1_MARKHANDLED_OFFSET))(nullptr);
		}

		Il2CppObject* get_Task()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASKCOMPLETIONSOURCE`1_GET_TASK_OFFSET))(nullptr);
		}

		::Cysharp::Threading::Tasks::UniTaskStatus* UnsafeGetStatus()
		{
			return (return (::Cysharp::Threading::Tasks::UniTaskStatus*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASKCOMPLETIONSOURCE`1_UNSAFEGETSTATUS_OFFSET))(nullptr);
		}

		::System::Void Cysharp.Threading.Tasks.IUniTaskSource.GetResult(::System::Int16 arg)
		{
			((::System::Void(*)(::System::Int16, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASKCOMPLETIONSOURCE`1_CYSHARP.THREADING.TASKS.IUNITASKSOURCE.GETRESULT_OFFSET))(arg, nullptr);
		}

		::System::Boolean TrySetResult(Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASKCOMPLETIONSOURCE`1_TRYSETRESULT_OFFSET))(arg, nullptr);
		}

		::System::Boolean TrySignalCompletion(::Cysharp::Threading::Tasks::UniTaskStatus* arg)
		{
			return (return (::System::Boolean(*)(::Cysharp::Threading::Tasks::UniTaskStatus*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASKCOMPLETIONSOURCE`1_TRYSIGNALCOMPLETION_OFFSET))(arg, nullptr);
		}

		::Cysharp::Threading::Tasks::UniTaskStatus* GetStatus(::System::Int16 arg)
		{
			return (return (::Cysharp::Threading::Tasks::UniTaskStatus*(*)(::System::Int16, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASKCOMPLETIONSOURCE`1_GETSTATUS_OFFSET))(arg, nullptr);
		}

		::System::Boolean TrySetCanceled(::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Boolean(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASKCOMPLETIONSOURCE`1_TRYSETCANCELED_OFFSET))(arg, nullptr);
		}

	};
}

