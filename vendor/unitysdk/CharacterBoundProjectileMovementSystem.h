#pragma once
#include "unitysdk.h"

class CharacterBoundProjectileMovementComponent;

#define CHARACTERBOUNDPROJECTILEMOVEMENTSYSTEM_.CTOR_OFFSET UNITYSDK_OFFSET(0x15A6850)
#define CHARACTERBOUNDPROJECTILEMOVEMENTSYSTEM_UPDATE_OFFSET UNITYSDK_OFFSET(0x15A6920)

	inline static constexpr unsigned int CharacterBoundProjectileMovementSystem_TypeDefinitionIndex = 1094;

	class CharacterBoundProjectileMovementSystem : public Il2CppObject
	{
	public:
		Il2CppObject* reachedBullets; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERBOUNDPROJECTILEMOVEMENTSYSTEM_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Update(CharacterBoundProjectileMovementComponent* arg)
		{
			((::System::Void(*)(CharacterBoundProjectileMovementComponent*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERBOUNDPROJECTILEMOVEMENTSYSTEM_UPDATE_OFFSET))(arg, nullptr);
		}

	};

