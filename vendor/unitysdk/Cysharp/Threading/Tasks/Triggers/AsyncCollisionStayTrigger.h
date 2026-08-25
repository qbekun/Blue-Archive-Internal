#pragma once
#include "../../../../unitysdk.h"

namespace UnityEngine { class Collision; }
namespace Cysharp::Threading::Tasks::Triggers { class IAsyncOnCollisionStayHandler; }

#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCOLLISIONSTAYTRIGGER_ONCOLLISIONSTAY_OFFSET UNITYSDK_OFFSET(0x9DE5DE0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCOLLISIONSTAYTRIGGER_GETONCOLLISIONSTAYASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x9DE5E30)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCOLLISIONSTAYTRIGGER_GETONCOLLISIONSTAYASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x9DE5EA0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCOLLISIONSTAYTRIGGER_ONCOLLISIONSTAYASYNC_OFFSET UNITYSDK_OFFSET(0x9DE5F20)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCOLLISIONSTAYTRIGGER_ONCOLLISIONSTAYASYNC_OFFSET UNITYSDK_OFFSET(0x9DE6000)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCOLLISIONSTAYTRIGGER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9DE60F0)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int AsyncCollisionStayTrigger_TypeDefinitionIndex = 36010;

	class AsyncCollisionStayTrigger : public ::FlatData::FeverBattleType
	{
	public:
		::System::Void OnCollisionStay(::UnityEngine::Collision* arg)
		{
			((::System::Void(*)(::UnityEngine::Collision*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCOLLISIONSTAYTRIGGER_ONCOLLISIONSTAY_OFFSET))(arg, nullptr);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnCollisionStayHandler* GetOnCollisionStayAsyncHandler()
		{
			return (return (::Cysharp::Threading::Tasks::Triggers::IAsyncOnCollisionStayHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCOLLISIONSTAYTRIGGER_GETONCOLLISIONSTAYASYNCHANDLER_OFFSET))(nullptr);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnCollisionStayHandler* GetOnCollisionStayAsyncHandler(::System::Threading::CancellationToken* arg)
		{
			return (return (::Cysharp::Threading::Tasks::Triggers::IAsyncOnCollisionStayHandler*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCOLLISIONSTAYTRIGGER_GETONCOLLISIONSTAYASYNCHANDLER_OFFSET))(arg, nullptr);
		}

		Il2CppObject* OnCollisionStayAsync()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCOLLISIONSTAYTRIGGER_ONCOLLISIONSTAYASYNC_OFFSET))(nullptr);
		}

		Il2CppObject* OnCollisionStayAsync(::System::Threading::CancellationToken* arg)
		{
			return (return (Il2CppObject*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCOLLISIONSTAYTRIGGER_ONCOLLISIONSTAYASYNC_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCOLLISIONSTAYTRIGGER_.CTOR_OFFSET))(nullptr);
		}

	};
}

