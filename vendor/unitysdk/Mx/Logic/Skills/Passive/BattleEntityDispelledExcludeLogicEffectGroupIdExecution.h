#pragma once
#include "../../../../unitysdk.h"

namespace MX::Logic::BattleEntities { class BattleEntity; }
namespace MX::Logic::Skills::Passive { class PassiveSkill; }
namespace MX::Logic::Battles { class LogicEffectExpiredEventArgs; }

#define MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYDISPELLEDEXCLUDELOGICEFFECTGROUPIDEXECUTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x13F95F0)
#define MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYDISPELLEDEXCLUDELOGICEFFECTGROUPIDEXECUTION_CHECKTRIGGERSOURCEMATCH_OFFSET UNITYSDK_OFFSET(0x13F9600)
#define MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYDISPELLEDEXCLUDELOGICEFFECTGROUPIDEXECUTION_LOGICEFFECTPROCESSOR_LOGICEFFECTEXPIRED_OFFSET UNITYSDK_OFFSET(0x13F9670)

namespace MX::Logic::Skills::Passive
{
	inline static constexpr unsigned int BattleEntityDispelledExcludeLogicEffectGroupIdExecution_TypeDefinitionIndex = 14633;

	class BattleEntityDispelledExcludeLogicEffectGroupIdExecution : public ::UnityEngine::Analytics::AnalyticsSessionState
	{
	public:
		::System::Void .ctor(::MX::Logic::BattleEntities::BattleEntity* arg, ::MX::Logic::BattleEntities::BattleEntity* arg2, ::MX::Logic::Skills::Passive::PassiveSkill* arg3)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::Skills::Passive::PassiveSkill*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYDISPELLEDEXCLUDELOGICEFFECTGROUPIDEXECUTION_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Boolean CheckTriggerSourceMatch(::MX::Logic::Battles::LogicEffectExpiredEventArgs* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::Battles::LogicEffectExpiredEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYDISPELLEDEXCLUDELOGICEFFECTGROUPIDEXECUTION_CHECKTRIGGERSOURCEMATCH_OFFSET))(arg, nullptr);
		}

		::System::Void LogicEffectProcessor_LogicEffectExpired(::System::Object* arg, ::MX::Logic::Battles::LogicEffectExpiredEventArgs* arg2)
		{
			((::System::Void(*)(::System::Object*, ::MX::Logic::Battles::LogicEffectExpiredEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYDISPELLEDEXCLUDELOGICEFFECTGROUPIDEXECUTION_LOGICEFFECTPROCESSOR_LOGICEFFECTEXPIRED_OFFSET))(arg, arg2, nullptr);
		}

	};
}

