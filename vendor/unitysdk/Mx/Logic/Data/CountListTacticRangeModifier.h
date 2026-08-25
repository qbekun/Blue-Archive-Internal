#pragma once
#include "../../../unitysdk.h"

namespace MX::GameData::DAO::Battle { class CountListTacticRangeModifierDAO; }
namespace MX::Logic::Battles { class Battle; }
namespace MX::Logic::BattleEntities { class BattleEntity; }

#define MX_LOGIC_DATA_COUNTLISTTACTICRANGEMODIFIER_GET_TACTICRANGELIST_OFFSET UNITYSDK_OFFSET(0x122C480)
#define MX_LOGIC_DATA_COUNTLISTTACTICRANGEMODIFIER_.CTOR_OFFSET UNITYSDK_OFFSET(0x122C490)
#define MX_LOGIC_DATA_COUNTLISTTACTICRANGEMODIFIER_GETCHECKCOUNT_OFFSET UNITYSDK_OFFSET(0x122C4E0)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int CountListTacticRangeModifier_TypeDefinitionIndex = 13799;

	class CountListTacticRangeModifier : public Il2CppObject
	{
	public:
		Il2CppObject* _TacticRangeList_k__BackingField; // 0x28

		Il2CppObject* get_TacticRangeList()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_COUNTLISTTACTICRANGEMODIFIER_GET_TACTICRANGELIST_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::GameData::DAO::Battle::CountListTacticRangeModifierDAO* arg)
		{
			((::System::Void(*)(::MX::GameData::DAO::Battle::CountListTacticRangeModifierDAO*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_COUNTLISTTACTICRANGEMODIFIER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetCheckCount(::MX::Logic::Battles::Battle* arg, ::MX::Logic::BattleEntities::BattleEntity* arg2, ::MX::Logic::BattleEntities::BattleEntity* arg3, Il2CppObject* arg4)
		{
			return ((::System::Int32(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::BattleEntities::BattleEntity*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_COUNTLISTTACTICRANGEMODIFIER_GETCHECKCOUNT_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

	};
}

