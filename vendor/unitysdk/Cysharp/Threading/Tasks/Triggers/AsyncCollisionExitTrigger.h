#pragma once
#include "../../../../unitysdk.h"

namespace UnityEngine { class Collision; }
namespace Cysharp::Threading::Tasks::Triggers { class IAsyncOnCollisionExitHandler; }

#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCOLLISIONEXITTRIGGER_ONCOLLISIONEXIT_OFFSET UNITYSDK_OFFSET(0x9DE5740)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCOLLISIONEXITTRIGGER_GETONCOLLISIONEXITASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x9DE5790)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCOLLISIONEXITTRIGGER_GETONCOLLISIONEXITASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x9DE5800)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCOLLISIONEXITTRIGGER_ONCOLLISIONEXITASYNC_OFFSET UNITYSDK_OFFSET(0x9DE5880)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCOLLISIONEXITTRIGGER_ONCOLLISIONEXITASYNC_OFFSET UNITYSDK_OFFSET(0x9DE5960)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCOLLISIONEXITTRIGGER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9DE5A50)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int AsyncCollisionExitTrigger_TypeDefinitionIndex = 36006;

	class AsyncCollisionExitTrigger : public ::FlatData::FeverBattleType
	{
	public:
		::System::Void OnCollisionExit(::UnityEngine::Collision* arg)
		{
			((::System::Void(*)(::UnityEngine::Collision*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCOLLISIONEXITTRIGGER_ONCOLLISIONEXIT_OFFSET))(arg, nullptr);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnCollisionExitHandler* GetOnCollisionExitAsyncHandler()
		{
			return (return (::Cysharp::Threading::Tasks::Triggers::IAsyncOnCollisionExitHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCOLLISIONEXITTRIGGER_GETONCOLLISIONEXITASYNCHANDLER_OFFSET))(nullptr);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnCollisionExitHandler* GetOnCollisionExitAsyncHandler(::System::Threading::CancellationToken* arg)
		{
			return (return (::Cysharp::Threading::Tasks::Triggers::IAsyncOnCollisionExitHandler*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCOLLISIONEXITTRIGGER_GETONCOLLISIONEXITASYNCHANDLER_OFFSET))(arg, nullptr);
		}

		Il2CppObject* OnCollisionExitAsync()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCOLLISIONEXITTRIGGER_ONCOLLISIONEXITASYNC_OFFSET))(nullptr);
		}

		Il2CppObject* OnCollisionExitAsync(::System::Threading::CancellationToken* arg)
		{
			return (return (Il2CppObject*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCOLLISIONEXITTRIGGER_ONCOLLISIONEXITASYNC_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCOLLISIONEXITTRIGGER_.CTOR_OFFSET))(nullptr);
		}

	};
}

