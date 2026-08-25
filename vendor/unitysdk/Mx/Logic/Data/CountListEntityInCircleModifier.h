#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Data { class BaseEntityType; }
namespace MX::Logic::Skills { class TargetEntityType; }
namespace MX::GameData::DAO::Battle { class CountListEntityInCircleModifierDAO; }
namespace MX::Logic::Battles { class Battle; }
namespace MX::Logic::BattleEntities { class BattleEntity; }

#define MX_LOGIC_DATA_COUNTLISTENTITYINCIRCLEMODIFIER_.CTOR_OFFSET UNITYSDK_OFFSET(0x122ADD0)
#define MX_LOGIC_DATA_COUNTLISTENTITYINCIRCLEMODIFIER_GETCHECKCOUNT_OFFSET UNITYSDK_OFFSET(0x122AE30)
#define MX_LOGIC_DATA_COUNTLISTENTITYINCIRCLEMODIFIER__GETCHECKCOUNT_B__5_0_OFFSET UNITYSDK_OFFSET(0x122AFE0)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int CountListEntityInCircleModifier_TypeDefinitionIndex = 13784;

	class CountListEntityInCircleModifier : public Il2CppObject
	{
	public:
		::MX::Logic::Data::BaseEntityType* BaseEntity; // 0x28
		::System::Int32 RangeMin; // 0x2C
		::System::Int32 RangeMax; // 0x30
		::MX::Logic::Skills::TargetEntityType* ApplyEntityType; // 0x34

		::System::Void .ctor(::MX::GameData::DAO::Battle::CountListEntityInCircleModifierDAO* arg)
		{
			((::System::Void(*)(::MX::GameData::DAO::Battle::CountListEntityInCircleModifierDAO*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_COUNTLISTENTITYINCIRCLEMODIFIER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetCheckCount(::MX::Logic::Battles::Battle* arg, ::MX::Logic::BattleEntities::BattleEntity* arg2, ::MX::Logic::BattleEntities::BattleEntity* arg3, Il2CppObject* arg4)
		{
			return ((::System::Int32(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::BattleEntities::BattleEntity*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_COUNTLISTENTITYINCIRCLEMODIFIER_GETCHECKCOUNT_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Boolean _GetCheckCount_b__5_0(::MX::Logic::BattleEntities::BattleEntity* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::BattleEntities::BattleEntity*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_COUNTLISTENTITYINCIRCLEMODIFIER__GETCHECKCOUNT_B__5_0_OFFSET))(arg, nullptr);
		}

	};
}

