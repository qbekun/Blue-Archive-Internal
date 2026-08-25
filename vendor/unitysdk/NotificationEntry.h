#pragma once
#include "unitysdk.h"

namespace UnityEngine::Playables { class INotification; }
namespace UnityEngine::Timeline { class NotificationFlags; }

#define NOTIFICATIONENTRY_GET_TRIGGERINEDITOR_OFFSET UNITYSDK_OFFSET(0xA1AB4D0)
#define NOTIFICATIONENTRY_GET_PREWARM_OFFSET UNITYSDK_OFFSET(0xA1AB4E0)
#define NOTIFICATIONENTRY_GET_TRIGGERONCE_OFFSET UNITYSDK_OFFSET(0xA1AB4F0)

	inline static constexpr unsigned int NotificationEntry_TypeDefinitionIndex = 36313;

	class NotificationEntry : public Il2CppObject
	{
	public:
		::System::Double time; // 0x10
		::UnityEngine::Playables::INotification* payload; // 0x18
		::System::Boolean notificationFired; // 0x20
		::UnityEngine::Timeline::NotificationFlags* flags; // 0x22

		::System::Boolean get_triggerInEditor()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NOTIFICATIONENTRY_GET_TRIGGERINEDITOR_OFFSET))(nullptr);
		}

		::System::Boolean get_prewarm()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NOTIFICATIONENTRY_GET_PREWARM_OFFSET))(nullptr);
		}

		::System::Boolean get_triggerOnce()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NOTIFICATIONENTRY_GET_TRIGGERONCE_OFFSET))(nullptr);
		}

	};

