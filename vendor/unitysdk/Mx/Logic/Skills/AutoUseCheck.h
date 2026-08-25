#pragma once
#include "../../../unitysdk.h"

namespace MX::Data { class CharacterSkillListKey; }

#define MX_LOGIC_SKILLS_AUTOUSECHECK_RESETTRIGGERCOUNTANDCONDITION_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_LOGIC_SKILLS_AUTOUSECHECK_GET_CURRENTTRIGGERCOUNT_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_LOGIC_SKILLS_AUTOUSECHECK_SET_ACTIVATECONDITION_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_LOGIC_SKILLS_AUTOUSECHECK_GET_MAXTRIGGERCOUNT_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_LOGIC_SKILLS_AUTOUSECHECK_CHECKCONDITION_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_LOGIC_SKILLS_AUTOUSECHECK_TRYTOUSESKILL_OFFSET UNITYSDK_OFFSET(0x000000)

namespace MX::Logic::Skills
{
	inline static constexpr unsigned int AutoUseCheck_TypeDefinitionIndex = 14534;

	class AutoUseCheck : public Il2CppObject
	{
	public:
		::System::Void ResetTriggerCountAndCondition()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_AUTOUSECHECK_RESETTRIGGERCOUNTANDCONDITION_OFFSET))(nullptr);
		}

		::System::Int32 get_CurrentTriggerCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_AUTOUSECHECK_GET_CURRENTTRIGGERCOUNT_OFFSET))(nullptr);
		}

		::System::Void set_ActivateCondition(::MX::Data::CharacterSkillListKey* arg)
		{
			((::System::Void(*)(::MX::Data::CharacterSkillListKey*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_AUTOUSECHECK_SET_ACTIVATECONDITION_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_MaxTriggerCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_AUTOUSECHECK_GET_MAXTRIGGERCOUNT_OFFSET))(nullptr);
		}

		::System::Boolean CheckCondition()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_AUTOUSECHECK_CHECKCONDITION_OFFSET))(nullptr);
		}

		::System::Boolean TryToUseSkill()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_AUTOUSECHECK_TRYTOUSESKILL_OFFSET))(nullptr);
		}

	};
}

