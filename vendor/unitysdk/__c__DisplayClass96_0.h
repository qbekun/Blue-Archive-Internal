#pragma once
#include "unitysdk.h"

class UIManager;
class UIBase;

#define <>C__DISPLAYCLASS96_0_.CTOR_OFFSET UNITYSDK_OFFSET(0x26922A0)
#define <>C__DISPLAYCLASS96_0__REGISTERUISONSTACK_B__0_OFFSET UNITYSDK_OFFSET(0x26922B0)

	inline static constexpr unsigned int <>c__DisplayClass96_0_TypeDefinitionIndex = 6779;

	class <>c__DisplayClass96_0 : public Il2CppObject
	{
	public:
		::System::Boolean complete; // 0x10
		UIManager* __4__this; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS96_0_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _RegisterUIsOnStack_b__0(UIBase* arg)
		{
			((::System::Void(*)(UIBase*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS96_0__REGISTERUISONSTACK_B__0_OFFSET))(arg, nullptr);
		}

	};

