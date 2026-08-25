#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Data { class TacticEntityConstraint; }
namespace MX::Logic::Battles { class Battle; }
namespace MX::Logic::BattleEntities { class BattleEntity; }
namespace MX::GameData::DAO::Battle { class TacticEntityConditionalModifierDAO; }

#define MX_LOGIC_DATA_TACTICENTITYCONDITIONALMODIFIER_GET_CONSTRAINT_OFFSET UNITYSDK_OFFSET(0x1231050)
#define MX_LOGIC_DATA_TACTICENTITYCONDITIONALMODIFIER_ISSUCCESS_OFFSET UNITYSDK_OFFSET(0x1231060)
#define MX_LOGIC_DATA_TACTICENTITYCONDITIONALMODIFIER__ISSUCCESS_B__4_1_OFFSET UNITYSDK_OFFSET(0x12311A0)
#define MX_LOGIC_DATA_TACTICENTITYCONDITIONALMODIFIER__ISSUCCESS_B__4_0_OFFSET UNITYSDK_OFFSET(0x1231210)
#define MX_LOGIC_DATA_TACTICENTITYCONDITIONALMODIFIER_.CTOR_OFFSET UNITYSDK_OFFSET(0x1231280)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int TacticEntityConditionalModifier_TypeDefinitionIndex = 13828;

	class TacticEntityConditionalModifier : public Il2CppObject
	{
	public:
		::MX::Logic::Data::TacticEntityConstraint* _Constraint_k__BackingField; // 0x18

		::MX::Logic::Data::TacticEntityConstraint* get_Constraint()
		{
			return ((::MX::Logic::Data::TacticEntityConstraint*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_TACTICENTITYCONDITIONALMODIFIER_GET_CONSTRAINT_OFFSET))(nullptr);
		}

		::System::Boolean IsSuccess(::MX::Logic::Battles::Battle* arg, ::MX::Logic::BattleEntities::BattleEntity* arg2, ::MX::Logic::BattleEntities::BattleEntity* arg3, Il2CppObject* arg4)
		{
			return ((::System::Boolean(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::BattleEntities::BattleEntity*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_TACTICENTITYCONDITIONALMODIFIER_ISSUCCESS_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Boolean _IsSuccess_b__4_1(::MX::Logic::BattleEntities::BattleEntity* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::BattleEntities::BattleEntity*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_TACTICENTITYCONDITIONALMODIFIER__ISSUCCESS_B__4_1_OFFSET))(arg, nullptr);
		}

		::System::Boolean _IsSuccess_b__4_0(::MX::Logic::BattleEntities::BattleEntity* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::BattleEntities::BattleEntity*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_TACTICENTITYCONDITIONALMODIFIER__ISSUCCESS_B__4_0_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::GameData::DAO::Battle::TacticEntityConditionalModifierDAO* arg)
		{
			((::System::Void(*)(::MX::GameData::DAO::Battle::TacticEntityConditionalModifierDAO*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_TACTICENTITYCONDITIONALMODIFIER_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

