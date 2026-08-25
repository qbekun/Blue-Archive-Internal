#pragma once
#include "unitysdk.h"

class UIPopup_WelcomeCampaignItem;

#define <>C__DISPLAYCLASS96_19_.CTOR_OFFSET UNITYSDK_OFFSET(0x2663E80)
#define <>C__DISPLAYCLASS96_19__ADDPOPUPS_B__73_OFFSET UNITYSDK_OFFSET(0x2663E90)
#define <>C__DISPLAYCLASS96_19__ADDPOPUPS_B__74_OFFSET UNITYSDK_OFFSET(0x2663F40)

	inline static constexpr unsigned int <>c__DisplayClass96_19_TypeDefinitionIndex = 6662;

	class <>c__DisplayClass96_19 : public Il2CppObject
	{
	public:
		::System::Boolean popupClosed; // 0x10
		::System::Action* __9__74; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS96_19_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _AddPopups_b__73(UIPopup_WelcomeCampaignItem* arg)
		{
			((::System::Void(*)(UIPopup_WelcomeCampaignItem*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS96_19__ADDPOPUPS_B__73_OFFSET))(arg, nullptr);
		}

		::System::Void _AddPopups_b__74()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS96_19__ADDPOPUPS_B__74_OFFSET))(nullptr);
		}

	};

