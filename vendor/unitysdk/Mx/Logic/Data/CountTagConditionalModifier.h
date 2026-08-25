#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Data { class TagConstraint; }
namespace MX::Core::Math { class DiffOperatorType; }
namespace MX::Logic::BattleEntities { class BattleEntity; }
namespace MX::GameData::DAO::Battle { class CountTagConditionalModifierDAO; }
namespace MX::Logic::Battles { class Battle; }

#define MX_LOGIC_DATA_COUNTTAGCONDITIONALMODIFIER__ISSUCCESS_B__6_0_OFFSET UNITYSDK_OFFSET(0x122CFE0)
#define MX_LOGIC_DATA_COUNTTAGCONDITIONALMODIFIER_.CTOR_OFFSET UNITYSDK_OFFSET(0x122D130)
#define MX_LOGIC_DATA_COUNTTAGCONDITIONALMODIFIER_ISSUCCESS_OFFSET UNITYSDK_OFFSET(0x122D1A0)
#define MX_LOGIC_DATA_COUNTTAGCONDITIONALMODIFIER_GET_CONSTRAINT_OFFSET UNITYSDK_OFFSET(0x122D2E0)
#define MX_LOGIC_DATA_COUNTTAGCONDITIONALMODIFIER_ISMATCH_OFFSET UNITYSDK_OFFSET(0x122D2A0)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int CountTagConditionalModifier_TypeDefinitionIndex = 13806;

	class CountTagConditionalModifier : public Il2CppObject
	{
	public:
		::MX::Logic::Data::TagConstraint* _Constraint_k__BackingField; // 0x18
		::System::Int32 Count; // 0x28
		::MX::Core::Math::DiffOperatorType* DiffOperator; // 0x2C

		::System::Boolean _IsSuccess_b__6_0(::MX::Logic::BattleEntities::BattleEntity* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::BattleEntities::BattleEntity*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_COUNTTAGCONDITIONALMODIFIER__ISSUCCESS_B__6_0_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::GameData::DAO::Battle::CountTagConditionalModifierDAO* arg)
		{
			((::System::Void(*)(::MX::GameData::DAO::Battle::CountTagConditionalModifierDAO*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_COUNTTAGCONDITIONALMODIFIER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsSuccess(::MX::Logic::Battles::Battle* arg, ::MX::Logic::BattleEntities::BattleEntity* arg2, ::MX::Logic::BattleEntities::BattleEntity* arg3, Il2CppObject* arg4)
		{
			return ((::System::Boolean(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::BattleEntities::BattleEntity*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_COUNTTAGCONDITIONALMODIFIER_ISSUCCESS_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::MX::Logic::Data::TagConstraint* get_Constraint()
		{
			return ((::MX::Logic::Data::TagConstraint*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_COUNTTAGCONDITIONALMODIFIER_GET_CONSTRAINT_OFFSET))(nullptr);
		}

		::System::Boolean IsMatch(::System::Int32 arg)
		{
			return ((::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_COUNTTAGCONDITIONALMODIFIER_ISMATCH_OFFSET))(arg, nullptr);
		}

	};
}

