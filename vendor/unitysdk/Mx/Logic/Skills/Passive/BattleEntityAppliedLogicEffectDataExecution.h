#pragma once
#include "../../../../unitysdk.h"

namespace MX::Logic::BattleEntities { class BattleEntity; }
namespace MX::Logic::Skills::Passive { class PassiveSkill; }
namespace MX::Logic::Battles { class Battle; }
namespace MX::Logic::Battles { class LogicEffectHitEventArgs; }

#define MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYAPPLIEDLOGICEFFECTDATAEXECUTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x13F5F10)
#define MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYAPPLIEDLOGICEFFECTDATAEXECUTION_ENABLE_OFFSET UNITYSDK_OFFSET(0x13F6160)
#define MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYAPPLIEDLOGICEFFECTDATAEXECUTION_GET_TARGETLOGICEFFECTTYPEHASHES_OFFSET UNITYSDK_OFFSET(0x13F6230)
#define MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYAPPLIEDLOGICEFFECTDATAEXECUTION_LOGICEFFECTPROCESSOR_LOGICEFFECTHIT_OFFSET UNITYSDK_OFFSET(0x13F6240)
#define MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYAPPLIEDLOGICEFFECTDATAEXECUTION_DISABLE_OFFSET UNITYSDK_OFFSET(0x13F63D0)

namespace MX::Logic::Skills::Passive
{
	inline static constexpr unsigned int BattleEntityAppliedLogicEffectDataExecution_TypeDefinitionIndex = 14619;

	class BattleEntityAppliedLogicEffectDataExecution : public Il2CppObject
	{
	public:
		Il2CppObject* _targetLogicEffectTypeHashes_k__BackingField; // 0x50

		::System::Void .ctor(::MX::Logic::BattleEntities::BattleEntity* arg, ::MX::Logic::BattleEntities::BattleEntity* arg2, ::MX::Logic::Skills::Passive::PassiveSkill* arg3)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::Skills::Passive::PassiveSkill*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYAPPLIEDLOGICEFFECTDATAEXECUTION_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void Enable(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYAPPLIEDLOGICEFFECTDATAEXECUTION_ENABLE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_targetLogicEffectTypeHashes()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYAPPLIEDLOGICEFFECTDATAEXECUTION_GET_TARGETLOGICEFFECTTYPEHASHES_OFFSET))(nullptr);
		}

		::System::Void LogicEffectProcessor_LogicEffectHit(::System::Object* arg, ::MX::Logic::Battles::LogicEffectHitEventArgs* arg2)
		{
			((::System::Void(*)(::System::Object*, ::MX::Logic::Battles::LogicEffectHitEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYAPPLIEDLOGICEFFECTDATAEXECUTION_LOGICEFFECTPROCESSOR_LOGICEFFECTHIT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Disable(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYAPPLIEDLOGICEFFECTDATAEXECUTION_DISABLE_OFFSET))(arg, nullptr);
		}

	};
}

