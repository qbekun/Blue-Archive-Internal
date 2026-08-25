#pragma once
#include "../../../../unitysdk.h"

namespace MX::Logic::Battles { class Battle; }
namespace MX::Logic::Battles { class KillEventArgs; }
namespace MX::Logic::BattleEntities { class BattleEntity; }
namespace MX::Logic::Skills::Passive { class PassiveSkill; }

#define MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYDYINGEXECUTION_DISABLE_OFFSET UNITYSDK_OFFSET(0x13FA200)
#define MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYDYINGEXECUTION_ENABLE_OFFSET UNITYSDK_OFFSET(0x13FA300)
#define MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYDYINGEXECUTION_CHARACTER_DYINGSTARTED_OFFSET UNITYSDK_OFFSET(0x13FA420)
#define MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYDYINGEXECUTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x13FA470)

namespace MX::Logic::Skills::Passive
{
	inline static constexpr unsigned int BattleEntityDyingExecution_TypeDefinitionIndex = 14641;

	class BattleEntityDyingExecution : public Il2CppObject
	{
	public:
		::System::Void Disable(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYDYINGEXECUTION_DISABLE_OFFSET))(arg, nullptr);
		}

		::System::Void Enable(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYDYINGEXECUTION_ENABLE_OFFSET))(arg, nullptr);
		}

		::System::Void Character_DyingStarted(::System::Object* arg, ::MX::Logic::Battles::KillEventArgs* arg2)
		{
			((::System::Void(*)(::System::Object*, ::MX::Logic::Battles::KillEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYDYINGEXECUTION_CHARACTER_DYINGSTARTED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor(::MX::Logic::BattleEntities::BattleEntity* arg, ::MX::Logic::BattleEntities::BattleEntity* arg2, ::MX::Logic::Skills::Passive::PassiveSkill* arg3)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::Skills::Passive::PassiveSkill*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYDYINGEXECUTION_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

	};
}

