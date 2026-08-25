#pragma once
#include "../../../../unitysdk.h"

namespace MX::Logic::Battles { class Battle; }
namespace MX::Logic::BattleEntities { class BattleEntity; }
namespace MX::Logic::Skills::Passive { class PassiveSkill; }
namespace MX::Logic::Battles { class BattleEntityDamagedEventArgs; }

#define MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYKILLSHOTDAMAGEDEXECUTION_ENABLE_OFFSET UNITYSDK_OFFSET(0x13FB5E0)
#define MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYKILLSHOTDAMAGEDEXECUTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x13FB6A0)
#define MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYKILLSHOTDAMAGEDEXECUTION_DISABLE_OFFSET UNITYSDK_OFFSET(0x13FB780)
#define MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYKILLSHOTDAMAGEDEXECUTION_TRIGGERSOURCE_DAMAGED_OFFSET UNITYSDK_OFFSET(0x13FB830)

namespace MX::Logic::Skills::Passive
{
	inline static constexpr unsigned int BattleEntityKillShotDamagedExecution_TypeDefinitionIndex = 14646;

	class BattleEntityKillShotDamagedExecution : public Il2CppObject
	{
	public:
		::System::Void Enable(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYKILLSHOTDAMAGEDEXECUTION_ENABLE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::Logic::BattleEntities::BattleEntity* arg, ::MX::Logic::BattleEntities::BattleEntity* arg2, ::MX::Logic::Skills::Passive::PassiveSkill* arg3)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::Skills::Passive::PassiveSkill*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYKILLSHOTDAMAGEDEXECUTION_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void Disable(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYKILLSHOTDAMAGEDEXECUTION_DISABLE_OFFSET))(arg, nullptr);
		}

		::System::Void TriggerSource_Damaged(::System::Object* arg, ::MX::Logic::Battles::BattleEntityDamagedEventArgs* arg2)
		{
			((::System::Void(*)(::System::Object*, ::MX::Logic::Battles::BattleEntityDamagedEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYKILLSHOTDAMAGEDEXECUTION_TRIGGERSOURCE_DAMAGED_OFFSET))(arg, arg2, nullptr);
		}

	};
}

