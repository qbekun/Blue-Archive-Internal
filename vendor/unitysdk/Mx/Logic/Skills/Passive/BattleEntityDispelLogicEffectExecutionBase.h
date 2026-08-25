#pragma once
#include "../../../../unitysdk.h"

namespace MX::Logic::Battles { class LogicEffectExpiredEventArgs; }
namespace MX::Logic::Battles { class Battle; }
namespace MX::Logic::BattleEntities { class BattleEntity; }
namespace MX::Logic::Skills::Passive { class PassiveSkill; }

#define MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYDISPELLOGICEFFECTEXECUTIONBASE_CHECKTRIGGERSOURCEMATCH_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYDISPELLOGICEFFECTEXECUTIONBASE_DISABLE_OFFSET UNITYSDK_OFFSET(0x13F9D50)
#define MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYDISPELLOGICEFFECTEXECUTIONBASE_.CTOR_OFFSET UNITYSDK_OFFSET(0x13F9CD0)
#define MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYDISPELLOGICEFFECTEXECUTIONBASE_ENABLE_OFFSET UNITYSDK_OFFSET(0x13F9DF0)
#define MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYDISPELLOGICEFFECTEXECUTIONBASE_LOGICEFFECTPROCESSOR_LOGICEFFECTEXPIRED_OFFSET UNITYSDK_OFFSET(0x13F9EA0)

namespace MX::Logic::Skills::Passive
{
	inline static constexpr unsigned int BattleEntityDispelLogicEffectExecutionBase_TypeDefinitionIndex = 14638;

	class BattleEntityDispelLogicEffectExecutionBase : public Il2CppObject
	{
	public:
		::System::Boolean isAll; // 0x50

		::System::Boolean CheckTriggerSourceMatch(::MX::Logic::Battles::LogicEffectExpiredEventArgs* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::Battles::LogicEffectExpiredEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYDISPELLOGICEFFECTEXECUTIONBASE_CHECKTRIGGERSOURCEMATCH_OFFSET))(arg, nullptr);
		}

		::System::Void Disable(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYDISPELLOGICEFFECTEXECUTIONBASE_DISABLE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::Logic::BattleEntities::BattleEntity* arg, ::MX::Logic::BattleEntities::BattleEntity* arg2, ::MX::Logic::Skills::Passive::PassiveSkill* arg3)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::Skills::Passive::PassiveSkill*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYDISPELLOGICEFFECTEXECUTIONBASE_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void Enable(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYDISPELLOGICEFFECTEXECUTIONBASE_ENABLE_OFFSET))(arg, nullptr);
		}

		::System::Void LogicEffectProcessor_LogicEffectExpired(::System::Object* arg, ::MX::Logic::Battles::LogicEffectExpiredEventArgs* arg2)
		{
			((::System::Void(*)(::System::Object*, ::MX::Logic::Battles::LogicEffectExpiredEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYDISPELLOGICEFFECTEXECUTIONBASE_LOGICEFFECTPROCESSOR_LOGICEFFECTEXPIRED_OFFSET))(arg, arg2, nullptr);
		}

	};
}

