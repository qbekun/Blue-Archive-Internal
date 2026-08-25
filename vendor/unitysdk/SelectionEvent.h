#pragma once
#include "unitysdk.h"

#define SELECTIONEVENT_.CTOR_OFFSET UNITYSDK_OFFSET(0xA16D150)

	inline static constexpr unsigned int SelectionEvent_TypeDefinitionIndex = 33687;

	class SelectionEvent : public ::UnityEngine::InputSystem::Controls::AnyKeyControl
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SELECTIONEVENT_.CTOR_OFFSET))(nullptr);
		}

	};

