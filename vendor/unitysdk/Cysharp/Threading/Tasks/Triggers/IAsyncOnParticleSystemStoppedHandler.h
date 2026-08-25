#pragma once
#include "../../../../unitysdk.h"

namespace Cysharp::Threading::Tasks { class UniTask; }

#define CYSHARP_THREADING_TASKS_TRIGGERS_IASYNCONPARTICLESYSTEMSTOPPEDHANDLER_ONPARTICLESYSTEMSTOPPEDASYNC_OFFSET UNITYSDK_OFFSET(0x000000)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int IAsyncOnParticleSystemStoppedHandler_TypeDefinitionIndex = 36045;

	class IAsyncOnParticleSystemStoppedHandler : public Il2CppObject
	{
	public:
		::Cysharp::Threading::Tasks::UniTask* OnParticleSystemStoppedAsync()
		{
			return (return (::Cysharp::Threading::Tasks::UniTask*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_IASYNCONPARTICLESYSTEMSTOPPEDHANDLER_ONPARTICLESYSTEMSTOPPEDASYNC_OFFSET))(nullptr);
		}

	};
}

