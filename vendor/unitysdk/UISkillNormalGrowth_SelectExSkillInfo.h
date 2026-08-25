#pragma once
#include "unitysdk.h"

class UISelectExSkillInfo;
class UIScrollView;
class UITable;
class UISkillInfo;

#define UISKILLNORMALGROWTH_SELECTEXSKILLINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x22F1450)
#define UISKILLNORMALGROWTH_SELECTEXSKILLINFO_SETUI_OFFSET UNITYSDK_OFFSET(0x22EFE10)

	inline static constexpr unsigned int UISkillNormalGrowth_SelectExSkillInfo_TypeDefinitionIndex = 4891;

	class UISkillNormalGrowth_SelectExSkillInfo : public Il2CppObject
	{
	public:
		UISelectExSkillInfo* current; // 0x18
		UISelectExSkillInfo* next; // 0x20
		Il2CppObject* nextObjects; // 0x28
		::Il2CppArray<::System::Object*>* additionalSkillPairsList; // 0x30
		UIScrollView* scrollView; // 0x38
		UITable* table; // 0x40

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISKILLNORMALGROWTH_SELECTEXSKILLINFO_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetUI(UISkillInfo* arg, UISkillInfo* arg2)
		{
			((::System::Void(*)(UISkillInfo*, UISkillInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UISKILLNORMALGROWTH_SELECTEXSKILLINFO_SETUI_OFFSET))(arg, arg2, nullptr);
		}

	};

