#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Battles { class LogicEffectHitEventArgs; }
namespace MX::Logic::Battles { class Battle; }
namespace MX::Logic::BattleEntities { class BattleEntity; }
class AutoUseRuleDAO;

#define MX_LOGIC_SKILLS_AUTOUSECHECKHITLOGICEFFECTGROUPID_LOGICEFFECTPROCESSOR_LOGICEFFECTHIT_OFFSET UNITYSDK_OFFSET(0x13E0080)
#define MX_LOGIC_SKILLS_AUTOUSECHECKHITLOGICEFFECTGROUPID_CHECKCONDITIONINTERNAL_OFFSET UNITYSDK_OFFSET(0x13E02D0)
#define MX_LOGIC_SKILLS_AUTOUSECHECKHITLOGICEFFECTGROUPID_.CTOR_OFFSET UNITYSDK_OFFSET(0x13E02F0)

namespace MX::Logic::Skills
{
	inline static constexpr unsigned int AutoUseCheckHitLogicEffectGroupId_TypeDefinitionIndex = 14546;

	class AutoUseCheckHitLogicEffectGroupId : public ::MX::AppSystem::ServiceLocator::AppServiceRegistry
	{
	public:
		::System::String* logicEffectGrounpId; // 0x78

		::System::Void LogicEffectProcessor_LogicEffectHit(::System::Object* arg, ::MX::Logic::Battles::LogicEffectHitEventArgs* arg2)
		{
			((::System::Void(*)(::System::Object*, ::MX::Logic::Battles::LogicEffectHitEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_AUTOUSECHECKHITLOGICEFFECTGROUPID_LOGICEFFECTPROCESSOR_LOGICEFFECTHIT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean CheckConditionInternal()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_AUTOUSECHECKHITLOGICEFFECTGROUPID_CHECKCONDITIONINTERNAL_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Logic::Battles::Battle* arg, ::MX::Logic::BattleEntities::BattleEntity* arg2, ::System::String* str, AutoUseRuleDAO* arg3, ::System::Int32 arg4, ::System::Boolean arg5, ::System::Boolean arg6)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::BattleEntities::BattleEntity*, ::System::String*, AutoUseRuleDAO*, ::System::Int32, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_AUTOUSECHECKHITLOGICEFFECTGROUPID_.CTOR_OFFSET))(arg, arg2, str, arg3, arg4, arg5, arg6, nullptr);
		}

	};
}

