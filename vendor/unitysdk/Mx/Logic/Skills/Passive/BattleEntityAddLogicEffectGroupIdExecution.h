#pragma once
#include "../../../../unitysdk.h"

namespace MX::Logic::BattleEntities { class BattleEntity; }
namespace MX::Logic::Skills::Passive { class PassiveSkill; }
namespace MX::Logic::Battles { class LogicEffectHitEventArgs; }
namespace MX::Logic::Battles { class Battle; }

#define MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYADDLOGICEFFECTGROUPIDEXECUTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x13F4BF0)
#define MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYADDLOGICEFFECTGROUPIDEXECUTION_LOGICEFFECTPROCESSOR_LOGICEFFECTHIT_OFFSET UNITYSDK_OFFSET(0x13F4CE0)
#define MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYADDLOGICEFFECTGROUPIDEXECUTION_ENABLE_OFFSET UNITYSDK_OFFSET(0x13F4DA0)
#define MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYADDLOGICEFFECTGROUPIDEXECUTION_DISABLE_OFFSET UNITYSDK_OFFSET(0x13F4E70)
#define MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYADDLOGICEFFECTGROUPIDEXECUTION_GET_LOGICEFFECTGROUPID_OFFSET UNITYSDK_OFFSET(0x13F4F30)

namespace MX::Logic::Skills::Passive
{
	inline static constexpr unsigned int BattleEntityAddLogicEffectGroupIdExecution_TypeDefinitionIndex = 14615;

	class BattleEntityAddLogicEffectGroupIdExecution : public Il2CppObject
	{
	public:
		::System::String* _LogicEffectGroupId_k__BackingField; // 0x50

		::System::Void .ctor(::MX::Logic::BattleEntities::BattleEntity* arg, ::MX::Logic::BattleEntities::BattleEntity* arg2, ::MX::Logic::Skills::Passive::PassiveSkill* arg3)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::Skills::Passive::PassiveSkill*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYADDLOGICEFFECTGROUPIDEXECUTION_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void LogicEffectProcessor_LogicEffectHit(::System::Object* arg, ::MX::Logic::Battles::LogicEffectHitEventArgs* arg2)
		{
			((::System::Void(*)(::System::Object*, ::MX::Logic::Battles::LogicEffectHitEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYADDLOGICEFFECTGROUPIDEXECUTION_LOGICEFFECTPROCESSOR_LOGICEFFECTHIT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Enable(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYADDLOGICEFFECTGROUPIDEXECUTION_ENABLE_OFFSET))(arg, nullptr);
		}

		::System::Void Disable(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYADDLOGICEFFECTGROUPIDEXECUTION_DISABLE_OFFSET))(arg, nullptr);
		}

		::System::String* get_LogicEffectGroupId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYADDLOGICEFFECTGROUPIDEXECUTION_GET_LOGICEFFECTGROUPID_OFFSET))(nullptr);
		}

	};
}

