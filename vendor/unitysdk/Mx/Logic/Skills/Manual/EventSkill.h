#pragma once
#include "../../../../unitysdk.h"

namespace MX::Logic::Skills::Manual { class ManualSkill; }
namespace MX::Logic::Skills { class TargetCandidateRule; }
namespace MX::Logic::Skills { class TargetFindRule; }
namespace MX::Logic::Skills { class TargetSortRule; }

#define MX_LOGIC_SKILLS_MANUAL_EVENTSKILL_.CTOR_OFFSET UNITYSDK_OFFSET(0x14047A0)
#define MX_LOGIC_SKILLS_MANUAL_EVENTSKILL_GET_SORTRULE_OFFSET UNITYSDK_OFFSET(0x14048B0)
#define MX_LOGIC_SKILLS_MANUAL_EVENTSKILL_GET_TARGETRULE_OFFSET UNITYSDK_OFFSET(0x14048E0)
#define MX_LOGIC_SKILLS_MANUAL_EVENTSKILL_GET_ABILITIES_OFFSET UNITYSDK_OFFSET(0x1404910)
#define MX_LOGIC_SKILLS_MANUAL_EVENTSKILL_GET_SKILL_OFFSET UNITYSDK_OFFSET(0x1404930)
#define MX_LOGIC_SKILLS_MANUAL_EVENTSKILL_GET_CANDIDATERULE_OFFSET UNITYSDK_OFFSET(0x1404940)

namespace MX::Logic::Skills::Manual
{
	inline static constexpr unsigned int EventSkill_TypeDefinitionIndex = 14670;

	class EventSkill : public Il2CppObject
	{
	public:
		::MX::Logic::Skills::Manual::ManualSkill* _Skill_k__BackingField; // 0x10
		::MX::Logic::Skills::TargetCandidateRule* _CandidateRule_k__BackingField; // 0x18
		::MX::Logic::Skills::TargetFindRule* _TargetRule_k__BackingField; // 0xD8

		::System::Void .ctor(::MX::Logic::Skills::Manual::ManualSkill* arg, ::MX::Logic::Skills::TargetFindRule* arg2)
		{
			((::System::Void(*)(::MX::Logic::Skills::Manual::ManualSkill*, ::MX::Logic::Skills::TargetFindRule*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_MANUAL_EVENTSKILL_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::MX::Logic::Skills::TargetSortRule* get_SortRule()
		{
			return ((::MX::Logic::Skills::TargetSortRule*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_MANUAL_EVENTSKILL_GET_SORTRULE_OFFSET))(nullptr);
		}

		::MX::Logic::Skills::TargetFindRule* get_TargetRule()
		{
			return ((::MX::Logic::Skills::TargetFindRule*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_MANUAL_EVENTSKILL_GET_TARGETRULE_OFFSET))(nullptr);
		}

		Il2CppObject* get_Abilities()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_MANUAL_EVENTSKILL_GET_ABILITIES_OFFSET))(nullptr);
		}

		::MX::Logic::Skills::Manual::ManualSkill* get_Skill()
		{
			return ((::MX::Logic::Skills::Manual::ManualSkill*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_MANUAL_EVENTSKILL_GET_SKILL_OFFSET))(nullptr);
		}

		::MX::Logic::Skills::TargetCandidateRule* get_CandidateRule()
		{
			return ((::MX::Logic::Skills::TargetCandidateRule*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_MANUAL_EVENTSKILL_GET_CANDIDATERULE_OFFSET))(nullptr);
		}

	};
}

