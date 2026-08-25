#pragma once
#include "../../../../unitysdk.h"

namespace MX::Logic::BattleEntities { class SkillSlot; }
namespace MX::Logic::Data { class SkillAbilityValue; }
namespace MX::Logic::Skills { class SkillSpecification; }

#define MX_GAMEDATA_DAO_BATTLE_SKILLABILITYDAO_.CCTOR_OFFSET UNITYSDK_OFFSET(0x16DC030)
#define MX_GAMEDATA_DAO_BATTLE_SKILLABILITYDAO_.CTOR_OFFSET UNITYSDK_OFFSET(0x16DC200)
#define MX_GAMEDATA_DAO_BATTLE_SKILLABILITYDAO_TOSKILLABILITYVALUE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_GAMEDATA_DAO_BATTLE_SKILLABILITYDAO_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x16DC040)

namespace MX::GameData::DAO::Battle
{
	inline static constexpr unsigned int SkillAbilityDAO_TypeDefinitionIndex = 15392;

	class SkillAbilityDAO : public Il2CppObject
	{
	public:
		::System::String* name; // 0x10
		::System::Int32 StartDelay; // 0x18
		Il2CppObject* LogicEffectGroupIds; // 0x20
		Il2CppObject* Modifiers; // 0x28
		::System::Boolean IsReferenceSkillSlot; // 0x30
		::MX::Logic::BattleEntities::SkillSlot* ReferenceSkillSlot; // 0x34

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_SKILLABILITYDAO_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_SKILLABILITYDAO_.CTOR_OFFSET))(nullptr);
		}

		::MX::Logic::Data::SkillAbilityValue* ToSkillAbilityValue(::MX::Logic::Skills::SkillSpecification* arg)
		{
			return (return (::MX::Logic::Data::SkillAbilityValue*(*)(::MX::Logic::Skills::SkillSpecification*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_SKILLABILITYDAO_TOSKILLABILITYVALUE_OFFSET))(arg, nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_SKILLABILITYDAO_REGISTERFORMATTER_OFFSET))(nullptr);
		}

	};
}

