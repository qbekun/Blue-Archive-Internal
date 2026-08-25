#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::BattleEntities { class HeroStatus; }
namespace MX::Logic::Data { class IncludeType; }
namespace MX::Logic::BattleEntities { class BattleEntity; }
namespace MX::GameData::DAO::Battle { class StatusConditionalModifierDAO; }
namespace MX::Logic::Battles { class Battle; }

#define MX_LOGIC_DATA_STATUSCONDITIONALMODIFIER__ISSUCCESS_B__3_1_OFFSET UNITYSDK_OFFSET(0x12305D0)
#define MX_LOGIC_DATA_STATUSCONDITIONALMODIFIER__ISSUCCESS_B__3_0_OFFSET UNITYSDK_OFFSET(0x1230610)
#define MX_LOGIC_DATA_STATUSCONDITIONALMODIFIER_.CTOR_OFFSET UNITYSDK_OFFSET(0x1230650)
#define MX_LOGIC_DATA_STATUSCONDITIONALMODIFIER_ISSUCCESS_OFFSET UNITYSDK_OFFSET(0x1230690)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int StatusConditionalModifier_TypeDefinitionIndex = 13826;

	class StatusConditionalModifier : public Il2CppObject
	{
	public:
		::MX::Logic::BattleEntities::HeroStatus* StatusToCheck; // 0x18
		::MX::Logic::Data::IncludeType* IncludeType; // 0x1C

		::System::Boolean _IsSuccess_b__3_1(::MX::Logic::BattleEntities::BattleEntity* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::BattleEntities::BattleEntity*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_STATUSCONDITIONALMODIFIER__ISSUCCESS_B__3_1_OFFSET))(arg, nullptr);
		}

		::System::Boolean _IsSuccess_b__3_0(::MX::Logic::BattleEntities::BattleEntity* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::BattleEntities::BattleEntity*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_STATUSCONDITIONALMODIFIER__ISSUCCESS_B__3_0_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::GameData::DAO::Battle::StatusConditionalModifierDAO* arg)
		{
			((::System::Void(*)(::MX::GameData::DAO::Battle::StatusConditionalModifierDAO*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_STATUSCONDITIONALMODIFIER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsSuccess(::MX::Logic::Battles::Battle* arg, ::MX::Logic::BattleEntities::BattleEntity* arg2, ::MX::Logic::BattleEntities::BattleEntity* arg3, Il2CppObject* arg4)
		{
			return ((::System::Boolean(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::BattleEntities::BattleEntity*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_STATUSCONDITIONALMODIFIER_ISSUCCESS_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

	};
}

