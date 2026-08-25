#pragma once
#include "unitysdk.h"

class UIPopup_System;

#define <>C__DISPLAYCLASS26_2_.CTOR_OFFSET UNITYSDK_OFFSET(0x20237B0)
#define <>C__DISPLAYCLASS26_2__COSTARTGAME_B__3_OFFSET UNITYSDK_OFFSET(0x20237C0)

	inline static constexpr unsigned int <>c__DisplayClass26_2_TypeDefinitionIndex = 3184;

	class <>c__DisplayClass26_2 : public Il2CppObject
	{
	public:
		::System::String* message; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS26_2_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _CoStartGame_b__3(UIPopup_System* arg)
		{
			((::System::Void(*)(UIPopup_System*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS26_2__COSTARTGAME_B__3_OFFSET))(arg, nullptr);
		}

	};

