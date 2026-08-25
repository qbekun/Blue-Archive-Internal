#pragma once
#include "unitysdk.h"

class UIPopup_System;

#define <>C__DISPLAYCLASS72_0_.CTOR_OFFSET UNITYSDK_OFFSET(0x14487F0)
#define <>C__DISPLAYCLASS72_0__SHOWFAILEDLOADASSETERRORPOPUP_B__0_OFFSET UNITYSDK_OFFSET(0x144A590)

	inline static constexpr unsigned int <>c__DisplayClass72_0_TypeDefinitionIndex = 14972;

	class <>c__DisplayClass72_0 : public Il2CppObject
	{
	public:
		::System::String* message; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS72_0_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _ShowFailedLoadAssetErrorPopup_b__0(UIPopup_System* arg)
		{
			((::System::Void(*)(UIPopup_System*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS72_0__SHOWFAILEDLOADASSETERRORPOPUP_B__0_OFFSET))(arg, nullptr);
		}

	};

