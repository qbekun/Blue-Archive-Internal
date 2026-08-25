#pragma once
#include "unitysdk.h"

class NotificationStyle;
class LockScreenDisplay;

	inline static constexpr unsigned int LocalNotificationChannel_TypeDefinitionIndex = 3833;

	class LocalNotificationChannel : public Il2CppObject
	{
	public:
		::System::String* Id; // 0x10
		::System::String* Name; // 0x18
		NotificationStyle* NotificationStyle; // 0x20
		LockScreenDisplay* LockScreenDisplay; // 0x24

	};

