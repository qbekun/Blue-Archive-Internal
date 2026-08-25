#pragma once
#include "unitysdk.h"

class CharacterBoundOnRailsProjectileMovementComponent;

#define CHARACTERBOUNDONRAILSPROJECTILEMOVEMENTSYSTEM_UPDATE_OFFSET UNITYSDK_OFFSET(0x15A62A0)
#define CHARACTERBOUNDONRAILSPROJECTILEMOVEMENTSYSTEM_.CTOR_OFFSET UNITYSDK_OFFSET(0x15A6740)

	inline static constexpr unsigned int CharacterBoundOnRailsProjectileMovementSystem_TypeDefinitionIndex = 1092;

	class CharacterBoundOnRailsProjectileMovementSystem : public Il2CppObject
	{
	public:
		Il2CppObject* reachedBullets; // 0x10

		::System::Void Update(CharacterBoundOnRailsProjectileMovementComponent* arg)
		{
			((::System::Void(*)(CharacterBoundOnRailsProjectileMovementComponent*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERBOUNDONRAILSPROJECTILEMOVEMENTSYSTEM_UPDATE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERBOUNDONRAILSPROJECTILEMOVEMENTSYSTEM_.CTOR_OFFSET))(nullptr);
		}

	};

