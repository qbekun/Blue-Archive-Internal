#pragma once
#include "unitysdk.h"

#define TOUCHSCREENKEYBOARDEVENT_.CTOR_OFFSET UNITYSDK_OFFSET(0xA16D1D0)

	inline static constexpr unsigned int TouchScreenKeyboardEvent_TypeDefinitionIndex = 33689;

	class TouchScreenKeyboardEvent : public ::UnityEngine::InputSystem::Controls::ButtonControl
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TOUCHSCREENKEYBOARDEVENT_.CTOR_OFFSET))(nullptr);
		}

	};

