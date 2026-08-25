#pragma once
#include "../../../../unitysdk.h"

namespace Cysharp::Threading::Tasks::Triggers { class IAsyncOnParticleSystemStoppedHandler; }
namespace Cysharp::Threading::Tasks { class UniTask; }

#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPARTICLESYSTEMSTOPPEDTRIGGER_ONPARTICLESYSTEMSTOPPED_OFFSET UNITYSDK_OFFSET(0x9DE9A40)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPARTICLESYSTEMSTOPPEDTRIGGER_GETONPARTICLESYSTEMSTOPPEDASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x9DE9AA0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPARTICLESYSTEMSTOPPEDTRIGGER_GETONPARTICLESYSTEMSTOPPEDASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x9DE9B10)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPARTICLESYSTEMSTOPPEDTRIGGER_ONPARTICLESYSTEMSTOPPEDASYNC_OFFSET UNITYSDK_OFFSET(0x9DE9B90)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPARTICLESYSTEMSTOPPEDTRIGGER_ONPARTICLESYSTEMSTOPPEDASYNC_OFFSET UNITYSDK_OFFSET(0x9DE9C70)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPARTICLESYSTEMSTOPPEDTRIGGER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9DE9D60)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int AsyncParticleSystemStoppedTrigger_TypeDefinitionIndex = 36046;

	class AsyncParticleSystemStoppedTrigger : public ::FlatData::ResetContentType
	{
	public:
		::System::Void OnParticleSystemStopped()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPARTICLESYSTEMSTOPPEDTRIGGER_ONPARTICLESYSTEMSTOPPED_OFFSET))(nullptr);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnParticleSystemStoppedHandler* GetOnParticleSystemStoppedAsyncHandler()
		{
			return (return (::Cysharp::Threading::Tasks::Triggers::IAsyncOnParticleSystemStoppedHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPARTICLESYSTEMSTOPPEDTRIGGER_GETONPARTICLESYSTEMSTOPPEDASYNCHANDLER_OFFSET))(nullptr);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnParticleSystemStoppedHandler* GetOnParticleSystemStoppedAsyncHandler(::System::Threading::CancellationToken* arg)
		{
			return (return (::Cysharp::Threading::Tasks::Triggers::IAsyncOnParticleSystemStoppedHandler*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPARTICLESYSTEMSTOPPEDTRIGGER_GETONPARTICLESYSTEMSTOPPEDASYNCHANDLER_OFFSET))(arg, nullptr);
		}

		::Cysharp::Threading::Tasks::UniTask* OnParticleSystemStoppedAsync()
		{
			return (return (::Cysharp::Threading::Tasks::UniTask*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPARTICLESYSTEMSTOPPEDTRIGGER_ONPARTICLESYSTEMSTOPPEDASYNC_OFFSET))(nullptr);
		}

		::Cysharp::Threading::Tasks::UniTask* OnParticleSystemStoppedAsync(::System::Threading::CancellationToken* arg)
		{
			return (return (::Cysharp::Threading::Tasks::UniTask*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPARTICLESYSTEMSTOPPEDTRIGGER_ONPARTICLESYSTEMSTOPPEDASYNC_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPARTICLESYSTEMSTOPPEDTRIGGER_.CTOR_OFFSET))(nullptr);
		}

	};
}

