#pragma once
#include "../../../unitysdk.h"

namespace MX::Core::Math { class BasisPoint; }
namespace MX::Logic::Battles { class Battle; }
namespace MX::Logic::BattleEntities { class BattleEntity; }

#define MX_LOGIC_DATA_DAMAGEMODIFIER_ISMATCH_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_LOGIC_DATA_DAMAGEMODIFIER_GETMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x122D570)
#define MX_LOGIC_DATA_DAMAGEMODIFIER_.CTOR_OFFSET UNITYSDK_OFFSET(0x122D550)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int DamageModifier_TypeDefinitionIndex = 13809;

	class DamageModifier : public ::Mono::Security::Interface::MonoLocalCertificateSelectionCallback
	{
	public:
		::MX::Core::Math::BasisPoint* multiplier; // 0x10

		::System::Boolean IsMatch(::MX::Logic::Battles::Battle* arg, ::MX::Logic::BattleEntities::BattleEntity* arg2, ::MX::Logic::BattleEntities::BattleEntity* arg3)
		{
			return ((::System::Boolean(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::BattleEntities::BattleEntity*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_DAMAGEMODIFIER_ISMATCH_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::MX::Core::Math::BasisPoint* GetMultiplier(::MX::Logic::Battles::Battle* arg, ::MX::Logic::BattleEntities::BattleEntity* arg2, ::MX::Logic::BattleEntities::BattleEntity* arg3)
		{
			return ((::MX::Core::Math::BasisPoint*(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::BattleEntities::BattleEntity*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_DAMAGEMODIFIER_GETMULTIPLIER_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void .ctor(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_DAMAGEMODIFIER_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

