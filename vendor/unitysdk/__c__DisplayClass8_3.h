#pragma once
#include "unitysdk.h"

namespace MX::Data::Excel { class AlertPopupExcel; }
class <>c__DisplayClass8_0;
class UIPopup_Spoiler;

#define <>C__DISPLAYCLASS8_3_.CTOR_OFFSET UNITYSDK_OFFSET(0x25BDA30)
#define <>C__DISPLAYCLASS8_3__ONCLICKUSE_B__7_OFFSET UNITYSDK_OFFSET(0x25BDC60)

	inline static constexpr unsigned int <>c__DisplayClass8_3_TypeDefinitionIndex = 6280;

	class <>c__DisplayClass8_3 : public Il2CppObject
	{
	public:
		::MX::Data::Excel::AlertPopupExcel* excel; // 0x10
		<>c__DisplayClass8_0* CS$__8__locals3; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS8_3_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _OnClickUse_b__7(UIPopup_Spoiler* arg)
		{
			((::System::Void(*)(UIPopup_Spoiler*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS8_3__ONCLICKUSE_B__7_OFFSET))(arg, nullptr);
		}

	};

