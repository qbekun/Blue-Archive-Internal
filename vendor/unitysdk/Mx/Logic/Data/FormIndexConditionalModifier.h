#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Data { class IncludeType; }
namespace MX::GameData::DAO::Battle { class FormIndexCheckModifierDAO; }
namespace MX::Logic::Battles { class Battle; }
namespace MX::Logic::BattleEntities { class BattleEntity; }

#define MX_LOGIC_DATA_FORMINDEXCONDITIONALMODIFIER_.CTOR_OFFSET UNITYSDK_OFFSET(0x122DE60)
#define MX_LOGIC_DATA_FORMINDEXCONDITIONALMODIFIER_ISSUCCESS_OFFSET UNITYSDK_OFFSET(0x122DEA0)
#define MX_LOGIC_DATA_FORMINDEXCONDITIONALMODIFIER__ISSUCCESS_B__3_1_OFFSET UNITYSDK_OFFSET(0x122DF80)
#define MX_LOGIC_DATA_FORMINDEXCONDITIONALMODIFIER__ISSUCCESS_B__3_0_OFFSET UNITYSDK_OFFSET(0x122E050)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int FormIndexConditionalModifier_TypeDefinitionIndex = 13813;

	class FormIndexConditionalModifier : public Il2CppObject
	{
	public:
		::System::Int32 FormIndex; // 0x18
		::MX::Logic::Data::IncludeType* IncludeType; // 0x1C

		::System::Void .ctor(::MX::GameData::DAO::Battle::FormIndexCheckModifierDAO* arg)
		{
			((::System::Void(*)(::MX::GameData::DAO::Battle::FormIndexCheckModifierDAO*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_FORMINDEXCONDITIONALMODIFIER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsSuccess(::MX::Logic::Battles::Battle* arg, ::MX::Logic::BattleEntities::BattleEntity* arg2, ::MX::Logic::BattleEntities::BattleEntity* arg3, Il2CppObject* arg4)
		{
			return ((::System::Boolean(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::BattleEntities::BattleEntity*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_FORMINDEXCONDITIONALMODIFIER_ISSUCCESS_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Boolean _IsSuccess_b__3_1(::MX::Logic::BattleEntities::BattleEntity* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::BattleEntities::BattleEntity*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_FORMINDEXCONDITIONALMODIFIER__ISSUCCESS_B__3_1_OFFSET))(arg, nullptr);
		}

		::System::Boolean _IsSuccess_b__3_0(::MX::Logic::BattleEntities::BattleEntity* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::BattleEntities::BattleEntity*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_FORMINDEXCONDITIONALMODIFIER__ISSUCCESS_B__3_0_OFFSET))(arg, nullptr);
		}

	};
}

