#pragma once
#include "unitysdk.h"

class <>c__DisplayClass34_3;
class UIPopup_System;

#define <>C__DISPLAYCLASS34_4_.CTOR_OFFSET UNITYSDK_OFFSET(0xB10CD0)
#define <>C__DISPLAYCLASS34_4__ONCLICKDISABLE_B__9_OFFSET UNITYSDK_OFFSET(0xB12710)

	inline static constexpr unsigned int <>c__DisplayClass34_4_TypeDefinitionIndex = 8212;

	class <>c__DisplayClass34_4 : public Il2CppObject
	{
	public:
		::System::String* popupTitle; // 0x10
		::System::String* popupDesc; // 0x18
		::System::String* shortcurButtonText; // 0x20
		::System::String* cancelBUttonText; // 0x28
		<>c__DisplayClass34_3* CS$__8__locals2; // 0x30

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS34_4_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _OnClickDisable_b__9(UIPopup_System* arg)
		{
			((::System::Void(*)(UIPopup_System*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS34_4__ONCLICKDISABLE_B__9_OFFSET))(arg, nullptr);
		}

	};

