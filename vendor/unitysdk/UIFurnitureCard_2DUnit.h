#pragma once
#include "unitysdk.h"

#define UIFURNITURECARD_2DUNIT_.CTOR_OFFSET UNITYSDK_OFFSET(0x2206760)

	inline static constexpr unsigned int UIFurnitureCard_2DUnit_TypeDefinitionIndex = 4332;

	class UIFurnitureCard_2DUnit : public ::UnityEngine::InputSystem::LowLevel::InitiateUserAccountPairingCommand
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFURNITURECARD_2DUNIT_.CTOR_OFFSET))(nullptr);
		}

	};

