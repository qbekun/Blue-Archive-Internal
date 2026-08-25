#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Data { class ModifierCheckTarget; }
namespace MX::GameData::DAO::Battle { class SkillAbilityModifierDAO; }
namespace MX::Logic::Battles { class Battle; }
namespace MX::Logic::BattleEntities { class BattleEntity; }

#define MX_LOGIC_DATA_CONDITIONALMODIFIER_.CTOR_OFFSET UNITYSDK_OFFSET(0x12219F0)
#define MX_LOGIC_DATA_CONDITIONALMODIFIER_ISSUCCESS_OFFSET UNITYSDK_OFFSET(0x000000)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int ConditionalModifier_TypeDefinitionIndex = 13748;

	class ConditionalModifier : public ::Mono::Security::Interface::MonoLocalCertificateSelectionCallback
	{
	public:
		::MX::Logic::Data::ModifierCheckTarget* CheckTarget; // 0x10

		::System::Void .ctor(::MX::GameData::DAO::Battle::SkillAbilityModifierDAO* arg)
		{
			((::System::Void(*)(::MX::GameData::DAO::Battle::SkillAbilityModifierDAO*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_CONDITIONALMODIFIER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsSuccess(::MX::Logic::Battles::Battle* arg, ::MX::Logic::BattleEntities::BattleEntity* arg2, ::MX::Logic::BattleEntities::BattleEntity* arg3, Il2CppObject* arg4)
		{
			return ((::System::Boolean(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::BattleEntities::BattleEntity*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_CONDITIONALMODIFIER_ISSUCCESS_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

	};
}

