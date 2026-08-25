#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UIElements { class ScheduledItem; }

#define UNITYENGINE_UIELEMENTS_ISCHEDULER_UNSCHEDULE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_ISCHEDULER_SCHEDULE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_ISCHEDULER_UPDATESCHEDULEDEVENTS_OFFSET UNITYSDK_OFFSET(0x000000)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int IScheduler_TypeDefinitionIndex = 30148;

	class IScheduler : public Il2CppObject
	{
	public:
		::System::Void Unschedule(::UnityEngine::UIElements::ScheduledItem* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::ScheduledItem*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_ISCHEDULER_UNSCHEDULE_OFFSET))(arg, nullptr);
		}

		::System::Void Schedule(::UnityEngine::UIElements::ScheduledItem* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::ScheduledItem*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_ISCHEDULER_SCHEDULE_OFFSET))(arg, nullptr);
		}

		::System::Void UpdateScheduledEvents()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_ISCHEDULER_UPDATESCHEDULEDEVENTS_OFFSET))(nullptr);
		}

	};
}

