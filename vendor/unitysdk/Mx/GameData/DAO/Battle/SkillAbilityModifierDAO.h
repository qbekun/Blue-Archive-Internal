#pragma once
#include "../../../../unitysdk.h"

namespace MX::Logic::Data { class ModifierCheckTarget; }
namespace MX::Logic::Data { class AbilityModifier; }

#define MX_GAMEDATA_DAO_BATTLE_SKILLABILITYMODIFIERDAO_.CCTOR_OFFSET UNITYSDK_OFFSET(0x16E0510)
#define MX_GAMEDATA_DAO_BATTLE_SKILLABILITYMODIFIERDAO_.CTOR_OFFSET UNITYSDK_OFFSET(0x16E06E0)
#define MX_GAMEDATA_DAO_BATTLE_SKILLABILITYMODIFIERDAO_TOABILITYMODIFIER_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_GAMEDATA_DAO_BATTLE_SKILLABILITYMODIFIERDAO_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x16E0520)

namespace MX::GameData::DAO::Battle
{
	inline static constexpr unsigned int SkillAbilityModifierDAO_TypeDefinitionIndex = 15398;

	class SkillAbilityModifierDAO : public Il2CppObject
	{
	public:
		::MX::Logic::Data::ModifierCheckTarget* CheckTarget; // 0x10

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_SKILLABILITYMODIFIERDAO_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_SKILLABILITYMODIFIERDAO_.CTOR_OFFSET))(nullptr);
		}

		::MX::Logic::Data::AbilityModifier* ToAbilityModifier()
		{
			return (return (::MX::Logic::Data::AbilityModifier*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_SKILLABILITYMODIFIERDAO_TOABILITYMODIFIER_OFFSET))(nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_SKILLABILITYMODIFIERDAO_REGISTERFORMATTER_OFFSET))(nullptr);
		}

	};
}

