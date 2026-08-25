#pragma once
#include "../../../../unitysdk.h"

namespace UnityEngine::ParticleSystemJobs { class ParticleSystemJobData; }
namespace Cysharp::Threading::Tasks::Triggers { class IAsyncOnParticleUpdateJobScheduledHandler; }

#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPARTICLEUPDATEJOBSCHEDULEDTRIGGER_ONPARTICLEUPDATEJOBSCHEDULED_OFFSET UNITYSDK_OFFSET(0x9DEA100)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPARTICLEUPDATEJOBSCHEDULEDTRIGGER_GETONPARTICLEUPDATEJOBSCHEDULEDASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x9DEA160)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPARTICLEUPDATEJOBSCHEDULEDTRIGGER_GETONPARTICLEUPDATEJOBSCHEDULEDASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x9DEA1D0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPARTICLEUPDATEJOBSCHEDULEDTRIGGER_ONPARTICLEUPDATEJOBSCHEDULEDASYNC_OFFSET UNITYSDK_OFFSET(0x9DEA250)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPARTICLEUPDATEJOBSCHEDULEDTRIGGER_ONPARTICLEUPDATEJOBSCHEDULEDASYNC_OFFSET UNITYSDK_OFFSET(0x9DEA330)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPARTICLEUPDATEJOBSCHEDULEDTRIGGER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9DEA420)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int AsyncParticleUpdateJobScheduledTrigger_TypeDefinitionIndex = 36050;

	class AsyncParticleUpdateJobScheduledTrigger : public ::FlatData::BuffConditionType
	{
	public:
		::System::Void OnParticleUpdateJobScheduled(::UnityEngine::ParticleSystemJobs::ParticleSystemJobData* arg)
		{
			((::System::Void(*)(::UnityEngine::ParticleSystemJobs::ParticleSystemJobData*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPARTICLEUPDATEJOBSCHEDULEDTRIGGER_ONPARTICLEUPDATEJOBSCHEDULED_OFFSET))(arg, nullptr);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnParticleUpdateJobScheduledHandler* GetOnParticleUpdateJobScheduledAsyncHandler()
		{
			return (return (::Cysharp::Threading::Tasks::Triggers::IAsyncOnParticleUpdateJobScheduledHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPARTICLEUPDATEJOBSCHEDULEDTRIGGER_GETONPARTICLEUPDATEJOBSCHEDULEDASYNCHANDLER_OFFSET))(nullptr);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnParticleUpdateJobScheduledHandler* GetOnParticleUpdateJobScheduledAsyncHandler(::System::Threading::CancellationToken* arg)
		{
			return (return (::Cysharp::Threading::Tasks::Triggers::IAsyncOnParticleUpdateJobScheduledHandler*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPARTICLEUPDATEJOBSCHEDULEDTRIGGER_GETONPARTICLEUPDATEJOBSCHEDULEDASYNCHANDLER_OFFSET))(arg, nullptr);
		}

		Il2CppObject* OnParticleUpdateJobScheduledAsync()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPARTICLEUPDATEJOBSCHEDULEDTRIGGER_ONPARTICLEUPDATEJOBSCHEDULEDASYNC_OFFSET))(nullptr);
		}

		Il2CppObject* OnParticleUpdateJobScheduledAsync(::System::Threading::CancellationToken* arg)
		{
			return (return (Il2CppObject*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPARTICLEUPDATEJOBSCHEDULEDTRIGGER_ONPARTICLEUPDATEJOBSCHEDULEDASYNC_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPARTICLEUPDATEJOBSCHEDULEDTRIGGER_.CTOR_OFFSET))(nullptr);
		}

	};
}

