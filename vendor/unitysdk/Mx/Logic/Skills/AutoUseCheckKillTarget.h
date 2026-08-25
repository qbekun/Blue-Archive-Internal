#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Battles { class Battle; }
namespace MX::Logic::BattleEntities { class BattleEntity; }
class AutoUseRuleDAO;
namespace MX::Logic::Battles { class KillEventArgs; }

#define MX_LOGIC_SKILLS_AUTOUSECHECKKILLTARGET_.CTOR_OFFSET UNITYSDK_OFFSET(0x13E1CF0)
#define MX_LOGIC_SKILLS_AUTOUSECHECKKILLTARGET_CHECKCONDITIONINTERNAL_OFFSET UNITYSDK_OFFSET(0x13E1E00)
#define MX_LOGIC_SKILLS_AUTOUSECHECKKILLTARGET_BATTLE_CHARACTERDIED_OFFSET UNITYSDK_OFFSET(0x13E1E20)

namespace MX::Logic::Skills
{
	inline static constexpr unsigned int AutoUseCheckKillTarget_TypeDefinitionIndex = 14558;

	class AutoUseCheckKillTarget : public ::MX::AppSystem::ServiceLocator::AppServiceRegistry
	{
	public:
		::System::Void .ctor(::MX::Logic::Battles::Battle* arg, ::MX::Logic::BattleEntities::BattleEntity* arg2, ::System::String* str, AutoUseRuleDAO* arg3, ::System::Int32 arg4, ::System::Boolean arg5, ::System::Boolean arg6)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::BattleEntities::BattleEntity*, ::System::String*, AutoUseRuleDAO*, ::System::Int32, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_AUTOUSECHECKKILLTARGET_.CTOR_OFFSET))(arg, arg2, str, arg3, arg4, arg5, arg6, nullptr);
		}

		::System::Boolean CheckConditionInternal()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_AUTOUSECHECKKILLTARGET_CHECKCONDITIONINTERNAL_OFFSET))(nullptr);
		}

		::System::Void Battle_CharacterDied(::System::Object* arg, ::MX::Logic::Battles::KillEventArgs* arg2)
		{
			((::System::Void(*)(::System::Object*, ::MX::Logic::Battles::KillEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_AUTOUSECHECKKILLTARGET_BATTLE_CHARACTERDIED_OFFSET))(arg, arg2, nullptr);
		}

	};
}

