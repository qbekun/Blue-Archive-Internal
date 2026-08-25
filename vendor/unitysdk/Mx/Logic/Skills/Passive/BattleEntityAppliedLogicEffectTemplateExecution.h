#pragma once
#include "../../../../unitysdk.h"

namespace MX::Logic::Battles { class Battle; }
namespace MX::Logic::BattleEntities { class BattleEntity; }
namespace MX::Logic::Skills::Passive { class PassiveSkill; }
namespace MX::Logic::Battles { class LogicEffectHitEventArgs; }

#define MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYAPPLIEDLOGICEFFECTTEMPLATEEXECUTION_DISABLE_OFFSET UNITYSDK_OFFSET(0x13F67E0)
#define MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYAPPLIEDLOGICEFFECTTEMPLATEEXECUTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x13F68A0)
#define MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYAPPLIEDLOGICEFFECTTEMPLATEEXECUTION_ENABLE_OFFSET UNITYSDK_OFFSET(0x13F6AD0)
#define MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYAPPLIEDLOGICEFFECTTEMPLATEEXECUTION_LOGICEFFECTPROCESSOR_LOGICEFFECTHIT_OFFSET UNITYSDK_OFFSET(0x13F6BA0)
#define MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYAPPLIEDLOGICEFFECTTEMPLATEEXECUTION_GET_TARGETTEMPLATEIDS_OFFSET UNITYSDK_OFFSET(0x13F6CE0)

namespace MX::Logic::Skills::Passive
{
	inline static constexpr unsigned int BattleEntityAppliedLogicEffectTemplateExecution_TypeDefinitionIndex = 14621;

	class BattleEntityAppliedLogicEffectTemplateExecution : public Il2CppObject
	{
	public:
		Il2CppObject* _targetTemplateIds_k__BackingField; // 0x50

		::System::Void Disable(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYAPPLIEDLOGICEFFECTTEMPLATEEXECUTION_DISABLE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::Logic::BattleEntities::BattleEntity* arg, ::MX::Logic::BattleEntities::BattleEntity* arg2, ::MX::Logic::Skills::Passive::PassiveSkill* arg3)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::Skills::Passive::PassiveSkill*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYAPPLIEDLOGICEFFECTTEMPLATEEXECUTION_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void Enable(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYAPPLIEDLOGICEFFECTTEMPLATEEXECUTION_ENABLE_OFFSET))(arg, nullptr);
		}

		::System::Void LogicEffectProcessor_LogicEffectHit(::System::Object* arg, ::MX::Logic::Battles::LogicEffectHitEventArgs* arg2)
		{
			((::System::Void(*)(::System::Object*, ::MX::Logic::Battles::LogicEffectHitEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYAPPLIEDLOGICEFFECTTEMPLATEEXECUTION_LOGICEFFECTPROCESSOR_LOGICEFFECTHIT_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* get_targetTemplateIds()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYAPPLIEDLOGICEFFECTTEMPLATEEXECUTION_GET_TARGETTEMPLATEIDS_OFFSET))(nullptr);
		}

	};
}

