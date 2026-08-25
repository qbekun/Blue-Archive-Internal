#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UIElements { class ScheduledItem; }

#define UNITYENGINE_UIELEMENTS_TIMEREVENTSCHEDULER_SCHEDULE_OFFSET UNITYSDK_OFFSET(0xA325DE0)
#define UNITYENGINE_UIELEMENTS_TIMEREVENTSCHEDULER_REMOVEDSCHEDULEDITEMAT_OFFSET UNITYSDK_OFFSET(0xA326030)
#define UNITYENGINE_UIELEMENTS_TIMEREVENTSCHEDULER_UNSCHEDULE_OFFSET UNITYSDK_OFFSET(0xA3260A0)
#define UNITYENGINE_UIELEMENTS_TIMEREVENTSCHEDULER_PRIVATEUNSCHEDULE_OFFSET UNITYSDK_OFFSET(0xA3262A0)
#define UNITYENGINE_UIELEMENTS_TIMEREVENTSCHEDULER_UPDATESCHEDULEDEVENTS_OFFSET UNITYSDK_OFFSET(0xA326380)
#define UNITYENGINE_UIELEMENTS_TIMEREVENTSCHEDULER_.CTOR_OFFSET UNITYSDK_OFFSET(0xA3266E0)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int TimerEventScheduler_TypeDefinitionIndex = 30151;

	class TimerEventScheduler : public Il2CppObject
	{
	public:
		Il2CppObject* m_ScheduledItems; // 0x10
		::System::Boolean m_TransactionMode; // 0x18
		Il2CppObject* m_ScheduleTransactions; // 0x20
		Il2CppObject* m_UnscheduleTransactions; // 0x28
		::System::Boolean disableThrottling; // 0x30
		::System::Int32 m_LastUpdatedIndex; // 0x34

		::System::Void Schedule(::UnityEngine::UIElements::ScheduledItem* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::ScheduledItem*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TIMEREVENTSCHEDULER_SCHEDULE_OFFSET))(arg, nullptr);
		}

		::System::Boolean RemovedScheduledItemAt(::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TIMEREVENTSCHEDULER_REMOVEDSCHEDULEDITEMAT_OFFSET))(arg, nullptr);
		}

		::System::Void Unschedule(::UnityEngine::UIElements::ScheduledItem* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::ScheduledItem*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TIMEREVENTSCHEDULER_UNSCHEDULE_OFFSET))(arg, nullptr);
		}

		::System::Boolean PrivateUnSchedule(::UnityEngine::UIElements::ScheduledItem* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::UIElements::ScheduledItem*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TIMEREVENTSCHEDULER_PRIVATEUNSCHEDULE_OFFSET))(arg, nullptr);
		}

		::System::Void UpdateScheduledEvents()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TIMEREVENTSCHEDULER_UPDATESCHEDULEDEVENTS_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TIMEREVENTSCHEDULER_.CTOR_OFFSET))(nullptr);
		}

	};
}

