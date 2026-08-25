#pragma once
#include "unitysdk.h"

class UIPopup_System;

#define <>C__DISPLAYCLASS95_3_.CTOR_OFFSET UNITYSDK_OFFSET(0x26E0A20)
#define <>C__DISPLAYCLASS95_3__AUTOSYNCLOBBY_B__2_OFFSET UNITYSDK_OFFSET(0x26E0A30)

	inline static constexpr unsigned int <>c__DisplayClass95_3_TypeDefinitionIndex = 382;

	class <>c__DisplayClass95_3 : public Il2CppObject
	{
	public:
		::System::String* message; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS95_3_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _AutoSyncLobby_b__2(UIPopup_System* arg)
		{
			((::System::Void(*)(UIPopup_System*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS95_3__AUTOSYNCLOBBY_B__2_OFFSET))(arg, nullptr);
		}

	};

