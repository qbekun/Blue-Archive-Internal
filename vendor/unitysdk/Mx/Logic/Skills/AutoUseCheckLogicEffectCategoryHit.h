#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class LogicEffectCategory; }
namespace MX::Logic::Battles { class LogicEffectHitEventArgs; }
namespace MX::Logic::Battles { class Battle; }
namespace MX::Logic::BattleEntities { class BattleEntity; }
class AutoUseRuleDAO;

#define MX_LOGIC_SKILLS_AUTOUSECHECKLOGICEFFECTCATEGORYHIT_LOGICEFFECTPROCESSOR_LOGICEFFECTHIT_OFFSET UNITYSDK_OFFSET(0x13DEF40)
#define MX_LOGIC_SKILLS_AUTOUSECHECKLOGICEFFECTCATEGORYHIT_.CTOR_OFFSET UNITYSDK_OFFSET(0x13DF170)
#define MX_LOGIC_SKILLS_AUTOUSECHECKLOGICEFFECTCATEGORYHIT_CHECKCONDITIONINTERNAL_OFFSET UNITYSDK_OFFSET(0x13DF2E0)

namespace MX::Logic::Skills
{
	inline static constexpr unsigned int AutoUseCheckLogicEffectCategoryHit_TypeDefinitionIndex = 14539;

	class AutoUseCheckLogicEffectCategoryHit : public ::MX::AppSystem::ServiceLocator::AppServiceRegistry
	{
	public:
		::FlatData::LogicEffectCategory* effectCategory; // 0x78

		::System::Void LogicEffectProcessor_LogicEffectHit(::System::Object* arg, ::MX::Logic::Battles::LogicEffectHitEventArgs* arg2)
		{
			((::System::Void(*)(::System::Object*, ::MX::Logic::Battles::LogicEffectHitEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_AUTOUSECHECKLOGICEFFECTCATEGORYHIT_LOGICEFFECTPROCESSOR_LOGICEFFECTHIT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor(::MX::Logic::Battles::Battle* arg, ::MX::Logic::BattleEntities::BattleEntity* arg2, ::System::String* str, AutoUseRuleDAO* arg3, ::System::Int32 arg4, ::System::Boolean arg5, ::System::Boolean arg6)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::BattleEntities::BattleEntity*, ::System::String*, AutoUseRuleDAO*, ::System::Int32, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_AUTOUSECHECKLOGICEFFECTCATEGORYHIT_.CTOR_OFFSET))(arg, arg2, str, arg3, arg4, arg5, arg6, nullptr);
		}

		::System::Boolean CheckConditionInternal()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_AUTOUSECHECKLOGICEFFECTCATEGORYHIT_CHECKCONDITIONINTERNAL_OFFSET))(nullptr);
		}

	};
}

