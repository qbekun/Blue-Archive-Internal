#pragma once
#include "../../../../unitysdk.h"

namespace MX::Logic::Battles { class DamageResultEventArgs; }
namespace MX::Logic::BattleEntities { class BattleEntity; }
namespace MX::Logic::Skills::Passive { class PassiveSkill; }
namespace MX::Logic::Battles { class Battle; }

#define MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYDAMAGEHITEXECUTION_LOGICEFFECTPROCESSOR_DAMAGEPROCESSED_OFFSET UNITYSDK_OFFSET(0x13F84D0)
#define MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYDAMAGEHITEXECUTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x13F85D0)
#define MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYDAMAGEHITEXECUTION_DISABLE_OFFSET UNITYSDK_OFFSET(0x13F8800)
#define MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYDAMAGEHITEXECUTION_ENABLE_OFFSET UNITYSDK_OFFSET(0x13F88C0)

namespace MX::Logic::Skills::Passive
{
	inline static constexpr unsigned int BattleEntityDamageHitExecution_TypeDefinitionIndex = 14628;

	class BattleEntityDamageHitExecution : public Il2CppObject
	{
	public:
		Il2CppObject* skillTypeFilters; // 0x50

		::System::Void LogicEffectProcessor_DamageProcessed(::System::Object* arg, ::MX::Logic::Battles::DamageResultEventArgs* arg2)
		{
			((::System::Void(*)(::System::Object*, ::MX::Logic::Battles::DamageResultEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYDAMAGEHITEXECUTION_LOGICEFFECTPROCESSOR_DAMAGEPROCESSED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor(::MX::Logic::BattleEntities::BattleEntity* arg, ::MX::Logic::BattleEntities::BattleEntity* arg2, ::MX::Logic::Skills::Passive::PassiveSkill* arg3)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::Skills::Passive::PassiveSkill*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYDAMAGEHITEXECUTION_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void Disable(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYDAMAGEHITEXECUTION_DISABLE_OFFSET))(arg, nullptr);
		}

		::System::Void Enable(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYDAMAGEHITEXECUTION_ENABLE_OFFSET))(arg, nullptr);
		}

	};
}

