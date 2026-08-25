#pragma once
#include "unitysdk.h"

class UIInformationPopup;

#define <>C__DISPLAYCLASS96_20_.CTOR_OFFSET UNITYSDK_OFFSET(0x2663F50)
#define <>C__DISPLAYCLASS96_20__ADDPOPUPS_B__75_OFFSET UNITYSDK_OFFSET(0x2663F60)
#define <>C__DISPLAYCLASS96_20__ADDPOPUPS_B__76_OFFSET UNITYSDK_OFFSET(0x26641D0)

	inline static constexpr unsigned int <>c__DisplayClass96_20_TypeDefinitionIndex = 6663;

	class <>c__DisplayClass96_20 : public Il2CppObject
	{
	public:
		::System::Boolean popupClosed; // 0x10
		Il2CppObject* __9__76; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS96_20_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _AddPopups_b__75(UIInformationPopup* arg)
		{
			((::System::Void(*)(UIInformationPopup*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS96_20__ADDPOPUPS_B__75_OFFSET))(arg, nullptr);
		}

		::System::Void _AddPopups_b__76(UIInformationPopup* arg)
		{
			((::System::Void(*)(UIInformationPopup*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS96_20__ADDPOPUPS_B__76_OFFSET))(arg, nullptr);
		}

	};

