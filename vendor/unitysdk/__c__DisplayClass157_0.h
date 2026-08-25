#pragma once
#include "unitysdk.h"

namespace MX::Logic::Battles { class CharacterGroup; }
namespace MX::Logic::BattleEntities { class BattleEntity; }
namespace MX::Logic::BattleEntities { class SkillSlot; }
namespace MX::Logic::BattleEntities { class O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4; }
namespace MX::Logic::Skills { class TargetEntityType; }
namespace UnityEngine { class Vector2; }

	inline static constexpr unsigned int <>c__DisplayClass157_0_TypeDefinitionIndex = 14425;

	class <>c__DisplayClass157_0 : public Il2CppObject
	{
	public:
		::MX::Logic::Battles::CharacterGroup* __4__this; // 0x10
		::MX::Logic::BattleEntities::BattleEntity* owner; // 0x18
		::MX::Logic::BattleEntities::SkillSlot* skillSlot; // 0x20
		::System::Boolean ignoreUntargetable; // 0x24
		::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4* targetCharacter; // 0x28
		Il2CppObject* allValidTargets; // 0x30
		::MX::Logic::Skills::TargetEntityType* targetEntityType; // 0x38
		::UnityEngine::Vector2* position2D; // 0x3C

	};

