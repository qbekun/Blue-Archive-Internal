#pragma once
#include "../../../../unitysdk.h"

namespace MX::Logic::Battles { class LogicEffectExpiredEventArgs; }
namespace MX::Logic::BattleEntities { class BattleEntity; }
namespace MX::Logic::Skills::Passive { class PassiveSkill; }

#define MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYDISPELEXCLUDELOGICEFFECTGROUPIDEXECUTION_CHECKTRIGGERSOURCEMATCH_OFFSET UNITYSDK_OFFSET(0x13F9110)
#define MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYDISPELEXCLUDELOGICEFFECTGROUPIDEXECUTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x13F9180)
#define MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYDISPELEXCLUDELOGICEFFECTGROUPIDEXECUTION_LOGICEFFECTPROCESSOR_LOGICEFFECTEXPIRED_OFFSET UNITYSDK_OFFSET(0x13F9410)

namespace MX::Logic::Skills::Passive
{
	inline static constexpr unsigned int BattleEntityDispelExcludeLogicEffectGroupIdExecution_TypeDefinitionIndex = 14631;

	class BattleEntityDispelExcludeLogicEffectGroupIdExecution : public ::UnityEngine::Analytics::AnalyticsSessionState
	{
	public:
		::System::Boolean CheckTriggerSourceMatch(::MX::Logic::Battles::LogicEffectExpiredEventArgs* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::Battles::LogicEffectExpiredEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYDISPELEXCLUDELOGICEFFECTGROUPIDEXECUTION_CHECKTRIGGERSOURCEMATCH_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::Logic::BattleEntities::BattleEntity* arg, ::MX::Logic::BattleEntities::BattleEntity* arg2, ::MX::Logic::Skills::Passive::PassiveSkill* arg3)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::Skills::Passive::PassiveSkill*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYDISPELEXCLUDELOGICEFFECTGROUPIDEXECUTION_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void LogicEffectProcessor_LogicEffectExpired(::System::Object* arg, ::MX::Logic::Battles::LogicEffectExpiredEventArgs* arg2)
		{
			((::System::Void(*)(::System::Object*, ::MX::Logic::Battles::LogicEffectExpiredEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYDISPELEXCLUDELOGICEFFECTGROUPIDEXECUTION_LOGICEFFECTPROCESSOR_LOGICEFFECTEXPIRED_OFFSET))(arg, arg2, nullptr);
		}

	};
}

