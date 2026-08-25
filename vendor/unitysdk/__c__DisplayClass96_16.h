#pragma once
#include "unitysdk.h"

class UIPopup_GemProductNotice;

#define <>C__DISPLAYCLASS96_16_.CTOR_OFFSET UNITYSDK_OFFSET(0x2661E50)
#define <>C__DISPLAYCLASS96_16__ADDPOPUPS_B__64_OFFSET UNITYSDK_OFFSET(0x26637B0)
#define <>C__DISPLAYCLASS96_16__ADDPOPUPS_B__65_OFFSET UNITYSDK_OFFSET(0x2663900)

	inline static constexpr unsigned int <>c__DisplayClass96_16_TypeDefinitionIndex = 6659;

	class <>c__DisplayClass96_16 : public Il2CppObject
	{
	public:
		::System::Boolean popupClosed; // 0x10
		::System::String* waitUntilCloseUIName; // 0x18
		Il2CppObject* __9__65; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS96_16_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _AddPopups_b__64(UIPopup_GemProductNotice* arg)
		{
			((::System::Void(*)(UIPopup_GemProductNotice*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS96_16__ADDPOPUPS_B__64_OFFSET))(arg, nullptr);
		}

		::System::Void _AddPopups_b__65(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS96_16__ADDPOPUPS_B__65_OFFSET))(str, nullptr);
		}

	};

