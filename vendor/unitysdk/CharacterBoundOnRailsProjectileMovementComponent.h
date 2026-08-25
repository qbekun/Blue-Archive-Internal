#pragma once
#include "unitysdk.h"

class CharacterBoundOnRailsProjectileMovementSystem;

#define CHARACTERBOUNDONRAILSPROJECTILEMOVEMENTCOMPONENT_UPDATE_OFFSET UNITYSDK_OFFSET(0x15A6280)
#define CHARACTERBOUNDONRAILSPROJECTILEMOVEMENTCOMPONENT_AWAKE_OFFSET UNITYSDK_OFFSET(0x15A66E0)
#define CHARACTERBOUNDONRAILSPROJECTILEMOVEMENTCOMPONENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x15A67C0)

	inline static constexpr unsigned int CharacterBoundOnRailsProjectileMovementComponent_TypeDefinitionIndex = 1091;

	class CharacterBoundOnRailsProjectileMovementComponent : public Il2CppObject
	{
	public:
		CharacterBoundOnRailsProjectileMovementSystem* movementSystem; // 0x78

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERBOUNDONRAILSPROJECTILEMOVEMENTCOMPONENT_UPDATE_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERBOUNDONRAILSPROJECTILEMOVEMENTCOMPONENT_AWAKE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERBOUNDONRAILSPROJECTILEMOVEMENTCOMPONENT_.CTOR_OFFSET))(nullptr);
		}

	};

