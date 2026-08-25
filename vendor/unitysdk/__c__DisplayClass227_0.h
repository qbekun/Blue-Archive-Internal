#pragma once
#include "unitysdk.h"

class CharacterVisual;
namespace MX::Logic::BattleEntities { class Beam; }
namespace MX::Logic::Battles { class BeamEventArgs; }
class EntityVisual;
class EffectPlayer;

#define <>C__DISPLAYCLASS227_0_.CTOR_OFFSET UNITYSDK_OFFSET(0x12083D0)
#define <>C__DISPLAYCLASS227_0__APPLYBEAMSPAWNED_B__0_OFFSET UNITYSDK_OFFSET(0x12083E0)

	inline static constexpr unsigned int <>c__DisplayClass227_0_TypeDefinitionIndex = 959;

	class <>c__DisplayClass227_0 : public Il2CppObject
	{
	public:
		CharacterVisual* __4__this; // 0x10
		::MX::Logic::BattleEntities::Beam* beam; // 0x18
		::MX::Logic::Battles::BeamEventArgs* snapshot; // 0x20
		EntityVisual* targetVisual; // 0x28

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS227_0_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _ApplyBeamSpawned_b__0(EffectPlayer* arg)
		{
			((::System::Void(*)(EffectPlayer*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS227_0__APPLYBEAMSPAWNED_B__0_OFFSET))(arg, nullptr);
		}

	};

