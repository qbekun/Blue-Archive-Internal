#pragma once
#include "../../../../unitysdk.h"

namespace MX::Logic::Actions { class NewSkillAction; }
namespace MX::Logic::BattleEntities { class BattleEntity; }
namespace MX::Logic::BattleEntities { class SkillSlot; }
namespace MX::Logic::BattleEntities { class BehaviorType; }
namespace MX::Logic::Skills { class SkillSpecification; }
namespace MX::GameData::DAO::Battle { class SkillLogicDAO; }

#define MX_GAMELOGIC_BATTLELOGIC_FACTORY_DAOSKILLACTIONFACTORY_CREATEACTIVE_OFFSET UNITYSDK_OFFSET(0xF51100)
#define MX_GAMELOGIC_BATTLELOGIC_FACTORY_DAOSKILLACTIONFACTORY_CREATEACTIVE_OFFSET UNITYSDK_OFFSET(0xF514B0)

namespace MX::GameLogic::BattleLogic::Factory
{
	inline static constexpr unsigned int DaoSkillActionFactory_TypeDefinitionIndex = 12211;

	class DaoSkillActionFactory : public Il2CppObject
	{
	public:
		::MX::Logic::Actions::NewSkillAction* CreateActive(::MX::Logic::BattleEntities::BattleEntity* arg, ::System::String* str, ::System::Int32 arg2, ::MX::Logic::BattleEntities::SkillSlot* arg3)
		{
			return ((::MX::Logic::Actions::NewSkillAction*(*)(::MX::Logic::BattleEntities::BattleEntity*, ::System::String*, ::System::Int32, ::MX::Logic::BattleEntities::SkillSlot*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_BATTLELOGIC_FACTORY_DAOSKILLACTIONFACTORY_CREATEACTIVE_OFFSET))(arg, str, arg2, arg3, nullptr);
		}

		::MX::Logic::Actions::NewSkillAction* CreateActive(::MX::Logic::BattleEntities::BattleEntity* arg, ::MX::Logic::BattleEntities::BehaviorType* arg2, ::MX::Logic::Skills::SkillSpecification* arg3, ::MX::GameData::DAO::Battle::SkillLogicDAO* arg4)
		{
			return ((::MX::Logic::Actions::NewSkillAction*(*)(::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::BattleEntities::BehaviorType*, ::MX::Logic::Skills::SkillSpecification*, ::MX::GameData::DAO::Battle::SkillLogicDAO*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_BATTLELOGIC_FACTORY_DAOSKILLACTIONFACTORY_CREATEACTIVE_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

	};
}

