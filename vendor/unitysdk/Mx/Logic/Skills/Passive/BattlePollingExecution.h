#pragma once
#include "../../../../unitysdk.h"

namespace MX::Logic::BattleEntities { class BattleEntity; }
namespace MX::Logic::Skills::Passive { class PassiveSkill; }
namespace MX::Logic::Battles { class Battle; }

#define MX_LOGIC_SKILLS_PASSIVE_BATTLEPOLLINGEXECUTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x1402A80)
#define MX_LOGIC_SKILLS_PASSIVE_BATTLEPOLLINGEXECUTION_UPDATE_OFFSET UNITYSDK_OFFSET(0x1402AF0)

namespace MX::Logic::Skills::Passive
{
	inline static constexpr unsigned int BattlePollingExecution_TypeDefinitionIndex = 14664;

	class BattlePollingExecution : public Il2CppObject
	{
	public:
		::System::Void .ctor(::MX::Logic::BattleEntities::BattleEntity* arg, ::MX::Logic::Skills::Passive::PassiveSkill* arg2)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::Skills::Passive::PassiveSkill*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_BATTLEPOLLINGEXECUTION_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Update(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_BATTLEPOLLINGEXECUTION_UPDATE_OFFSET))(arg, nullptr);
		}

	};
}

