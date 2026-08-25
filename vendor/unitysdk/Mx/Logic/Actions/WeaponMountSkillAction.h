#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Battles { class Battle; }
namespace MX::Logic::BattleEntities { class BattleEntity; }
namespace MX::Logic::BattleEntities { class BehaviorType; }
namespace MX::GameData::DAO::Battle { class TimelineSkillActionDAO; }
namespace MX::Logic::Skills { class SkillSpecification; }

#define MX_LOGIC_ACTIONS_WEAPONMOUNTSKILLACTION_UPDATE_OFFSET UNITYSDK_OFFSET(0x10FAB70)
#define MX_LOGIC_ACTIONS_WEAPONMOUNTSKILLACTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x10FAD60)
#define MX_LOGIC_ACTIONS_WEAPONMOUNTSKILLACTION_GET_ISWEAPONMOUNTAFTERSKILL_OFFSET UNITYSDK_OFFSET(0x10FADA0)

namespace MX::Logic::Actions
{
	inline static constexpr unsigned int WeaponMountSkillAction_TypeDefinitionIndex = 13031;

	class WeaponMountSkillAction : public Il2CppObject
	{
	public:
		::System::Boolean _IsWeaponMountAfterSkill_k__BackingField; // 0x1E0

		::System::Void Update(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_ACTIONS_WEAPONMOUNTSKILLACTION_UPDATE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::Logic::BattleEntities::BattleEntity* arg, ::MX::Logic::BattleEntities::BehaviorType* arg2, ::MX::GameData::DAO::Battle::TimelineSkillActionDAO* arg3, ::MX::Logic::Skills::SkillSpecification* arg4)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::BattleEntities::BehaviorType*, ::MX::GameData::DAO::Battle::TimelineSkillActionDAO*, ::MX::Logic::Skills::SkillSpecification*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_ACTIONS_WEAPONMOUNTSKILLACTION_.CTOR_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Boolean get_IsWeaponMountAfterSkill()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_ACTIONS_WEAPONMOUNTSKILLACTION_GET_ISWEAPONMOUNTAFTERSKILL_OFFSET))(nullptr);
		}

	};
}

