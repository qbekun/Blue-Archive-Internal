#pragma once
#include "unitysdk.h"

class UILobbyEventScrollElement;
class UIRatioNoticePopup;

#define <>C__DISPLAYCLASS16_3_.CTOR_OFFSET UNITYSDK_OFFSET(0x2671750)
#define <>C__DISPLAYCLASS16_3__ONCLICKBANNER_B__15_OFFSET UNITYSDK_OFFSET(0x26724B0)

	inline static constexpr unsigned int <>c__DisplayClass16_3_TypeDefinitionIndex = 6706;

	class <>c__DisplayClass16_3 : public Il2CppObject
	{
	public:
		::System::String* urlTemp; // 0x10
		UILobbyEventScrollElement* __4__this; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS16_3_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _OnClickBanner_b__15(UIRatioNoticePopup* arg)
		{
			((::System::Void(*)(UIRatioNoticePopup*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS16_3__ONCLICKBANNER_B__15_OFFSET))(arg, nullptr);
		}

	};

