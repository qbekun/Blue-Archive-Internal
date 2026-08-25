#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Data { class WeaponConstraint; }
namespace MX::GameData::DAO::Battle { class WeaponConditionalModifierDAO; }
namespace MX::Logic::Battles { class Battle; }
namespace MX::Logic::BattleEntities { class BattleEntity; }

#define MX_LOGIC_DATA_WEAPONCONDITIONALMODIFIER_.CTOR_OFFSET UNITYSDK_OFFSET(0x1232010)
#define MX_LOGIC_DATA_WEAPONCONDITIONALMODIFIER_ISSUCCESS_OFFSET UNITYSDK_OFFSET(0x1232050)
#define MX_LOGIC_DATA_WEAPONCONDITIONALMODIFIER_GET_CONSTRAINT_OFFSET UNITYSDK_OFFSET(0x1232190)
#define MX_LOGIC_DATA_WEAPONCONDITIONALMODIFIER__ISSUCCESS_B__4_0_OFFSET UNITYSDK_OFFSET(0x12321A0)
#define MX_LOGIC_DATA_WEAPONCONDITIONALMODIFIER__ISSUCCESS_B__4_1_OFFSET UNITYSDK_OFFSET(0x12322E0)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int WeaponConditionalModifier_TypeDefinitionIndex = 13835;

	class WeaponConditionalModifier : public Il2CppObject
	{
	public:
		::MX::Logic::Data::WeaponConstraint* _Constraint_k__BackingField; // 0x18

		::System::Void .ctor(::MX::GameData::DAO::Battle::WeaponConditionalModifierDAO* arg)
		{
			((::System::Void(*)(::MX::GameData::DAO::Battle::WeaponConditionalModifierDAO*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_WEAPONCONDITIONALMODIFIER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsSuccess(::MX::Logic::Battles::Battle* arg, ::MX::Logic::BattleEntities::BattleEntity* arg2, ::MX::Logic::BattleEntities::BattleEntity* arg3, Il2CppObject* arg4)
		{
			return ((::System::Boolean(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::BattleEntities::BattleEntity*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_WEAPONCONDITIONALMODIFIER_ISSUCCESS_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::MX::Logic::Data::WeaponConstraint* get_Constraint()
		{
			return ((::MX::Logic::Data::WeaponConstraint*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_WEAPONCONDITIONALMODIFIER_GET_CONSTRAINT_OFFSET))(nullptr);
		}

		::System::Boolean _IsSuccess_b__4_0(::MX::Logic::BattleEntities::BattleEntity* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::BattleEntities::BattleEntity*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_WEAPONCONDITIONALMODIFIER__ISSUCCESS_B__4_0_OFFSET))(arg, nullptr);
		}

		::System::Boolean _IsSuccess_b__4_1(::MX::Logic::BattleEntities::BattleEntity* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::BattleEntities::BattleEntity*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_WEAPONCONDITIONALMODIFIER__ISSUCCESS_B__4_1_OFFSET))(arg, nullptr);
		}

	};
}

