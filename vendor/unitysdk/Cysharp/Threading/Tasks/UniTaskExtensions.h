#pragma once
#include "../../../unitysdk.h"

namespace Cysharp::Threading::Tasks { class UniTask; }
namespace Cysharp::Threading::Tasks { class UniTaskVoid; }

#define CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS_ASUNITASK_OFFSET UNITYSDK_OFFSET(0x000000)
#define CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS_ATTACHEXTERNALCANCELLATION_OFFSET UNITYSDK_OFFSET(0x000000)
#define CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS_TOCOROUTINE_OFFSET UNITYSDK_OFFSET(0x000000)
#define CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS_TOCOROUTINE_OFFSET UNITYSDK_OFFSET(0x9DD4D30)
#define CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS_FORGET_OFFSET UNITYSDK_OFFSET(0x9DDFE70)
#define CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS_FORGET_OFFSET UNITYSDK_OFFSET(0x9DE02C0)
#define CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS_FORGETCOREWITHCATCH_OFFSET UNITYSDK_OFFSET(0x9DE03C0)
#define CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS_FORGET_OFFSET UNITYSDK_OFFSET(0x000000)

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int UniTaskExtensions_TypeDefinitionIndex = 35961;

	class UniTaskExtensions : public Il2CppObject
	{
	public:
		Il2CppObject* AsUniTask(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS_ASUNITASK_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* AttachExternalCancellation(Il2CppObject* arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS_ATTACHEXTERNALCANCELLATION_OFFSET))(arg, arg, nullptr);
		}

		::System::Collections::IEnumerator* ToCoroutine(Il2CppObject* arg, Il2CppObject* arg, Il2CppObject* arg)
		{
			return (return (::System::Collections::IEnumerator*(*)(Il2CppObject*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS_TOCOROUTINE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Collections::IEnumerator* ToCoroutine(::Cysharp::Threading::Tasks::UniTask* arg, Il2CppObject* arg)
		{
			return (return (::System::Collections::IEnumerator*(*)(::Cysharp::Threading::Tasks::UniTask*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS_TOCOROUTINE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Forget(::Cysharp::Threading::Tasks::UniTask* arg)
		{
			((::System::Void(*)(::Cysharp::Threading::Tasks::UniTask*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS_FORGET_OFFSET))(arg, nullptr);
		}

		::System::Void Forget(::Cysharp::Threading::Tasks::UniTask* arg, Il2CppObject* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::Cysharp::Threading::Tasks::UniTask*, Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS_FORGET_OFFSET))(arg, arg, arg, nullptr);
		}

		::Cysharp::Threading::Tasks::UniTaskVoid* ForgetCoreWithCatch(::Cysharp::Threading::Tasks::UniTask* arg, Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (::Cysharp::Threading::Tasks::UniTaskVoid*(*)(::Cysharp::Threading::Tasks::UniTask*, Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS_FORGETCOREWITHCATCH_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void Forget(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS_FORGET_OFFSET))(arg, nullptr);
		}

	};
}

