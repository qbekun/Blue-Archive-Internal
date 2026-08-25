#pragma once
#include "unitysdk.h"

class NotificationCategory;

#define LOCALNOTIFICATION_.CTOR_OFFSET UNITYSDK_OFFSET(0x20F41C0)

	inline static constexpr unsigned int LocalNotification_TypeDefinitionIndex = 3832;

	class LocalNotification : public Il2CppObject
	{
	public:
		Il2CppObject* Id; // 0x10
		::System::String* Title; // 0x18
		::System::String* Text; // 0x20
		Il2CppObject* TriggerTime; // 0x28
		NotificationCategory* Category; // 0x38
		::System::String* SmallIcon; // 0x40
		::System::String* LargeIcon; // 0x48
		::System::String* SubTitle; // 0x50

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOCALNOTIFICATION_.CTOR_OFFSET))(nullptr);
		}

	};

