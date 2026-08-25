#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class BulletType; }
namespace MX::Logic::Data { class IncludeType; }
namespace MX::Logic::BattleEntities { class BattleEntity; }
namespace MX::GameData::DAO::Battle { class BulletTypeConditionModifierDAO; }
namespace MX::Logic::Battles { class Battle; }

#define MX_LOGIC_DATA_BULLETTYPECONDITIONMODIFIER__ISSUCCESS_B__3_0_OFFSET UNITYSDK_OFFSET(0x1221C40)
#define MX_LOGIC_DATA_BULLETTYPECONDITIONMODIFIER_.CTOR_OFFSET UNITYSDK_OFFSET(0x1221D00)
#define MX_LOGIC_DATA_BULLETTYPECONDITIONMODIFIER__ISSUCCESS_B__3_1_OFFSET UNITYSDK_OFFSET(0x1221D40)
#define MX_LOGIC_DATA_BULLETTYPECONDITIONMODIFIER_ISSUCCESS_OFFSET UNITYSDK_OFFSET(0x1221DF0)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int BulletTypeConditionModifier_TypeDefinitionIndex = 13745;

	class BulletTypeConditionModifier : public Il2CppObject
	{
	public:
		::FlatData::BulletType* BulletType; // 0x18
		::MX::Logic::Data::IncludeType* IncludeType; // 0x1C

		::System::Boolean _IsSuccess_b__3_0(::MX::Logic::BattleEntities::BattleEntity* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::BattleEntities::BattleEntity*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_BULLETTYPECONDITIONMODIFIER__ISSUCCESS_B__3_0_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::GameData::DAO::Battle::BulletTypeConditionModifierDAO* arg)
		{
			((::System::Void(*)(::MX::GameData::DAO::Battle::BulletTypeConditionModifierDAO*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_BULLETTYPECONDITIONMODIFIER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean _IsSuccess_b__3_1(::MX::Logic::BattleEntities::BattleEntity* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::BattleEntities::BattleEntity*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_BULLETTYPECONDITIONMODIFIER__ISSUCCESS_B__3_1_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsSuccess(::MX::Logic::Battles::Battle* arg, ::MX::Logic::BattleEntities::BattleEntity* arg2, ::MX::Logic::BattleEntities::BattleEntity* arg3, Il2CppObject* arg4)
		{
			return ((::System::Boolean(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::BattleEntities::BattleEntity*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_BULLETTYPECONDITIONMODIFIER_ISSUCCESS_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

	};
}

