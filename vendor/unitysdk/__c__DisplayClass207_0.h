#pragma once
#include "unitysdk.h"

class CharacterVisual;
namespace MX::Logic::Battles { class AttackEventArgs; }
class EntityVisual;
namespace MX::Logic::BattleEntities { class BarrierObstacle; }
class EffectPlayer;

#define <>C__DISPLAYCLASS207_0_.CTOR_OFFSET UNITYSDK_OFFSET(0x1203480)
#define <>C__DISPLAYCLASS207_0__APPLYBARRIERHITRESULT_B__0_OFFSET UNITYSDK_OFFSET(0x1203490)

	inline static constexpr unsigned int <>c__DisplayClass207_0_TypeDefinitionIndex = 948;

	class <>c__DisplayClass207_0 : public Il2CppObject
	{
	public:
		CharacterVisual* __4__this; // 0x10
		::MX::Logic::Battles::AttackEventArgs* snapshot; // 0x18
		EntityVisual* caster; // 0x20
		::MX::Logic::BattleEntities::BarrierObstacle* barrierObstacle; // 0x28

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS207_0_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _ApplyBarrierHitResult_b__0(EffectPlayer* arg)
		{
			((::System::Void(*)(EffectPlayer*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS207_0__APPLYBARRIERHITRESULT_B__0_OFFSET))(arg, nullptr);
		}

	};

