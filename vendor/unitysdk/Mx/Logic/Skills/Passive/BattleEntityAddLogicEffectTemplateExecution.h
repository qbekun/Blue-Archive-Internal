#pragma once
#include "../../../../unitysdk.h"

namespace MX::Logic::Battles { class Battle; }
namespace MX::Logic::BattleEntities { class BattleEntity; }
namespace MX::Logic::Skills::Passive { class PassiveSkill; }
namespace MX::Logic::Battles { class LogicEffectHitEventArgs; }

#define MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYADDLOGICEFFECTTEMPLATEEXECUTION_GET_TARGETTEMPLATEIDS_OFFSET UNITYSDK_OFFSET(0x13F4F40)
#define MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYADDLOGICEFFECTTEMPLATEEXECUTION_ENABLE_OFFSET UNITYSDK_OFFSET(0x13F4F50)
#define MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYADDLOGICEFFECTTEMPLATEEXECUTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x13F5020)
#define MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYADDLOGICEFFECTTEMPLATEEXECUTION_DISABLE_OFFSET UNITYSDK_OFFSET(0x13F5250)
#define MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYADDLOGICEFFECTTEMPLATEEXECUTION_LOGICEFFECTPROCESSOR_LOGICEFFECTHIT_OFFSET UNITYSDK_OFFSET(0x13F5310)

namespace MX::Logic::Skills::Passive
{
	inline static constexpr unsigned int BattleEntityAddLogicEffectTemplateExecution_TypeDefinitionIndex = 14616;

	class BattleEntityAddLogicEffectTemplateExecution : public Il2CppObject
	{
	public:
		Il2CppObject* _targetTemplateIds_k__BackingField; // 0x50

		Il2CppObject* get_targetTemplateIds()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYADDLOGICEFFECTTEMPLATEEXECUTION_GET_TARGETTEMPLATEIDS_OFFSET))(nullptr);
		}

		::System::Void Enable(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYADDLOGICEFFECTTEMPLATEEXECUTION_ENABLE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::Logic::BattleEntities::BattleEntity* arg, ::MX::Logic::BattleEntities::BattleEntity* arg2, ::MX::Logic::Skills::Passive::PassiveSkill* arg3)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::Skills::Passive::PassiveSkill*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYADDLOGICEFFECTTEMPLATEEXECUTION_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void Disable(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYADDLOGICEFFECTTEMPLATEEXECUTION_DISABLE_OFFSET))(arg, nullptr);
		}

		::System::Void LogicEffectProcessor_LogicEffectHit(::System::Object* arg, ::MX::Logic::Battles::LogicEffectHitEventArgs* arg2)
		{
			((::System::Void(*)(::System::Object*, ::MX::Logic::Battles::LogicEffectHitEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYADDLOGICEFFECTTEMPLATEEXECUTION_LOGICEFFECTPROCESSOR_LOGICEFFECTHIT_OFFSET))(arg, arg2, nullptr);
		}

	};
}

