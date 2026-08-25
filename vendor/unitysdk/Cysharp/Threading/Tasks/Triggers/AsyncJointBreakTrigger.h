#pragma once
#include "../../../../unitysdk.h"

namespace Cysharp::Threading::Tasks::Triggers { class IAsyncOnJointBreakHandler; }

#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCJOINTBREAKTRIGGER_ONJOINTBREAK_OFFSET UNITYSDK_OFFSET(0x9DE78B0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCJOINTBREAKTRIGGER_GETONJOINTBREAKASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x9DE7900)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCJOINTBREAKTRIGGER_GETONJOINTBREAKASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x9DE7970)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCJOINTBREAKTRIGGER_ONJOINTBREAKASYNC_OFFSET UNITYSDK_OFFSET(0x9DE79F0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCJOINTBREAKTRIGGER_ONJOINTBREAKASYNC_OFFSET UNITYSDK_OFFSET(0x9DE7AD0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCJOINTBREAKTRIGGER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9DE7BC0)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int AsyncJointBreakTrigger_TypeDefinitionIndex = 36026;

	class AsyncJointBreakTrigger : public ::FlatData::ShortcutContentType
	{
	public:
		::System::Void OnJointBreak(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCJOINTBREAKTRIGGER_ONJOINTBREAK_OFFSET))(arg, nullptr);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnJointBreakHandler* GetOnJointBreakAsyncHandler()
		{
			return (return (::Cysharp::Threading::Tasks::Triggers::IAsyncOnJointBreakHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCJOINTBREAKTRIGGER_GETONJOINTBREAKASYNCHANDLER_OFFSET))(nullptr);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnJointBreakHandler* GetOnJointBreakAsyncHandler(::System::Threading::CancellationToken* arg)
		{
			return (return (::Cysharp::Threading::Tasks::Triggers::IAsyncOnJointBreakHandler*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCJOINTBREAKTRIGGER_GETONJOINTBREAKASYNCHANDLER_OFFSET))(arg, nullptr);
		}

		Il2CppObject* OnJointBreakAsync()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCJOINTBREAKTRIGGER_ONJOINTBREAKASYNC_OFFSET))(nullptr);
		}

		Il2CppObject* OnJointBreakAsync(::System::Threading::CancellationToken* arg)
		{
			return (return (Il2CppObject*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCJOINTBREAKTRIGGER_ONJOINTBREAKASYNC_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCJOINTBREAKTRIGGER_.CTOR_OFFSET))(nullptr);
		}

	};
}

