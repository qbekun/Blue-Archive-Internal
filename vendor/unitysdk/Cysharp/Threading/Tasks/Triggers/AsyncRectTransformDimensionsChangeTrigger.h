#pragma once
#include "../../../../unitysdk.h"

namespace Cysharp::Threading::Tasks::Triggers { class IAsyncOnRectTransformDimensionsChangeHandler; }
namespace Cysharp::Threading::Tasks { class UniTask; }

#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCRECTTRANSFORMDIMENSIONSCHANGETRIGGER_ONRECTTRANSFORMDIMENSIONSCHANGE_OFFSET UNITYSDK_OFFSET(0x9DEAE80)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCRECTTRANSFORMDIMENSIONSCHANGETRIGGER_GETONRECTTRANSFORMDIMENSIONSCHANGEASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x9DEAEE0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCRECTTRANSFORMDIMENSIONSCHANGETRIGGER_GETONRECTTRANSFORMDIMENSIONSCHANGEASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x9DEAF50)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCRECTTRANSFORMDIMENSIONSCHANGETRIGGER_ONRECTTRANSFORMDIMENSIONSCHANGEASYNC_OFFSET UNITYSDK_OFFSET(0x9DEAFD0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCRECTTRANSFORMDIMENSIONSCHANGETRIGGER_ONRECTTRANSFORMDIMENSIONSCHANGEASYNC_OFFSET UNITYSDK_OFFSET(0x9DEB0B0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCRECTTRANSFORMDIMENSIONSCHANGETRIGGER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9DEB1A0)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int AsyncRectTransformDimensionsChangeTrigger_TypeDefinitionIndex = 36058;

	class AsyncRectTransformDimensionsChangeTrigger : public ::FlatData::ResetContentType
	{
	public:
		::System::Void OnRectTransformDimensionsChange()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCRECTTRANSFORMDIMENSIONSCHANGETRIGGER_ONRECTTRANSFORMDIMENSIONSCHANGE_OFFSET))(nullptr);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnRectTransformDimensionsChangeHandler* GetOnRectTransformDimensionsChangeAsyncHandler()
		{
			return (return (::Cysharp::Threading::Tasks::Triggers::IAsyncOnRectTransformDimensionsChangeHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCRECTTRANSFORMDIMENSIONSCHANGETRIGGER_GETONRECTTRANSFORMDIMENSIONSCHANGEASYNCHANDLER_OFFSET))(nullptr);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnRectTransformDimensionsChangeHandler* GetOnRectTransformDimensionsChangeAsyncHandler(::System::Threading::CancellationToken* arg)
		{
			return (return (::Cysharp::Threading::Tasks::Triggers::IAsyncOnRectTransformDimensionsChangeHandler*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCRECTTRANSFORMDIMENSIONSCHANGETRIGGER_GETONRECTTRANSFORMDIMENSIONSCHANGEASYNCHANDLER_OFFSET))(arg, nullptr);
		}

		::Cysharp::Threading::Tasks::UniTask* OnRectTransformDimensionsChangeAsync()
		{
			return (return (::Cysharp::Threading::Tasks::UniTask*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCRECTTRANSFORMDIMENSIONSCHANGETRIGGER_ONRECTTRANSFORMDIMENSIONSCHANGEASYNC_OFFSET))(nullptr);
		}

		::Cysharp::Threading::Tasks::UniTask* OnRectTransformDimensionsChangeAsync(::System::Threading::CancellationToken* arg)
		{
			return (return (::Cysharp::Threading::Tasks::UniTask*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCRECTTRANSFORMDIMENSIONSCHANGETRIGGER_ONRECTTRANSFORMDIMENSIONSCHANGEASYNC_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCRECTTRANSFORMDIMENSIONSCHANGETRIGGER_.CTOR_OFFSET))(nullptr);
		}

	};
}

