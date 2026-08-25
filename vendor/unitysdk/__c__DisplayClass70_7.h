#pragma once
#include "unitysdk.h"

class UIDefeat;
class UITutorialFailure;

#define <>C__DISPLAYCLASS70_7_.CTOR_OFFSET UNITYSDK_OFFSET(0x23CDAB0)
#define <>C__DISPLAYCLASS70_7__SHOWPOPUP_B__11_OFFSET UNITYSDK_OFFSET(0x23CDAC0)

	inline static constexpr unsigned int <>c__DisplayClass70_7_TypeDefinitionIndex = 5295;

	class <>c__DisplayClass70_7 : public Il2CppObject
	{
	public:
		::System::Boolean complete; // 0x10
		UIDefeat* __4__this; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS70_7_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _ShowPopup_b__11(UITutorialFailure* arg)
		{
			((::System::Void(*)(UITutorialFailure*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS70_7__SHOWPOPUP_B__11_OFFSET))(arg, nullptr);
		}

	};

