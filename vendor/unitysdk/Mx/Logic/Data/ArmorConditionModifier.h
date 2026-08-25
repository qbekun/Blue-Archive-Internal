#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Data { class ArmorTypeConstraint; }
namespace MX::GameData::DAO::Battle { class ArmorConditionModifierDAO; }
namespace MX::Logic::BattleEntities { class BattleEntity; }
namespace MX::Logic::Battles { class Battle; }

#define MX_LOGIC_DATA_ARMORCONDITIONMODIFIER_.CTOR_OFFSET UNITYSDK_OFFSET(0x1221970)
#define MX_LOGIC_DATA_ARMORCONDITIONMODIFIER__ISSUCCESS_B__2_1_OFFSET UNITYSDK_OFFSET(0x1221A20)
#define MX_LOGIC_DATA_ARMORCONDITIONMODIFIER_ISSUCCESS_OFFSET UNITYSDK_OFFSET(0x1221A90)
#define MX_LOGIC_DATA_ARMORCONDITIONMODIFIER__ISSUCCESS_B__2_0_OFFSET UNITYSDK_OFFSET(0x1221BD0)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int ArmorConditionModifier_TypeDefinitionIndex = 13744;

	class ArmorConditionModifier : public Il2CppObject
	{
	public:
		::MX::Logic::Data::ArmorTypeConstraint* constraint; // 0x18

		::System::Void .ctor(::MX::GameData::DAO::Battle::ArmorConditionModifierDAO* arg)
		{
			((::System::Void(*)(::MX::GameData::DAO::Battle::ArmorConditionModifierDAO*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_ARMORCONDITIONMODIFIER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean _IsSuccess_b__2_1(::MX::Logic::BattleEntities::BattleEntity* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::BattleEntities::BattleEntity*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_ARMORCONDITIONMODIFIER__ISSUCCESS_B__2_1_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsSuccess(::MX::Logic::Battles::Battle* arg, ::MX::Logic::BattleEntities::BattleEntity* arg2, ::MX::Logic::BattleEntities::BattleEntity* arg3, Il2CppObject* arg4)
		{
			return ((::System::Boolean(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::BattleEntities::BattleEntity*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_ARMORCONDITIONMODIFIER_ISSUCCESS_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Boolean _IsSuccess_b__2_0(::MX::Logic::BattleEntities::BattleEntity* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::BattleEntities::BattleEntity*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_ARMORCONDITIONMODIFIER__ISSUCCESS_B__2_0_OFFSET))(arg, nullptr);
		}

	};
}

