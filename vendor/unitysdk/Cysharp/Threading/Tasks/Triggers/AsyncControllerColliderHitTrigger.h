#pragma once
#include "../../../../unitysdk.h"

namespace UnityEngine { class ControllerColliderHit; }
namespace Cysharp::Threading::Tasks::Triggers { class IAsyncOnControllerColliderHitHandler; }

#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCONTROLLERCOLLIDERHITTRIGGER_ONCONTROLLERCOLLIDERHIT_OFFSET UNITYSDK_OFFSET(0x9DE6480)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCONTROLLERCOLLIDERHITTRIGGER_GETONCONTROLLERCOLLIDERHITASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x9DE64D0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCONTROLLERCOLLIDERHITTRIGGER_GETONCONTROLLERCOLLIDERHITASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x9DE6540)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCONTROLLERCOLLIDERHITTRIGGER_ONCONTROLLERCOLLIDERHITASYNC_OFFSET UNITYSDK_OFFSET(0x9DE65C0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCONTROLLERCOLLIDERHITTRIGGER_ONCONTROLLERCOLLIDERHITASYNC_OFFSET UNITYSDK_OFFSET(0x9DE66A0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCONTROLLERCOLLIDERHITTRIGGER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9DE6790)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int AsyncControllerColliderHitTrigger_TypeDefinitionIndex = 36014;

	class AsyncControllerColliderHitTrigger : public ::FlatData::EventTargetType
	{
	public:
		::System::Void OnControllerColliderHit(::UnityEngine::ControllerColliderHit* arg)
		{
			((::System::Void(*)(::UnityEngine::ControllerColliderHit*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCONTROLLERCOLLIDERHITTRIGGER_ONCONTROLLERCOLLIDERHIT_OFFSET))(arg, nullptr);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnControllerColliderHitHandler* GetOnControllerColliderHitAsyncHandler()
		{
			return (return (::Cysharp::Threading::Tasks::Triggers::IAsyncOnControllerColliderHitHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCONTROLLERCOLLIDERHITTRIGGER_GETONCONTROLLERCOLLIDERHITASYNCHANDLER_OFFSET))(nullptr);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnControllerColliderHitHandler* GetOnControllerColliderHitAsyncHandler(::System::Threading::CancellationToken* arg)
		{
			return (return (::Cysharp::Threading::Tasks::Triggers::IAsyncOnControllerColliderHitHandler*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCONTROLLERCOLLIDERHITTRIGGER_GETONCONTROLLERCOLLIDERHITASYNCHANDLER_OFFSET))(arg, nullptr);
		}

		Il2CppObject* OnControllerColliderHitAsync()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCONTROLLERCOLLIDERHITTRIGGER_ONCONTROLLERCOLLIDERHITASYNC_OFFSET))(nullptr);
		}

		Il2CppObject* OnControllerColliderHitAsync(::System::Threading::CancellationToken* arg)
		{
			return (return (Il2CppObject*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCONTROLLERCOLLIDERHITTRIGGER_ONCONTROLLERCOLLIDERHITASYNC_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCONTROLLERCOLLIDERHITTRIGGER_.CTOR_OFFSET))(nullptr);
		}

	};
}

