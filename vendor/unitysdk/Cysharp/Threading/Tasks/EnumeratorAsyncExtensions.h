#pragma once
#include "../../../unitysdk.h"

namespace Cysharp::Threading::Tasks { class UniTask; }
namespace Cysharp::Threading::Tasks { class PlayerLoopTiming; }
namespace UnityEngine { class MonoBehaviour; }
namespace Cysharp::Threading::Tasks { class AutoResetUniTaskCompletionSource; }

#define CYSHARP_THREADING_TASKS_ENUMERATORASYNCEXTENSIONS_GETAWAITER_OFFSET UNITYSDK_OFFSET(0x000000)
#define CYSHARP_THREADING_TASKS_ENUMERATORASYNCEXTENSIONS_TOUNITASK_OFFSET UNITYSDK_OFFSET(0x9DCFEC0)
#define CYSHARP_THREADING_TASKS_ENUMERATORASYNCEXTENSIONS_TOUNITASK_OFFSET UNITYSDK_OFFSET(0x9DD01F0)
#define CYSHARP_THREADING_TASKS_ENUMERATORASYNCEXTENSIONS_CORE_OFFSET UNITYSDK_OFFSET(0x9DD03A0)

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int EnumeratorAsyncExtensions_TypeDefinitionIndex = 35848;

	class EnumeratorAsyncExtensions : public Il2CppObject
	{
	public:
		Awaiter* GetAwaiter(Il2CppObject* arg)
		{
			return (return (Awaiter*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_ENUMERATORASYNCEXTENSIONS_GETAWAITER_OFFSET))(arg, nullptr);
		}

		::Cysharp::Threading::Tasks::UniTask* ToUniTask(::System::Collections::IEnumerator* arg, ::Cysharp::Threading::Tasks::PlayerLoopTiming* arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (::Cysharp::Threading::Tasks::UniTask*(*)(::System::Collections::IEnumerator*, ::Cysharp::Threading::Tasks::PlayerLoopTiming*, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_ENUMERATORASYNCEXTENSIONS_TOUNITASK_OFFSET))(arg, arg, arg, nullptr);
		}

		::Cysharp::Threading::Tasks::UniTask* ToUniTask(::System::Collections::IEnumerator* arg, ::UnityEngine::MonoBehaviour* arg)
		{
			return (return (::Cysharp::Threading::Tasks::UniTask*(*)(::System::Collections::IEnumerator*, ::UnityEngine::MonoBehaviour*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_ENUMERATORASYNCEXTENSIONS_TOUNITASK_OFFSET))(arg, arg, nullptr);
		}

		::System::Collections::IEnumerator* Core(::System::Collections::IEnumerator* arg, ::UnityEngine::MonoBehaviour* arg, ::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource* arg)
		{
			return (return (::System::Collections::IEnumerator*(*)(::System::Collections::IEnumerator*, ::UnityEngine::MonoBehaviour*, ::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_ENUMERATORASYNCEXTENSIONS_CORE_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

