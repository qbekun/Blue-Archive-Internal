#pragma once
#include "../../../unitysdk.h"

namespace MX::GameData::DAO::Battle { class CountListTacticRoleModifierDAO; }
namespace MX::Logic::Battles { class Battle; }
namespace MX::Logic::BattleEntities { class BattleEntity; }

#define MX_LOGIC_DATA_COUNTLISTTACTICROLEMODIFIER_.CTOR_OFFSET UNITYSDK_OFFSET(0x122C720)
#define MX_LOGIC_DATA_COUNTLISTTACTICROLEMODIFIER_GETCHECKCOUNT_OFFSET UNITYSDK_OFFSET(0x122C790)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int CountListTacticRoleModifier_TypeDefinitionIndex = 13801;

	class CountListTacticRoleModifier : public Il2CppObject
	{
	public:
		Il2CppObject* TacticRoleList; // 0x28
		Il2CppObject* TacticEntityTypeList; // 0x30

		::System::Void .ctor(::MX::GameData::DAO::Battle::CountListTacticRoleModifierDAO* arg)
		{
			((::System::Void(*)(::MX::GameData::DAO::Battle::CountListTacticRoleModifierDAO*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_COUNTLISTTACTICROLEMODIFIER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetCheckCount(::MX::Logic::Battles::Battle* arg, ::MX::Logic::BattleEntities::BattleEntity* arg2, ::MX::Logic::BattleEntities::BattleEntity* arg3, Il2CppObject* arg4)
		{
			return ((::System::Int32(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::BattleEntities::BattleEntity*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_COUNTLISTTACTICROLEMODIFIER_GETCHECKCOUNT_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

	};
}

