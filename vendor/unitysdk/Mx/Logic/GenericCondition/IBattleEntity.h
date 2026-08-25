#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::BattleEntities { class BattleEntity; }

#define MX_LOGIC_GENERICCONDITION_IBATTLEENTITY_GET_OFFSET UNITYSDK_OFFSET(0x000000)

namespace MX::Logic::GenericCondition
{
	inline static constexpr unsigned int IBattleEntity_TypeDefinitionIndex = 12926;

	class IBattleEntity : public Il2CppObject
	{
	public:
		::MX::Logic::BattleEntities::BattleEntity* Get()
		{
			return ((::MX::Logic::BattleEntities::BattleEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_GENERICCONDITION_IBATTLEENTITY_GET_OFFSET))(nullptr);
		}

	};
}

