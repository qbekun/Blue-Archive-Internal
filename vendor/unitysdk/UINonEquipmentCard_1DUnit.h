#pragma once
#include "unitysdk.h"

#define UINONEQUIPMENTCARD_1DUNIT_.CTOR_OFFSET UNITYSDK_OFFSET(0x2207150)

	inline static constexpr unsigned int UINonEquipmentCard_1DUnit_TypeDefinitionIndex = 4336;

	class UINonEquipmentCard_1DUnit : public ::UnityEngine::InputSystem::Haptics::DualMotorRumble
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UINONEQUIPMENTCARD_1DUNIT_.CTOR_OFFSET))(nullptr);
		}

	};

