#pragma once
#include "unitysdk.h"

class CharacterVisual;
namespace MX::Logic::Battles { class ProjectileSpawnedEventArgs; }
namespace MX::Logic::BattleEntities { class TargetPositionProjectile; }
class EntityVisual;

#define <>C__DISPLAYCLASS225_0_.CTOR_OFFSET UNITYSDK_OFFSET(0x12074A0)

	inline static constexpr unsigned int <>c__DisplayClass225_0_TypeDefinitionIndex = 954;

	class <>c__DisplayClass225_0 : public Il2CppObject
	{
	public:
		CharacterVisual* __4__this; // 0x10
		::MX::Logic::Battles::ProjectileSpawnedEventArgs* snapshot; // 0x18
		::MX::Logic::BattleEntities::TargetPositionProjectile* positionProjectile; // 0x20
		EntityVisual* target; // 0x28

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS225_0_.CTOR_OFFSET))(nullptr);
		}

	};

