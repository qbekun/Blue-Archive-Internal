#pragma once
#include "unitysdk.h"

#define UINONEQUIPMENTCARD_2DUNIT_.CTOR_OFFSET UNITYSDK_OFFSET(0x2207190)

	inline static constexpr unsigned int UINonEquipmentCard_2DUnit_TypeDefinitionIndex = 4337;

	class UINonEquipmentCard_2DUnit : public ::UnityEngine::InputSystem::LowLevel::InputDeviceCommandDelegate
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UINONEQUIPMENTCARD_2DUNIT_.CTOR_OFFSET))(nullptr);
		}

	};

