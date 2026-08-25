#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Timeline { class NotificationFlags; }

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int NotificationFlags_TypeDefinitionIndex = 36309;

	class NotificationFlags : public Il2CppObject
	{
	public:
		::System::Int16 value__; // 0x10
		::UnityEngine::Timeline::NotificationFlags* TriggerInEditMode; // 0x0
		::UnityEngine::Timeline::NotificationFlags* Retroactive; // 0x0
		::UnityEngine::Timeline::NotificationFlags* TriggerOnce; // 0x0

	};
}

