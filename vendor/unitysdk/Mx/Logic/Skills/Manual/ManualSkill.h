#pragma once
#include "../../../../unitysdk.h"

namespace MX::Logic::Skills { class SkillSpecification; }
namespace MX::Logic::Skills::Manual { class ManualSkillTypes; }
namespace MX::GameData::DAO::Battle { class ManualSkillDAO; }

#define MX_LOGIC_SKILLS_MANUAL_MANUALSKILL_GET_SKILLSPECIFICATION_OFFSET UNITYSDK_OFFSET(0x1404D00)
#define MX_LOGIC_SKILLS_MANUAL_MANUALSKILL_.CTOR_OFFSET UNITYSDK_OFFSET(0x1404D10)
#define MX_LOGIC_SKILLS_MANUAL_MANUALSKILL_GET_MANUALSKILLTYPE_OFFSET UNITYSDK_OFFSET(0x1404FB0)
#define MX_LOGIC_SKILLS_MANUAL_MANUALSKILL_GET_ABILITIES_OFFSET UNITYSDK_OFFSET(0x1404FC0)

namespace MX::Logic::Skills::Manual
{
	inline static constexpr unsigned int ManualSkill_TypeDefinitionIndex = 14672;

	class ManualSkill : public Il2CppObject
	{
	public:
		::MX::Logic::Skills::SkillSpecification* _SkillSpecification_k__BackingField; // 0x10
		::MX::Logic::Skills::Manual::ManualSkillTypes* _ManualSkillType_k__BackingField; // 0x18
		Il2CppObject* _Abilities_k__BackingField; // 0x20

		::MX::Logic::Skills::SkillSpecification* get_SkillSpecification()
		{
			return ((::MX::Logic::Skills::SkillSpecification*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_MANUAL_MANUALSKILL_GET_SKILLSPECIFICATION_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::GameData::DAO::Battle::ManualSkillDAO* arg, ::MX::Logic::Skills::SkillSpecification* arg2)
		{
			((::System::Void(*)(::MX::GameData::DAO::Battle::ManualSkillDAO*, ::MX::Logic::Skills::SkillSpecification*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_MANUAL_MANUALSKILL_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::MX::Logic::Skills::Manual::ManualSkillTypes* get_ManualSkillType()
		{
			return ((::MX::Logic::Skills::Manual::ManualSkillTypes*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_MANUAL_MANUALSKILL_GET_MANUALSKILLTYPE_OFFSET))(nullptr);
		}

		Il2CppObject* get_Abilities()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_MANUAL_MANUALSKILL_GET_ABILITIES_OFFSET))(nullptr);
		}

	};
}

