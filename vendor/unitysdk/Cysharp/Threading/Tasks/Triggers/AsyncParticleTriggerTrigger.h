#pragma once
#include "../../../../unitysdk.h"

namespace Cysharp::Threading::Tasks::Triggers { class IAsyncOnParticleTriggerHandler; }
namespace Cysharp::Threading::Tasks { class UniTask; }

#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPARTICLETRIGGERTRIGGER_ONPARTICLETRIGGER_OFFSET UNITYSDK_OFFSET(0x9DE9DA0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPARTICLETRIGGERTRIGGER_GETONPARTICLETRIGGERASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x9DE9E00)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPARTICLETRIGGERTRIGGER_GETONPARTICLETRIGGERASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x9DE9E70)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPARTICLETRIGGERTRIGGER_ONPARTICLETRIGGERASYNC_OFFSET UNITYSDK_OFFSET(0x9DE9EF0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPARTICLETRIGGERTRIGGER_ONPARTICLETRIGGERASYNC_OFFSET UNITYSDK_OFFSET(0x9DE9FD0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPARTICLETRIGGERTRIGGER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9DEA0C0)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int AsyncParticleTriggerTrigger_TypeDefinitionIndex = 36048;

	class AsyncParticleTriggerTrigger : public ::FlatData::ResetContentType
	{
	public:
		::System::Void OnParticleTrigger()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPARTICLETRIGGERTRIGGER_ONPARTICLETRIGGER_OFFSET))(nullptr);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnParticleTriggerHandler* GetOnParticleTriggerAsyncHandler()
		{
			return (return (::Cysharp::Threading::Tasks::Triggers::IAsyncOnParticleTriggerHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPARTICLETRIGGERTRIGGER_GETONPARTICLETRIGGERASYNCHANDLER_OFFSET))(nullptr);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnParticleTriggerHandler* GetOnParticleTriggerAsyncHandler(::System::Threading::CancellationToken* arg)
		{
			return (return (::Cysharp::Threading::Tasks::Triggers::IAsyncOnParticleTriggerHandler*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPARTICLETRIGGERTRIGGER_GETONPARTICLETRIGGERASYNCHANDLER_OFFSET))(arg, nullptr);
		}

		::Cysharp::Threading::Tasks::UniTask* OnParticleTriggerAsync()
		{
			return (return (::Cysharp::Threading::Tasks::UniTask*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPARTICLETRIGGERTRIGGER_ONPARTICLETRIGGERASYNC_OFFSET))(nullptr);
		}

		::Cysharp::Threading::Tasks::UniTask* OnParticleTriggerAsync(::System::Threading::CancellationToken* arg)
		{
			return (return (::Cysharp::Threading::Tasks::UniTask*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPARTICLETRIGGERTRIGGER_ONPARTICLETRIGGERASYNC_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPARTICLETRIGGERTRIGGER_.CTOR_OFFSET))(nullptr);
		}

	};
}

