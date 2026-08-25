#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::BattleEntities { class ActionChangedEventArgs; }
namespace MX::Logic::Battles { class BattleEntitySpawnedEventArgs; }
namespace MX::Logic::Battles { class Battle; }
namespace MX::Logic::BattleEntities { class BattleEntity; }
class AutoUseRuleDAO;

#define MX_LOGIC_SKILLS_AUTOUSECHECKUSESKILL_CHARACTER_ACTIONCHANGED_OFFSET UNITYSDK_OFFSET(0x13E3590)
#define MX_LOGIC_SKILLS_AUTOUSECHECKUSESKILL_BATTLE_BATTLEENTITYSPAWNED_OFFSET UNITYSDK_OFFSET(0x13E3810)
#define MX_LOGIC_SKILLS_AUTOUSECHECKUSESKILL_CHECKCONDITIONINTERNAL_OFFSET UNITYSDK_OFFSET(0x13E39C0)
#define MX_LOGIC_SKILLS_AUTOUSECHECKUSESKILL_.CTOR_OFFSET UNITYSDK_OFFSET(0x13E39E0)

namespace MX::Logic::Skills
{
	inline static constexpr unsigned int AutoUseCheckUseSkill_TypeDefinitionIndex = 14568;

	class AutoUseCheckUseSkill : public ::UnityEngine::PolygonCollider2D
	{
	public:
		Il2CppObject* listenerAddedTargets; // 0x80

		::System::Void Character_ActionChanged(::System::Object* arg, ::MX::Logic::BattleEntities::ActionChangedEventArgs* arg2)
		{
			((::System::Void(*)(::System::Object*, ::MX::Logic::BattleEntities::ActionChangedEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_AUTOUSECHECKUSESKILL_CHARACTER_ACTIONCHANGED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Battle_BattleEntitySpawned(::System::Object* arg, ::MX::Logic::Battles::BattleEntitySpawnedEventArgs* arg2)
		{
			((::System::Void(*)(::System::Object*, ::MX::Logic::Battles::BattleEntitySpawnedEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_AUTOUSECHECKUSESKILL_BATTLE_BATTLEENTITYSPAWNED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean CheckConditionInternal()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_AUTOUSECHECKUSESKILL_CHECKCONDITIONINTERNAL_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Logic::Battles::Battle* arg, ::MX::Logic::BattleEntities::BattleEntity* arg2, ::System::String* str, AutoUseRuleDAO* arg3, ::System::Int32 arg4, ::System::Boolean arg5, ::System::Boolean arg6)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::BattleEntities::BattleEntity*, ::System::String*, AutoUseRuleDAO*, ::System::Int32, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_AUTOUSECHECKUSESKILL_.CTOR_OFFSET))(arg, arg2, str, arg3, arg4, arg5, arg6, nullptr);
		}

	};
}

