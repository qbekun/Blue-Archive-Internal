#pragma once
#include "unitysdk.h"

namespace MX::Data::Excel { class ContentSpoilerPopupExcel; }
class UIPopup_Spoiler;

#define <>C__DISPLAYCLASS57_0_.CTOR_OFFSET UNITYSDK_OFFSET(0xBDD810)
#define <>C__DISPLAYCLASS57_0__ONCLICKMULTIFLOORRAID_B__1_OFFSET UNITYSDK_OFFSET(0xBDD820)

	inline static constexpr unsigned int <>c__DisplayClass57_0_TypeDefinitionIndex = 8699;

	class <>c__DisplayClass57_0 : public Il2CppObject
	{
	public:
		::MX::Data::Excel::ContentSpoilerPopupExcel* spoilerExcel; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS57_0_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _OnClickMultiFloorRaid_b__1(UIPopup_Spoiler* arg)
		{
			((::System::Void(*)(UIPopup_Spoiler*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS57_0__ONCLICKMULTIFLOORRAID_B__1_OFFSET))(arg, nullptr);
		}

	};

