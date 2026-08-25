#pragma once
#include "../../../../unitysdk.h"

namespace Cysharp::Threading::Tasks::Triggers { class IAsyncOnApplicationPauseHandler; }

#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCAPPLICATIONPAUSETRIGGER_ONAPPLICATIONPAUSE_OFFSET UNITYSDK_OFFSET(0x9DE38F0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCAPPLICATIONPAUSETRIGGER_GETONAPPLICATIONPAUSEASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x9DE3940)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCAPPLICATIONPAUSETRIGGER_GETONAPPLICATIONPAUSEASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x9DE39B0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCAPPLICATIONPAUSETRIGGER_ONAPPLICATIONPAUSEASYNC_OFFSET UNITYSDK_OFFSET(0x9DE3A30)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCAPPLICATIONPAUSETRIGGER_ONAPPLICATIONPAUSEASYNC_OFFSET UNITYSDK_OFFSET(0x9DE3B10)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCAPPLICATIONPAUSETRIGGER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9DE3C00)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int AsyncApplicationPauseTrigger_TypeDefinitionIndex = 35988;

	class AsyncApplicationPauseTrigger : public ::FlatData::OpenConditionContent
	{
	public:
		::System::Void OnApplicationPause(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCAPPLICATIONPAUSETRIGGER_ONAPPLICATIONPAUSE_OFFSET))(arg, nullptr);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnApplicationPauseHandler* GetOnApplicationPauseAsyncHandler()
		{
			return (return (::Cysharp::Threading::Tasks::Triggers::IAsyncOnApplicationPauseHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCAPPLICATIONPAUSETRIGGER_GETONAPPLICATIONPAUSEASYNCHANDLER_OFFSET))(nullptr);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnApplicationPauseHandler* GetOnApplicationPauseAsyncHandler(::System::Threading::CancellationToken* arg)
		{
			return (return (::Cysharp::Threading::Tasks::Triggers::IAsyncOnApplicationPauseHandler*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCAPPLICATIONPAUSETRIGGER_GETONAPPLICATIONPAUSEASYNCHANDLER_OFFSET))(arg, nullptr);
		}

		Il2CppObject* OnApplicationPauseAsync()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCAPPLICATIONPAUSETRIGGER_ONAPPLICATIONPAUSEASYNC_OFFSET))(nullptr);
		}

		Il2CppObject* OnApplicationPauseAsync(::System::Threading::CancellationToken* arg)
		{
			return (return (Il2CppObject*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCAPPLICATIONPAUSETRIGGER_ONAPPLICATIONPAUSEASYNC_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCAPPLICATIONPAUSETRIGGER_.CTOR_OFFSET))(nullptr);
		}

	};
}

