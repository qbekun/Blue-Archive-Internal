#pragma once
#include "../../../../unitysdk.h"

namespace MX::Logic::BattleEntities { class BattleEntity; }
namespace MX::Logic::Skills::Passive { class PassiveSkill; }

#define MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYDISPELLOGICEFFECTGROUPIDEXECUTIONBASE_.CTOR_OFFSET UNITYSDK_OFFSET(0x13F9190)

namespace MX::Logic::Skills::Passive
{
	inline static constexpr unsigned int BattleEntityDispelLogicEffectGroupIdExecutionBase_TypeDefinitionIndex = 14639;

	class BattleEntityDispelLogicEffectGroupIdExecutionBase : public ::UnityEngine::Analytics::ContinuousEvent
	{
	public:
		Il2CppObject* LogicEffectGroupIdSet; // 0x58

		::System::Void .ctor(::MX::Logic::BattleEntities::BattleEntity* arg, ::MX::Logic::BattleEntities::BattleEntity* arg2, ::MX::Logic::Skills::Passive::PassiveSkill* arg3)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::Skills::Passive::PassiveSkill*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYDISPELLOGICEFFECTGROUPIDEXECUTIONBASE_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

	};
}

