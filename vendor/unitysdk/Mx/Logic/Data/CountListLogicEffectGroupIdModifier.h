#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Battles { class Battle; }
namespace MX::Logic::BattleEntities { class BattleEntity; }
namespace MX::GameData::DAO::Battle { class CountListLogicEffectGroupIdModifierDAO; }

#define MX_LOGIC_DATA_COUNTLISTLOGICEFFECTGROUPIDMODIFIER_GETCHECKCOUNT_OFFSET UNITYSDK_OFFSET(0x122B3B0)
#define MX_LOGIC_DATA_COUNTLISTLOGICEFFECTGROUPIDMODIFIER_.CTOR_OFFSET UNITYSDK_OFFSET(0x122B4E0)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int CountListLogicEffectGroupIdModifier_TypeDefinitionIndex = 13789;

	class CountListLogicEffectGroupIdModifier : public Il2CppObject
	{
	public:
		Il2CppObject* LogicEffectGroupIdList; // 0x28

		::System::Int32 GetCheckCount(::MX::Logic::Battles::Battle* arg, ::MX::Logic::BattleEntities::BattleEntity* arg2, ::MX::Logic::BattleEntities::BattleEntity* arg3, Il2CppObject* arg4)
		{
			return ((::System::Int32(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::BattleEntities::BattleEntity*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_COUNTLISTLOGICEFFECTGROUPIDMODIFIER_GETCHECKCOUNT_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void .ctor(::MX::GameData::DAO::Battle::CountListLogicEffectGroupIdModifierDAO* arg)
		{
			((::System::Void(*)(::MX::GameData::DAO::Battle::CountListLogicEffectGroupIdModifierDAO*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_COUNTLISTLOGICEFFECTGROUPIDMODIFIER_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

