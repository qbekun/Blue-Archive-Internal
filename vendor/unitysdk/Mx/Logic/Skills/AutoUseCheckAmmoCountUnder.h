#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Battles { class Battle; }
namespace MX::Logic::BattleEntities { class BattleEntity; }
class AutoUseRuleDAO;

#define MX_LOGIC_SKILLS_AUTOUSECHECKAMMOCOUNTUNDER_.CTOR_OFFSET UNITYSDK_OFFSET(0x13E1130)
#define MX_LOGIC_SKILLS_AUTOUSECHECKAMMOCOUNTUNDER_CHECKCONDITIONINTERNAL_OFFSET UNITYSDK_OFFSET(0x13E1250)

namespace MX::Logic::Skills
{
	inline static constexpr unsigned int AutoUseCheckAmmoCountUnder_TypeDefinitionIndex = 14554;

	class AutoUseCheckAmmoCountUnder : public ::MX::AppSystem::ServiceLocator::AppServiceRegistry
	{
	public:
		::System::Int32 ammoCount; // 0x78
		Il2CppObject* triggeredCharacters; // 0x80

		::System::Void .ctor(::MX::Logic::Battles::Battle* arg, ::MX::Logic::BattleEntities::BattleEntity* arg2, ::System::String* str, AutoUseRuleDAO* arg3, ::System::Int32 arg4, ::System::Boolean arg5, ::System::Boolean arg6)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::BattleEntities::BattleEntity*, ::System::String*, AutoUseRuleDAO*, ::System::Int32, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_AUTOUSECHECKAMMOCOUNTUNDER_.CTOR_OFFSET))(arg, arg2, str, arg3, arg4, arg5, arg6, nullptr);
		}

		::System::Boolean CheckConditionInternal()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_AUTOUSECHECKAMMOCOUNTUNDER_CHECKCONDITIONINTERNAL_OFFSET))(nullptr);
		}

	};
}

