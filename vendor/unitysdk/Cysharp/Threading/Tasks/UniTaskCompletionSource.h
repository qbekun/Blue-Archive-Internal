#pragma once
#include "../../../unitysdk.h"

namespace Cysharp::Threading::Tasks { class ExceptionHolder; }
namespace Cysharp::Threading::Tasks { class UniTask; }
namespace Cysharp::Threading::Tasks { class UniTaskStatus; }

#define CYSHARP_THREADING_TASKS_UNITASKCOMPLETIONSOURCE_TRYSETRESULT_OFFSET UNITYSDK_OFFSET(0x9DCFAE0)
#define CYSHARP_THREADING_TASKS_UNITASKCOMPLETIONSOURCE_GET_TASK_OFFSET UNITYSDK_OFFSET(0x9DDF960)
#define CYSHARP_THREADING_TASKS_UNITASKCOMPLETIONSOURCE_TRYSIGNALCOMPLETION_OFFSET UNITYSDK_OFFSET(0x9DDF4A0)
#define CYSHARP_THREADING_TASKS_UNITASKCOMPLETIONSOURCE_GETSTATUS_OFFSET UNITYSDK_OFFSET(0x9DDF990)
#define CYSHARP_THREADING_TASKS_UNITASKCOMPLETIONSOURCE_GETRESULT_OFFSET UNITYSDK_OFFSET(0x9DDF9A0)
#define CYSHARP_THREADING_TASKS_UNITASKCOMPLETIONSOURCE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9DDFAF0)
#define CYSHARP_THREADING_TASKS_UNITASKCOMPLETIONSOURCE_UNSAFEGETSTATUS_OFFSET UNITYSDK_OFFSET(0x9DDFB00)
#define CYSHARP_THREADING_TASKS_UNITASKCOMPLETIONSOURCE_ONCOMPLETED_OFFSET UNITYSDK_OFFSET(0x9DDFB10)
#define CYSHARP_THREADING_TASKS_UNITASKCOMPLETIONSOURCE_MARKHANDLED_OFFSET UNITYSDK_OFFSET(0x9DDFAE0)

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int UniTaskCompletionSource_TypeDefinitionIndex = 35949;

	class UniTaskCompletionSource : public Il2CppObject
	{
	public:
		::System::Threading::CancellationToken* cancellationToken; // 0x10
		::Cysharp::Threading::Tasks::ExceptionHolder* exception; // 0x18
		::System::Object* gate; // 0x20
		Il2CppObject* singleContinuation; // 0x28
		::System::Object* singleState; // 0x30
		Il2CppObject* secondaryContinuationList; // 0x38
		::System::Int32 intStatus; // 0x40
		::System::Boolean handled; // 0x44

		::System::Boolean TrySetResult()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASKCOMPLETIONSOURCE_TRYSETRESULT_OFFSET))(nullptr);
		}

		::Cysharp::Threading::Tasks::UniTask* get_Task()
		{
			return (return (::Cysharp::Threading::Tasks::UniTask*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASKCOMPLETIONSOURCE_GET_TASK_OFFSET))(nullptr);
		}

		::System::Boolean TrySignalCompletion(::Cysharp::Threading::Tasks::UniTaskStatus* arg)
		{
			return (return (::System::Boolean(*)(::Cysharp::Threading::Tasks::UniTaskStatus*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASKCOMPLETIONSOURCE_TRYSIGNALCOMPLETION_OFFSET))(arg, nullptr);
		}

		::Cysharp::Threading::Tasks::UniTaskStatus* GetStatus(::System::Int16 arg)
		{
			return (return (::Cysharp::Threading::Tasks::UniTaskStatus*(*)(::System::Int16, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASKCOMPLETIONSOURCE_GETSTATUS_OFFSET))(arg, nullptr);
		}

		::System::Void GetResult(::System::Int16 arg)
		{
			((::System::Void(*)(::System::Int16, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASKCOMPLETIONSOURCE_GETRESULT_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASKCOMPLETIONSOURCE_.CTOR_OFFSET))(nullptr);
		}

		::Cysharp::Threading::Tasks::UniTaskStatus* UnsafeGetStatus()
		{
			return (return (::Cysharp::Threading::Tasks::UniTaskStatus*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASKCOMPLETIONSOURCE_UNSAFEGETSTATUS_OFFSET))(nullptr);
		}

		::System::Void OnCompleted(Il2CppObject* arg, ::System::Object* arg, ::System::Int16 arg)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Object*, ::System::Int16, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASKCOMPLETIONSOURCE_ONCOMPLETED_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void MarkHandled()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASKCOMPLETIONSOURCE_MARKHANDLED_OFFSET))(nullptr);
		}

	};
}

