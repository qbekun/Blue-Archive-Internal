#pragma once
#include "../../../../unitysdk.h"

namespace UnityEngine { class Collision2D; }
namespace Cysharp::Threading::Tasks::Triggers { class IAsyncOnCollisionEnter2DHandler; }

#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCOLLISIONENTER2DTRIGGER_ONCOLLISIONENTER2D_OFFSET UNITYSDK_OFFSET(0x9DE53F0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCOLLISIONENTER2DTRIGGER_GETONCOLLISIONENTER2DASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x9DE5440)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCOLLISIONENTER2DTRIGGER_GETONCOLLISIONENTER2DASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x9DE54B0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCOLLISIONENTER2DTRIGGER_ONCOLLISIONENTER2DASYNC_OFFSET UNITYSDK_OFFSET(0x9DE5530)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCOLLISIONENTER2DTRIGGER_ONCOLLISIONENTER2DASYNC_OFFSET UNITYSDK_OFFSET(0x9DE5610)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCOLLISIONENTER2DTRIGGER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9DE5700)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int AsyncCollisionEnter2DTrigger_TypeDefinitionIndex = 36004;

	class AsyncCollisionEnter2DTrigger : public ::FlatData::EventContentScenarioConditionType
	{
	public:
		::System::Void OnCollisionEnter2D(::UnityEngine::Collision2D* arg)
		{
			((::System::Void(*)(::UnityEngine::Collision2D*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCOLLISIONENTER2DTRIGGER_ONCOLLISIONENTER2D_OFFSET))(arg, nullptr);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnCollisionEnter2DHandler* GetOnCollisionEnter2DAsyncHandler()
		{
			return (return (::Cysharp::Threading::Tasks::Triggers::IAsyncOnCollisionEnter2DHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCOLLISIONENTER2DTRIGGER_GETONCOLLISIONENTER2DASYNCHANDLER_OFFSET))(nullptr);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnCollisionEnter2DHandler* GetOnCollisionEnter2DAsyncHandler(::System::Threading::CancellationToken* arg)
		{
			return (return (::Cysharp::Threading::Tasks::Triggers::IAsyncOnCollisionEnter2DHandler*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCOLLISIONENTER2DTRIGGER_GETONCOLLISIONENTER2DASYNCHANDLER_OFFSET))(arg, nullptr);
		}

		Il2CppObject* OnCollisionEnter2DAsync()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCOLLISIONENTER2DTRIGGER_ONCOLLISIONENTER2DASYNC_OFFSET))(nullptr);
		}

		Il2CppObject* OnCollisionEnter2DAsync(::System::Threading::CancellationToken* arg)
		{
			return (return (Il2CppObject*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCOLLISIONENTER2DTRIGGER_ONCOLLISIONENTER2DASYNC_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCOLLISIONENTER2DTRIGGER_.CTOR_OFFSET))(nullptr);
		}

	};
}

