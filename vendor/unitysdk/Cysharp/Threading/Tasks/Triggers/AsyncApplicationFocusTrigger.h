#pragma once
#include "../../../../unitysdk.h"

namespace Cysharp::Threading::Tasks::Triggers { class IAsyncOnApplicationFocusHandler; }

#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCAPPLICATIONFOCUSTRIGGER_ONAPPLICATIONFOCUS_OFFSET UNITYSDK_OFFSET(0x9DE35A0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCAPPLICATIONFOCUSTRIGGER_GETONAPPLICATIONFOCUSASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x9DE35F0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCAPPLICATIONFOCUSTRIGGER_GETONAPPLICATIONFOCUSASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x9DE3660)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCAPPLICATIONFOCUSTRIGGER_ONAPPLICATIONFOCUSASYNC_OFFSET UNITYSDK_OFFSET(0x9DE36E0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCAPPLICATIONFOCUSTRIGGER_ONAPPLICATIONFOCUSASYNC_OFFSET UNITYSDK_OFFSET(0x9DE37C0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCAPPLICATIONFOCUSTRIGGER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9DE38B0)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int AsyncApplicationFocusTrigger_TypeDefinitionIndex = 35986;

	class AsyncApplicationFocusTrigger : public ::FlatData::OpenConditionContent
	{
	public:
		::System::Void OnApplicationFocus(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCAPPLICATIONFOCUSTRIGGER_ONAPPLICATIONFOCUS_OFFSET))(arg, nullptr);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnApplicationFocusHandler* GetOnApplicationFocusAsyncHandler()
		{
			return (return (::Cysharp::Threading::Tasks::Triggers::IAsyncOnApplicationFocusHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCAPPLICATIONFOCUSTRIGGER_GETONAPPLICATIONFOCUSASYNCHANDLER_OFFSET))(nullptr);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnApplicationFocusHandler* GetOnApplicationFocusAsyncHandler(::System::Threading::CancellationToken* arg)
		{
			return (return (::Cysharp::Threading::Tasks::Triggers::IAsyncOnApplicationFocusHandler*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCAPPLICATIONFOCUSTRIGGER_GETONAPPLICATIONFOCUSASYNCHANDLER_OFFSET))(arg, nullptr);
		}

		Il2CppObject* OnApplicationFocusAsync()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCAPPLICATIONFOCUSTRIGGER_ONAPPLICATIONFOCUSASYNC_OFFSET))(nullptr);
		}

		Il2CppObject* OnApplicationFocusAsync(::System::Threading::CancellationToken* arg)
		{
			return (return (Il2CppObject*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCAPPLICATIONFOCUSTRIGGER_ONAPPLICATIONFOCUSASYNC_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCAPPLICATIONFOCUSTRIGGER_.CTOR_OFFSET))(nullptr);
		}

	};
}

