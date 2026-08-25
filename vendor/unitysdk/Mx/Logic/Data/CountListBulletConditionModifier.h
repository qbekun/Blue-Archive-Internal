#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Battles { class Battle; }
namespace MX::Logic::BattleEntities { class BattleEntity; }
namespace MX::GameData::DAO::Battle { class CountListBulletConditionModifierDAO; }

#define MX_LOGIC_DATA_COUNTLISTBULLETCONDITIONMODIFIER_GETCHECKCOUNT_OFFSET UNITYSDK_OFFSET(0x122AB70)
#define MX_LOGIC_DATA_COUNTLISTBULLETCONDITIONMODIFIER_.CTOR_OFFSET UNITYSDK_OFFSET(0x122AC80)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int CountListBulletConditionModifier_TypeDefinitionIndex = 13783;

	class CountListBulletConditionModifier : public Il2CppObject
	{
	public:
		Il2CppObject* BulletTypeList; // 0x28

		::System::Int32 GetCheckCount(::MX::Logic::Battles::Battle* arg, ::MX::Logic::BattleEntities::BattleEntity* arg2, ::MX::Logic::BattleEntities::BattleEntity* arg3, Il2CppObject* arg4)
		{
			return ((::System::Int32(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::BattleEntities::BattleEntity*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_COUNTLISTBULLETCONDITIONMODIFIER_GETCHECKCOUNT_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void .ctor(::MX::GameData::DAO::Battle::CountListBulletConditionModifierDAO* arg)
		{
			((::System::Void(*)(::MX::GameData::DAO::Battle::CountListBulletConditionModifierDAO*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_COUNTLISTBULLETCONDITIONMODIFIER_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

