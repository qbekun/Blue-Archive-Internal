#pragma once
#include "../../../../unitysdk.h"

namespace Cysharp::Threading::Tasks { class UniTask; }

#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCDESTROYTRIGGER_ONDESTROYASYNC_OFFSET UNITYSDK_OFFSET(0x9DE2210)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCDESTROYTRIGGER_GET_CANCELLATIONTOKEN_OFFSET UNITYSDK_OFFSET(0x9DD4B80)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCDESTROYTRIGGER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9DE2450)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCDESTROYTRIGGER_AWAKE_OFFSET UNITYSDK_OFFSET(0x9DE2460)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCDESTROYTRIGGER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x9DE2470)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int AsyncDestroyTrigger_TypeDefinitionIndex = 35970;

	class AsyncDestroyTrigger : public Il2CppObject
	{
	public:
		::System::Boolean awakeCalled; // 0x18
		::System::Boolean called; // 0x19
		::System::Threading::CancellationTokenSource* cancellationTokenSource; // 0x20

		::Cysharp::Threading::Tasks::UniTask* OnDestroyAsync()
		{
			return (return (::Cysharp::Threading::Tasks::UniTask*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCDESTROYTRIGGER_ONDESTROYASYNC_OFFSET))(nullptr);
		}

		::System::Threading::CancellationToken* get_CancellationToken()
		{
			return (return (::System::Threading::CancellationToken*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCDESTROYTRIGGER_GET_CANCELLATIONTOKEN_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCDESTROYTRIGGER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCDESTROYTRIGGER_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnDestroy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCDESTROYTRIGGER_ONDESTROY_OFFSET))(nullptr);
		}

	};
}

