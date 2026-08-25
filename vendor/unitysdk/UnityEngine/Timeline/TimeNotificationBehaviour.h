#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Playables { class Playable; }
namespace UnityEngine::Playables { class FrameData; }
namespace UnityEngine::Playables { class PlayableOutput; }
namespace UnityEngine::Playables { class INotification; }
namespace UnityEngine::Timeline { class NotificationFlags; }
namespace UnityEngine::Playables { class PlayableGraph; }
namespace UnityEngine::Playables { class DirectorWrapMode; }

#define UNITYENGINE_TIMELINE_TIMENOTIFICATIONBEHAVIOUR_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0xA1AA2B0)
#define UNITYENGINE_TIMELINE_TIMENOTIFICATIONBEHAVIOUR_SYNCDURATIONWITHEXTERNALSOURCE_OFFSET UNITYSDK_OFFSET(0xA1AA660)
#define UNITYENGINE_TIMELINE_TIMENOTIFICATIONBEHAVIOUR_TRIGGER_INTERNAL_OFFSET UNITYSDK_OFFSET(0xA1AA5F0)
#define UNITYENGINE_TIMELINE_TIMENOTIFICATIONBEHAVIOUR_RESTORE_INTERNAL_OFFSET UNITYSDK_OFFSET(0xA1AA770)
#define UNITYENGINE_TIMELINE_TIMENOTIFICATIONBEHAVIOUR_ADDNOTIFICATION_OFFSET UNITYSDK_OFFSET(0xA1AA780)
#define UNITYENGINE_TIMELINE_TIMENOTIFICATIONBEHAVIOUR_ONGRAPHSTART_OFFSET UNITYSDK_OFFSET(0xA1AA890)
#define UNITYENGINE_TIMELINE_TIMENOTIFICATIONBEHAVIOUR_SORTNOTIFICATIONS_OFFSET UNITYSDK_OFFSET(0xA1AA4C0)
#define UNITYENGINE_TIMELINE_TIMENOTIFICATIONBEHAVIOUR_CANRESTORENOTIFICATION_OFFSET UNITYSDK_OFFSET(0xA1AAAA0)
#define UNITYENGINE_TIMELINE_TIMENOTIFICATIONBEHAVIOUR_TRIGGERNOTIFICATIONSINRANGE_OFFSET UNITYSDK_OFFSET(0xA1AAB10)
#define UNITYENGINE_TIMELINE_TIMENOTIFICATIONBEHAVIOUR_.CTOR_OFFSET UNITYSDK_OFFSET(0xA1AADF0)
#define UNITYENGINE_TIMELINE_TIMENOTIFICATIONBEHAVIOUR_CREATE_OFFSET UNITYSDK_OFFSET(0xA1AAE70)
#define UNITYENGINE_TIMELINE_TIMENOTIFICATIONBEHAVIOUR_PREPAREFRAME_OFFSET UNITYSDK_OFFSET(0xA1AAF90)
#define UNITYENGINE_TIMELINE_TIMENOTIFICATIONBEHAVIOUR_SET_TIMESOURCE_OFFSET UNITYSDK_OFFSET(0xA1AB4C0)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int TimeNotificationBehaviour_TypeDefinitionIndex = 36315;

	class TimeNotificationBehaviour : public Il2CppObject
	{
	public:
		Il2CppObject* m_Notifications; // 0x10
		::System::Double m_PreviousTime; // 0x18
		::System::Boolean m_NeedSortNotifications; // 0x20
		::UnityEngine::Playables::Playable* m_TimeSource; // 0x28

		::System::Void OnBehaviourPause(::UnityEngine::Playables::Playable* arg, ::UnityEngine::Playables::FrameData* arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::Playable*, ::UnityEngine::Playables::FrameData*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMENOTIFICATIONBEHAVIOUR_ONBEHAVIOURPAUSE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SyncDurationWithExternalSource(::UnityEngine::Playables::Playable* arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::Playable*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMENOTIFICATIONBEHAVIOUR_SYNCDURATIONWITHEXTERNALSOURCE_OFFSET))(arg, nullptr);
		}

		::System::Void Trigger_internal(::UnityEngine::Playables::Playable* arg, ::UnityEngine::Playables::PlayableOutput* arg, NotificationEntry&* arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::Playable*, ::UnityEngine::Playables::PlayableOutput*, NotificationEntry&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMENOTIFICATIONBEHAVIOUR_TRIGGER_INTERNAL_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void Restore_internal(NotificationEntry&* arg)
		{
			((::System::Void(*)(NotificationEntry&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMENOTIFICATIONBEHAVIOUR_RESTORE_INTERNAL_OFFSET))(arg, nullptr);
		}

		::System::Void AddNotification(::System::Double arg, ::UnityEngine::Playables::INotification* arg, ::UnityEngine::Timeline::NotificationFlags* arg)
		{
			((::System::Void(*)(::System::Double, ::UnityEngine::Playables::INotification*, ::UnityEngine::Timeline::NotificationFlags*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMENOTIFICATIONBEHAVIOUR_ADDNOTIFICATION_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void OnGraphStart(::UnityEngine::Playables::Playable* arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::Playable*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMENOTIFICATIONBEHAVIOUR_ONGRAPHSTART_OFFSET))(arg, nullptr);
		}

		::System::Void SortNotifications()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMENOTIFICATIONBEHAVIOUR_SORTNOTIFICATIONS_OFFSET))(nullptr);
		}

		::System::Boolean CanRestoreNotification(NotificationEntry* arg, ::UnityEngine::Playables::FrameData* arg, ::System::Double arg, ::System::Double arg)
		{
			return (return (::System::Boolean(*)(NotificationEntry*, ::UnityEngine::Playables::FrameData*, ::System::Double, ::System::Double, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMENOTIFICATIONBEHAVIOUR_CANRESTORENOTIFICATION_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void TriggerNotificationsInRange(::System::Double arg, ::System::Double arg, ::UnityEngine::Playables::FrameData* arg, ::UnityEngine::Playables::Playable* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Double, ::System::Double, ::UnityEngine::Playables::FrameData*, ::UnityEngine::Playables::Playable*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMENOTIFICATIONBEHAVIOUR_TRIGGERNOTIFICATIONSINRANGE_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMENOTIFICATIONBEHAVIOUR_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* Create(::UnityEngine::Playables::PlayableGraph* arg, ::System::Double arg, ::UnityEngine::Playables::DirectorWrapMode* arg)
		{
			return (return (Il2CppObject*(*)(::UnityEngine::Playables::PlayableGraph*, ::System::Double, ::UnityEngine::Playables::DirectorWrapMode*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMENOTIFICATIONBEHAVIOUR_CREATE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void PrepareFrame(::UnityEngine::Playables::Playable* arg, ::UnityEngine::Playables::FrameData* arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::Playable*, ::UnityEngine::Playables::FrameData*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMENOTIFICATIONBEHAVIOUR_PREPAREFRAME_OFFSET))(arg, arg, nullptr);
		}

		::System::Void set_timeSource(::UnityEngine::Playables::Playable* arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::Playable*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMENOTIFICATIONBEHAVIOUR_SET_TIMESOURCE_OFFSET))(arg, nullptr);
		}

	};
}

