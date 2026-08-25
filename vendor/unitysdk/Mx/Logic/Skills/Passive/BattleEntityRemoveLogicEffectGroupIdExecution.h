#pragma once
#include "../../../../unitysdk.h"

namespace MX::Logic::Battles { class Battle; }
namespace MX::Logic::Battles { class LogicEffectExpiredEventArgs; }
namespace MX::Logic::BattleEntities { class BattleEntity; }
namespace MX::Logic::Skills::Passive { class PassiveSkill; }

#define MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYREMOVELOGICEFFECTGROUPIDEXECUTION_ENABLE_OFFSET UNITYSDK_OFFSET(0x13FC230)
#define MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYREMOVELOGICEFFECTGROUPIDEXECUTION_LOGICEFFECTPROCESSOR_LOGICEFFECTEXPIRED_OFFSET UNITYSDK_OFFSET(0x13FC2E0)
#define MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYREMOVELOGICEFFECTGROUPIDEXECUTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x13FC3A0)
#define MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYREMOVELOGICEFFECTGROUPIDEXECUTION_GET_LOGICEFFECTGROUPID_OFFSET UNITYSDK_OFFSET(0x13FC490)
#define MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYREMOVELOGICEFFECTGROUPIDEXECUTION_DISABLE_OFFSET UNITYSDK_OFFSET(0x13FC4A0)

namespace MX::Logic::Skills::Passive
{
	inline static constexpr unsigned int BattleEntityRemoveLogicEffectGroupIdExecution_TypeDefinitionIndex = 14650;

	class BattleEntityRemoveLogicEffectGroupIdExecution : public Il2CppObject
	{
	public:
		::System::String* _LogicEffectGroupId_k__BackingField; // 0x50

		::System::Void Enable(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYREMOVELOGICEFFECTGROUPIDEXECUTION_ENABLE_OFFSET))(arg, nullptr);
		}

		::System::Void LogicEffectProcessor_LogicEffectExpired(::System::Object* arg, ::MX::Logic::Battles::LogicEffectExpiredEventArgs* arg2)
		{
			((::System::Void(*)(::System::Object*, ::MX::Logic::Battles::LogicEffectExpiredEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYREMOVELOGICEFFECTGROUPIDEXECUTION_LOGICEFFECTPROCESSOR_LOGICEFFECTEXPIRED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor(::MX::Logic::BattleEntities::BattleEntity* arg, ::MX::Logic::BattleEntities::BattleEntity* arg2, ::MX::Logic::Skills::Passive::PassiveSkill* arg3)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::Skills::Passive::PassiveSkill*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYREMOVELOGICEFFECTGROUPIDEXECUTION_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::String* get_LogicEffectGroupId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYREMOVELOGICEFFECTGROUPIDEXECUTION_GET_LOGICEFFECTGROUPID_OFFSET))(nullptr);
		}

		::System::Void Disable(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYREMOVELOGICEFFECTGROUPIDEXECUTION_DISABLE_OFFSET))(arg, nullptr);
		}

	};
}

