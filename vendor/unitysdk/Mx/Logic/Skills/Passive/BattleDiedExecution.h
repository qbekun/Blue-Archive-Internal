#pragma once
#include "../../../../unitysdk.h"

namespace MX::Logic::BattleEntities { class BattleEntity; }
namespace MX::Logic::Skills::Passive { class PassiveSkill; }
namespace MX::Logic::Battles { class Battle; }
namespace MX::Logic::Battles { class KillEventArgs; }

#define MX_LOGIC_SKILLS_PASSIVE_BATTLEDIEDEXECUTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x13F4280)
#define MX_LOGIC_SKILLS_PASSIVE_BATTLEDIEDEXECUTION_DISABLE_OFFSET UNITYSDK_OFFSET(0x13F4370)
#define MX_LOGIC_SKILLS_PASSIVE_BATTLEDIEDEXECUTION_ENABLE_OFFSET UNITYSDK_OFFSET(0x13F4440)
#define MX_LOGIC_SKILLS_PASSIVE_BATTLEDIEDEXECUTION_BATTLE_CHARACTERDIED_OFFSET UNITYSDK_OFFSET(0x13F4530)

namespace MX::Logic::Skills::Passive
{
	inline static constexpr unsigned int BattleDiedExecution_TypeDefinitionIndex = 14613;

	class BattleDiedExecution : public Il2CppObject
	{
	public:
		::System::Void .ctor(::MX::Logic::BattleEntities::BattleEntity* arg, ::MX::Logic::Skills::Passive::PassiveSkill* arg2)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::Skills::Passive::PassiveSkill*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_BATTLEDIEDEXECUTION_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Disable(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_BATTLEDIEDEXECUTION_DISABLE_OFFSET))(arg, nullptr);
		}

		::System::Void Enable(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_BATTLEDIEDEXECUTION_ENABLE_OFFSET))(arg, nullptr);
		}

		::System::Void Battle_CharacterDied(::System::Object* arg, ::MX::Logic::Battles::KillEventArgs* arg2)
		{
			((::System::Void(*)(::System::Object*, ::MX::Logic::Battles::KillEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_BATTLEDIEDEXECUTION_BATTLE_CHARACTERDIED_OFFSET))(arg, arg2, nullptr);
		}

	};
}

