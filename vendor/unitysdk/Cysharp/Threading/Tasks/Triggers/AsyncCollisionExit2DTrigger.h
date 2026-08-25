#pragma once
#include "../../../../unitysdk.h"

namespace UnityEngine { class Collision2D; }
namespace Cysharp::Threading::Tasks::Triggers { class IAsyncOnCollisionExit2DHandler; }

#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCOLLISIONEXIT2DTRIGGER_ONCOLLISIONEXIT2D_OFFSET UNITYSDK_OFFSET(0x9DE5A90)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCOLLISIONEXIT2DTRIGGER_GETONCOLLISIONEXIT2DASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x9DE5AE0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCOLLISIONEXIT2DTRIGGER_GETONCOLLISIONEXIT2DASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x9DE5B50)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCOLLISIONEXIT2DTRIGGER_ONCOLLISIONEXIT2DASYNC_OFFSET UNITYSDK_OFFSET(0x9DE5BD0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCOLLISIONEXIT2DTRIGGER_ONCOLLISIONEXIT2DASYNC_OFFSET UNITYSDK_OFFSET(0x9DE5CB0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCOLLISIONEXIT2DTRIGGER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9DE5DA0)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int AsyncCollisionExit2DTrigger_TypeDefinitionIndex = 36008;

	class AsyncCollisionExit2DTrigger : public ::FlatData::EventContentScenarioConditionType
	{
	public:
		::System::Void OnCollisionExit2D(::UnityEngine::Collision2D* arg)
		{
			((::System::Void(*)(::UnityEngine::Collision2D*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCOLLISIONEXIT2DTRIGGER_ONCOLLISIONEXIT2D_OFFSET))(arg, nullptr);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnCollisionExit2DHandler* GetOnCollisionExit2DAsyncHandler()
		{
			return (return (::Cysharp::Threading::Tasks::Triggers::IAsyncOnCollisionExit2DHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCOLLISIONEXIT2DTRIGGER_GETONCOLLISIONEXIT2DASYNCHANDLER_OFFSET))(nullptr);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnCollisionExit2DHandler* GetOnCollisionExit2DAsyncHandler(::System::Threading::CancellationToken* arg)
		{
			return (return (::Cysharp::Threading::Tasks::Triggers::IAsyncOnCollisionExit2DHandler*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCOLLISIONEXIT2DTRIGGER_GETONCOLLISIONEXIT2DASYNCHANDLER_OFFSET))(arg, nullptr);
		}

		Il2CppObject* OnCollisionExit2DAsync()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCOLLISIONEXIT2DTRIGGER_ONCOLLISIONEXIT2DASYNC_OFFSET))(nullptr);
		}

		Il2CppObject* OnCollisionExit2DAsync(::System::Threading::CancellationToken* arg)
		{
			return (return (Il2CppObject*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCOLLISIONEXIT2DTRIGGER_ONCOLLISIONEXIT2DASYNC_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCOLLISIONEXIT2DTRIGGER_.CTOR_OFFSET))(nullptr);
		}

	};
}

