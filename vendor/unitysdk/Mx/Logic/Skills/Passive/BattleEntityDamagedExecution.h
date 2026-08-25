#pragma once
#include "../../../../unitysdk.h"

namespace MX::Logic::Battles { class Battle; }
namespace MX::Logic::BattleEntities { class BattleEntity; }
namespace MX::Logic::Skills::Passive { class PassiveSkill; }
namespace MX::Logic::Battles { class BattleEntityDamagedEventArgs; }

#define MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYDAMAGEDEXECUTION_DISABLE_OFFSET UNITYSDK_OFFSET(0x13F8230)
#define MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYDAMAGEDEXECUTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x13F82E0)
#define MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYDAMAGEDEXECUTION_TRIGGERSOURCE_DAMAGED_OFFSET UNITYSDK_OFFSET(0x13F83C0)
#define MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYDAMAGEDEXECUTION_ENABLE_OFFSET UNITYSDK_OFFSET(0x13F8410)

namespace MX::Logic::Skills::Passive
{
	inline static constexpr unsigned int BattleEntityDamagedExecution_TypeDefinitionIndex = 14627;

	class BattleEntityDamagedExecution : public Il2CppObject
	{
	public:
		::System::Void Disable(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYDAMAGEDEXECUTION_DISABLE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::Logic::BattleEntities::BattleEntity* arg, ::MX::Logic::BattleEntities::BattleEntity* arg2, ::MX::Logic::Skills::Passive::PassiveSkill* arg3)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::Skills::Passive::PassiveSkill*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYDAMAGEDEXECUTION_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void TriggerSource_Damaged(::System::Object* arg, ::MX::Logic::Battles::BattleEntityDamagedEventArgs* arg2)
		{
			((::System::Void(*)(::System::Object*, ::MX::Logic::Battles::BattleEntityDamagedEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYDAMAGEDEXECUTION_TRIGGERSOURCE_DAMAGED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Enable(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYDAMAGEDEXECUTION_ENABLE_OFFSET))(arg, nullptr);
		}

	};
}

