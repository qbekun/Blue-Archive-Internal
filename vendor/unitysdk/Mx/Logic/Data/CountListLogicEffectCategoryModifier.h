#pragma once
#include "../../../unitysdk.h"

namespace MX::GameData::DAO::Battle { class CountListLogicEffectCategoryModifierDAO; }
namespace MX::Logic::Battles { class Battle; }
namespace MX::Logic::BattleEntities { class BattleEntity; }

#define MX_LOGIC_DATA_COUNTLISTLOGICEFFECTCATEGORYMODIFIER_.CTOR_OFFSET UNITYSDK_OFFSET(0x122B0F0)
#define MX_LOGIC_DATA_COUNTLISTLOGICEFFECTCATEGORYMODIFIER_GETCHECKCOUNT_OFFSET UNITYSDK_OFFSET(0x122B140)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int CountListLogicEffectCategoryModifier_TypeDefinitionIndex = 13787;

	class CountListLogicEffectCategoryModifier : public Il2CppObject
	{
	public:
		Il2CppObject* LogicEffectCategoryList; // 0x28

		::System::Void .ctor(::MX::GameData::DAO::Battle::CountListLogicEffectCategoryModifierDAO* arg)
		{
			((::System::Void(*)(::MX::GameData::DAO::Battle::CountListLogicEffectCategoryModifierDAO*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_COUNTLISTLOGICEFFECTCATEGORYMODIFIER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetCheckCount(::MX::Logic::Battles::Battle* arg, ::MX::Logic::BattleEntities::BattleEntity* arg2, ::MX::Logic::BattleEntities::BattleEntity* arg3, Il2CppObject* arg4)
		{
			return ((::System::Int32(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::BattleEntities::BattleEntity*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_COUNTLISTLOGICEFFECTCATEGORYMODIFIER_GETCHECKCOUNT_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

	};
}

