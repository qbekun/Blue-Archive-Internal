#pragma once
#include "../../../../unitysdk.h"

namespace MX::Logic::Battles { class Battle; }
namespace MX::Logic::BattleEntities { class BattleEntity; }
namespace MX::Logic::Skills::Passive { class PassiveSkill; }
namespace MX::Logic::Battles { class KillEventArgs; }

#define MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYDIEDEXECUTION_DISABLE_OFFSET UNITYSDK_OFFSET(0x13F8DC0)
#define MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYDIEDEXECUTION_ENABLE_OFFSET UNITYSDK_OFFSET(0x13F8EC0)
#define MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYDIEDEXECUTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x13F8FE0)
#define MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYDIEDEXECUTION_CHARACTER_DIED_OFFSET UNITYSDK_OFFSET(0x13F90C0)

namespace MX::Logic::Skills::Passive
{
	inline static constexpr unsigned int BattleEntityDiedExecution_TypeDefinitionIndex = 14630;

	class BattleEntityDiedExecution : public Il2CppObject
	{
	public:
		::System::Void Disable(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYDIEDEXECUTION_DISABLE_OFFSET))(arg, nullptr);
		}

		::System::Void Enable(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYDIEDEXECUTION_ENABLE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::Logic::BattleEntities::BattleEntity* arg, ::MX::Logic::BattleEntities::BattleEntity* arg2, ::MX::Logic::Skills::Passive::PassiveSkill* arg3)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::Skills::Passive::PassiveSkill*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYDIEDEXECUTION_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void Character_Died(::System::Object* arg, ::MX::Logic::Battles::KillEventArgs* arg2)
		{
			((::System::Void(*)(::System::Object*, ::MX::Logic::Battles::KillEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYDIEDEXECUTION_CHARACTER_DIED_OFFSET))(arg, arg2, nullptr);
		}

	};
}

