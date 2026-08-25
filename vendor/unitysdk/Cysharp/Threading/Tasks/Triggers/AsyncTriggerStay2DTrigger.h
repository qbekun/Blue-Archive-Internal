#pragma once
#include "../../../../unitysdk.h"

namespace UnityEngine { class Collider2D; }
namespace Cysharp::Threading::Tasks::Triggers { class IAsyncOnTriggerStay2DHandler; }

#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRIGGERSTAY2DTRIGGER_ONTRIGGERSTAY2D_OFFSET UNITYSDK_OFFSET(0x9DED6D0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRIGGERSTAY2DTRIGGER_GETONTRIGGERSTAY2DASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x9DED720)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRIGGERSTAY2DTRIGGER_GETONTRIGGERSTAY2DASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x9DED790)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRIGGERSTAY2DTRIGGER_ONTRIGGERSTAY2DASYNC_OFFSET UNITYSDK_OFFSET(0x9DED810)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRIGGERSTAY2DTRIGGER_ONTRIGGERSTAY2DASYNC_OFFSET UNITYSDK_OFFSET(0x9DED8F0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRIGGERSTAY2DTRIGGER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9DED9E0)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int AsyncTriggerStay2DTrigger_TypeDefinitionIndex = 36082;

	class AsyncTriggerStay2DTrigger : public ::FlatData::TutorialFailureContentType
	{
	public:
		::System::Void OnTriggerStay2D(::UnityEngine::Collider2D* arg)
		{
			((::System::Void(*)(::UnityEngine::Collider2D*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRIGGERSTAY2DTRIGGER_ONTRIGGERSTAY2D_OFFSET))(arg, nullptr);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnTriggerStay2DHandler* GetOnTriggerStay2DAsyncHandler()
		{
			return (return (::Cysharp::Threading::Tasks::Triggers::IAsyncOnTriggerStay2DHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRIGGERSTAY2DTRIGGER_GETONTRIGGERSTAY2DASYNCHANDLER_OFFSET))(nullptr);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnTriggerStay2DHandler* GetOnTriggerStay2DAsyncHandler(::System::Threading::CancellationToken* arg)
		{
			return (return (::Cysharp::Threading::Tasks::Triggers::IAsyncOnTriggerStay2DHandler*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRIGGERSTAY2DTRIGGER_GETONTRIGGERSTAY2DASYNCHANDLER_OFFSET))(arg, nullptr);
		}

		Il2CppObject* OnTriggerStay2DAsync()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRIGGERSTAY2DTRIGGER_ONTRIGGERSTAY2DASYNC_OFFSET))(nullptr);
		}

		Il2CppObject* OnTriggerStay2DAsync(::System::Threading::CancellationToken* arg)
		{
			return (return (Il2CppObject*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRIGGERSTAY2DTRIGGER_ONTRIGGERSTAY2DASYNC_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRIGGERSTAY2DTRIGGER_.CTOR_OFFSET))(nullptr);
		}

	};
}

