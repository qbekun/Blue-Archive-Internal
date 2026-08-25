#pragma once
#include "../../../../unitysdk.h"

namespace UnityEngine { class Collision; }
namespace Cysharp::Threading::Tasks::Triggers { class IAsyncOnCollisionEnterHandler; }

#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCOLLISIONENTERTRIGGER_ONCOLLISIONENTER_OFFSET UNITYSDK_OFFSET(0x9DE50A0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCOLLISIONENTERTRIGGER_GETONCOLLISIONENTERASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x9DE50F0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCOLLISIONENTERTRIGGER_GETONCOLLISIONENTERASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x9DE5160)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCOLLISIONENTERTRIGGER_ONCOLLISIONENTERASYNC_OFFSET UNITYSDK_OFFSET(0x9DE51E0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCOLLISIONENTERTRIGGER_ONCOLLISIONENTERASYNC_OFFSET UNITYSDK_OFFSET(0x9DE52C0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCOLLISIONENTERTRIGGER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9DE53B0)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int AsyncCollisionEnterTrigger_TypeDefinitionIndex = 36002;

	class AsyncCollisionEnterTrigger : public ::FlatData::FeverBattleType
	{
	public:
		::System::Void OnCollisionEnter(::UnityEngine::Collision* arg)
		{
			((::System::Void(*)(::UnityEngine::Collision*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCOLLISIONENTERTRIGGER_ONCOLLISIONENTER_OFFSET))(arg, nullptr);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnCollisionEnterHandler* GetOnCollisionEnterAsyncHandler()
		{
			return (return (::Cysharp::Threading::Tasks::Triggers::IAsyncOnCollisionEnterHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCOLLISIONENTERTRIGGER_GETONCOLLISIONENTERASYNCHANDLER_OFFSET))(nullptr);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnCollisionEnterHandler* GetOnCollisionEnterAsyncHandler(::System::Threading::CancellationToken* arg)
		{
			return (return (::Cysharp::Threading::Tasks::Triggers::IAsyncOnCollisionEnterHandler*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCOLLISIONENTERTRIGGER_GETONCOLLISIONENTERASYNCHANDLER_OFFSET))(arg, nullptr);
		}

		Il2CppObject* OnCollisionEnterAsync()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCOLLISIONENTERTRIGGER_ONCOLLISIONENTERASYNC_OFFSET))(nullptr);
		}

		Il2CppObject* OnCollisionEnterAsync(::System::Threading::CancellationToken* arg)
		{
			return (return (Il2CppObject*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCOLLISIONENTERTRIGGER_ONCOLLISIONENTERASYNC_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCOLLISIONENTERTRIGGER_.CTOR_OFFSET))(nullptr);
		}

	};
}

