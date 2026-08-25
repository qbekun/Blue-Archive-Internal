#pragma once
#include "unitysdk.h"

#define CONTROLSCHANGEDEVENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9F192D0)

	inline static constexpr unsigned int ControlsChangedEvent_TypeDefinitionIndex = 28562;

	class ControlsChangedEvent : public <get_patterns>d__4
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONTROLSCHANGEDEVENT_.CTOR_OFFSET))(nullptr);
		}

	};

