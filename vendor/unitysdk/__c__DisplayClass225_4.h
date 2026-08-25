#pragma once
#include "unitysdk.h"

namespace MX::Logic::BattleEntities { class NonTargetProjectile; }
class <>c__DisplayClass225_2;
class EffectPlayer;

#define <>C__DISPLAYCLASS225_4_.CTOR_OFFSET UNITYSDK_OFFSET(0x1208080)
#define <>C__DISPLAYCLASS225_4__APPLYPROJECTILESPAWNED_B__2_OFFSET UNITYSDK_OFFSET(0x1208090)

	inline static constexpr unsigned int <>c__DisplayClass225_4_TypeDefinitionIndex = 958;

	class <>c__DisplayClass225_4 : public Il2CppObject
	{
	public:
		::MX::Logic::BattleEntities::NonTargetProjectile* nonTargetProjectile; // 0x10
		::System::Int32 duration; // 0x18
		<>c__DisplayClass225_2* CS$__8__locals4; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS225_4_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _ApplyProjectileSpawned_b__2(EffectPlayer* arg)
		{
			((::System::Void(*)(EffectPlayer*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS225_4__APPLYPROJECTILESPAWNED_B__2_OFFSET))(arg, nullptr);
		}

	};

