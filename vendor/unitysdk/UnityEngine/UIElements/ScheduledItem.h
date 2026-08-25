#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UIElements { class TimerState; }

#define UNITYENGINE_UIELEMENTS_SCHEDULEDITEM_GET_STARTMS_OFFSET UNITYSDK_OFFSET(0xA325A50)
#define UNITYENGINE_UIELEMENTS_SCHEDULEDITEM_SET_STARTMS_OFFSET UNITYSDK_OFFSET(0xA325A60)
#define UNITYENGINE_UIELEMENTS_SCHEDULEDITEM_GET_DELAYMS_OFFSET UNITYSDK_OFFSET(0xA325A70)
#define UNITYENGINE_UIELEMENTS_SCHEDULEDITEM_SET_DELAYMS_OFFSET UNITYSDK_OFFSET(0xA325A80)
#define UNITYENGINE_UIELEMENTS_SCHEDULEDITEM_GET_INTERVALMS_OFFSET UNITYSDK_OFFSET(0xA325A90)
#define UNITYENGINE_UIELEMENTS_SCHEDULEDITEM_SET_INTERVALMS_OFFSET UNITYSDK_OFFSET(0xA325AA0)
#define UNITYENGINE_UIELEMENTS_SCHEDULEDITEM_GET_ENDTIMEMS_OFFSET UNITYSDK_OFFSET(0xA325AB0)
#define UNITYENGINE_UIELEMENTS_SCHEDULEDITEM_.CTOR_OFFSET UNITYSDK_OFFSET(0xA325AC0)
#define UNITYENGINE_UIELEMENTS_SCHEDULEDITEM_RESETSTARTTIME_OFFSET UNITYSDK_OFFSET(0xA325B70)
#define UNITYENGINE_UIELEMENTS_SCHEDULEDITEM_PERFORMTIMERUPDATE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_SCHEDULEDITEM_ONITEMUNSCHEDULED_OFFSET UNITYSDK_OFFSET(0xA325BC0)
#define UNITYENGINE_UIELEMENTS_SCHEDULEDITEM_SHOULDUNSCHEDULE_OFFSET UNITYSDK_OFFSET(0xA325BD0)
#define UNITYENGINE_UIELEMENTS_SCHEDULEDITEM_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA325BF0)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int ScheduledItem_TypeDefinitionIndex = 30150;

	class ScheduledItem : public Il2CppObject
	{
	public:
		Il2CppObject* timerUpdateStopCondition; // 0x10
		Il2CppObject* OnceCondition; // 0x0
		Il2CppObject* ForeverCondition; // 0x8
		::System::Int64 _startMs_k__BackingField; // 0x18
		::System::Int64 _delayMs_k__BackingField; // 0x20
		::System::Int64 _intervalMs_k__BackingField; // 0x28
		::System::Int64 _endTimeMs_k__BackingField; // 0x30

		::System::Int64 get_startMs()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_SCHEDULEDITEM_GET_STARTMS_OFFSET))(nullptr);
		}

		::System::Void set_startMs(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_SCHEDULEDITEM_SET_STARTMS_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_delayMs()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_SCHEDULEDITEM_GET_DELAYMS_OFFSET))(nullptr);
		}

		::System::Void set_delayMs(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_SCHEDULEDITEM_SET_DELAYMS_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_intervalMs()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_SCHEDULEDITEM_GET_INTERVALMS_OFFSET))(nullptr);
		}

		::System::Void set_intervalMs(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_SCHEDULEDITEM_SET_INTERVALMS_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_endTimeMs()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_SCHEDULEDITEM_GET_ENDTIMEMS_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_SCHEDULEDITEM_.CTOR_OFFSET))(nullptr);
		}

		::System::Void ResetStartTime()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_SCHEDULEDITEM_RESETSTARTTIME_OFFSET))(nullptr);
		}

		::System::Void PerformTimerUpdate(::UnityEngine::UIElements::TimerState* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::TimerState*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_SCHEDULEDITEM_PERFORMTIMERUPDATE_OFFSET))(arg, nullptr);
		}

		::System::Void OnItemUnscheduled()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_SCHEDULEDITEM_ONITEMUNSCHEDULED_OFFSET))(nullptr);
		}

		::System::Boolean ShouldUnschedule()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_SCHEDULEDITEM_SHOULDUNSCHEDULE_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_SCHEDULEDITEM_.CCTOR_OFFSET))(nullptr);
		}

	};
}

