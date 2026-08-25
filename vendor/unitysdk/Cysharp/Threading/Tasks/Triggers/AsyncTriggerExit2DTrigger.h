#pragma once
#include "../../../../unitysdk.h"

namespace UnityEngine { class Collider2D; }
namespace Cysharp::Threading::Tasks::Triggers { class IAsyncOnTriggerExit2DHandler; }

#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRIGGEREXIT2DTRIGGER_ONTRIGGEREXIT2D_OFFSET UNITYSDK_OFFSET(0x9DED030)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRIGGEREXIT2DTRIGGER_GETONTRIGGEREXIT2DASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x9DED080)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRIGGEREXIT2DTRIGGER_GETONTRIGGEREXIT2DASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x9DED0F0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRIGGEREXIT2DTRIGGER_ONTRIGGEREXIT2DASYNC_OFFSET UNITYSDK_OFFSET(0x9DED170)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRIGGEREXIT2DTRIGGER_ONTRIGGEREXIT2DASYNC_OFFSET UNITYSDK_OFFSET(0x9DED250)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRIGGEREXIT2DTRIGGER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9DED340)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int AsyncTriggerExit2DTrigger_TypeDefinitionIndex = 36078;

	class AsyncTriggerExit2DTrigger : public ::FlatData::TutorialFailureContentType
	{
	public:
		::System::Void OnTriggerExit2D(::UnityEngine::Collider2D* arg)
		{
			((::System::Void(*)(::UnityEngine::Collider2D*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRIGGEREXIT2DTRIGGER_ONTRIGGEREXIT2D_OFFSET))(arg, nullptr);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnTriggerExit2DHandler* GetOnTriggerExit2DAsyncHandler()
		{
			return (return (::Cysharp::Threading::Tasks::Triggers::IAsyncOnTriggerExit2DHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRIGGEREXIT2DTRIGGER_GETONTRIGGEREXIT2DASYNCHANDLER_OFFSET))(nullptr);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnTriggerExit2DHandler* GetOnTriggerExit2DAsyncHandler(::System::Threading::CancellationToken* arg)
		{
			return (return (::Cysharp::Threading::Tasks::Triggers::IAsyncOnTriggerExit2DHandler*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRIGGEREXIT2DTRIGGER_GETONTRIGGEREXIT2DASYNCHANDLER_OFFSET))(arg, nullptr);
		}

		Il2CppObject* OnTriggerExit2DAsync()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRIGGEREXIT2DTRIGGER_ONTRIGGEREXIT2DASYNC_OFFSET))(nullptr);
		}

		Il2CppObject* OnTriggerExit2DAsync(::System::Threading::CancellationToken* arg)
		{
			return (return (Il2CppObject*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRIGGEREXIT2DTRIGGER_ONTRIGGEREXIT2DASYNC_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRIGGEREXIT2DTRIGGER_.CTOR_OFFSET))(nullptr);
		}

	};
}

