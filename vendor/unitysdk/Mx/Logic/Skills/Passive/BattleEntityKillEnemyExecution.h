#pragma once
#include "../../../../unitysdk.h"

namespace MX::Logic::Battles { class KillEventArgs; }
namespace MX::Logic::Battles { class Battle; }
namespace MX::Logic::BattleEntities { class BattleEntity; }
namespace MX::Logic::Skills::Passive { class PassiveSkill; }

#define MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYKILLENEMYEXECUTION_BATTLE_CHARACTERDIED_OFFSET UNITYSDK_OFFSET(0x13FB110)
#define MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYKILLENEMYEXECUTION_ENABLE_OFFSET UNITYSDK_OFFSET(0x13FB250)
#define MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYKILLENEMYEXECUTION_DISABLE_OFFSET UNITYSDK_OFFSET(0x13FB300)
#define MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYKILLENEMYEXECUTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x13FB3B0)

namespace MX::Logic::Skills::Passive
{
	inline static constexpr unsigned int BattleEntityKillEnemyExecution_TypeDefinitionIndex = 14645;

	class BattleEntityKillEnemyExecution : public Il2CppObject
	{
	public:
		Il2CppObject* targetSkillTypes; // 0x50

		::System::Void Battle_CharacterDied(::System::Object* arg, ::MX::Logic::Battles::KillEventArgs* arg2)
		{
			((::System::Void(*)(::System::Object*, ::MX::Logic::Battles::KillEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYKILLENEMYEXECUTION_BATTLE_CHARACTERDIED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Enable(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYKILLENEMYEXECUTION_ENABLE_OFFSET))(arg, nullptr);
		}

		::System::Void Disable(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYKILLENEMYEXECUTION_DISABLE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::Logic::BattleEntities::BattleEntity* arg, ::MX::Logic::BattleEntities::BattleEntity* arg2, ::MX::Logic::Skills::Passive::PassiveSkill* arg3)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::Skills::Passive::PassiveSkill*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYKILLENEMYEXECUTION_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

	};
}

