#pragma once
#include "../../../../unitysdk.h"

namespace UnityEngine { class Collision2D; }
namespace Cysharp::Threading::Tasks::Triggers { class IAsyncOnCollisionStay2DHandler; }

#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCOLLISIONSTAY2DTRIGGER_ONCOLLISIONSTAY2D_OFFSET UNITYSDK_OFFSET(0x9DE6130)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCOLLISIONSTAY2DTRIGGER_GETONCOLLISIONSTAY2DASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x9DE6180)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCOLLISIONSTAY2DTRIGGER_GETONCOLLISIONSTAY2DASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x9DE61F0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCOLLISIONSTAY2DTRIGGER_ONCOLLISIONSTAY2DASYNC_OFFSET UNITYSDK_OFFSET(0x9DE6270)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCOLLISIONSTAY2DTRIGGER_ONCOLLISIONSTAY2DASYNC_OFFSET UNITYSDK_OFFSET(0x9DE6350)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCOLLISIONSTAY2DTRIGGER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9DE6440)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int AsyncCollisionStay2DTrigger_TypeDefinitionIndex = 36012;

	class AsyncCollisionStay2DTrigger : public ::FlatData::EventContentScenarioConditionType
	{
	public:
		::System::Void OnCollisionStay2D(::UnityEngine::Collision2D* arg)
		{
			((::System::Void(*)(::UnityEngine::Collision2D*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCOLLISIONSTAY2DTRIGGER_ONCOLLISIONSTAY2D_OFFSET))(arg, nullptr);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnCollisionStay2DHandler* GetOnCollisionStay2DAsyncHandler()
		{
			return (return (::Cysharp::Threading::Tasks::Triggers::IAsyncOnCollisionStay2DHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCOLLISIONSTAY2DTRIGGER_GETONCOLLISIONSTAY2DASYNCHANDLER_OFFSET))(nullptr);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnCollisionStay2DHandler* GetOnCollisionStay2DAsyncHandler(::System::Threading::CancellationToken* arg)
		{
			return (return (::Cysharp::Threading::Tasks::Triggers::IAsyncOnCollisionStay2DHandler*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCOLLISIONSTAY2DTRIGGER_GETONCOLLISIONSTAY2DASYNCHANDLER_OFFSET))(arg, nullptr);
		}

		Il2CppObject* OnCollisionStay2DAsync()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCOLLISIONSTAY2DTRIGGER_ONCOLLISIONSTAY2DASYNC_OFFSET))(nullptr);
		}

		Il2CppObject* OnCollisionStay2DAsync(::System::Threading::CancellationToken* arg)
		{
			return (return (Il2CppObject*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCOLLISIONSTAY2DTRIGGER_ONCOLLISIONSTAY2DASYNC_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCOLLISIONSTAY2DTRIGGER_.CTOR_OFFSET))(nullptr);
		}

	};
}

