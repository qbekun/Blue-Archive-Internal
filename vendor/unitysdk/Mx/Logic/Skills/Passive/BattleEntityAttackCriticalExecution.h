#pragma once
#include "../../../../unitysdk.h"

namespace MX::Logic::Battles { class Battle; }
namespace MX::Logic::Battles { class AttackEventArgs; }
namespace MX::Logic::BattleEntities { class BattleEntity; }
namespace MX::Logic::Skills::Passive { class PassiveSkill; }

#define MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYATTACKCRITICALEXECUTION_DISABLE_OFFSET UNITYSDK_OFFSET(0x13F6CF0)
#define MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYATTACKCRITICALEXECUTION_LOGICEFFECTPROCESSOR_ATTACKPROCESSED_OFFSET UNITYSDK_OFFSET(0x13F6DB0)
#define MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYATTACKCRITICALEXECUTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x13F6EA0)
#define MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYATTACKCRITICALEXECUTION_ENABLE_OFFSET UNITYSDK_OFFSET(0x13F6F80)

namespace MX::Logic::Skills::Passive
{
	inline static constexpr unsigned int BattleEntityAttackCriticalExecution_TypeDefinitionIndex = 14622;

	class BattleEntityAttackCriticalExecution : public Il2CppObject
	{
	public:
		::System::Void Disable(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYATTACKCRITICALEXECUTION_DISABLE_OFFSET))(arg, nullptr);
		}

		::System::Void LogicEffectProcessor_AttackProcessed(::System::Object* arg, ::MX::Logic::Battles::AttackEventArgs* arg2)
		{
			((::System::Void(*)(::System::Object*, ::MX::Logic::Battles::AttackEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYATTACKCRITICALEXECUTION_LOGICEFFECTPROCESSOR_ATTACKPROCESSED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor(::MX::Logic::BattleEntities::BattleEntity* arg, ::MX::Logic::BattleEntities::BattleEntity* arg2, ::MX::Logic::Skills::Passive::PassiveSkill* arg3)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::Skills::Passive::PassiveSkill*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYATTACKCRITICALEXECUTION_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void Enable(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYATTACKCRITICALEXECUTION_ENABLE_OFFSET))(arg, nullptr);
		}

	};
}

