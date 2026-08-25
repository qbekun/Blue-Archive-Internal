#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Battles { class AttackEventArgs; }
namespace MX::Logic::Battles { class Battle; }
namespace MX::Logic::BattleEntities { class BattleEntity; }
class AutoUseRuleDAO;

#define MX_LOGIC_SKILLS_AUTOUSECHECKCRITICALATTACK_CHECKCONDITIONINTERNAL_OFFSET UNITYSDK_OFFSET(0x13E2460)
#define MX_LOGIC_SKILLS_AUTOUSECHECKCRITICALATTACK_LOGICEFFECTPROCESSOR_ATTACKPROCESSED_OFFSET UNITYSDK_OFFSET(0x13E2480)
#define MX_LOGIC_SKILLS_AUTOUSECHECKCRITICALATTACK_.CTOR_OFFSET UNITYSDK_OFFSET(0x13E2660)

namespace MX::Logic::Skills
{
	inline static constexpr unsigned int AutoUseCheckCriticalAttack_TypeDefinitionIndex = 14561;

	class AutoUseCheckCriticalAttack : public ::UnityEngine::PolygonCollider2D
	{
	public:
		::System::Boolean CheckConditionInternal()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_AUTOUSECHECKCRITICALATTACK_CHECKCONDITIONINTERNAL_OFFSET))(nullptr);
		}

		::System::Void LogicEffectProcessor_AttackProcessed(::System::Object* arg, ::MX::Logic::Battles::AttackEventArgs* arg2)
		{
			((::System::Void(*)(::System::Object*, ::MX::Logic::Battles::AttackEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_AUTOUSECHECKCRITICALATTACK_LOGICEFFECTPROCESSOR_ATTACKPROCESSED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor(::MX::Logic::Battles::Battle* arg, ::MX::Logic::BattleEntities::BattleEntity* arg2, ::System::String* str, AutoUseRuleDAO* arg3, ::System::Int32 arg4, ::System::Boolean arg5, ::System::Boolean arg6)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::BattleEntities::BattleEntity*, ::System::String*, AutoUseRuleDAO*, ::System::Int32, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_AUTOUSECHECKCRITICALATTACK_.CTOR_OFFSET))(arg, arg2, str, arg3, arg4, arg5, arg6, nullptr);
		}

	};
}

