#pragma once
#include "../../../unitysdk.h"

namespace MX::Core::Math { class BasisPoint; }
namespace MX::Logic::Battles { class Battle; }
namespace MX::Logic::BattleEntities { class BattleEntity; }
class AutoUseRuleDAO;

#define MX_LOGIC_SKILLS_AUTOUSECHECKHPUNDER_.CTOR_OFFSET UNITYSDK_OFFSET(0x13DF740)
#define MX_LOGIC_SKILLS_AUTOUSECHECKHPUNDER_CHECKCONDITIONINTERNAL_OFFSET UNITYSDK_OFFSET(0x13DF7D0)

namespace MX::Logic::Skills
{
	inline static constexpr unsigned int AutoUseCheckHPUnder_TypeDefinitionIndex = 14542;

	class AutoUseCheckHPUnder : public ::MX::AppSystem::ServiceLocator::AppServiceRegistry
	{
	public:
		::MX::Core::Math::BasisPoint* hpRatio; // 0x78

		::System::Void .ctor(::MX::Logic::Battles::Battle* arg, ::MX::Logic::BattleEntities::BattleEntity* arg2, ::System::String* str, AutoUseRuleDAO* arg3, ::System::Int32 arg4, ::System::Boolean arg5, ::System::Boolean arg6)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::BattleEntities::BattleEntity*, ::System::String*, AutoUseRuleDAO*, ::System::Int32, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_AUTOUSECHECKHPUNDER_.CTOR_OFFSET))(arg, arg2, str, arg3, arg4, arg5, arg6, nullptr);
		}

		::System::Boolean CheckConditionInternal()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_AUTOUSECHECKHPUNDER_CHECKCONDITIONINTERNAL_OFFSET))(nullptr);
		}

	};
}

