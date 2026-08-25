#pragma once
#include "../../../../unitysdk.h"

#define CYSHARP_THREADING_TASKS_TRIGGERS_IASYNCONPARTICLECOLLISIONHANDLER_ONPARTICLECOLLISIONASYNC_OFFSET UNITYSDK_OFFSET(0x000000)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int IAsyncOnParticleCollisionHandler_TypeDefinitionIndex = 36043;

	class IAsyncOnParticleCollisionHandler : public Il2CppObject
	{
	public:
		Il2CppObject* OnParticleCollisionAsync()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_IASYNCONPARTICLECOLLISIONHANDLER_ONPARTICLECOLLISIONASYNC_OFFSET))(nullptr);
		}

	};
}

