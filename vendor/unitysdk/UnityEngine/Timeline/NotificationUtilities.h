#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Playables { class PlayableGraph; }
namespace UnityEngine::Playables { class DirectorWrapMode; }

#define UNITYENGINE_TIMELINE_NOTIFICATIONUTILITIES_CREATENOTIFICATIONSPLAYABLE_OFFSET UNITYSDK_OFFSET(0xA1AE1A0)
#define UNITYENGINE_TIMELINE_NOTIFICATIONUTILITIES_TRACKTYPESUPPORTSNOTIFICATIONS_OFFSET UNITYSDK_OFFSET(0xA1AE8E0)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int NotificationUtilities_TypeDefinitionIndex = 36336;

	class NotificationUtilities : public Il2CppObject
	{
	public:
		Il2CppObject* CreateNotificationsPlayable(::UnityEngine::Playables::PlayableGraph* arg, Il2CppObject* arg, ::System::Double arg, ::UnityEngine::Playables::DirectorWrapMode* arg)
		{
			return (return (Il2CppObject*(*)(::UnityEngine::Playables::PlayableGraph*, Il2CppObject*, ::System::Double, ::UnityEngine::Playables::DirectorWrapMode*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_NOTIFICATIONUTILITIES_CREATENOTIFICATIONSPLAYABLE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Boolean TrackTypeSupportsNotifications(::System::Type* arg)
		{
			return (return (::System::Boolean(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_NOTIFICATIONUTILITIES_TRACKTYPESUPPORTSNOTIFICATIONS_OFFSET))(arg, nullptr);
		}

	};
}

