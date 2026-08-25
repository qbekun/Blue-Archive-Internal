#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Battles { class Battle; }
namespace MX::Logic::BattleEntities { class BattleEntity; }
class AutoUseRuleDAO;
namespace MX::Logic::Battles { class LogicEffectExpiredEventArgs; }

#define MX_LOGIC_SKILLS_AUTOUSECHECKREMOVELOGICEFFECTTEMPLATEID_.CTOR_OFFSET UNITYSDK_OFFSET(0x13E08A0)
#define MX_LOGIC_SKILLS_AUTOUSECHECKREMOVELOGICEFFECTTEMPLATEID_BATTLE_LOGICEFFECTEXPIRED_OFFSET UNITYSDK_OFFSET(0x13E0AC0)
#define MX_LOGIC_SKILLS_AUTOUSECHECKREMOVELOGICEFFECTTEMPLATEID_CHECKCONDITIONINTERNAL_OFFSET UNITYSDK_OFFSET(0x13E0D10)

namespace MX::Logic::Skills
{
	inline static constexpr unsigned int AutoUseCheckRemoveLogicEffectTemplateId_TypeDefinitionIndex = 14550;

	class AutoUseCheckRemoveLogicEffectTemplateId : public ::MX::AppSystem::ServiceLocator::AppServiceRegistry
	{
	public:
		Il2CppObject* logicEffectTemplateIdList; // 0x78

		::System::Void .ctor(::MX::Logic::Battles::Battle* arg, ::MX::Logic::BattleEntities::BattleEntity* arg2, ::System::String* str, AutoUseRuleDAO* arg3, ::System::Int32 arg4, ::System::Boolean arg5, ::System::Boolean arg6)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::BattleEntities::BattleEntity*, ::System::String*, AutoUseRuleDAO*, ::System::Int32, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_AUTOUSECHECKREMOVELOGICEFFECTTEMPLATEID_.CTOR_OFFSET))(arg, arg2, str, arg3, arg4, arg5, arg6, nullptr);
		}

		::System::Void Battle_LogicEffectExpired(::System::Object* arg, ::MX::Logic::Battles::LogicEffectExpiredEventArgs* arg2)
		{
			((::System::Void(*)(::System::Object*, ::MX::Logic::Battles::LogicEffectExpiredEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_AUTOUSECHECKREMOVELOGICEFFECTTEMPLATEID_BATTLE_LOGICEFFECTEXPIRED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean CheckConditionInternal()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_AUTOUSECHECKREMOVELOGICEFFECTTEMPLATEID_CHECKCONDITIONINTERNAL_OFFSET))(nullptr);
		}

	};
}

