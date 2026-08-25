#pragma once
#include "../../../../unitysdk.h"

namespace MX::Logic::BattleEntities { class BattleEntity; }
namespace MX::Logic::Skills::Passive { class PassiveSkill; }
namespace MX::Logic::Battles { class Battle; }
namespace MX::Logic::Actions { class HeroAction; }
namespace MX::Logic::BattleEntities { class SkillActionRegisteredEventArgs; }

#define MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYSKILLSTARTEXECUTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x13FDD60)
#define MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYSKILLSTARTEXECUTION_GET_SKILLTYPECONSTRAINTS_OFFSET UNITYSDK_OFFSET(0x13FE010)
#define MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYSKILLSTARTEXECUTION_ENABLE_OFFSET UNITYSDK_OFFSET(0x13FE020)
#define MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYSKILLSTARTEXECUTION_DISABLE_OFFSET UNITYSDK_OFFSET(0x13FEBC0)
#define MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYSKILLSTARTEXECUTION_GET_TARGETACTIONS_OFFSET UNITYSDK_OFFSET(0x13FEF90)
#define MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYSKILLSTARTEXECUTION_REGISTERTRIGGER_OFFSET UNITYSDK_OFFSET(0x13FE780)
#define MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYSKILLSTARTEXECUTION_BATTLEENTITY_SKILLACTIONREGISTERED_OFFSET UNITYSDK_OFFSET(0x13FEFB0)
#define MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYSKILLSTARTEXECUTION_ACTION_STARTED_OFFSET UNITYSDK_OFFSET(0x13FEFD0)

namespace MX::Logic::Skills::Passive
{
	inline static constexpr unsigned int BattleEntitySkillStartExecution_TypeDefinitionIndex = 14655;

	class BattleEntitySkillStartExecution : public Il2CppObject
	{
	public:
		Il2CppObject* _targetActions_k__BackingField; // 0x50
		Il2CppObject* _SkillTypeConstraints_k__BackingField; // 0x58

		::System::Void .ctor(::MX::Logic::BattleEntities::BattleEntity* arg, ::MX::Logic::BattleEntities::BattleEntity* arg2, ::MX::Logic::Skills::Passive::PassiveSkill* arg3)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::Skills::Passive::PassiveSkill*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYSKILLSTARTEXECUTION_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		Il2CppObject* get_SkillTypeConstraints()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYSKILLSTARTEXECUTION_GET_SKILLTYPECONSTRAINTS_OFFSET))(nullptr);
		}

		::System::Void Enable(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYSKILLSTARTEXECUTION_ENABLE_OFFSET))(arg, nullptr);
		}

		::System::Void Disable(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYSKILLSTARTEXECUTION_DISABLE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_targetActions()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYSKILLSTARTEXECUTION_GET_TARGETACTIONS_OFFSET))(nullptr);
		}

		::System::Void RegisterTrigger(::MX::Logic::Actions::HeroAction* arg)
		{
			((::System::Void(*)(::MX::Logic::Actions::HeroAction*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYSKILLSTARTEXECUTION_REGISTERTRIGGER_OFFSET))(arg, nullptr);
		}

		::System::Void BattleEntity_SkillActionRegistered(::System::Object* arg, ::MX::Logic::BattleEntities::SkillActionRegisteredEventArgs* arg2)
		{
			((::System::Void(*)(::System::Object*, ::MX::Logic::BattleEntities::SkillActionRegisteredEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYSKILLSTARTEXECUTION_BATTLEENTITY_SKILLACTIONREGISTERED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Action_Started(::System::Object* arg, ::System::EventArgs* arg2)
		{
			((::System::Void(*)(::System::Object*, ::System::EventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYSKILLSTARTEXECUTION_ACTION_STARTED_OFFSET))(arg, arg2, nullptr);
		}

	};
}

