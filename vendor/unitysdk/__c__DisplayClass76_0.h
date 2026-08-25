#pragma once
#include "unitysdk.h"

class UIPopupFormationCharSlot;
class UICharacterCard;

#define <>C__DISPLAYCLASS76_0_.CTOR_OFFSET UNITYSDK_OFFSET(0x255D320)
#define <>C__DISPLAYCLASS76_0__ONCLICKITEM_B__1_OFFSET UNITYSDK_OFFSET(0x255D330)

	inline static constexpr unsigned int <>c__DisplayClass76_0_TypeDefinitionIndex = 6104;

	class <>c__DisplayClass76_0 : public Il2CppObject
	{
	public:
		UIPopupFormationCharSlot* item; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS76_0_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean _OnClickItem_b__1(UICharacterCard* arg)
		{
			return ((::System::Boolean(*)(UICharacterCard*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS76_0__ONCLICKITEM_B__1_OFFSET))(arg, nullptr);
		}

	};

