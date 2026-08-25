#pragma once
#include "../../../../unitysdk.h"

namespace MX::Logic::Battles { class LogicEffectExpiredEventArgs; }
namespace MX::Logic::Battles { class Battle; }
namespace MX::Logic::BattleEntities { class BattleEntity; }
namespace MX::Logic::Skills::Passive { class PassiveSkill; }

#define MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYREMOVELOGICEFFECTTEMPLATEEXECUTION_LOGICEFFECTPROCESSOR_LOGICEFFECTEXPIRED_OFFSET UNITYSDK_OFFSET(0x13FC550)
#define MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYREMOVELOGICEFFECTTEMPLATEEXECUTION_GET_TARGETTEMPLATEIDS_OFFSET UNITYSDK_OFFSET(0x13FC620)
#define MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYREMOVELOGICEFFECTTEMPLATEEXECUTION_DISABLE_OFFSET UNITYSDK_OFFSET(0x13FC630)
#define MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYREMOVELOGICEFFECTTEMPLATEEXECUTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x13FC6E0)
#define MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYREMOVELOGICEFFECTTEMPLATEEXECUTION_ENABLE_OFFSET UNITYSDK_OFFSET(0x13FC910)

namespace MX::Logic::Skills::Passive
{
	inline static constexpr unsigned int BattleEntityRemoveLogicEffectTemplateExecution_TypeDefinitionIndex = 14651;

	class BattleEntityRemoveLogicEffectTemplateExecution : public Il2CppObject
	{
	public:
		Il2CppObject* _targetTemplateIds_k__BackingField; // 0x50

		::System::Void LogicEffectProcessor_LogicEffectExpired(::System::Object* arg, ::MX::Logic::Battles::LogicEffectExpiredEventArgs* arg2)
		{
			((::System::Void(*)(::System::Object*, ::MX::Logic::Battles::LogicEffectExpiredEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYREMOVELOGICEFFECTTEMPLATEEXECUTION_LOGICEFFECTPROCESSOR_LOGICEFFECTEXPIRED_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* get_targetTemplateIds()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYREMOVELOGICEFFECTTEMPLATEEXECUTION_GET_TARGETTEMPLATEIDS_OFFSET))(nullptr);
		}

		::System::Void Disable(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYREMOVELOGICEFFECTTEMPLATEEXECUTION_DISABLE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::Logic::BattleEntities::BattleEntity* arg, ::MX::Logic::BattleEntities::BattleEntity* arg2, ::MX::Logic::Skills::Passive::PassiveSkill* arg3)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::Skills::Passive::PassiveSkill*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYREMOVELOGICEFFECTTEMPLATEEXECUTION_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void Enable(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYREMOVELOGICEFFECTTEMPLATEEXECUTION_ENABLE_OFFSET))(arg, nullptr);
		}

	};
}

