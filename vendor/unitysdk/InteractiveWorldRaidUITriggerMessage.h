#pragma once
#include "unitysdk.h"

class TriggerType;

#define INTERACTIVEWORLDRAIDUITRIGGERMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x26E2A30)

	inline static constexpr unsigned int InteractiveWorldRaidUITriggerMessage_TypeDefinitionIndex = 386;

	class InteractiveWorldRaidUITriggerMessage : public ::TriInspector::TitleAttribute
	{
	public:
		TriggerType* Type; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDUITRIGGERMESSAGE_.CTOR_OFFSET))(nullptr);
		}

	};

