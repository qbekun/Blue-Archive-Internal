#pragma once
#include "unitysdk.h"

class LocalNotification;

#define LOCALNOTIFICATIONMANAGER_SET_WASINITIALIZED_OFFSET UNITYSDK_OFFSET(0xC57B10)
#define LOCALNOTIFICATIONMANAGER_INIT_OFFSET UNITYSDK_OFFSET(0xC57B20)
#define LOCALNOTIFICATIONMANAGER_CREATEAPNOTIFICATION_OFFSET UNITYSDK_OFFSET(0xC57C70)
#define LOCALNOTIFICATIONMANAGER_.CTOR_OFFSET UNITYSDK_OFFSET(0xC582A0)
#define LOCALNOTIFICATIONMANAGER_GET_WASINITIALIZED_OFFSET UNITYSDK_OFFSET(0xC58300)
#define LOCALNOTIFICATIONMANAGER_AWAKE_OFFSET UNITYSDK_OFFSET(0xC58310)
#define LOCALNOTIFICATIONMANAGER_REMOVEALLSCHEDULEDNOTIFICATIONS_OFFSET UNITYSDK_OFFSET(0xC57BD0)
#define LOCALNOTIFICATIONMANAGER_CREATECAFENOTIFICATION_OFFSET UNITYSDK_OFFSET(0xC583B0)
#define LOCALNOTIFICATIONMANAGER_REMOVESCHEDULEDNOTIFICATION_OFFSET UNITYSDK_OFFSET(0xC59140)
#define LOCALNOTIFICATIONMANAGER_ONAPPLICATIONPAUSE_OFFSET UNITYSDK_OFFSET(0xC591F0)
#define LOCALNOTIFICATIONMANAGER_SEND_OFFSET UNITYSDK_OFFSET(0xC596E0)

	inline static constexpr unsigned int LocalNotificationManager_TypeDefinitionIndex = 8951;

	class LocalNotificationManager : public ::ToyWebViewShared::Messages::NotifyPopupShow
	{
	public:
		Il2CppObject* channelDict; // 0x20
		Il2CppObject* lastTriggeredPause; // 0x28
		::System::Boolean _WasInitialized_k__BackingField; // 0x2A

		::System::Void set_WasInitialized(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + LOCALNOTIFICATIONMANAGER_SET_WASINITIALIZED_OFFSET))(arg, nullptr);
		}

		::System::Boolean Init()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LOCALNOTIFICATIONMANAGER_INIT_OFFSET))(nullptr);
		}

		LocalNotification* CreateApNotification()
		{
			return ((LocalNotification*(*)(::PVOID))((::PBYTE)hIl2Cpp + LOCALNOTIFICATIONMANAGER_CREATEAPNOTIFICATION_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOCALNOTIFICATIONMANAGER_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean get_WasInitialized()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LOCALNOTIFICATIONMANAGER_GET_WASINITIALIZED_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOCALNOTIFICATIONMANAGER_AWAKE_OFFSET))(nullptr);
		}

		::System::Void RemoveAllScheduledNotifications()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOCALNOTIFICATIONMANAGER_REMOVEALLSCHEDULEDNOTIFICATIONS_OFFSET))(nullptr);
		}

		LocalNotification* CreateCafeNotification()
		{
			return ((LocalNotification*(*)(::PVOID))((::PBYTE)hIl2Cpp + LOCALNOTIFICATIONMANAGER_CREATECAFENOTIFICATION_OFFSET))(nullptr);
		}

		::System::Void RemoveScheduledNotification(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + LOCALNOTIFICATIONMANAGER_REMOVESCHEDULEDNOTIFICATION_OFFSET))(arg, nullptr);
		}

		::System::Void OnApplicationPause(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + LOCALNOTIFICATIONMANAGER_ONAPPLICATIONPAUSE_OFFSET))(arg, nullptr);
		}

		::System::Boolean Send(LocalNotification* arg, ::System::String* str)
		{
			return ((::System::Boolean(*)(LocalNotification*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + LOCALNOTIFICATIONMANAGER_SEND_OFFSET))(arg, str, nullptr);
		}

	};

