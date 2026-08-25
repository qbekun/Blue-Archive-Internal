#pragma once
#include "unitysdk.h"

class UILabel;
class UIRect;

#define UIPOPUP_CVCOLLECTIONPLAYTEXT_CLEARTEXT_OFFSET UNITYSDK_OFFSET(0x232CFD0)
#define UIPOPUP_CVCOLLECTIONPLAYTEXT_ONOPENED_OFFSET UNITYSDK_OFFSET(0x232CFE0)
#define UIPOPUP_CVCOLLECTIONPLAYTEXT_.CTOR_OFFSET UNITYSDK_OFFSET(0x232D000)
#define UIPOPUP_CVCOLLECTIONPLAYTEXT_SETTEXT_OFFSET UNITYSDK_OFFSET(0x232CA00)

	inline static constexpr unsigned int UIPopup_CVCollectionPlayText_TypeDefinitionIndex = 4933;

	class UIPopup_CVCollectionPlayText : public Il2CppObject
	{
	public:
		UILabel* subtitleLabel; // 0xD8
		UIRect* anchoredBG; // 0xE0

		::System::Void ClearText()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CVCOLLECTIONPLAYTEXT_CLEARTEXT_OFFSET))(nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CVCOLLECTIONPLAYTEXT_ONOPENED_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CVCOLLECTIONPLAYTEXT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetText(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CVCOLLECTIONPLAYTEXT_SETTEXT_OFFSET))(str, nullptr);
		}

	};

