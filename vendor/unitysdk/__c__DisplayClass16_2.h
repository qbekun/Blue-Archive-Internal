#pragma once
#include "unitysdk.h"

namespace MX::Data::Excel { class ContentSpoilerPopupExcel; }
class UIPopup_Spoiler;

#define <>C__DISPLAYCLASS16_2_.CTOR_OFFSET UNITYSDK_OFFSET(0x2671740)
#define <>C__DISPLAYCLASS16_2__ONCLICKBANNER_B__14_OFFSET UNITYSDK_OFFSET(0x2672410)

	inline static constexpr unsigned int <>c__DisplayClass16_2_TypeDefinitionIndex = 6705;

	class <>c__DisplayClass16_2 : public Il2CppObject
	{
	public:
		::MX::Data::Excel::ContentSpoilerPopupExcel* spoilerExcel; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS16_2_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _OnClickBanner_b__14(UIPopup_Spoiler* arg)
		{
			((::System::Void(*)(UIPopup_Spoiler*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS16_2__ONCLICKBANNER_B__14_OFFSET))(arg, nullptr);
		}

	};

