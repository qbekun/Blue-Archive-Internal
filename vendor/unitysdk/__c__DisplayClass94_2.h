#pragma once
#include "unitysdk.h"

class UIVictory;
class UIStageMissionPopup;

#define <>C__DISPLAYCLASS94_2_.CTOR_OFFSET UNITYSDK_OFFSET(0xBB8970)
#define <>C__DISPLAYCLASS94_2__SHOWPOPUP_B__4_OFFSET UNITYSDK_OFFSET(0xBB8980)

	inline static constexpr unsigned int <>c__DisplayClass94_2_TypeDefinitionIndex = 8585;

	class <>c__DisplayClass94_2 : public Il2CppObject
	{
	public:
		::System::Boolean complete; // 0x10
		UIVictory* __4__this; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS94_2_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _ShowPopup_b__4(UIStageMissionPopup* arg)
		{
			((::System::Void(*)(UIStageMissionPopup*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS94_2__SHOWPOPUP_B__4_OFFSET))(arg, nullptr);
		}

	};

