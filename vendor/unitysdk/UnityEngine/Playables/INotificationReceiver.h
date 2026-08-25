#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Playables { class Playable; }
namespace UnityEngine::Playables { class INotification; }

#define UNITYENGINE_PLAYABLES_INOTIFICATIONRECEIVER_ONNOTIFY_OFFSET UNITYSDK_OFFSET(0x000000)

namespace UnityEngine::Playables
{
	inline static constexpr unsigned int INotificationReceiver_TypeDefinitionIndex = 31600;

	class INotificationReceiver : public Il2CppObject
	{
	public:
		::System::Void OnNotify(::UnityEngine::Playables::Playable* arg, ::UnityEngine::Playables::INotification* arg, ::System::Object* arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::Playable*, ::UnityEngine::Playables::INotification*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_INOTIFICATIONRECEIVER_ONNOTIFY_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

