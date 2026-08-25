#pragma once
#include "../../../../unitysdk.h"

namespace UnityEngine { class Collider; }
namespace Cysharp::Threading::Tasks::Triggers { class IAsyncOnTriggerStayHandler; }

#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRIGGERSTAYTRIGGER_ONTRIGGERSTAY_OFFSET UNITYSDK_OFFSET(0x9DED380)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRIGGERSTAYTRIGGER_GETONTRIGGERSTAYASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x9DED3D0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRIGGERSTAYTRIGGER_GETONTRIGGERSTAYASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x9DED440)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRIGGERSTAYTRIGGER_ONTRIGGERSTAYASYNC_OFFSET UNITYSDK_OFFSET(0x9DED4C0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRIGGERSTAYTRIGGER_ONTRIGGERSTAYASYNC_OFFSET UNITYSDK_OFFSET(0x9DED5A0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRIGGERSTAYTRIGGER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9DED690)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int AsyncTriggerStayTrigger_TypeDefinitionIndex = 36080;

	class AsyncTriggerStayTrigger : public ::FlatData::ContentLockType
	{
	public:
		::System::Void OnTriggerStay(::UnityEngine::Collider* arg)
		{
			((::System::Void(*)(::UnityEngine::Collider*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRIGGERSTAYTRIGGER_ONTRIGGERSTAY_OFFSET))(arg, nullptr);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnTriggerStayHandler* GetOnTriggerStayAsyncHandler()
		{
			return (return (::Cysharp::Threading::Tasks::Triggers::IAsyncOnTriggerStayHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRIGGERSTAYTRIGGER_GETONTRIGGERSTAYASYNCHANDLER_OFFSET))(nullptr);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnTriggerStayHandler* GetOnTriggerStayAsyncHandler(::System::Threading::CancellationToken* arg)
		{
			return (return (::Cysharp::Threading::Tasks::Triggers::IAsyncOnTriggerStayHandler*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRIGGERSTAYTRIGGER_GETONTRIGGERSTAYASYNCHANDLER_OFFSET))(arg, nullptr);
		}

		Il2CppObject* OnTriggerStayAsync()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRIGGERSTAYTRIGGER_ONTRIGGERSTAYASYNC_OFFSET))(nullptr);
		}

		Il2CppObject* OnTriggerStayAsync(::System::Threading::CancellationToken* arg)
		{
			return (return (Il2CppObject*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRIGGERSTAYTRIGGER_ONTRIGGERSTAYASYNC_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRIGGERSTAYTRIGGER_.CTOR_OFFSET))(nullptr);
		}

	};
}

