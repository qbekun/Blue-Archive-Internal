#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Data { class EchelonSlotConstraint; }
namespace MX::Logic::BattleEntities { class BattleEntity; }
namespace MX::Logic::Battles { class Battle; }
namespace MX::GameData::DAO::Battle { class EchelonSlotModifierDAO; }

#define MX_LOGIC_DATA_ECHELONSLOTMODIFIER_GET_CONSTRAINT_OFFSET UNITYSDK_OFFSET(0x122D660)
#define MX_LOGIC_DATA_ECHELONSLOTMODIFIER__ISSUCCESS_B__4_1_OFFSET UNITYSDK_OFFSET(0x122D670)
#define MX_LOGIC_DATA_ECHELONSLOTMODIFIER__ISSUCCESS_B__4_0_OFFSET UNITYSDK_OFFSET(0x122D780)
#define MX_LOGIC_DATA_ECHELONSLOTMODIFIER_ISSUCCESS_OFFSET UNITYSDK_OFFSET(0x122D8E0)
#define MX_LOGIC_DATA_ECHELONSLOTMODIFIER_.CTOR_OFFSET UNITYSDK_OFFSET(0x122DA10)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int EchelonSlotModifier_TypeDefinitionIndex = 13811;

	class EchelonSlotModifier : public Il2CppObject
	{
	public:
		::MX::Logic::Data::EchelonSlotConstraint* _Constraint_k__BackingField; // 0x18

		::MX::Logic::Data::EchelonSlotConstraint* get_Constraint()
		{
			return ((::MX::Logic::Data::EchelonSlotConstraint*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_ECHELONSLOTMODIFIER_GET_CONSTRAINT_OFFSET))(nullptr);
		}

		::System::Boolean _IsSuccess_b__4_1(::MX::Logic::BattleEntities::BattleEntity* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::BattleEntities::BattleEntity*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_ECHELONSLOTMODIFIER__ISSUCCESS_B__4_1_OFFSET))(arg, nullptr);
		}

		::System::Boolean _IsSuccess_b__4_0(::MX::Logic::BattleEntities::BattleEntity* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::BattleEntities::BattleEntity*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_ECHELONSLOTMODIFIER__ISSUCCESS_B__4_0_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsSuccess(::MX::Logic::Battles::Battle* arg, ::MX::Logic::BattleEntities::BattleEntity* arg2, ::MX::Logic::BattleEntities::BattleEntity* arg3, Il2CppObject* arg4)
		{
			return ((::System::Boolean(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::BattleEntities::BattleEntity*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_ECHELONSLOTMODIFIER_ISSUCCESS_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void .ctor(::MX::GameData::DAO::Battle::EchelonSlotModifierDAO* arg)
		{
			((::System::Void(*)(::MX::GameData::DAO::Battle::EchelonSlotModifierDAO*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_ECHELONSLOTMODIFIER_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

