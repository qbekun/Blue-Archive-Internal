#pragma once
#include "unitysdk.h"

class UILabel;

#define <>C__DISPLAYCLASS103_0_.CTOR_OFFSET UNITYSDK_OFFSET(0x277A980)
#define <>C__DISPLAYCLASS103_0__SETSUBTITLE_B__0_OFFSET UNITYSDK_OFFSET(0x277C620)

	inline static constexpr unsigned int <>c__DisplayClass103_0_TypeDefinitionIndex = 7368;

	class <>c__DisplayClass103_0 : public Il2CppObject
	{
	public:
		::System::String* text; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS103_0_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _SetSubTitle_b__0(UILabel* arg)
		{
			((::System::Void(*)(UILabel*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS103_0__SETSUBTITLE_B__0_OFFSET))(arg, nullptr);
		}

	};

