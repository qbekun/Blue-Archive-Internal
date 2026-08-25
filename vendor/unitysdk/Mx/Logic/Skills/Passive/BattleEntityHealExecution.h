#pragma once
#include "../../../../unitysdk.h"

namespace MX::Logic::BattleEntities { class BattleEntity; }
namespace MX::Logic::Skills::Passive { class PassiveSkill; }
namespace MX::Logic::Battles { class LifeGainEventArgs; }
namespace MX::Logic::Battles { class Battle; }

#define MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYHEALEXECUTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x13FA870)
#define MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYHEALEXECUTION_LOGICEFFECTPROCESSOR_LIFEGAIN_OFFSET UNITYSDK_OFFSET(0x13FAB40)
#define MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYHEALEXECUTION_ENABLE_OFFSET UNITYSDK_OFFSET(0x13FAC40)
#define MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYHEALEXECUTION_DISABLE_OFFSET UNITYSDK_OFFSET(0x13FAD10)

namespace MX::Logic::Skills::Passive
{
	inline static constexpr unsigned int BattleEntityHealExecution_TypeDefinitionIndex = 14643;

	class BattleEntityHealExecution : public Il2CppObject
	{
	public:
		Il2CppObject* skillTypeList; // 0x50

		::System::Void .ctor(::MX::Logic::BattleEntities::BattleEntity* arg, ::MX::Logic::BattleEntities::BattleEntity* arg2, ::MX::Logic::Skills::Passive::PassiveSkill* arg3)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::Skills::Passive::PassiveSkill*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYHEALEXECUTION_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void LogicEffectProcessor_LifeGain(::System::Object* arg, ::MX::Logic::Battles::LifeGainEventArgs* arg2)
		{
			((::System::Void(*)(::System::Object*, ::MX::Logic::Battles::LifeGainEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYHEALEXECUTION_LOGICEFFECTPROCESSOR_LIFEGAIN_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Enable(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYHEALEXECUTION_ENABLE_OFFSET))(arg, nullptr);
		}

		::System::Void Disable(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYHEALEXECUTION_DISABLE_OFFSET))(arg, nullptr);
		}

	};
}

