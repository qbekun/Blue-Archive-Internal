#pragma once
#include "unitysdk.h"

#define UIEQUIPMENTCARD_1DUNIT_.CTOR_OFFSET UNITYSDK_OFFSET(0x22066E0)

	inline static constexpr unsigned int UIEquipmentCard_1DUnit_TypeDefinitionIndex = 4330;

	class UIEquipmentCard_1DUnit : public ::UnityEngine::InputSystem::DualShock::LowLevel::DualShockHIDOutputReport
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEQUIPMENTCARD_1DUNIT_.CTOR_OFFSET))(nullptr);
		}

	};

