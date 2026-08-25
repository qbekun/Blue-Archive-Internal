#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Skills { class CoverState; }
namespace MX::Logic::Battles { class Battle; }
namespace MX::Logic::BattleEntities { class BattleEntity; }
namespace MX::GameData::DAO::Battle { class CoverStateConditionalModifierDAO; }

#define MX_LOGIC_DATA_COVERSTATECONDITIONALMODIFIER_ISSUCCESS_OFFSET UNITYSDK_OFFSET(0x122D2F0)
#define MX_LOGIC_DATA_COVERSTATECONDITIONALMODIFIER_GET_COVERSTATE_OFFSET UNITYSDK_OFFSET(0x122D3B0)
#define MX_LOGIC_DATA_COVERSTATECONDITIONALMODIFIER__ISSUCCESS_B__4_0_OFFSET UNITYSDK_OFFSET(0x122D3C0)
#define MX_LOGIC_DATA_COVERSTATECONDITIONALMODIFIER_.CTOR_OFFSET UNITYSDK_OFFSET(0x122D440)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int CoverStateConditionalModifier_TypeDefinitionIndex = 13807;

	class CoverStateConditionalModifier : public Il2CppObject
	{
	public:
		::MX::Logic::Skills::CoverState* _CoverState_k__BackingField; // 0x18

		::System::Boolean IsSuccess(::MX::Logic::Battles::Battle* arg, ::MX::Logic::BattleEntities::BattleEntity* arg2, ::MX::Logic::BattleEntities::BattleEntity* arg3, Il2CppObject* arg4)
		{
			return ((::System::Boolean(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::BattleEntities::BattleEntity*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_COVERSTATECONDITIONALMODIFIER_ISSUCCESS_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::MX::Logic::Skills::CoverState* get_CoverState()
		{
			return ((::MX::Logic::Skills::CoverState*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_COVERSTATECONDITIONALMODIFIER_GET_COVERSTATE_OFFSET))(nullptr);
		}

		::System::Boolean _IsSuccess_b__4_0(::MX::Logic::BattleEntities::BattleEntity* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::BattleEntities::BattleEntity*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_COVERSTATECONDITIONALMODIFIER__ISSUCCESS_B__4_0_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::GameData::DAO::Battle::CoverStateConditionalModifierDAO* arg)
		{
			((::System::Void(*)(::MX::GameData::DAO::Battle::CoverStateConditionalModifierDAO*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_COVERSTATECONDITIONALMODIFIER_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

