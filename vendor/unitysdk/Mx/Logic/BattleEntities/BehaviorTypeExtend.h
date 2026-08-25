#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::BattleEntities { class BehaviorType; }

#define MX_LOGIC_BATTLEENTITIES_BEHAVIORTYPEEXTEND_ISPUBLICSKILLBEHAVIOR_OFFSET UNITYSDK_OFFSET(0x118E250)
#define MX_LOGIC_BATTLEENTITIES_BEHAVIORTYPEEXTEND_ISNORMALATTACKBEHAVIOR_OFFSET UNITYSDK_OFFSET(0x118E260)
#define MX_LOGIC_BATTLEENTITIES_BEHAVIORTYPEEXTEND_ISANIMATIONSTOPBEHAVIOR_OFFSET UNITYSDK_OFFSET(0x118E270)
#define MX_LOGIC_BATTLEENTITIES_BEHAVIORTYPEEXTEND_ISEXSKILLBEHAVIOR_OFFSET UNITYSDK_OFFSET(0x118E290)

namespace MX::Logic::BattleEntities
{
	inline static constexpr unsigned int BehaviorTypeExtend_TypeDefinitionIndex = 13265;

	class BehaviorTypeExtend : public Il2CppObject
	{
	public:
		::System::Boolean IsPublicSkillBehavior(::MX::Logic::BattleEntities::BehaviorType* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::BattleEntities::BehaviorType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_BEHAVIORTYPEEXTEND_ISPUBLICSKILLBEHAVIOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsNormalAttackBehavior(::MX::Logic::BattleEntities::BehaviorType* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::BattleEntities::BehaviorType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_BEHAVIORTYPEEXTEND_ISNORMALATTACKBEHAVIOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsAnimationStopBehavior(::MX::Logic::BattleEntities::BehaviorType* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::BattleEntities::BehaviorType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_BEHAVIORTYPEEXTEND_ISANIMATIONSTOPBEHAVIOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsExSkillBehavior(::MX::Logic::BattleEntities::BehaviorType* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::BattleEntities::BehaviorType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_BEHAVIORTYPEEXTEND_ISEXSKILLBEHAVIOR_OFFSET))(arg, nullptr);
		}

	};
}

