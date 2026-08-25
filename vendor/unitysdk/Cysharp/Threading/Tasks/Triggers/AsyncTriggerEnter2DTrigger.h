#pragma once
#include "../../../../unitysdk.h"

namespace UnityEngine { class Collider2D; }
namespace Cysharp::Threading::Tasks::Triggers { class IAsyncOnTriggerEnter2DHandler; }

#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRIGGERENTER2DTRIGGER_ONTRIGGERENTER2D_OFFSET UNITYSDK_OFFSET(0x9DEC990)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRIGGERENTER2DTRIGGER_GETONTRIGGERENTER2DASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x9DEC9E0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRIGGERENTER2DTRIGGER_GETONTRIGGERENTER2DASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x9DECA50)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRIGGERENTER2DTRIGGER_ONTRIGGERENTER2DASYNC_OFFSET UNITYSDK_OFFSET(0x9DECAD0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRIGGERENTER2DTRIGGER_ONTRIGGERENTER2DASYNC_OFFSET UNITYSDK_OFFSET(0x9DECBB0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRIGGERENTER2DTRIGGER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9DECCA0)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int AsyncTriggerEnter2DTrigger_TypeDefinitionIndex = 36074;

	class AsyncTriggerEnter2DTrigger : public ::FlatData::TutorialFailureContentType
	{
	public:
		::System::Void OnTriggerEnter2D(::UnityEngine::Collider2D* arg)
		{
			((::System::Void(*)(::UnityEngine::Collider2D*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRIGGERENTER2DTRIGGER_ONTRIGGERENTER2D_OFFSET))(arg, nullptr);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnTriggerEnter2DHandler* GetOnTriggerEnter2DAsyncHandler()
		{
			return (return (::Cysharp::Threading::Tasks::Triggers::IAsyncOnTriggerEnter2DHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRIGGERENTER2DTRIGGER_GETONTRIGGERENTER2DASYNCHANDLER_OFFSET))(nullptr);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnTriggerEnter2DHandler* GetOnTriggerEnter2DAsyncHandler(::System::Threading::CancellationToken* arg)
		{
			return (return (::Cysharp::Threading::Tasks::Triggers::IAsyncOnTriggerEnter2DHandler*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRIGGERENTER2DTRIGGER_GETONTRIGGERENTER2DASYNCHANDLER_OFFSET))(arg, nullptr);
		}

		Il2CppObject* OnTriggerEnter2DAsync()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRIGGERENTER2DTRIGGER_ONTRIGGERENTER2DASYNC_OFFSET))(nullptr);
		}

		Il2CppObject* OnTriggerEnter2DAsync(::System::Threading::CancellationToken* arg)
		{
			return (return (Il2CppObject*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRIGGERENTER2DTRIGGER_ONTRIGGERENTER2DASYNC_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRIGGERENTER2DTRIGGER_.CTOR_OFFSET))(nullptr);
		}

	};
}

