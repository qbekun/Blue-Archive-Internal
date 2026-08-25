#pragma once
#include "unitysdk.h"

class UILabel;

#define UILABELLOCALIZESUPPORT_SETLOC_MAIN_TOUCHTOTEXT_OFFSET UNITYSDK_OFFSET(0xC8BA50)
#define UILABELLOCALIZESUPPORT_SETLOC_OFFSET UNITYSDK_OFFSET(0xC8BB40)
#define UILABELLOCALIZESUPPORT_SETLOC_POPUP_TOUCHTOTEXT_OFFSET UNITYSDK_OFFSET(0xC8BBE0)

	inline static constexpr unsigned int UILabelLocalizeSupport_TypeDefinitionIndex = 9095;

	class UILabelLocalizeSupport : public Il2CppObject
	{
	public:
		::System::Void SetLoc_Main_TouchToText(UILabel* arg)
		{
			((::System::Void(*)(UILabel*, ::PVOID))((::PBYTE)hIl2Cpp + UILABELLOCALIZESUPPORT_SETLOC_MAIN_TOUCHTOTEXT_OFFSET))(arg, nullptr);
		}

		::System::Void SetLoc(UILabel* arg, ::System::String* str)
		{
			((::System::Void(*)(UILabel*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UILABELLOCALIZESUPPORT_SETLOC_OFFSET))(arg, str, nullptr);
		}

		::System::Void SetLoc_Popup_TouchToText(UILabel* arg)
		{
			((::System::Void(*)(UILabel*, ::PVOID))((::PBYTE)hIl2Cpp + UILABELLOCALIZESUPPORT_SETLOC_POPUP_TOUCHTOTEXT_OFFSET))(arg, nullptr);
		}

	};

