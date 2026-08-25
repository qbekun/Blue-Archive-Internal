#pragma once
#include "../../../../unitysdk.h"

namespace Cysharp::Threading::Tasks::Triggers { class IAsyncOnRectTransformRemovedHandler; }
namespace Cysharp::Threading::Tasks { class UniTask; }

#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCRECTTRANSFORMREMOVEDTRIGGER_ONRECTTRANSFORMREMOVED_OFFSET UNITYSDK_OFFSET(0x9DEB1E0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCRECTTRANSFORMREMOVEDTRIGGER_GETONRECTTRANSFORMREMOVEDASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x9DEB240)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCRECTTRANSFORMREMOVEDTRIGGER_GETONRECTTRANSFORMREMOVEDASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x9DEB2B0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCRECTTRANSFORMREMOVEDTRIGGER_ONRECTTRANSFORMREMOVEDASYNC_OFFSET UNITYSDK_OFFSET(0x9DEB330)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCRECTTRANSFORMREMOVEDTRIGGER_ONRECTTRANSFORMREMOVEDASYNC_OFFSET UNITYSDK_OFFSET(0x9DEB410)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCRECTTRANSFORMREMOVEDTRIGGER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9DEB500)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int AsyncRectTransformRemovedTrigger_TypeDefinitionIndex = 36060;

	class AsyncRectTransformRemovedTrigger : public ::FlatData::ResetContentType
	{
	public:
		::System::Void OnRectTransformRemoved()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCRECTTRANSFORMREMOVEDTRIGGER_ONRECTTRANSFORMREMOVED_OFFSET))(nullptr);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnRectTransformRemovedHandler* GetOnRectTransformRemovedAsyncHandler()
		{
			return (return (::Cysharp::Threading::Tasks::Triggers::IAsyncOnRectTransformRemovedHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCRECTTRANSFORMREMOVEDTRIGGER_GETONRECTTRANSFORMREMOVEDASYNCHANDLER_OFFSET))(nullptr);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnRectTransformRemovedHandler* GetOnRectTransformRemovedAsyncHandler(::System::Threading::CancellationToken* arg)
		{
			return (return (::Cysharp::Threading::Tasks::Triggers::IAsyncOnRectTransformRemovedHandler*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCRECTTRANSFORMREMOVEDTRIGGER_GETONRECTTRANSFORMREMOVEDASYNCHANDLER_OFFSET))(arg, nullptr);
		}

		::Cysharp::Threading::Tasks::UniTask* OnRectTransformRemovedAsync()
		{
			return (return (::Cysharp::Threading::Tasks::UniTask*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCRECTTRANSFORMREMOVEDTRIGGER_ONRECTTRANSFORMREMOVEDASYNC_OFFSET))(nullptr);
		}

		::Cysharp::Threading::Tasks::UniTask* OnRectTransformRemovedAsync(::System::Threading::CancellationToken* arg)
		{
			return (return (::Cysharp::Threading::Tasks::UniTask*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCRECTTRANSFORMREMOVEDTRIGGER_ONRECTTRANSFORMREMOVEDASYNC_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCRECTTRANSFORMREMOVEDTRIGGER_.CTOR_OFFSET))(nullptr);
		}

	};
}

