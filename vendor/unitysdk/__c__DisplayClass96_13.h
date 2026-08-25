#pragma once
#include "unitysdk.h"

class UIPopup_GemProductNotice;

#define <>C__DISPLAYCLASS96_13_.CTOR_OFFSET UNITYSDK_OFFSET(0x26632A0)
#define <>C__DISPLAYCLASS96_13__ADDPOPUPS_G__OPENREPURCHASEGEMPRODUCTNOTICEPOPUP|57_OFFSET UNITYSDK_OFFSET(0x26632B0)
#define <>C__DISPLAYCLASS96_13__ADDPOPUPS_B__59_OFFSET UNITYSDK_OFFSET(0x2663380)
#define <>C__DISPLAYCLASS96_13__ADDPOPUPS_B__60_OFFSET UNITYSDK_OFFSET(0x26634D0)

	inline static constexpr unsigned int <>c__DisplayClass96_13_TypeDefinitionIndex = 6656;

	class <>c__DisplayClass96_13 : public Il2CppObject
	{
	public:
		::System::Boolean popupClosed; // 0x10
		::System::String* waitUntilCloseUIName; // 0x18
		Il2CppObject* __9__60; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS96_13_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _AddPopups_g__OpenRepurchaseGemProductNoticePopup|57()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS96_13__ADDPOPUPS_G__OPENREPURCHASEGEMPRODUCTNOTICEPOPUP|57_OFFSET))(nullptr);
		}

		::System::Void _AddPopups_b__59(UIPopup_GemProductNotice* arg)
		{
			((::System::Void(*)(UIPopup_GemProductNotice*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS96_13__ADDPOPUPS_B__59_OFFSET))(arg, nullptr);
		}

		::System::Void _AddPopups_b__60(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS96_13__ADDPOPUPS_B__60_OFFSET))(str, nullptr);
		}

	};

