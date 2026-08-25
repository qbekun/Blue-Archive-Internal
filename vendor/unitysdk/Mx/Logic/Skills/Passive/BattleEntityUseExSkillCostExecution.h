#pragma once
#include "../../../../unitysdk.h"

namespace MX::Logic::Battles { class PlayerSkillCardUsedEventArgs; }
namespace MX::Logic::Battles { class Battle; }
namespace MX::Logic::BattleEntities { class BattleEntity; }
namespace MX::Logic::Skills::Passive { class PassiveSkill; }

#define MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYUSEEXSKILLCOSTEXECUTION_BATTLE_PLAYERSKILLCARDUSED_OFFSET UNITYSDK_OFFSET(0x1400360)
#define MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYUSEEXSKILLCOSTEXECUTION_DISABLE_OFFSET UNITYSDK_OFFSET(0x1400490)
#define MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYUSEEXSKILLCOSTEXECUTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x1400540)
#define MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYUSEEXSKILLCOSTEXECUTION_ENABLE_OFFSET UNITYSDK_OFFSET(0x14006D0)

namespace MX::Logic::Skills::Passive
{
	inline static constexpr unsigned int BattleEntityUseExSkillCostExecution_TypeDefinitionIndex = 14659;

	class BattleEntityUseExSkillCostExecution : public Il2CppObject
	{
	public:
		::System::Int32 triggerCost; // 0x50

		::System::Void Battle_PlayerSkillCardUsed(::System::Object* arg, ::MX::Logic::Battles::PlayerSkillCardUsedEventArgs* arg2)
		{
			((::System::Void(*)(::System::Object*, ::MX::Logic::Battles::PlayerSkillCardUsedEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYUSEEXSKILLCOSTEXECUTION_BATTLE_PLAYERSKILLCARDUSED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Disable(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYUSEEXSKILLCOSTEXECUTION_DISABLE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::Logic::BattleEntities::BattleEntity* arg, ::MX::Logic::BattleEntities::BattleEntity* arg2, ::MX::Logic::Skills::Passive::PassiveSkill* arg3)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::Skills::Passive::PassiveSkill*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYUSEEXSKILLCOSTEXECUTION_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void Enable(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYUSEEXSKILLCOSTEXECUTION_ENABLE_OFFSET))(arg, nullptr);
		}

	};
}

