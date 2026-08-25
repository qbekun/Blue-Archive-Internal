#pragma once
#include "unitysdk.h"

class UISkillLevelUpAdditionalSkillUnit;

#define UISKILLLEVELUPADDITIONALSKILLPAIR_.CTOR_OFFSET UNITYSDK_OFFSET(0x22EB550)
#define UISKILLLEVELUPADDITIONALSKILLPAIR_SETEMPTY_OFFSET UNITYSDK_OFFSET(0x22EB560)
#define UISKILLLEVELUPADDITIONALSKILLPAIR_GET_TOUNIT_OFFSET UNITYSDK_OFFSET(0x22EB5F0)
#define UISKILLLEVELUPADDITIONALSKILLPAIR_SETVISIBLE_OFFSET UNITYSDK_OFFSET(0x22EB600)
#define UISKILLLEVELUPADDITIONALSKILLPAIR_GET_FROMUNIT_OFFSET UNITYSDK_OFFSET(0x22EB690)

	inline static constexpr unsigned int UISkillLevelUpAdditionalSkillPair_TypeDefinitionIndex = 4875;

	class UISkillLevelUpAdditionalSkillPair : public Il2CppObject
	{
	public:
		UISkillLevelUpAdditionalSkillUnit* fromUnit; // 0x18
		UISkillLevelUpAdditionalSkillUnit* toUnit; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISKILLLEVELUPADDITIONALSKILLPAIR_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetEmpty()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISKILLLEVELUPADDITIONALSKILLPAIR_SETEMPTY_OFFSET))(nullptr);
		}

		UISkillLevelUpAdditionalSkillUnit* get_ToUnit()
		{
			return ((UISkillLevelUpAdditionalSkillUnit*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISKILLLEVELUPADDITIONALSKILLPAIR_GET_TOUNIT_OFFSET))(nullptr);
		}

		::System::Void SetVisible()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISKILLLEVELUPADDITIONALSKILLPAIR_SETVISIBLE_OFFSET))(nullptr);
		}

		UISkillLevelUpAdditionalSkillUnit* get_FromUnit()
		{
			return ((UISkillLevelUpAdditionalSkillUnit*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISKILLLEVELUPADDITIONALSKILLPAIR_GET_FROMUNIT_OFFSET))(nullptr);
		}

	};

