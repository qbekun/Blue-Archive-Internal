#pragma once
#include "../../../../unitysdk.h"

namespace Cysharp::Threading::Tasks::Triggers { class IAsyncOnRenderObjectHandler; }
namespace Cysharp::Threading::Tasks { class UniTask; }

#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCRENDEROBJECTTRIGGER_ONRENDEROBJECT_OFFSET UNITYSDK_OFFSET(0x9DEB8C0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCRENDEROBJECTTRIGGER_GETONRENDEROBJECTASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x9DEB920)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCRENDEROBJECTTRIGGER_GETONRENDEROBJECTASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x9DEB990)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCRENDEROBJECTTRIGGER_ONRENDEROBJECTASYNC_OFFSET UNITYSDK_OFFSET(0x9DEBA10)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCRENDEROBJECTTRIGGER_ONRENDEROBJECTASYNC_OFFSET UNITYSDK_OFFSET(0x9DEBAF0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCRENDEROBJECTTRIGGER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9DEBBE0)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int AsyncRenderObjectTrigger_TypeDefinitionIndex = 36064;

	class AsyncRenderObjectTrigger : public ::FlatData::ResetContentType
	{
	public:
		::System::Void OnRenderObject()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCRENDEROBJECTTRIGGER_ONRENDEROBJECT_OFFSET))(nullptr);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnRenderObjectHandler* GetOnRenderObjectAsyncHandler()
		{
			return (return (::Cysharp::Threading::Tasks::Triggers::IAsyncOnRenderObjectHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCRENDEROBJECTTRIGGER_GETONRENDEROBJECTASYNCHANDLER_OFFSET))(nullptr);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnRenderObjectHandler* GetOnRenderObjectAsyncHandler(::System::Threading::CancellationToken* arg)
		{
			return (return (::Cysharp::Threading::Tasks::Triggers::IAsyncOnRenderObjectHandler*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCRENDEROBJECTTRIGGER_GETONRENDEROBJECTASYNCHANDLER_OFFSET))(arg, nullptr);
		}

		::Cysharp::Threading::Tasks::UniTask* OnRenderObjectAsync()
		{
			return (return (::Cysharp::Threading::Tasks::UniTask*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCRENDEROBJECTTRIGGER_ONRENDEROBJECTASYNC_OFFSET))(nullptr);
		}

		::Cysharp::Threading::Tasks::UniTask* OnRenderObjectAsync(::System::Threading::CancellationToken* arg)
		{
			return (return (::Cysharp::Threading::Tasks::UniTask*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCRENDEROBJECTTRIGGER_ONRENDEROBJECTASYNC_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCRENDEROBJECTTRIGGER_.CTOR_OFFSET))(nullptr);
		}

	};
}

