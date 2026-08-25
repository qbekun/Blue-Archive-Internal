#pragma once
#include "../../../unitysdk.h"

namespace Cysharp::Threading::Tasks { class UniTaskStatus; }

#define CYSHARP_THREADING_TASKS_UNITASKCOMPLETIONSOURCECORE`1_RESET_OFFSET UNITYSDK_OFFSET(0x000000)
#define CYSHARP_THREADING_TASKS_UNITASKCOMPLETIONSOURCECORE`1_GETSTATUS_OFFSET UNITYSDK_OFFSET(0x000000)
#define CYSHARP_THREADING_TASKS_UNITASKCOMPLETIONSOURCECORE`1_TRYSETCANCELED_OFFSET UNITYSDK_OFFSET(0x000000)
#define CYSHARP_THREADING_TASKS_UNITASKCOMPLETIONSOURCECORE`1_TRYSETEXCEPTION_OFFSET UNITYSDK_OFFSET(0x000000)
#define CYSHARP_THREADING_TASKS_UNITASKCOMPLETIONSOURCECORE`1_GETRESULT_OFFSET UNITYSDK_OFFSET(0x000000)
#define CYSHARP_THREADING_TASKS_UNITASKCOMPLETIONSOURCECORE`1_GET_VERSION_OFFSET UNITYSDK_OFFSET(0x000000)
#define CYSHARP_THREADING_TASKS_UNITASKCOMPLETIONSOURCECORE`1_UNSAFEGETSTATUS_OFFSET UNITYSDK_OFFSET(0x000000)
#define CYSHARP_THREADING_TASKS_UNITASKCOMPLETIONSOURCECORE`1_REPORTUNHANDLEDERROR_OFFSET UNITYSDK_OFFSET(0x000000)
#define CYSHARP_THREADING_TASKS_UNITASKCOMPLETIONSOURCECORE`1_ONCOMPLETED_OFFSET UNITYSDK_OFFSET(0x000000)
#define CYSHARP_THREADING_TASKS_UNITASKCOMPLETIONSOURCECORE`1_VALIDATETOKEN_OFFSET UNITYSDK_OFFSET(0x000000)
#define CYSHARP_THREADING_TASKS_UNITASKCOMPLETIONSOURCECORE`1_TRYSETRESULT_OFFSET UNITYSDK_OFFSET(0x000000)

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int UniTaskCompletionSourceCore`1_TypeDefinitionIndex = 35945;

	class UniTaskCompletionSourceCore`1 : public Il2CppObject
	{
	public:
		Il2CppObject* result; // 0x0
		::System::Object* error; // 0x0
		::System::Int16 version; // 0x0
		::System::Boolean hasUnhandledError; // 0x0
		::System::Int32 completedCount; // 0x0
		Il2CppObject* continuation; // 0x0
		::System::Object* continuationState; // 0x0

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASKCOMPLETIONSOURCECORE`1_RESET_OFFSET))(nullptr);
		}

		::Cysharp::Threading::Tasks::UniTaskStatus* GetStatus(::System::Int16 arg)
		{
			return (return (::Cysharp::Threading::Tasks::UniTaskStatus*(*)(::System::Int16, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASKCOMPLETIONSOURCECORE`1_GETSTATUS_OFFSET))(arg, nullptr);
		}

		::System::Boolean TrySetCanceled(::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Boolean(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASKCOMPLETIONSOURCECORE`1_TRYSETCANCELED_OFFSET))(arg, nullptr);
		}

		::System::Boolean TrySetException(::System::Exception* arg)
		{
			return (return (::System::Boolean(*)(::System::Exception*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASKCOMPLETIONSOURCECORE`1_TRYSETEXCEPTION_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetResult(::System::Int16 arg)
		{
			return (return (Il2CppObject*(*)(::System::Int16, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASKCOMPLETIONSOURCECORE`1_GETRESULT_OFFSET))(arg, nullptr);
		}

		::System::Int16 get_Version()
		{
			return (return (::System::Int16(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASKCOMPLETIONSOURCECORE`1_GET_VERSION_OFFSET))(nullptr);
		}

		::Cysharp::Threading::Tasks::UniTaskStatus* UnsafeGetStatus()
		{
			return (return (::Cysharp::Threading::Tasks::UniTaskStatus*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASKCOMPLETIONSOURCECORE`1_UNSAFEGETSTATUS_OFFSET))(nullptr);
		}

		::System::Void ReportUnhandledError()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASKCOMPLETIONSOURCECORE`1_REPORTUNHANDLEDERROR_OFFSET))(nullptr);
		}

		::System::Void OnCompleted(Il2CppObject* arg, ::System::Object* arg, ::System::Int16 arg)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Object*, ::System::Int16, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASKCOMPLETIONSOURCECORE`1_ONCOMPLETED_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void ValidateToken(::System::Int16 arg)
		{
			((::System::Void(*)(::System::Int16, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASKCOMPLETIONSOURCECORE`1_VALIDATETOKEN_OFFSET))(arg, nullptr);
		}

		::System::Boolean TrySetResult(Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASKCOMPLETIONSOURCECORE`1_TRYSETRESULT_OFFSET))(arg, nullptr);
		}

	};
}

