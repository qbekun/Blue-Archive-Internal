#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class TacticEntityType; }
namespace MX::GameData::DAO::Battle { class TacticEntityDamageModifierDAO; }
namespace MX::Logic::Battles { class Battle; }
namespace MX::Logic::BattleEntities { class BattleEntity; }

#define MX_LOGIC_DATA_TACTICENTITYDAMAGEMODIFIER_TOSTRING_OFFSET UNITYSDK_OFFSET(0x12312C0)
#define MX_LOGIC_DATA_TACTICENTITYDAMAGEMODIFIER_.CTOR_OFFSET UNITYSDK_OFFSET(0x1231350)
#define MX_LOGIC_DATA_TACTICENTITYDAMAGEMODIFIER_ISMATCH_OFFSET UNITYSDK_OFFSET(0x1231390)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int TacticEntityDamageModifier_TypeDefinitionIndex = 13829;

	class TacticEntityDamageModifier : public Il2CppObject
	{
	public:
		::FlatData::TacticEntityType* TacticEntity; // 0x18

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_TACTICENTITYDAMAGEMODIFIER_TOSTRING_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::GameData::DAO::Battle::TacticEntityDamageModifierDAO* arg)
		{
			((::System::Void(*)(::MX::GameData::DAO::Battle::TacticEntityDamageModifierDAO*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_TACTICENTITYDAMAGEMODIFIER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsMatch(::MX::Logic::Battles::Battle* arg, ::MX::Logic::BattleEntities::BattleEntity* arg2, ::MX::Logic::BattleEntities::BattleEntity* arg3)
		{
			return ((::System::Boolean(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::BattleEntities::BattleEntity*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_TACTICENTITYDAMAGEMODIFIER_ISMATCH_OFFSET))(arg, arg2, arg3, nullptr);
		}

	};
}

