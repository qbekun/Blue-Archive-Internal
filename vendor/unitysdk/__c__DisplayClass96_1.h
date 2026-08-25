#pragma once
#include "unitysdk.h"

class UIPopup_InvisibleBlock;

#define <>C__DISPLAYCLASS96_1_.CTOR_OFFSET UNITYSDK_OFFSET(0x2661ED0)
#define <>C__DISPLAYCLASS96_1__ADDPOPUPS_B__22_OFFSET UNITYSDK_OFFSET(0x2661EE0)

	inline static constexpr unsigned int <>c__DisplayClass96_1_TypeDefinitionIndex = 6644;

	class <>c__DisplayClass96_1 : public Il2CppObject
	{
	public:
		::System::Boolean isOpenBlock; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS96_1_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _AddPopups_b__22(UIPopup_InvisibleBlock* arg)
		{
			((::System::Void(*)(UIPopup_InvisibleBlock*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS96_1__ADDPOPUPS_B__22_OFFSET))(arg, nullptr);
		}

	};

