#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Battles { class Battle; }
namespace MX::Logic::BattleEntities { class BattleEntity; }
class AutoUseRuleDAO;
namespace MX::Logic::Battles { class BattleEntitySpawnedEventArgs; }
namespace MX::Logic::BattleEntities { class ActionChangedEventArgs; }

#define MX_LOGIC_SKILLS_AUTOUSECHECKATTACKING_.CTOR_OFFSET UNITYSDK_OFFSET(0x13E16B0)
#define MX_LOGIC_SKILLS_AUTOUSECHECKATTACKING_CHECKCONDITIONINTERNAL_OFFSET UNITYSDK_OFFSET(0x13E1930)
#define MX_LOGIC_SKILLS_AUTOUSECHECKATTACKING_BATTLE_BATTLEENTITYSPAWNED_OFFSET UNITYSDK_OFFSET(0x13E1950)
#define MX_LOGIC_SKILLS_AUTOUSECHECKATTACKING_CHARACTER_ACTIONCHANGED_OFFSET UNITYSDK_OFFSET(0x13E1A40)

namespace MX::Logic::Skills
{
	inline static constexpr unsigned int AutoUseCheckAttackIng_TypeDefinitionIndex = 14556;

	class AutoUseCheckAttackIng : public ::MX::AppSystem::ServiceLocator::AppServiceRegistry
	{
	public:
		Il2CppObject* listenerAddedTargets; // 0x78

		::System::Void .ctor(::MX::Logic::Battles::Battle* arg, ::MX::Logic::BattleEntities::BattleEntity* arg2, ::System::String* str, AutoUseRuleDAO* arg3, ::System::Int32 arg4, ::System::Boolean arg5, ::System::Boolean arg6)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::BattleEntities::BattleEntity*, ::System::String*, AutoUseRuleDAO*, ::System::Int32, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_AUTOUSECHECKATTACKING_.CTOR_OFFSET))(arg, arg2, str, arg3, arg4, arg5, arg6, nullptr);
		}

		::System::Boolean CheckConditionInternal()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_AUTOUSECHECKATTACKING_CHECKCONDITIONINTERNAL_OFFSET))(nullptr);
		}

		::System::Void Battle_BattleEntitySpawned(::System::Object* arg, ::MX::Logic::Battles::BattleEntitySpawnedEventArgs* arg2)
		{
			((::System::Void(*)(::System::Object*, ::MX::Logic::Battles::BattleEntitySpawnedEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_AUTOUSECHECKATTACKING_BATTLE_BATTLEENTITYSPAWNED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Character_ActionChanged(::System::Object* arg, ::MX::Logic::BattleEntities::ActionChangedEventArgs* arg2)
		{
			((::System::Void(*)(::System::Object*, ::MX::Logic::BattleEntities::ActionChangedEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_AUTOUSECHECKATTACKING_CHARACTER_ACTIONCHANGED_OFFSET))(arg, arg2, nullptr);
		}

	};
}

