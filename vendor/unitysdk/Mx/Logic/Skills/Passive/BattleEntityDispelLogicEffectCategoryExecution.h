#pragma once
#include "../../../../unitysdk.h"

namespace MX::Logic::BattleEntities { class BattleEntity; }
namespace MX::Logic::Skills::Passive { class PassiveSkill; }
namespace MX::Logic::Battles { class LogicEffectExpiredEventArgs; }

#define MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYDISPELLOGICEFFECTCATEGORYEXECUTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x13F9BA0)
#define MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYDISPELLOGICEFFECTCATEGORYEXECUTION_CHECKTRIGGERSOURCEMATCH_OFFSET UNITYSDK_OFFSET(0x13F9BB0)

namespace MX::Logic::Skills::Passive
{
	inline static constexpr unsigned int BattleEntityDispelLogicEffectCategoryExecution_TypeDefinitionIndex = 14636;

	class BattleEntityDispelLogicEffectCategoryExecution : public ::UnityEngine::RemoteConfigSettingsHelper
	{
	public:
		::System::Void .ctor(::MX::Logic::BattleEntities::BattleEntity* arg, ::MX::Logic::BattleEntities::BattleEntity* arg2, ::MX::Logic::Skills::Passive::PassiveSkill* arg3)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::Skills::Passive::PassiveSkill*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYDISPELLOGICEFFECTCATEGORYEXECUTION_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Boolean CheckTriggerSourceMatch(::MX::Logic::Battles::LogicEffectExpiredEventArgs* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::Battles::LogicEffectExpiredEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYDISPELLOGICEFFECTCATEGORYEXECUTION_CHECKTRIGGERSOURCEMATCH_OFFSET))(arg, nullptr);
		}

	};
}

