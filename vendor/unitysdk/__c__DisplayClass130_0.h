#pragma once
#include "unitysdk.h"

class UIBase;

#define <>C__DISPLAYCLASS130_0_.CTOR_OFFSET UNITYSDK_OFFSET(0x268D600)
#define <>C__DISPLAYCLASS130_0__CLEARNONSTACKEDUI_B__0_OFFSET UNITYSDK_OFFSET(0x2693B20)

	inline static constexpr unsigned int <>c__DisplayClass130_0_TypeDefinitionIndex = 6788;

	class <>c__DisplayClass130_0 : public Il2CppObject
	{
	public:
		UIBase* exclusiveUI; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS130_0_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean _ClearNonStackedUI_b__0(UIBase* arg)
		{
			return ((::System::Boolean(*)(UIBase*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS130_0__CLEARNONSTACKEDUI_B__0_OFFSET))(arg, nullptr);
		}

	};

