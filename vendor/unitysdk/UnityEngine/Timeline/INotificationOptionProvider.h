#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Timeline { class NotificationFlags; }

#define UNITYENGINE_TIMELINE_INOTIFICATIONOPTIONPROVIDER_GET_FLAGS_OFFSET UNITYSDK_OFFSET(0x000000)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int INotificationOptionProvider_TypeDefinitionIndex = 36291;

	class INotificationOptionProvider : public Il2CppObject
	{
	public:
		::UnityEngine::Timeline::NotificationFlags* get_flags()
		{
			return (return (::UnityEngine::Timeline::NotificationFlags*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_INOTIFICATIONOPTIONPROVIDER_GET_FLAGS_OFFSET))(nullptr);
		}

	};
}

