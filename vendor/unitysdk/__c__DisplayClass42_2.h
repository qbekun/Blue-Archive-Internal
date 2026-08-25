#pragma once
#include "unitysdk.h"

class UILabel;

#define <>C__DISPLAYCLASS42_2_.CTOR_OFFSET UNITYSDK_OFFSET(0x27F3890)
#define <>C__DISPLAYCLASS42_2__SETEVENTCONTENT_B__5_OFFSET UNITYSDK_OFFSET(0x27F4BF0)

	inline static constexpr unsigned int <>c__DisplayClass42_2_TypeDefinitionIndex = 7728;

	class <>c__DisplayClass42_2 : public Il2CppObject
	{
	public:
		::System::String* text; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS42_2_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _SetEventContent_b__5(UILabel* arg)
		{
			((::System::Void(*)(UILabel*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS42_2__SETEVENTCONTENT_B__5_OFFSET))(arg, nullptr);
		}

	};

