#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Data { class ModifierCheckTarget; }
namespace FlatData { class StatType; }
namespace MX::GameData::DAO::Battle { class StatValueDamageModifierDAO; }
namespace MX::Core::Math { class BasisPoint; }
namespace MX::Logic::Battles { class Battle; }
namespace MX::Logic::BattleEntities { class BattleEntity; }

#define MX_LOGIC_DATA_STATVALUEDAMAGEMODIFIER_.CTOR_OFFSET UNITYSDK_OFFSET(0x12307B0)
#define MX_LOGIC_DATA_STATVALUEDAMAGEMODIFIER_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1230810)
#define MX_LOGIC_DATA_STATVALUEDAMAGEMODIFIER_GETMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x1230A30)
#define MX_LOGIC_DATA_STATVALUEDAMAGEMODIFIER_ISMATCH_OFFSET UNITYSDK_OFFSET(0x1230FE0)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int StatValueDamageModifier_TypeDefinitionIndex = 13827;

	class StatValueDamageModifier : public Il2CppObject
	{
	public:
		::System::Int64 MinStatValue; // 0x18
		::System::Int64 MaxStatValue; // 0x20
		::System::Int64 MinDamageMultiplier; // 0x28
		::System::Int64 MaxDamageMultiplier; // 0x30
		::MX::Logic::Data::ModifierCheckTarget* checkTarget; // 0x38
		::FlatData::StatType* statType; // 0x3C

		::System::Void .ctor(::MX::GameData::DAO::Battle::StatValueDamageModifierDAO* arg)
		{
			((::System::Void(*)(::MX::GameData::DAO::Battle::StatValueDamageModifierDAO*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_STATVALUEDAMAGEMODIFIER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_STATVALUEDAMAGEMODIFIER_TOSTRING_OFFSET))(nullptr);
		}

		::MX::Core::Math::BasisPoint* GetMultiplier(::MX::Logic::Battles::Battle* arg, ::MX::Logic::BattleEntities::BattleEntity* arg2, ::MX::Logic::BattleEntities::BattleEntity* arg3)
		{
			return ((::MX::Core::Math::BasisPoint*(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::BattleEntities::BattleEntity*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_STATVALUEDAMAGEMODIFIER_GETMULTIPLIER_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Boolean IsMatch(::MX::Logic::Battles::Battle* arg, ::MX::Logic::BattleEntities::BattleEntity* arg2, ::MX::Logic::BattleEntities::BattleEntity* arg3)
		{
			return ((::System::Boolean(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::BattleEntities::BattleEntity*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_STATVALUEDAMAGEMODIFIER_ISMATCH_OFFSET))(arg, arg2, arg3, nullptr);
		}

	};
}

