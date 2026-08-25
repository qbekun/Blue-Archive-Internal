#pragma once
#include "../../../../unitysdk.h"

namespace Cysharp::Threading::Tasks::Triggers { class AsyncDestroyTrigger; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Component; }

#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRIGGEREXTENSIONS_GETASYNCDESTROYTRIGGER_OFFSET UNITYSDK_OFFSET(0x9DE2070)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRIGGEREXTENSIONS_GETASYNCDESTROYTRIGGER_OFFSET UNITYSDK_OFFSET(0x9DD4B30)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRIGGEREXTENSIONS_GETORADDCOMPONENT_OFFSET UNITYSDK_OFFSET(0x000000)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int AsyncTriggerExtensions_TypeDefinitionIndex = 35966;

	class AsyncTriggerExtensions : public Il2CppObject
	{
	public:
		::Cysharp::Threading::Tasks::Triggers::AsyncDestroyTrigger* GetAsyncDestroyTrigger(::UnityEngine::GameObject* arg)
		{
			return (return (::Cysharp::Threading::Tasks::Triggers::AsyncDestroyTrigger*(*)(::UnityEngine::GameObject*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRIGGEREXTENSIONS_GETASYNCDESTROYTRIGGER_OFFSET))(arg, nullptr);
		}

		::Cysharp::Threading::Tasks::Triggers::AsyncDestroyTrigger* GetAsyncDestroyTrigger(::UnityEngine::Component* arg)
		{
			return (return (::Cysharp::Threading::Tasks::Triggers::AsyncDestroyTrigger*(*)(::UnityEngine::Component*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRIGGEREXTENSIONS_GETASYNCDESTROYTRIGGER_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetOrAddComponent(::UnityEngine::GameObject* arg)
		{
			return (return (Il2CppObject*(*)(::UnityEngine::GameObject*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRIGGEREXTENSIONS_GETORADDCOMPONENT_OFFSET))(arg, nullptr);
		}

	};
}

