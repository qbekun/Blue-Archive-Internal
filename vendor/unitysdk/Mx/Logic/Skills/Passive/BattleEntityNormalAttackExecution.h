#pragma once
#include "../../../../unitysdk.h"

namespace MX::Logic::BattleEntities { class BattleEntity; }
namespace MX::Logic::Skills::Passive { class PassiveSkill; }
namespace MX::Logic::BattleEntities { class ActionChangedEventArgs; }
namespace MX::Logic::Battles { class Battle; }

#define MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYNORMALATTACKEXECUTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x13FB880)
#define MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYNORMALATTACKEXECUTION_CHARACTER_ACTIONCHANGED_OFFSET UNITYSDK_OFFSET(0x13FB960)
#define MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYNORMALATTACKEXECUTION_ENABLE_OFFSET UNITYSDK_OFFSET(0x13FBAA0)
#define MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYNORMALATTACKEXECUTION_DISABLE_OFFSET UNITYSDK_OFFSET(0x13FBBC0)

namespace MX::Logic::Skills::Passive
{
	inline static constexpr unsigned int BattleEntityNormalAttackExecution_TypeDefinitionIndex = 14647;

	class BattleEntityNormalAttackExecution : public Il2CppObject
	{
	public:
		::System::Void .ctor(::MX::Logic::BattleEntities::BattleEntity* arg, ::MX::Logic::BattleEntities::BattleEntity* arg2, ::MX::Logic::Skills::Passive::PassiveSkill* arg3)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::Skills::Passive::PassiveSkill*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYNORMALATTACKEXECUTION_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void Character_ActionChanged(::System::Object* arg, ::MX::Logic::BattleEntities::ActionChangedEventArgs* arg2)
		{
			((::System::Void(*)(::System::Object*, ::MX::Logic::BattleEntities::ActionChangedEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYNORMALATTACKEXECUTION_CHARACTER_ACTIONCHANGED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Enable(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYNORMALATTACKEXECUTION_ENABLE_OFFSET))(arg, nullptr);
		}

		::System::Void Disable(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYNORMALATTACKEXECUTION_DISABLE_OFFSET))(arg, nullptr);
		}

	};
}

