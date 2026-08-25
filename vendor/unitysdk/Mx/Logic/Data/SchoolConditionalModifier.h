#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Data { class SchoolConstraint; }
namespace MX::Logic::Data { class CountConstraint; }
namespace MX::Logic::BattleEntities { class BattleEntity; }
namespace MX::GameData::DAO::Battle { class SchoolConditionalModifierDAO; }
namespace MX::Logic::Battles { class Battle; }

#define MX_LOGIC_DATA_SCHOOLCONDITIONALMODIFIER_GET_SCHOOLCONSTRAINT_OFFSET UNITYSDK_OFFSET(0x122FD40)
#define MX_LOGIC_DATA_SCHOOLCONDITIONALMODIFIER__ISSUCCESS_B__7_0_OFFSET UNITYSDK_OFFSET(0x122FD50)
#define MX_LOGIC_DATA_SCHOOLCONDITIONALMODIFIER_.CTOR_OFFSET UNITYSDK_OFFSET(0x122FE90)
#define MX_LOGIC_DATA_SCHOOLCONDITIONALMODIFIER_GET_COUNTCONSTRAINT_OFFSET UNITYSDK_OFFSET(0x122FED0)
#define MX_LOGIC_DATA_SCHOOLCONDITIONALMODIFIER_ISSUCCESS_OFFSET UNITYSDK_OFFSET(0x122FEE0)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int SchoolConditionalModifier_TypeDefinitionIndex = 13823;

	class SchoolConditionalModifier : public Il2CppObject
	{
	public:
		::MX::Logic::Data::SchoolConstraint* _SchoolConstraint_k__BackingField; // 0x18
		::MX::Logic::Data::CountConstraint* _CountConstraint_k__BackingField; // 0x20

		::MX::Logic::Data::SchoolConstraint* get_SchoolConstraint()
		{
			return ((::MX::Logic::Data::SchoolConstraint*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_SCHOOLCONDITIONALMODIFIER_GET_SCHOOLCONSTRAINT_OFFSET))(nullptr);
		}

		::System::Boolean _IsSuccess_b__7_0(::MX::Logic::BattleEntities::BattleEntity* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::BattleEntities::BattleEntity*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_SCHOOLCONDITIONALMODIFIER__ISSUCCESS_B__7_0_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::GameData::DAO::Battle::SchoolConditionalModifierDAO* arg)
		{
			((::System::Void(*)(::MX::GameData::DAO::Battle::SchoolConditionalModifierDAO*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_SCHOOLCONDITIONALMODIFIER_.CTOR_OFFSET))(arg, nullptr);
		}

		::MX::Logic::Data::CountConstraint* get_CountConstraint()
		{
			return ((::MX::Logic::Data::CountConstraint*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_SCHOOLCONDITIONALMODIFIER_GET_COUNTCONSTRAINT_OFFSET))(nullptr);
		}

		::System::Boolean IsSuccess(::MX::Logic::Battles::Battle* arg, ::MX::Logic::BattleEntities::BattleEntity* arg2, ::MX::Logic::BattleEntities::BattleEntity* arg3, Il2CppObject* arg4)
		{
			return ((::System::Boolean(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::BattleEntities::BattleEntity*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_SCHOOLCONDITIONALMODIFIER_ISSUCCESS_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

	};
}

