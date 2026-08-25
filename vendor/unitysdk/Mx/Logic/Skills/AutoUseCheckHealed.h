#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Battles { class Battle; }
namespace MX::Logic::BattleEntities { class BattleEntity; }
class AutoUseRuleDAO;
namespace MX::Logic::Battles { class LifeGainEventArgs; }

#define MX_LOGIC_SKILLS_AUTOUSECHECKHEALED_.CTOR_OFFSET UNITYSDK_OFFSET(0x13E4110)
#define MX_LOGIC_SKILLS_AUTOUSECHECKHEALED_LOGICEFFECTPROCESSOR_LIFEGAIN_OFFSET UNITYSDK_OFFSET(0x13E4230)
#define MX_LOGIC_SKILLS_AUTOUSECHECKHEALED_CHECKCONDITIONINTERNAL_OFFSET UNITYSDK_OFFSET(0x13E43E0)

namespace MX::Logic::Skills
{
	inline static constexpr unsigned int AutoUseCheckHealed_TypeDefinitionIndex = 14570;

	class AutoUseCheckHealed : public ::UnityEngine::PolygonCollider2D
	{
	public:
		::System::Void .ctor(::MX::Logic::Battles::Battle* arg, ::MX::Logic::BattleEntities::BattleEntity* arg2, ::System::String* str, AutoUseRuleDAO* arg3, ::System::Int32 arg4, ::System::Boolean arg5, ::System::Boolean arg6)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::BattleEntities::BattleEntity*, ::System::String*, AutoUseRuleDAO*, ::System::Int32, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_AUTOUSECHECKHEALED_.CTOR_OFFSET))(arg, arg2, str, arg3, arg4, arg5, arg6, nullptr);
		}

		::System::Void LogicEffectProcessor_LifeGain(::System::Object* arg, ::MX::Logic::Battles::LifeGainEventArgs* arg2)
		{
			((::System::Void(*)(::System::Object*, ::MX::Logic::Battles::LifeGainEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_AUTOUSECHECKHEALED_LOGICEFFECTPROCESSOR_LIFEGAIN_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean CheckConditionInternal()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_AUTOUSECHECKHEALED_CHECKCONDITIONINTERNAL_OFFSET))(nullptr);
		}

	};
}

