#pragma once
#include "../../../../unitysdk.h"

namespace Cysharp::Threading::Tasks::Triggers { class IAsyncOnWillRenderObjectHandler; }
namespace Cysharp::Threading::Tasks { class UniTask; }

#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCWILLRENDEROBJECTTRIGGER_ONWILLRENDEROBJECT_OFFSET UNITYSDK_OFFSET(0x9DEDD80)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCWILLRENDEROBJECTTRIGGER_GETONWILLRENDEROBJECTASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x9DEDDE0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCWILLRENDEROBJECTTRIGGER_GETONWILLRENDEROBJECTASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x9DEDE50)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCWILLRENDEROBJECTTRIGGER_ONWILLRENDEROBJECTASYNC_OFFSET UNITYSDK_OFFSET(0x9DEDED0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCWILLRENDEROBJECTTRIGGER_ONWILLRENDEROBJECTASYNC_OFFSET UNITYSDK_OFFSET(0x9DEDFB0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCWILLRENDEROBJECTTRIGGER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9DEE0A0)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int AsyncWillRenderObjectTrigger_TypeDefinitionIndex = 36086;

	class AsyncWillRenderObjectTrigger : public ::FlatData::ResetContentType
	{
	public:
		::System::Void OnWillRenderObject()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCWILLRENDEROBJECTTRIGGER_ONWILLRENDEROBJECT_OFFSET))(nullptr);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnWillRenderObjectHandler* GetOnWillRenderObjectAsyncHandler()
		{
			return (return (::Cysharp::Threading::Tasks::Triggers::IAsyncOnWillRenderObjectHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCWILLRENDEROBJECTTRIGGER_GETONWILLRENDEROBJECTASYNCHANDLER_OFFSET))(nullptr);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnWillRenderObjectHandler* GetOnWillRenderObjectAsyncHandler(::System::Threading::CancellationToken* arg)
		{
			return (return (::Cysharp::Threading::Tasks::Triggers::IAsyncOnWillRenderObjectHandler*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCWILLRENDEROBJECTTRIGGER_GETONWILLRENDEROBJECTASYNCHANDLER_OFFSET))(arg, nullptr);
		}

		::Cysharp::Threading::Tasks::UniTask* OnWillRenderObjectAsync()
		{
			return (return (::Cysharp::Threading::Tasks::UniTask*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCWILLRENDEROBJECTTRIGGER_ONWILLRENDEROBJECTASYNC_OFFSET))(nullptr);
		}

		::Cysharp::Threading::Tasks::UniTask* OnWillRenderObjectAsync(::System::Threading::CancellationToken* arg)
		{
			return (return (::Cysharp::Threading::Tasks::UniTask*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCWILLRENDEROBJECTTRIGGER_ONWILLRENDEROBJECTASYNC_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCWILLRENDEROBJECTTRIGGER_.CTOR_OFFSET))(nullptr);
		}

	};
}

