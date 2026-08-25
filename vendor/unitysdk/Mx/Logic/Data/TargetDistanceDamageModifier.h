#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Data { class ModifierCheckTarget; }
namespace MX::Core::Math { class BasisPoint; }
namespace MX::Logic::Battles { class Battle; }
namespace MX::Logic::BattleEntities { class BattleEntity; }
namespace MX::GameData::DAO::Battle { class TargetDistanceDamageModifierDAO; }

#define MX_LOGIC_DATA_TARGETDISTANCEDAMAGEMODIFIER_TOSTRING_OFFSET UNITYSDK_OFFSET(0x12317C0)
#define MX_LOGIC_DATA_TARGETDISTANCEDAMAGEMODIFIER_GETMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x12319C0)
#define MX_LOGIC_DATA_TARGETDISTANCEDAMAGEMODIFIER_ISMATCH_OFFSET UNITYSDK_OFFSET(0x1231C40)
#define MX_LOGIC_DATA_TARGETDISTANCEDAMAGEMODIFIER_.CTOR_OFFSET UNITYSDK_OFFSET(0x1231CB0)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int TargetDistanceDamageModifier_TypeDefinitionIndex = 13832;

	class TargetDistanceDamageModifier : public Il2CppObject
	{
	public:
		::System::Single minDistanceMeter; // 0x18
		::System::Single maxDistanceMeter; // 0x1C
		::System::Int64 minMultiplier; // 0x20
		::System::Int64 maxMultiplier; // 0x28
		::MX::Logic::Data::ModifierCheckTarget* checkTarget; // 0x30

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_TARGETDISTANCEDAMAGEMODIFIER_TOSTRING_OFFSET))(nullptr);
		}

		::MX::Core::Math::BasisPoint* GetMultiplier(::MX::Logic::Battles::Battle* arg, ::MX::Logic::BattleEntities::BattleEntity* arg2, ::MX::Logic::BattleEntities::BattleEntity* arg3)
		{
			return ((::MX::Core::Math::BasisPoint*(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::BattleEntities::BattleEntity*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_TARGETDISTANCEDAMAGEMODIFIER_GETMULTIPLIER_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Boolean IsMatch(::MX::Logic::Battles::Battle* arg, ::MX::Logic::BattleEntities::BattleEntity* arg2, ::MX::Logic::BattleEntities::BattleEntity* arg3)
		{
			return ((::System::Boolean(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::BattleEntities::BattleEntity*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_TARGETDISTANCEDAMAGEMODIFIER_ISMATCH_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void .ctor(::MX::GameData::DAO::Battle::TargetDistanceDamageModifierDAO* arg)
		{
			((::System::Void(*)(::MX::GameData::DAO::Battle::TargetDistanceDamageModifierDAO*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_TARGETDISTANCEDAMAGEMODIFIER_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

