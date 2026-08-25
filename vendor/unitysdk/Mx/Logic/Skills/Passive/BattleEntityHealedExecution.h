#pragma once
#include "../../../../unitysdk.h"

namespace MX::Logic::Battles { class LifeGainEventArgs; }
namespace MX::Logic::Battles { class Battle; }
namespace MX::Logic::BattleEntities { class BattleEntity; }
namespace MX::Logic::Skills::Passive { class PassiveSkill; }

#define MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYHEALEDEXECUTION_LOGICEFFECTPROCESSOR_LIFEGAIN_OFFSET UNITYSDK_OFFSET(0x13FA550)
#define MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYHEALEDEXECUTION_DISABLE_OFFSET UNITYSDK_OFFSET(0x13FA600)
#define MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYHEALEDEXECUTION_ENABLE_OFFSET UNITYSDK_OFFSET(0x13FA6C0)
#define MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYHEALEDEXECUTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x13FA790)

namespace MX::Logic::Skills::Passive
{
	inline static constexpr unsigned int BattleEntityHealedExecution_TypeDefinitionIndex = 14642;

	class BattleEntityHealedExecution : public Il2CppObject
	{
	public:
		::System::Void LogicEffectProcessor_LifeGain(::System::Object* arg, ::MX::Logic::Battles::LifeGainEventArgs* arg2)
		{
			((::System::Void(*)(::System::Object*, ::MX::Logic::Battles::LifeGainEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYHEALEDEXECUTION_LOGICEFFECTPROCESSOR_LIFEGAIN_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Disable(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYHEALEDEXECUTION_DISABLE_OFFSET))(arg, nullptr);
		}

		::System::Void Enable(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYHEALEDEXECUTION_ENABLE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::Logic::BattleEntities::BattleEntity* arg, ::MX::Logic::BattleEntities::BattleEntity* arg2, ::MX::Logic::Skills::Passive::PassiveSkill* arg3)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::Skills::Passive::PassiveSkill*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYHEALEDEXECUTION_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

	};
}

