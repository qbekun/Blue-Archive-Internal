#pragma once
#include "unitysdk.h"

#define DROPDOWNEVENT_.CTOR_OFFSET UNITYSDK_OFFSET(0xA2F3800)

	inline static constexpr unsigned int DropdownEvent_TypeDefinitionIndex = 34761;

	class DropdownEvent : public ::UnityEngine::InputSystem::Layouts::InputDeviceDescription
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DROPDOWNEVENT_.CTOR_OFFSET))(nullptr);
		}

	};

