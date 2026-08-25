#pragma once
#include "../../../../unitysdk.h"

namespace Cysharp::Threading::Tasks::Triggers { class IAsyncOnAnimatorIKHandler; }

#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCANIMATORIKTRIGGER_ONANIMATORIK_OFFSET UNITYSDK_OFFSET(0x9DE2EF0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCANIMATORIKTRIGGER_GETONANIMATORIKASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x9DE2F40)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCANIMATORIKTRIGGER_GETONANIMATORIKASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x9DE2FB0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCANIMATORIKTRIGGER_ONANIMATORIKASYNC_OFFSET UNITYSDK_OFFSET(0x9DE3030)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCANIMATORIKTRIGGER_ONANIMATORIKASYNC_OFFSET UNITYSDK_OFFSET(0x9DE3110)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCANIMATORIKTRIGGER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9DE3200)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int AsyncAnimatorIKTrigger_TypeDefinitionIndex = 35982;

	class AsyncAnimatorIKTrigger : public ::FlatData::EventContentItemType
	{
	public:
		::System::Void OnAnimatorIK(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCANIMATORIKTRIGGER_ONANIMATORIK_OFFSET))(arg, nullptr);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnAnimatorIKHandler* GetOnAnimatorIKAsyncHandler()
		{
			return (return (::Cysharp::Threading::Tasks::Triggers::IAsyncOnAnimatorIKHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCANIMATORIKTRIGGER_GETONANIMATORIKASYNCHANDLER_OFFSET))(nullptr);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnAnimatorIKHandler* GetOnAnimatorIKAsyncHandler(::System::Threading::CancellationToken* arg)
		{
			return (return (::Cysharp::Threading::Tasks::Triggers::IAsyncOnAnimatorIKHandler*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCANIMATORIKTRIGGER_GETONANIMATORIKASYNCHANDLER_OFFSET))(arg, nullptr);
		}

		Il2CppObject* OnAnimatorIKAsync()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCANIMATORIKTRIGGER_ONANIMATORIKASYNC_OFFSET))(nullptr);
		}

		Il2CppObject* OnAnimatorIKAsync(::System::Threading::CancellationToken* arg)
		{
			return (return (Il2CppObject*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCANIMATORIKTRIGGER_ONANIMATORIKASYNC_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCANIMATORIKTRIGGER_.CTOR_OFFSET))(nullptr);
		}

	};
}

