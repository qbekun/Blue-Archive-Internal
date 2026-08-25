#pragma once
#include "../../../unitysdk.h"

namespace Cysharp::Threading::Tasks { class AutoResetUniTaskCompletionSource; }
namespace Cysharp::Threading::Tasks { class UniTaskStatus; }
namespace Cysharp::Threading::Tasks { class UniTask; }
namespace Cysharp::Threading::Tasks { class AutoResetUniTaskCompletionSource&; }

#define CYSHARP_THREADING_TASKS_AUTORESETUNITASKCOMPLETIONSOURCE_CREATE_OFFSET UNITYSDK_OFFSET(0x9DD02E0)
#define CYSHARP_THREADING_TASKS_AUTORESETUNITASKCOMPLETIONSOURCE_ONCOMPLETED_OFFSET UNITYSDK_OFFSET(0x9DDEEA0)
#define CYSHARP_THREADING_TASKS_AUTORESETUNITASKCOMPLETIONSOURCE_GETSTATUS_OFFSET UNITYSDK_OFFSET(0x9DDEF00)
#define CYSHARP_THREADING_TASKS_AUTORESETUNITASKCOMPLETIONSOURCE_TRYRETURN_OFFSET UNITYSDK_OFFSET(0x9DDEF50)
#define CYSHARP_THREADING_TASKS_AUTORESETUNITASKCOMPLETIONSOURCE_GETRESULT_OFFSET UNITYSDK_OFFSET(0x9DDEFE0)
#define CYSHARP_THREADING_TASKS_AUTORESETUNITASKCOMPLETIONSOURCE_GET_TASK_OFFSET UNITYSDK_OFFSET(0x9DD0440)
#define CYSHARP_THREADING_TASKS_AUTORESETUNITASKCOMPLETIONSOURCE_CREATEFROMCANCELED_OFFSET UNITYSDK_OFFSET(0x9DD1030)
#define CYSHARP_THREADING_TASKS_AUTORESETUNITASKCOMPLETIONSOURCE_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9DDF1C0)
#define CYSHARP_THREADING_TASKS_AUTORESETUNITASKCOMPLETIONSOURCE_TRYSETCANCELED_OFFSET UNITYSDK_OFFSET(0x9DDF150)
#define CYSHARP_THREADING_TASKS_AUTORESETUNITASKCOMPLETIONSOURCE_GET_NEXTNODE_OFFSET UNITYSDK_OFFSET(0x9DDF2D0)
#define CYSHARP_THREADING_TASKS_AUTORESETUNITASKCOMPLETIONSOURCE_UNSAFEGETSTATUS_OFFSET UNITYSDK_OFFSET(0x9DDF2E0)
#define CYSHARP_THREADING_TASKS_AUTORESETUNITASKCOMPLETIONSOURCE_TRYSETRESULT_OFFSET UNITYSDK_OFFSET(0x9DD1E10)
#define CYSHARP_THREADING_TASKS_AUTORESETUNITASKCOMPLETIONSOURCE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9DDEE90)

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int AutoResetUniTaskCompletionSource_TypeDefinitionIndex = 35948;

	class AutoResetUniTaskCompletionSource : public Il2CppObject
	{
	public:
		Il2CppObject* pool; // 0x0
		::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource* nextNode; // 0x10
		Il2CppObject* core; // 0x18
		::System::Int16 version; // 0x40

		::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource* Create()
		{
			return (return (::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_AUTORESETUNITASKCOMPLETIONSOURCE_CREATE_OFFSET))(nullptr);
		}

		::System::Void OnCompleted(Il2CppObject* arg, ::System::Object* arg, ::System::Int16 arg)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Object*, ::System::Int16, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_AUTORESETUNITASKCOMPLETIONSOURCE_ONCOMPLETED_OFFSET))(arg, arg, arg, nullptr);
		}

		::Cysharp::Threading::Tasks::UniTaskStatus* GetStatus(::System::Int16 arg)
		{
			return (return (::Cysharp::Threading::Tasks::UniTaskStatus*(*)(::System::Int16, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_AUTORESETUNITASKCOMPLETIONSOURCE_GETSTATUS_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryReturn()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_AUTORESETUNITASKCOMPLETIONSOURCE_TRYRETURN_OFFSET))(nullptr);
		}

		::System::Void GetResult(::System::Int16 arg)
		{
			((::System::Void(*)(::System::Int16, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_AUTORESETUNITASKCOMPLETIONSOURCE_GETRESULT_OFFSET))(arg, nullptr);
		}

		::Cysharp::Threading::Tasks::UniTask* get_Task()
		{
			return (return (::Cysharp::Threading::Tasks::UniTask*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_AUTORESETUNITASKCOMPLETIONSOURCE_GET_TASK_OFFSET))(nullptr);
		}

		::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource* CreateFromCanceled(::System::Threading::CancellationToken* arg, int16_t&* arg)
		{
			return (return (::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource*(*)(::System::Threading::CancellationToken*, int16_t&*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_AUTORESETUNITASKCOMPLETIONSOURCE_CREATEFROMCANCELED_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_AUTORESETUNITASKCOMPLETIONSOURCE_.CCTOR_OFFSET))(nullptr);
		}

		::System::Boolean TrySetCanceled(::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Boolean(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_AUTORESETUNITASKCOMPLETIONSOURCE_TRYSETCANCELED_OFFSET))(arg, nullptr);
		}

		::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource&* get_NextNode()
		{
			return (return (::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource&*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_AUTORESETUNITASKCOMPLETIONSOURCE_GET_NEXTNODE_OFFSET))(nullptr);
		}

		::Cysharp::Threading::Tasks::UniTaskStatus* UnsafeGetStatus()
		{
			return (return (::Cysharp::Threading::Tasks::UniTaskStatus*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_AUTORESETUNITASKCOMPLETIONSOURCE_UNSAFEGETSTATUS_OFFSET))(nullptr);
		}

		::System::Boolean TrySetResult()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_AUTORESETUNITASKCOMPLETIONSOURCE_TRYSETRESULT_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_AUTORESETUNITASKCOMPLETIONSOURCE_.CTOR_OFFSET))(nullptr);
		}

	};
}

