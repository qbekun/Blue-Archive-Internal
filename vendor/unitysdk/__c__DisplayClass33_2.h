#pragma once
#include "unitysdk.h"

class UIPopup_System;

#define <>C__DISPLAYCLASS33_2_.CTOR_OFFSET UNITYSDK_OFFSET(0xBE96A0)
#define <>C__DISPLAYCLASS33_2__WORLDRAIDENTER_B__8_OFFSET UNITYSDK_OFFSET(0xBE97D0)

	inline static constexpr unsigned int <>c__DisplayClass33_2_TypeDefinitionIndex = 8720;

	class <>c__DisplayClass33_2 : public Il2CppObject
	{
	public:
		::System::Int64 enterTicketAmount; // 0x10
		::System::Int64 currentCurrencyAmount; // 0x18
		::System::String* local; // 0x20
		::System::String* ticketName; // 0x28

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS33_2_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _WorldRaidEnter_b__8(UIPopup_System* arg)
		{
			((::System::Void(*)(UIPopup_System*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS33_2__WORLDRAIDENTER_B__8_OFFSET))(arg, nullptr);
		}

	};

