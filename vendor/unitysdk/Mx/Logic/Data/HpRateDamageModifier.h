#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Data { class ModifierCheckTarget; }
namespace MX::Core::Math { class BasisPoint; }
namespace MX::Logic::Battles { class Battle; }
namespace MX::Logic::BattleEntities { class BattleEntity; }
namespace MX::GameData::DAO::Battle { class HpRateDamageModifierDAO; }

#define MX_LOGIC_DATA_HPRATEDAMAGEMODIFIER_GETMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x122E120)
#define MX_LOGIC_DATA_HPRATEDAMAGEMODIFIER_ISMATCH_OFFSET UNITYSDK_OFFSET(0x122E6C0)
#define MX_LOGIC_DATA_HPRATEDAMAGEMODIFIER_TOSTRING_OFFSET UNITYSDK_OFFSET(0x122E730)
#define MX_LOGIC_DATA_HPRATEDAMAGEMODIFIER_.CTOR_OFFSET UNITYSDK_OFFSET(0x122E950)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int HpRateDamageModifier_TypeDefinitionIndex = 13814;

	class HpRateDamageModifier : public Il2CppObject
	{
	public:
		::System::Int64 MinHpRate; // 0x18
		::System::Int64 MaxHpRate; // 0x20
		::System::Int64 MinDamageMultiplier; // 0x28
		::System::Int64 MaxDamageMultiplier; // 0x30
		::MX::Logic::Data::ModifierCheckTarget* checkTarget; // 0x38

		::MX::Core::Math::BasisPoint* GetMultiplier(::MX::Logic::Battles::Battle* arg, ::MX::Logic::BattleEntities::BattleEntity* arg2, ::MX::Logic::BattleEntities::BattleEntity* arg3)
		{
			return ((::MX::Core::Math::BasisPoint*(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::BattleEntities::BattleEntity*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_HPRATEDAMAGEMODIFIER_GETMULTIPLIER_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Boolean IsMatch(::MX::Logic::Battles::Battle* arg, ::MX::Logic::BattleEntities::BattleEntity* arg2, ::MX::Logic::BattleEntities::BattleEntity* arg3)
		{
			return ((::System::Boolean(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::BattleEntities::BattleEntity*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_HPRATEDAMAGEMODIFIER_ISMATCH_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_HPRATEDAMAGEMODIFIER_TOSTRING_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::GameData::DAO::Battle::HpRateDamageModifierDAO* arg)
		{
			((::System::Void(*)(::MX::GameData::DAO::Battle::HpRateDamageModifierDAO*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_HPRATEDAMAGEMODIFIER_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

