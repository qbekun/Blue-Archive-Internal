#pragma once
#include "../../../../unitysdk.h"

namespace Cysharp::Threading::Tasks::Triggers { class IAsyncOnAnimatorMoveHandler; }
namespace Cysharp::Threading::Tasks { class UniTask; }

#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCANIMATORMOVETRIGGER_ONANIMATORMOVE_OFFSET UNITYSDK_OFFSET(0x9DE3240)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCANIMATORMOVETRIGGER_GETONANIMATORMOVEASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x9DE32A0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCANIMATORMOVETRIGGER_GETONANIMATORMOVEASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x9DE3310)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCANIMATORMOVETRIGGER_ONANIMATORMOVEASYNC_OFFSET UNITYSDK_OFFSET(0x9DE3390)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCANIMATORMOVETRIGGER_ONANIMATORMOVEASYNC_OFFSET UNITYSDK_OFFSET(0x9DE3470)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCANIMATORMOVETRIGGER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9DE3560)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int AsyncAnimatorMoveTrigger_TypeDefinitionIndex = 35984;

	class AsyncAnimatorMoveTrigger : public ::FlatData::ResetContentType
	{
	public:
		::System::Void OnAnimatorMove()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCANIMATORMOVETRIGGER_ONANIMATORMOVE_OFFSET))(nullptr);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnAnimatorMoveHandler* GetOnAnimatorMoveAsyncHandler()
		{
			return (return (::Cysharp::Threading::Tasks::Triggers::IAsyncOnAnimatorMoveHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCANIMATORMOVETRIGGER_GETONANIMATORMOVEASYNCHANDLER_OFFSET))(nullptr);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnAnimatorMoveHandler* GetOnAnimatorMoveAsyncHandler(::System::Threading::CancellationToken* arg)
		{
			return (return (::Cysharp::Threading::Tasks::Triggers::IAsyncOnAnimatorMoveHandler*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCANIMATORMOVETRIGGER_GETONANIMATORMOVEASYNCHANDLER_OFFSET))(arg, nullptr);
		}

		::Cysharp::Threading::Tasks::UniTask* OnAnimatorMoveAsync()
		{
			return (return (::Cysharp::Threading::Tasks::UniTask*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCANIMATORMOVETRIGGER_ONANIMATORMOVEASYNC_OFFSET))(nullptr);
		}

		::Cysharp::Threading::Tasks::UniTask* OnAnimatorMoveAsync(::System::Threading::CancellationToken* arg)
		{
			return (return (::Cysharp::Threading::Tasks::UniTask*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCANIMATORMOVETRIGGER_ONANIMATORMOVEASYNC_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCANIMATORMOVETRIGGER_.CTOR_OFFSET))(nullptr);
		}

	};
}

