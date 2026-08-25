#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Battles { class Battle; }
namespace MX::Logic::BattleEntities { class BattleEntity; }
namespace MX::GameData::DAO::Battle { class CountListArmorConditionModifierDAO; }

#define MX_LOGIC_DATA_COUNTLISTARMORCONDITIONMODIFIER_GETCHECKCOUNT_OFFSET UNITYSDK_OFFSET(0x122A9A0)
#define MX_LOGIC_DATA_COUNTLISTARMORCONDITIONMODIFIER_.CTOR_OFFSET UNITYSDK_OFFSET(0x122AAB0)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int CountListArmorConditionModifier_TypeDefinitionIndex = 13781;

	class CountListArmorConditionModifier : public Il2CppObject
	{
	public:
		Il2CppObject* ArmorTypeList; // 0x28

		::System::Int32 GetCheckCount(::MX::Logic::Battles::Battle* arg, ::MX::Logic::BattleEntities::BattleEntity* arg2, ::MX::Logic::BattleEntities::BattleEntity* arg3, Il2CppObject* arg4)
		{
			return ((::System::Int32(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::BattleEntities::BattleEntity*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_COUNTLISTARMORCONDITIONMODIFIER_GETCHECKCOUNT_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void .ctor(::MX::GameData::DAO::Battle::CountListArmorConditionModifierDAO* arg)
		{
			((::System::Void(*)(::MX::GameData::DAO::Battle::CountListArmorConditionModifierDAO*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_COUNTLISTARMORCONDITIONMODIFIER_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

