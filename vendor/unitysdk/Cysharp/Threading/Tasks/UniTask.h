#pragma once
#include "../../../unitysdk.h"

namespace Cysharp::Threading::Tasks { class IUniTaskSource; }
namespace Cysharp::Threading::Tasks { class UniTask; }
namespace Cysharp::Threading::Tasks { class UniTaskStatus; }
namespace Cysharp::Threading::Tasks { class YieldAwaitable; }
namespace Cysharp::Threading::Tasks { class PlayerLoopTiming; }
namespace UnityEngine { class MonoBehaviour; }
namespace Cysharp::Threading::Tasks { class DelayType; }
namespace Cysharp::Threading::Tasks { class SwitchToMainThreadAwaitable; }
namespace Cysharp::Threading::Tasks { class SwitchToThreadPoolAwaitable; }

#define CYSHARP_THREADING_TASKS_UNITASK_TOCOROUTINE_OFFSET UNITYSDK_OFFSET(0x9DD4C80)
#define CYSHARP_THREADING_TASKS_UNITASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x9DD4DC0)
#define CYSHARP_THREADING_TASKS_UNITASK_GET_STATUS_OFFSET UNITYSDK_OFFSET(0x9DD4DE0)
#define CYSHARP_THREADING_TASKS_UNITASK_GETAWAITER_OFFSET UNITYSDK_OFFSET(0x9DD4E90)
#define CYSHARP_THREADING_TASKS_UNITASK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9DD4EB0)
#define CYSHARP_THREADING_TASKS_UNITASK_YIELD_OFFSET UNITYSDK_OFFSET(0x9DD4FC0)
#define CYSHARP_THREADING_TASKS_UNITASK_YIELD_OFFSET UNITYSDK_OFFSET(0x9DD4FD0)
#define CYSHARP_THREADING_TASKS_UNITASK_YIELD_OFFSET UNITYSDK_OFFSET(0x9DD5380)
#define CYSHARP_THREADING_TASKS_UNITASK_NEXTFRAME_OFFSET UNITYSDK_OFFSET(0x9DD5410)
#define CYSHARP_THREADING_TASKS_UNITASK_WAITFORENDOFFRAME_OFFSET UNITYSDK_OFFSET(0x9DD5880)
#define CYSHARP_THREADING_TASKS_UNITASK_WAITFORSECONDS_OFFSET UNITYSDK_OFFSET(0x9DD5C40)
#define CYSHARP_THREADING_TASKS_UNITASK_DELAYFRAME_OFFSET UNITYSDK_OFFSET(0x9DD5F00)
#define CYSHARP_THREADING_TASKS_UNITASK_DELAY_OFFSET UNITYSDK_OFFSET(0x9DD5E00)
#define CYSHARP_THREADING_TASKS_UNITASK_DELAY_OFFSET UNITYSDK_OFFSET(0x9DD6400)
#define CYSHARP_THREADING_TASKS_UNITASK_DELAY_OFFSET UNITYSDK_OFFSET(0x9DD66C0)
#define CYSHARP_THREADING_TASKS_UNITASK_DELAY_OFFSET UNITYSDK_OFFSET(0x9DD6490)
#define CYSHARP_THREADING_TASKS_UNITASK_FROMEXCEPTION_OFFSET UNITYSDK_OFFSET(0x9DD7440)
#define CYSHARP_THREADING_TASKS_UNITASK_FROMEXCEPTION_OFFSET UNITYSDK_OFFSET(0x000000)
#define CYSHARP_THREADING_TASKS_UNITASK_FROMRESULT_OFFSET UNITYSDK_OFFSET(0x000000)
#define CYSHARP_THREADING_TASKS_UNITASK_FROMCANCELED_OFFSET UNITYSDK_OFFSET(0x9DD7550)
#define CYSHARP_THREADING_TASKS_UNITASK_FROMCANCELED_OFFSET UNITYSDK_OFFSET(0x000000)
#define CYSHARP_THREADING_TASKS_UNITASK_ACTION_OFFSET UNITYSDK_OFFSET(0x9DD76C0)
#define CYSHARP_THREADING_TASKS_UNITASK_RUNONTHREADPOOL_OFFSET UNITYSDK_OFFSET(0x9DD7780)
#define CYSHARP_THREADING_TASKS_UNITASK_RUNONTHREADPOOL_OFFSET UNITYSDK_OFFSET(0x000000)
#define CYSHARP_THREADING_TASKS_UNITASK_SWITCHTOMAINTHREAD_OFFSET UNITYSDK_OFFSET(0x9DD7930)
#define CYSHARP_THREADING_TASKS_UNITASK_SWITCHTOTHREADPOOL_OFFSET UNITYSDK_OFFSET(0x9DD7980)
#define CYSHARP_THREADING_TASKS_UNITASK_WAITUNTIL_OFFSET UNITYSDK_OFFSET(0x9DD7990)
#define CYSHARP_THREADING_TASKS_UNITASK_WAITUNTIL_OFFSET UNITYSDK_OFFSET(0x000000)
#define CYSHARP_THREADING_TASKS_UNITASK_WAITWHILE_OFFSET UNITYSDK_OFFSET(0x9DD7D80)
#define CYSHARP_THREADING_TASKS_UNITASK_WHENALL_OFFSET UNITYSDK_OFFSET(0x9DD8170)
#define CYSHARP_THREADING_TASKS_UNITASK_WHENALL_OFFSET UNITYSDK_OFFSET(0x9DD8730)
#define CYSHARP_THREADING_TASKS_UNITASK_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9DD8900)

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int UniTask_TypeDefinitionIndex = 35932;

	class UniTask : public Il2CppObject
	{
	public:
		::Cysharp::Threading::Tasks::IUniTaskSource* source; // 0x10
		::System::Int16 token; // 0x18
		::Cysharp::Threading::Tasks::UniTask* CanceledUniTask; // 0x0
		::Cysharp::Threading::Tasks::UniTask* CompletedTask; // 0x10

		::System::Collections::IEnumerator* ToCoroutine(Il2CppObject* arg)
		{
			return (return (::System::Collections::IEnumerator*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_TOCOROUTINE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::Cysharp::Threading::Tasks::IUniTaskSource* arg, ::System::Int16 arg)
		{
			((::System::Void(*)(::Cysharp::Threading::Tasks::IUniTaskSource*, ::System::Int16, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::Cysharp::Threading::Tasks::UniTaskStatus* get_Status()
		{
			return (return (::Cysharp::Threading::Tasks::UniTaskStatus*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_GET_STATUS_OFFSET))(nullptr);
		}

		Awaiter* GetAwaiter()
		{
			return (return (Awaiter*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_GETAWAITER_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_TOSTRING_OFFSET))(nullptr);
		}

		::Cysharp::Threading::Tasks::YieldAwaitable* Yield()
		{
			return (return (::Cysharp::Threading::Tasks::YieldAwaitable*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_YIELD_OFFSET))(nullptr);
		}

		::Cysharp::Threading::Tasks::UniTask* Yield(::System::Threading::CancellationToken* arg, ::System::Boolean arg)
		{
			return (return (::Cysharp::Threading::Tasks::UniTask*(*)(::System::Threading::CancellationToken*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_YIELD_OFFSET))(arg, arg, nullptr);
		}

		::Cysharp::Threading::Tasks::UniTask* Yield(::Cysharp::Threading::Tasks::PlayerLoopTiming* arg, ::System::Threading::CancellationToken* arg, ::System::Boolean arg)
		{
			return (return (::Cysharp::Threading::Tasks::UniTask*(*)(::Cysharp::Threading::Tasks::PlayerLoopTiming*, ::System::Threading::CancellationToken*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_YIELD_OFFSET))(arg, arg, arg, nullptr);
		}

		::Cysharp::Threading::Tasks::UniTask* NextFrame(::System::Threading::CancellationToken* arg, ::System::Boolean arg)
		{
			return (return (::Cysharp::Threading::Tasks::UniTask*(*)(::System::Threading::CancellationToken*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_NEXTFRAME_OFFSET))(arg, arg, nullptr);
		}

		::Cysharp::Threading::Tasks::UniTask* WaitForEndOfFrame(::UnityEngine::MonoBehaviour* arg)
		{
			return (return (::Cysharp::Threading::Tasks::UniTask*(*)(::UnityEngine::MonoBehaviour*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_WAITFORENDOFFRAME_OFFSET))(arg, nullptr);
		}

		::Cysharp::Threading::Tasks::UniTask* WaitForSeconds(::System::Single arg, ::System::Boolean arg, ::Cysharp::Threading::Tasks::PlayerLoopTiming* arg, ::System::Threading::CancellationToken* arg, ::System::Boolean arg)
		{
			return (return (::Cysharp::Threading::Tasks::UniTask*(*)(::System::Single, ::System::Boolean, ::Cysharp::Threading::Tasks::PlayerLoopTiming*, ::System::Threading::CancellationToken*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_WAITFORSECONDS_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::Cysharp::Threading::Tasks::UniTask* DelayFrame(::System::Int32 arg, ::Cysharp::Threading::Tasks::PlayerLoopTiming* arg, ::System::Threading::CancellationToken* arg, ::System::Boolean arg)
		{
			return (return (::Cysharp::Threading::Tasks::UniTask*(*)(::System::Int32, ::Cysharp::Threading::Tasks::PlayerLoopTiming*, ::System::Threading::CancellationToken*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_DELAYFRAME_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::Cysharp::Threading::Tasks::UniTask* Delay(::System::Int32 arg, ::System::Boolean arg, ::Cysharp::Threading::Tasks::PlayerLoopTiming* arg, ::System::Threading::CancellationToken* arg, ::System::Boolean arg)
		{
			return (return (::Cysharp::Threading::Tasks::UniTask*(*)(::System::Int32, ::System::Boolean, ::Cysharp::Threading::Tasks::PlayerLoopTiming*, ::System::Threading::CancellationToken*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_DELAY_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::Cysharp::Threading::Tasks::UniTask* Delay(::System::TimeSpan* arg, ::System::Boolean arg, ::Cysharp::Threading::Tasks::PlayerLoopTiming* arg, ::System::Threading::CancellationToken* arg, ::System::Boolean arg)
		{
			return (return (::Cysharp::Threading::Tasks::UniTask*(*)(::System::TimeSpan*, ::System::Boolean, ::Cysharp::Threading::Tasks::PlayerLoopTiming*, ::System::Threading::CancellationToken*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_DELAY_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::Cysharp::Threading::Tasks::UniTask* Delay(::System::Int32 arg, ::Cysharp::Threading::Tasks::DelayType* arg, ::Cysharp::Threading::Tasks::PlayerLoopTiming* arg, ::System::Threading::CancellationToken* arg, ::System::Boolean arg)
		{
			return (return (::Cysharp::Threading::Tasks::UniTask*(*)(::System::Int32, ::Cysharp::Threading::Tasks::DelayType*, ::Cysharp::Threading::Tasks::PlayerLoopTiming*, ::System::Threading::CancellationToken*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_DELAY_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::Cysharp::Threading::Tasks::UniTask* Delay(::System::TimeSpan* arg, ::Cysharp::Threading::Tasks::DelayType* arg, ::Cysharp::Threading::Tasks::PlayerLoopTiming* arg, ::System::Threading::CancellationToken* arg, ::System::Boolean arg)
		{
			return (return (::Cysharp::Threading::Tasks::UniTask*(*)(::System::TimeSpan*, ::Cysharp::Threading::Tasks::DelayType*, ::Cysharp::Threading::Tasks::PlayerLoopTiming*, ::System::Threading::CancellationToken*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_DELAY_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::Cysharp::Threading::Tasks::UniTask* FromException(::System::Exception* arg)
		{
			return (return (::Cysharp::Threading::Tasks::UniTask*(*)(::System::Exception*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_FROMEXCEPTION_OFFSET))(arg, nullptr);
		}

		Il2CppObject* FromException(::System::Exception* arg)
		{
			return (return (Il2CppObject*(*)(::System::Exception*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_FROMEXCEPTION_OFFSET))(arg, nullptr);
		}

		Il2CppObject* FromResult(Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_FROMRESULT_OFFSET))(arg, nullptr);
		}

		::Cysharp::Threading::Tasks::UniTask* FromCanceled(::System::Threading::CancellationToken* arg)
		{
			return (return (::Cysharp::Threading::Tasks::UniTask*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_FROMCANCELED_OFFSET))(arg, nullptr);
		}

		Il2CppObject* FromCanceled(::System::Threading::CancellationToken* arg)
		{
			return (return (Il2CppObject*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_FROMCANCELED_OFFSET))(arg, nullptr);
		}

		::System::Action* Action(Il2CppObject* arg)
		{
			return (return (::System::Action*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_ACTION_OFFSET))(arg, nullptr);
		}

		::Cysharp::Threading::Tasks::UniTask* RunOnThreadPool(Il2CppObject* arg, ::System::Boolean arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (::Cysharp::Threading::Tasks::UniTask*(*)(Il2CppObject*, ::System::Boolean, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_RUNONTHREADPOOL_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* RunOnThreadPool(Il2CppObject* arg, ::System::Boolean arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_RUNONTHREADPOOL_OFFSET))(arg, arg, arg, nullptr);
		}

		::Cysharp::Threading::Tasks::SwitchToMainThreadAwaitable* SwitchToMainThread(::System::Threading::CancellationToken* arg)
		{
			return (return (::Cysharp::Threading::Tasks::SwitchToMainThreadAwaitable*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_SWITCHTOMAINTHREAD_OFFSET))(arg, nullptr);
		}

		::Cysharp::Threading::Tasks::SwitchToThreadPoolAwaitable* SwitchToThreadPool()
		{
			return (return (::Cysharp::Threading::Tasks::SwitchToThreadPoolAwaitable*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_SWITCHTOTHREADPOOL_OFFSET))(nullptr);
		}

		::Cysharp::Threading::Tasks::UniTask* WaitUntil(Il2CppObject* arg, ::Cysharp::Threading::Tasks::PlayerLoopTiming* arg, ::System::Threading::CancellationToken* arg, ::System::Boolean arg)
		{
			return (return (::Cysharp::Threading::Tasks::UniTask*(*)(Il2CppObject*, ::Cysharp::Threading::Tasks::PlayerLoopTiming*, ::System::Threading::CancellationToken*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_WAITUNTIL_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::Cysharp::Threading::Tasks::UniTask* WaitUntil(Il2CppObject* arg, Il2CppObject* arg, ::Cysharp::Threading::Tasks::PlayerLoopTiming* arg, ::System::Threading::CancellationToken* arg, ::System::Boolean arg)
		{
			return (return (::Cysharp::Threading::Tasks::UniTask*(*)(Il2CppObject*, Il2CppObject*, ::Cysharp::Threading::Tasks::PlayerLoopTiming*, ::System::Threading::CancellationToken*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_WAITUNTIL_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::Cysharp::Threading::Tasks::UniTask* WaitWhile(Il2CppObject* arg, ::Cysharp::Threading::Tasks::PlayerLoopTiming* arg, ::System::Threading::CancellationToken* arg, ::System::Boolean arg)
		{
			return (return (::Cysharp::Threading::Tasks::UniTask*(*)(Il2CppObject*, ::Cysharp::Threading::Tasks::PlayerLoopTiming*, ::System::Threading::CancellationToken*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_WAITWHILE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::Cysharp::Threading::Tasks::UniTask* WhenAll(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::Cysharp::Threading::Tasks::UniTask*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_WHENALL_OFFSET))(arg, nullptr);
		}

		::Cysharp::Threading::Tasks::UniTask* WhenAll(Il2CppObject* arg)
		{
			return (return (::Cysharp::Threading::Tasks::UniTask*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_WHENALL_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_.CCTOR_OFFSET))(nullptr);
		}

	};
}

