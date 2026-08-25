#pragma once
#include "unitysdk.h"

class UIPopup_System;

#define <>C__DISPLAYCLASS60_4_.CTOR_OFFSET UNITYSDK_OFFSET(0x265FD90)
#define <>C__DISPLAYCLASS60_4__HANDLEITEMAUTOSYNTHRESPONSEMESSAGE_B__5_OFFSET UNITYSDK_OFFSET(0x265FFD0)

	inline static constexpr unsigned int <>c__DisplayClass60_4_TypeDefinitionIndex = 6634;

	class <>c__DisplayClass60_4 : public Il2CppObject
	{
	public:
		::System::String* message; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS60_4_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _HandleItemAutoSynthResponseMessage_b__5(UIPopup_System* arg)
		{
			((::System::Void(*)(UIPopup_System*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS60_4__HANDLEITEMAUTOSYNTHRESPONSEMESSAGE_B__5_OFFSET))(arg, nullptr);
		}

	};

