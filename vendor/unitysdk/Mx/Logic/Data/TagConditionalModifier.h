#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Data { class TagConstraint; }
namespace MX::Logic::BattleEntities { class BattleEntity; }
namespace MX::GameData::DAO::Battle { class TagConditionalModifierDAO; }
namespace MX::Logic::Battles { class Battle; }

#define MX_LOGIC_DATA_TAGCONDITIONALMODIFIER__ISSUCCESS_B__4_0_OFFSET UNITYSDK_OFFSET(0x12313B0)
#define MX_LOGIC_DATA_TAGCONDITIONALMODIFIER_.CTOR_OFFSET UNITYSDK_OFFSET(0x1231500)
#define MX_LOGIC_DATA_TAGCONDITIONALMODIFIER__ISSUCCESS_B__4_1_OFFSET UNITYSDK_OFFSET(0x1231570)
#define MX_LOGIC_DATA_TAGCONDITIONALMODIFIER_ISSUCCESS_OFFSET UNITYSDK_OFFSET(0x1231680)
#define MX_LOGIC_DATA_TAGCONDITIONALMODIFIER_GET_CONSTRAINT_OFFSET UNITYSDK_OFFSET(0x12317B0)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int TagConditionalModifier_TypeDefinitionIndex = 13830;

	class TagConditionalModifier : public Il2CppObject
	{
	public:
		::MX::Logic::Data::TagConstraint* _Constraint_k__BackingField; // 0x18

		::System::Boolean _IsSuccess_b__4_0(::MX::Logic::BattleEntities::BattleEntity* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::BattleEntities::BattleEntity*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_TAGCONDITIONALMODIFIER__ISSUCCESS_B__4_0_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::GameData::DAO::Battle::TagConditionalModifierDAO* arg)
		{
			((::System::Void(*)(::MX::GameData::DAO::Battle::TagConditionalModifierDAO*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_TAGCONDITIONALMODIFIER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean _IsSuccess_b__4_1(::MX::Logic::BattleEntities::BattleEntity* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::BattleEntities::BattleEntity*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_TAGCONDITIONALMODIFIER__ISSUCCESS_B__4_1_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsSuccess(::MX::Logic::Battles::Battle* arg, ::MX::Logic::BattleEntities::BattleEntity* arg2, ::MX::Logic::BattleEntities::BattleEntity* arg3, Il2CppObject* arg4)
		{
			return ((::System::Boolean(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::BattleEntities::BattleEntity*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_TAGCONDITIONALMODIFIER_ISSUCCESS_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::MX::Logic::Data::TagConstraint* get_Constraint()
		{
			return ((::MX::Logic::Data::TagConstraint*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_TAGCONDITIONALMODIFIER_GET_CONSTRAINT_OFFSET))(nullptr);
		}

	};
}

