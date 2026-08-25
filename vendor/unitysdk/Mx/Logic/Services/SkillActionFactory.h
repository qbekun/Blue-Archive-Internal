#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Skills::Passive { class PassiveSkill; }
namespace MX::Logic::BattleEntities { class BattleEntity; }
namespace MX::Logic::Data { class HeroSetting; }
namespace MX::Logic::BattleEntities { class SkillSlot; }
namespace MX::Logic::Actions { class NewSkillAction; }
namespace MX::Logic::BattleEntities { class BehaviorType; }
namespace MX::Logic::Skills { class SkillSpecification; }
namespace MX::GameData::DAO::Battle { class NewSkillActionDAO; }
namespace MX::Logic::Skills::Passive { class PassiveExecution; }

#define MX_LOGIC_SERVICES_SKILLACTIONFACTORY_CREATEPASSIVESKILL_OFFSET UNITYSDK_OFFSET(0x1098500)
#define MX_LOGIC_SERVICES_SKILLACTIONFACTORY_CREATEACTIVE_OFFSET UNITYSDK_OFFSET(0x1093D50)
#define MX_LOGIC_SERVICES_SKILLACTIONFACTORY_CREATEPASSIVESKILL_OFFSET UNITYSDK_OFFSET(0x1098970)
#define MX_LOGIC_SERVICES_SKILLACTIONFACTORY_CREATEPASSIVEEXECUTION_OFFSET UNITYSDK_OFFSET(0x109B5F0)

namespace MX::Logic::Services
{
	inline static constexpr unsigned int SkillActionFactory_TypeDefinitionIndex = 12969;

	class SkillActionFactory : public Il2CppObject
	{
	public:
		::MX::Logic::Skills::Passive::PassiveSkill* CreatePassiveSkill(::System::Int64 arg, ::MX::Logic::BattleEntities::BattleEntity* arg2, ::MX::Logic::Data::HeroSetting* arg3, ::System::String* str, ::MX::Logic::BattleEntities::SkillSlot* arg4, ::System::Boolean arg5, ::System::Boolean arg6)
		{
			return ((::MX::Logic::Skills::Passive::PassiveSkill*(*)(::System::Int64, ::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::Data::HeroSetting*, ::System::String*, ::MX::Logic::BattleEntities::SkillSlot*, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_SKILLACTIONFACTORY_CREATEPASSIVESKILL_OFFSET))(arg, arg2, arg3, str, arg4, arg5, arg6, nullptr);
		}

		::MX::Logic::Actions::NewSkillAction* CreateActive(::MX::Logic::BattleEntities::BattleEntity* arg, ::MX::Logic::BattleEntities::BehaviorType* arg2, ::MX::Logic::Skills::SkillSpecification* arg3, ::MX::GameData::DAO::Battle::NewSkillActionDAO* arg4)
		{
			return ((::MX::Logic::Actions::NewSkillAction*(*)(::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::BattleEntities::BehaviorType*, ::MX::Logic::Skills::SkillSpecification*, ::MX::GameData::DAO::Battle::NewSkillActionDAO*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_SKILLACTIONFACTORY_CREATEACTIVE_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::MX::Logic::Skills::Passive::PassiveSkill* CreatePassiveSKill(::MX::Logic::BattleEntities::BattleEntity* arg, ::System::String* str, ::System::Int32 arg2, ::MX::Logic::BattleEntities::SkillSlot* arg3, ::System::Boolean arg4, ::System::Boolean arg5)
		{
			return ((::MX::Logic::Skills::Passive::PassiveSkill*(*)(::MX::Logic::BattleEntities::BattleEntity*, ::System::String*, ::System::Int32, ::MX::Logic::BattleEntities::SkillSlot*, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_SKILLACTIONFACTORY_CREATEPASSIVESKILL_OFFSET))(arg, str, arg2, arg3, arg4, arg5, nullptr);
		}

		::MX::Logic::Skills::Passive::PassiveExecution* CreatePassiveExecution(::MX::Logic::BattleEntities::BattleEntity* arg, ::MX::Logic::BattleEntities::BattleEntity* arg2, ::MX::Logic::Skills::Passive::PassiveSkill* arg3)
		{
			return ((::MX::Logic::Skills::Passive::PassiveExecution*(*)(::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::Skills::Passive::PassiveSkill*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_SKILLACTIONFACTORY_CREATEPASSIVEEXECUTION_OFFSET))(arg, arg2, arg3, nullptr);
		}

	};
}

