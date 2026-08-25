#pragma once
#include "../../../../unitysdk.h"

namespace UnityEngine { class Collider; }
namespace Cysharp::Threading::Tasks::Triggers { class IAsyncOnTriggerEnterHandler; }

#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRIGGERENTERTRIGGER_ONTRIGGERENTER_OFFSET UNITYSDK_OFFSET(0x9DEC640)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRIGGERENTERTRIGGER_GETONTRIGGERENTERASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x9DEC690)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRIGGERENTERTRIGGER_GETONTRIGGERENTERASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x9DEC700)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRIGGERENTERTRIGGER_ONTRIGGERENTERASYNC_OFFSET UNITYSDK_OFFSET(0x9DEC780)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRIGGERENTERTRIGGER_ONTRIGGERENTERASYNC_OFFSET UNITYSDK_OFFSET(0x9DEC860)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRIGGERENTERTRIGGER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9DEC950)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int AsyncTriggerEnterTrigger_TypeDefinitionIndex = 36072;

	class AsyncTriggerEnterTrigger : public ::FlatData::ContentLockType
	{
	public:
		::System::Void OnTriggerEnter(::UnityEngine::Collider* arg)
		{
			((::System::Void(*)(::UnityEngine::Collider*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRIGGERENTERTRIGGER_ONTRIGGERENTER_OFFSET))(arg, nullptr);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnTriggerEnterHandler* GetOnTriggerEnterAsyncHandler()
		{
			return (return (::Cysharp::Threading::Tasks::Triggers::IAsyncOnTriggerEnterHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRIGGERENTERTRIGGER_GETONTRIGGERENTERASYNCHANDLER_OFFSET))(nullptr);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnTriggerEnterHandler* GetOnTriggerEnterAsyncHandler(::System::Threading::CancellationToken* arg)
		{
			return (return (::Cysharp::Threading::Tasks::Triggers::IAsyncOnTriggerEnterHandler*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRIGGERENTERTRIGGER_GETONTRIGGERENTERASYNCHANDLER_OFFSET))(arg, nullptr);
		}

		Il2CppObject* OnTriggerEnterAsync()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRIGGERENTERTRIGGER_ONTRIGGERENTERASYNC_OFFSET))(nullptr);
		}

		Il2CppObject* OnTriggerEnterAsync(::System::Threading::CancellationToken* arg)
		{
			return (return (Il2CppObject*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRIGGERENTERTRIGGER_ONTRIGGERENTERASYNC_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRIGGERENTERTRIGGER_.CTOR_OFFSET))(nullptr);
		}

	};
}

