#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Battles { class Battle; }
namespace MX::Logic::BattleEntities { class BattleEntity; }
class AutoUseRuleDAO;

#define MX_LOGIC_SKILLS_AUTOUSECHECKWITHSKILLTYPECONDITION_.CTOR_OFFSET UNITYSDK_OFFSET(0x13E20D0)

namespace MX::Logic::Skills
{
	inline static constexpr unsigned int AutoUseCheckWithSkillTypeCondition_TypeDefinitionIndex = 14559;

	class AutoUseCheckWithSkillTypeCondition : public ::MX::AppSystem::ServiceLocator::AppServiceRegistry
	{
	public:
		Il2CppObject* checkSkillTypeList; // 0x78

		::System::Void .ctor(::MX::Logic::Battles::Battle* arg, ::MX::Logic::BattleEntities::BattleEntity* arg2, ::System::String* str, AutoUseRuleDAO* arg3, ::System::Int32 arg4, ::System::Boolean arg5, ::System::Boolean arg6)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::BattleEntities::BattleEntity*, ::System::String*, AutoUseRuleDAO*, ::System::Int32, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_AUTOUSECHECKWITHSKILLTYPECONDITION_.CTOR_OFFSET))(arg, arg2, str, arg3, arg4, arg5, arg6, nullptr);
		}

	};
}

