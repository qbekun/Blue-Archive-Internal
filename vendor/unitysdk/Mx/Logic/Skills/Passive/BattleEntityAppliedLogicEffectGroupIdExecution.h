#pragma once
#include "../../../../unitysdk.h"

namespace MX::Logic::BattleEntities { class BattleEntity; }
namespace MX::Logic::Skills::Passive { class PassiveSkill; }
namespace MX::Logic::Battles { class LogicEffectHitEventArgs; }
namespace MX::Logic::Battles { class Battle; }

#define MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYAPPLIEDLOGICEFFECTGROUPIDEXECUTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x13F6490)
#define MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYAPPLIEDLOGICEFFECTGROUPIDEXECUTION_GET_LOGICEFFECTGROUPID_OFFSET UNITYSDK_OFFSET(0x13F6580)
#define MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYAPPLIEDLOGICEFFECTGROUPIDEXECUTION_LOGICEFFECTPROCESSOR_LOGICEFFECTHIT_OFFSET UNITYSDK_OFFSET(0x13F6590)
#define MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYAPPLIEDLOGICEFFECTGROUPIDEXECUTION_DISABLE_OFFSET UNITYSDK_OFFSET(0x13F6650)
#define MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYAPPLIEDLOGICEFFECTGROUPIDEXECUTION_ENABLE_OFFSET UNITYSDK_OFFSET(0x13F6710)

namespace MX::Logic::Skills::Passive
{
	inline static constexpr unsigned int BattleEntityAppliedLogicEffectGroupIdExecution_TypeDefinitionIndex = 14620;

	class BattleEntityAppliedLogicEffectGroupIdExecution : public Il2CppObject
	{
	public:
		::System::String* _LogicEffectGroupId_k__BackingField; // 0x50

		::System::Void .ctor(::MX::Logic::BattleEntities::BattleEntity* arg, ::MX::Logic::BattleEntities::BattleEntity* arg2, ::MX::Logic::Skills::Passive::PassiveSkill* arg3)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::Skills::Passive::PassiveSkill*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYAPPLIEDLOGICEFFECTGROUPIDEXECUTION_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::String* get_LogicEffectGroupId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYAPPLIEDLOGICEFFECTGROUPIDEXECUTION_GET_LOGICEFFECTGROUPID_OFFSET))(nullptr);
		}

		::System::Void LogicEffectProcessor_LogicEffectHit(::System::Object* arg, ::MX::Logic::Battles::LogicEffectHitEventArgs* arg2)
		{
			((::System::Void(*)(::System::Object*, ::MX::Logic::Battles::LogicEffectHitEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYAPPLIEDLOGICEFFECTGROUPIDEXECUTION_LOGICEFFECTPROCESSOR_LOGICEFFECTHIT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Disable(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYAPPLIEDLOGICEFFECTGROUPIDEXECUTION_DISABLE_OFFSET))(arg, nullptr);
		}

		::System::Void Enable(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYAPPLIEDLOGICEFFECTGROUPIDEXECUTION_ENABLE_OFFSET))(arg, nullptr);
		}

	};
}

