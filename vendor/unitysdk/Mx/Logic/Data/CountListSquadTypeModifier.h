#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Battles { class Battle; }
namespace MX::Logic::BattleEntities { class BattleEntity; }
namespace MX::GameData::DAO::Battle { class CountListSquadTypeModifierDAO; }

#define MX_LOGIC_DATA_COUNTLISTSQUADTYPEMODIFIER_GETCHECKCOUNT_OFFSET UNITYSDK_OFFSET(0x122C220)
#define MX_LOGIC_DATA_COUNTLISTSQUADTYPEMODIFIER_.CTOR_OFFSET UNITYSDK_OFFSET(0x122C370)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int CountListSquadTypeModifier_TypeDefinitionIndex = 13797;

	class CountListSquadTypeModifier : public Il2CppObject
	{
	public:
		Il2CppObject* SquadTypeList; // 0x28
		Il2CppObject* TacticEntityTypeList; // 0x30

		::System::Int32 GetCheckCount(::MX::Logic::Battles::Battle* arg, ::MX::Logic::BattleEntities::BattleEntity* arg2, ::MX::Logic::BattleEntities::BattleEntity* arg3, Il2CppObject* arg4)
		{
			return ((::System::Int32(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::BattleEntities::BattleEntity*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_COUNTLISTSQUADTYPEMODIFIER_GETCHECKCOUNT_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void .ctor(::MX::GameData::DAO::Battle::CountListSquadTypeModifierDAO* arg)
		{
			((::System::Void(*)(::MX::GameData::DAO::Battle::CountListSquadTypeModifierDAO*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_COUNTLISTSQUADTYPEMODIFIER_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

