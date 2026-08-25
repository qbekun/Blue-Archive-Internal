#pragma once
#include "unitysdk.h"

#define BUTTONCLICKEDEVENT_.CTOR_OFFSET UNITYSDK_OFFSET(0xA2EAA50)

	inline static constexpr unsigned int ButtonClickedEvent_TypeDefinitionIndex = 34742;

	class ButtonClickedEvent : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BUTTONCLICKEDEVENT_.CTOR_OFFSET))(nullptr);
		}

	};

