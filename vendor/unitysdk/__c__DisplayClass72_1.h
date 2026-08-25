#pragma once
#include "unitysdk.h"

class UIBase;

#define <>C__DISPLAYCLASS72_1_.CTOR_OFFSET UNITYSDK_OFFSET(0x2467CD0)
#define <>C__DISPLAYCLASS72_1__CREATESTACKUI_B__1_OFFSET UNITYSDK_OFFSET(0x2467CE0)

	inline static constexpr unsigned int <>c__DisplayClass72_1_TypeDefinitionIndex = 5613;

	class <>c__DisplayClass72_1 : public Il2CppObject
	{
	public:
		::System::Boolean complete; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS72_1_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _CreateStackUI_b__1(UIBase* arg)
		{
			((::System::Void(*)(UIBase*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS72_1__CREATESTACKUI_B__1_OFFSET))(arg, nullptr);
		}

	};

