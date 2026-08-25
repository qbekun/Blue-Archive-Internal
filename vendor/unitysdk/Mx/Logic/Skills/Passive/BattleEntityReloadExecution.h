#pragma once
#include "../../../../unitysdk.h"

namespace MX::Logic::Battles { class Battle; }
namespace MX::Logic::BattleEntities { class BattleEntity; }
namespace MX::Logic::Skills::Passive { class PassiveSkill; }

#define MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYRELOADEXECUTION_ENABLE_OFFSET UNITYSDK_OFFSET(0x13FBDF0)
#define MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYRELOADEXECUTION_DISABLE_OFFSET UNITYSDK_OFFSET(0x13FBF80)
#define MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYRELOADEXECUTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x13FC100)
#define MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYRELOADEXECUTION_CHARACTER_AMMORELOADED_OFFSET UNITYSDK_OFFSET(0x13FC1E0)

namespace MX::Logic::Skills::Passive
{
	inline static constexpr unsigned int BattleEntityReloadExecution_TypeDefinitionIndex = 14649;

	class BattleEntityReloadExecution : public Il2CppObject
	{
	public:
		::System::Void Enable(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYRELOADEXECUTION_ENABLE_OFFSET))(arg, nullptr);
		}

		::System::Void Disable(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYRELOADEXECUTION_DISABLE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::Logic::BattleEntities::BattleEntity* arg, ::MX::Logic::BattleEntities::BattleEntity* arg2, ::MX::Logic::Skills::Passive::PassiveSkill* arg3)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::Skills::Passive::PassiveSkill*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYRELOADEXECUTION_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void Character_AmmoReloaded(::System::Object* arg, ::System::EventArgs* arg2)
		{
			((::System::Void(*)(::System::Object*, ::System::EventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYRELOADEXECUTION_CHARACTER_AMMORELOADED_OFFSET))(arg, arg2, nullptr);
		}

	};
}

