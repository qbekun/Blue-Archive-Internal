#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Skills { class CoverState; }
namespace MX::Logic::Battles { class Battle; }
namespace MX::Logic::BattleEntities { class BattleEntity; }
namespace MX::GameData::DAO::Battle { class CoverStateDamageModifierDAO; }

#define MX_LOGIC_DATA_COVERSTATEDAMAGEMODIFIER_ISMATCH_OFFSET UNITYSDK_OFFSET(0x122D480)
#define MX_LOGIC_DATA_COVERSTATEDAMAGEMODIFIER_GET_COVERSTATE_OFFSET UNITYSDK_OFFSET(0x122D500)
#define MX_LOGIC_DATA_COVERSTATEDAMAGEMODIFIER_.CTOR_OFFSET UNITYSDK_OFFSET(0x122D510)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int CoverStateDamageModifier_TypeDefinitionIndex = 13808;

	class CoverStateDamageModifier : public Il2CppObject
	{
	public:
		::MX::Logic::Skills::CoverState* _CoverState_k__BackingField; // 0x18

		::System::Boolean IsMatch(::MX::Logic::Battles::Battle* arg, ::MX::Logic::BattleEntities::BattleEntity* arg2, ::MX::Logic::BattleEntities::BattleEntity* arg3)
		{
			return ((::System::Boolean(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::BattleEntities::BattleEntity*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_COVERSTATEDAMAGEMODIFIER_ISMATCH_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::MX::Logic::Skills::CoverState* get_CoverState()
		{
			return ((::MX::Logic::Skills::CoverState*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_COVERSTATEDAMAGEMODIFIER_GET_COVERSTATE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::GameData::DAO::Battle::CoverStateDamageModifierDAO* arg)
		{
			((::System::Void(*)(::MX::GameData::DAO::Battle::CoverStateDamageModifierDAO*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_COVERSTATEDAMAGEMODIFIER_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

