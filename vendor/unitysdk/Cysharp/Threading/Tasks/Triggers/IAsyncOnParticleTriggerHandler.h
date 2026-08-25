#pragma once
#include "../../../../unitysdk.h"

namespace Cysharp::Threading::Tasks { class UniTask; }

#define CYSHARP_THREADING_TASKS_TRIGGERS_IASYNCONPARTICLETRIGGERHANDLER_ONPARTICLETRIGGERASYNC_OFFSET UNITYSDK_OFFSET(0x000000)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int IAsyncOnParticleTriggerHandler_TypeDefinitionIndex = 36047;

	class IAsyncOnParticleTriggerHandler : public Il2CppObject
	{
	public:
		::Cysharp::Threading::Tasks::UniTask* OnParticleTriggerAsync()
		{
			return (return (::Cysharp::Threading::Tasks::UniTask*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_IASYNCONPARTICLETRIGGERHANDLER_ONPARTICLETRIGGERASYNC_OFFSET))(nullptr);
		}

	};
}

