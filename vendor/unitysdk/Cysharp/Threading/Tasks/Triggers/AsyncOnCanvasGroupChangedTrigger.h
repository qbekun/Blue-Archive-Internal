#pragma once
#include "../../../../unitysdk.h"

namespace Cysharp::Threading::Tasks::Triggers { class IAsyncOnCanvasGroupChangedHandler; }
namespace Cysharp::Threading::Tasks { class UniTask; }

#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCONCANVASGROUPCHANGEDTRIGGER_ONCANVASGROUPCHANGED_OFFSET UNITYSDK_OFFSET(0x9DE4D40)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCONCANVASGROUPCHANGEDTRIGGER_GETONCANVASGROUPCHANGEDASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x9DE4DA0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCONCANVASGROUPCHANGEDTRIGGER_GETONCANVASGROUPCHANGEDASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x9DE4E10)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCONCANVASGROUPCHANGEDTRIGGER_ONCANVASGROUPCHANGEDASYNC_OFFSET UNITYSDK_OFFSET(0x9DE4E90)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCONCANVASGROUPCHANGEDTRIGGER_ONCANVASGROUPCHANGEDASYNC_OFFSET UNITYSDK_OFFSET(0x9DE4F70)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCONCANVASGROUPCHANGEDTRIGGER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9DE5060)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int AsyncOnCanvasGroupChangedTrigger_TypeDefinitionIndex = 36000;

	class AsyncOnCanvasGroupChangedTrigger : public ::FlatData::ResetContentType
	{
	public:
		::System::Void OnCanvasGroupChanged()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCONCANVASGROUPCHANGEDTRIGGER_ONCANVASGROUPCHANGED_OFFSET))(nullptr);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnCanvasGroupChangedHandler* GetOnCanvasGroupChangedAsyncHandler()
		{
			return (return (::Cysharp::Threading::Tasks::Triggers::IAsyncOnCanvasGroupChangedHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCONCANVASGROUPCHANGEDTRIGGER_GETONCANVASGROUPCHANGEDASYNCHANDLER_OFFSET))(nullptr);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnCanvasGroupChangedHandler* GetOnCanvasGroupChangedAsyncHandler(::System::Threading::CancellationToken* arg)
		{
			return (return (::Cysharp::Threading::Tasks::Triggers::IAsyncOnCanvasGroupChangedHandler*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCONCANVASGROUPCHANGEDTRIGGER_GETONCANVASGROUPCHANGEDASYNCHANDLER_OFFSET))(arg, nullptr);
		}

		::Cysharp::Threading::Tasks::UniTask* OnCanvasGroupChangedAsync()
		{
			return (return (::Cysharp::Threading::Tasks::UniTask*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCONCANVASGROUPCHANGEDTRIGGER_ONCANVASGROUPCHANGEDASYNC_OFFSET))(nullptr);
		}

		::Cysharp::Threading::Tasks::UniTask* OnCanvasGroupChangedAsync(::System::Threading::CancellationToken* arg)
		{
			return (return (::Cysharp::Threading::Tasks::UniTask*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCONCANVASGROUPCHANGEDTRIGGER_ONCANVASGROUPCHANGEDASYNC_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCONCANVASGROUPCHANGEDTRIGGER_.CTOR_OFFSET))(nullptr);
		}

	};
}

