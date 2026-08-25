#pragma once
#include "../../../../unitysdk.h"

namespace MX::Logic::Battles { class Battle; }
namespace MX::Logic::BattleEntities { class BattleEntity; }
namespace MX::Logic::Skills::Passive { class PassiveSkill; }
namespace MX::Logic::Battles { class AttackEventArgs; }

#define MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYATTACKEXECUTION_ENABLE_OFFSET UNITYSDK_OFFSET(0x13F7390)
#define MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYATTACKEXECUTION_DISABLE_OFFSET UNITYSDK_OFFSET(0x13F7460)
#define MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYATTACKEXECUTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x13F7520)
#define MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYATTACKEXECUTION_LOGICEFFECTPROCESSOR_ATTACKPROCESSED_OFFSET UNITYSDK_OFFSET(0x13F7600)

namespace MX::Logic::Skills::Passive
{
	inline static constexpr unsigned int BattleEntityAttackExecution_TypeDefinitionIndex = 14624;

	class BattleEntityAttackExecution : public Il2CppObject
	{
	public:
		::System::Void Enable(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYATTACKEXECUTION_ENABLE_OFFSET))(arg, nullptr);
		}

		::System::Void Disable(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYATTACKEXECUTION_DISABLE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::Logic::BattleEntities::BattleEntity* arg, ::MX::Logic::BattleEntities::BattleEntity* arg2, ::MX::Logic::Skills::Passive::PassiveSkill* arg3)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::Skills::Passive::PassiveSkill*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYATTACKEXECUTION_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void LogicEffectProcessor_AttackProcessed(::System::Object* arg, ::MX::Logic::Battles::AttackEventArgs* arg2)
		{
			((::System::Void(*)(::System::Object*, ::MX::Logic::Battles::AttackEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYATTACKEXECUTION_LOGICEFFECTPROCESSOR_ATTACKPROCESSED_OFFSET))(arg, arg2, nullptr);
		}

	};
}

