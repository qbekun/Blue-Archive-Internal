#pragma once
#include "../../../../unitysdk.h"

#define CYSHARP_THREADING_TASKS_TRIGGERS_IASYNCONPARTICLEUPDATEJOBSCHEDULEDHANDLER_ONPARTICLEUPDATEJOBSCHEDULEDASYNC_OFFSET UNITYSDK_OFFSET(0x000000)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int IAsyncOnParticleUpdateJobScheduledHandler_TypeDefinitionIndex = 36049;

	class IAsyncOnParticleUpdateJobScheduledHandler : public Il2CppObject
	{
	public:
		Il2CppObject* OnParticleUpdateJobScheduledAsync()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_IASYNCONPARTICLEUPDATEJOBSCHEDULEDHANDLER_ONPARTICLEUPDATEJOBSCHEDULEDASYNC_OFFSET))(nullptr);
		}

	};
}

