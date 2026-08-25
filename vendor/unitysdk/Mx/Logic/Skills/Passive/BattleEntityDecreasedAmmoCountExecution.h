#pragma once
#include "../../../../unitysdk.h"

namespace MX::Logic::BattleEntities { class BattleEntity; }
namespace MX::Logic::Skills::Passive { class PassiveSkill; }
namespace MX::Logic::Battles { class Battle; }
namespace MX::Logic::Battles { class CharacterBulletCountChangedEventArgs; }

#define MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYDECREASEDAMMOCOUNTEXECUTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x13F8990)
#define MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYDECREASEDAMMOCOUNTEXECUTION_ENABLE_OFFSET UNITYSDK_OFFSET(0x13F8A80)
#define MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYDECREASEDAMMOCOUNTEXECUTION_DISABLE_OFFSET UNITYSDK_OFFSET(0x13F8C00)
#define MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYDECREASEDAMMOCOUNTEXECUTION_CHARACTER_BULLETCOUNTCHANGED_OFFSET UNITYSDK_OFFSET(0x13F8D60)

namespace MX::Logic::Skills::Passive
{
	inline static constexpr unsigned int BattleEntityDecreasedAmmoCountExecution_TypeDefinitionIndex = 14629;

	class BattleEntityDecreasedAmmoCountExecution : public Il2CppObject
	{
	public:
		::System::Int64 countDiff; // 0x50

		::System::Void .ctor(::MX::Logic::BattleEntities::BattleEntity* arg, ::MX::Logic::BattleEntities::BattleEntity* arg2, ::MX::Logic::Skills::Passive::PassiveSkill* arg3)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::Skills::Passive::PassiveSkill*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYDECREASEDAMMOCOUNTEXECUTION_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void Enable(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYDECREASEDAMMOCOUNTEXECUTION_ENABLE_OFFSET))(arg, nullptr);
		}

		::System::Void Disable(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYDECREASEDAMMOCOUNTEXECUTION_DISABLE_OFFSET))(arg, nullptr);
		}

		::System::Void Character_BulletCountChanged(::System::Object* arg, ::MX::Logic::Battles::CharacterBulletCountChangedEventArgs* arg2)
		{
			((::System::Void(*)(::System::Object*, ::MX::Logic::Battles::CharacterBulletCountChangedEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYDECREASEDAMMOCOUNTEXECUTION_CHARACTER_BULLETCOUNTCHANGED_OFFSET))(arg, arg2, nullptr);
		}

	};
}

