#pragma once
#include "unitysdk.h"

class AccountInfo;
class UIDefeat;
class UILevelUpPopup;

#define <>C__DISPLAYCLASS70_3_.CTOR_OFFSET UNITYSDK_OFFSET(0x23CD520)
#define <>C__DISPLAYCLASS70_3__SHOWPOPUP_B__6_OFFSET UNITYSDK_OFFSET(0x23CD530)

	inline static constexpr unsigned int <>c__DisplayClass70_3_TypeDefinitionIndex = 5291;

	class <>c__DisplayClass70_3 : public Il2CppObject
	{
	public:
		AccountInfo* accountInfo; // 0x10
		UIDefeat* __4__this; // 0x18
		Il2CppObject* __9__6; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS70_3_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _ShowPopup_b__6(UILevelUpPopup* arg)
		{
			((::System::Void(*)(UILevelUpPopup*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS70_3__SHOWPOPUP_B__6_OFFSET))(arg, nullptr);
		}

	};

